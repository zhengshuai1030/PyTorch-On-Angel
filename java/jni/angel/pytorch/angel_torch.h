/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_tencent_angel_pytorch_Torch */

#ifndef _Included_com_tencent_angel_pytorch_Torch
#define _Included_com_tencent_angel_pytorch_Torch
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_tencent_angel_pytorch_Torch
 * Method:    name
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_tencent_angel_pytorch_Torch_name
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_tencent_angel_pytorch_Torch
 * Method:    setNumThreads
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_com_tencent_angel_pytorch_Torch_setNumThreads
  (JNIEnv *, jclass, jint);

/*
 * Class:     com_tencent_angel_pytorch_Torch
 * Method:    initPtr
 * Signature: (Ljava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_com_tencent_angel_pytorch_Torch_initPtr
  (JNIEnv *, jclass, jstring);

/*
 * Class:     com_tencent_angel_pytorch_Torch
 * Method:    destroyPtr
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_tencent_angel_pytorch_Torch_destroyPtr
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_tencent_angel_pytorch_Torch
 * Method:    getType
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_tencent_angel_pytorch_Torch_getType
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_tencent_angel_pytorch_Torch
 * Method:    getMatsSize
 * Signature: (J)[I
 */
JNIEXPORT jintArray JNICALL Java_com_tencent_angel_pytorch_Torch_getMatsSize
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_tencent_angel_pytorch_Torch
 * Method:    getInputDim
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_tencent_angel_pytorch_Torch_getInputDim
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_tencent_angel_pytorch_Torch
 * Method:    getNumFields
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_tencent_angel_pytorch_Torch_getNumFields
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_tencent_angel_pytorch_Torch
 * Method:    getEmbeddingDim
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_tencent_angel_pytorch_Torch_getEmbeddingDim
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_tencent_angel_pytorch_Torch
 * Method:    getParametersTotalSize
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_tencent_angel_pytorch_Torch_getParametersTotalSize
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_tencent_angel_pytorch_Torch
 * Method:    setParameters
 * Signature: (J[F)V
 */
JNIEXPORT void JNICALL Java_com_tencent_angel_pytorch_Torch_setParameters
  (JNIEnv *, jclass, jlong, jfloatArray);

/*
 * Class:     com_tencent_angel_pytorch_Torch
 * Method:    forward
 * Signature: (JLjava/util/Map;Z)[F
 */
JNIEXPORT jfloatArray JNICALL Java_com_tencent_angel_pytorch_Torch_forward
  (JNIEnv *, jclass, jlong, jobject, jboolean);

/*
 * Class:     com_tencent_angel_pytorch_Torch
 * Method:    backward
 * Signature: (JLjava/util/Map;)F
 */
JNIEXPORT jfloat JNICALL Java_com_tencent_angel_pytorch_Torch_backward
  (JNIEnv *, jclass, jlong, jobject);

/*
 * Class:     com_tencent_angel_pytorch_Torch
 * Method:    save
 * Signature: (JLjava/util/Map;)V
 */
JNIEXPORT void JNICALL Java_com_tencent_angel_pytorch_Torch_save
  (JNIEnv *, jclass, jlong, jobject);

/*
 * Class:     com_tencent_angel_pytorch_Torch
 * Method:    gcnBackward
 * Signature: (JLjava/util/Map;)F
 */
JNIEXPORT jfloat JNICALL Java_com_tencent_angel_pytorch_Torch_gcnBackward
  (JNIEnv *, jclass, jlong, jobject);

/*
 * Class:     com_tencent_angel_pytorch_Torch
 * Method:    gcnExecMethod
 * Signature: (JLjava/lang/String;Ljava/util/Map;)Ljava/lang/Object;
 */
JNIEXPORT jobject JNICALL Java_com_tencent_angel_pytorch_Torch_gcnExecMethod
  (JNIEnv *, jclass, jlong, jstring, jobject);

/*
 * Class:     com_tencent_angel_pytorch_Torch
 * Method:    getParameters
 * Signature: (J)[F
 */
JNIEXPORT jfloatArray JNICALL Java_com_tencent_angel_pytorch_Torch_getParameters
  (JNIEnv *, jclass, jlong);

#ifdef __cplusplus
}
#endif
#endif
