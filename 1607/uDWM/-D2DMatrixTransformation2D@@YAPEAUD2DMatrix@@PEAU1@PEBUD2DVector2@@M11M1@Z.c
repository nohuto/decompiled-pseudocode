/*
 * XREFs of ?D2DMatrixTransformation2D@@YAPEAUD2DMatrix@@PEAU1@PEBUD2DVector2@@M11M1@Z @ 0x18003FFC4
 * Callers:
 *     ?UpdateGeometry2DAndOpacity@CAnimatedTransitionVisual@@IEAAJXZ @ 0x180013CAC (-UpdateGeometry2DAndOpacity@CAnimatedTransitionVisual@@IEAAJXZ.c)
 * Callees:
 *     ?D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z @ 0x18003CA30 (-D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z.c)
 *     __security_check_cookie @ 0x18004F240 (__security_check_cookie.c)
 *     ?D2DMatrixRotationZ@@YAPEAUD2DMatrix@@PEAU1@M@Z @ 0x180051054 (-D2DMatrixRotationZ@@YAPEAUD2DMatrix@@PEAU1@M@Z.c)
 *     ?D2DMatrixTranspose@@YAPEAUD2DMatrix@@PEAU1@PEBU1@@Z @ 0x18009BA80 (-D2DMatrixTranspose@@YAPEAUD2DMatrix@@PEAU1@PEBU1@@Z.c)
 */

struct D2DMatrix *__fastcall D2DMatrixTransformation2D(
        struct D2DMatrix *a1,
        const struct D2DVector2 *a2,
        float a3,
        const struct D2DVector2 *a4,
        const struct D2DVector2 *a5,
        float a6,
        const struct D2DVector2 *a7)
{
  float v10; // xmm1_4
  int v11; // xmm1_4
  int v12; // xmm0_4
  const struct D2DMatrix *v13; // rdx
  const struct D2DMatrix *v14; // rdx
  float v15; // xmm0_4
  struct D2DMatrix *v16; // rcx
  const struct D2DMatrix *v17; // rdx
  float *v18; // r9
  _DWORD v19[16]; // [rsp+28h] [rbp-B1h] BYREF
  _BYTE v20[64]; // [rsp+68h] [rbp-71h] BYREF
  _BYTE v21[64]; // [rsp+A8h] [rbp-31h] BYREF

  if ( !a4 )
  {
    *(_QWORD *)((char *)a1 + 52) = 0LL;
    *((_DWORD *)a1 + 5) = 1065353216;
    *(_DWORD *)a1 = 1065353216;
    *(_QWORD *)((char *)a1 + 44) = 0LL;
    *((_QWORD *)a1 + 4) = 0LL;
    *((_QWORD *)a1 + 3) = 0LL;
    *(_QWORD *)((char *)a1 + 12) = 0LL;
    *(_QWORD *)((char *)a1 + 4) = 0LL;
    goto LABEL_3;
  }
  if ( a3 == 0.0 )
  {
    *((_QWORD *)a1 + 4) = 0LL;
    *((_QWORD *)a1 + 3) = 0LL;
    *(_QWORD *)((char *)a1 + 12) = 0LL;
    *(_QWORD *)((char *)a1 + 4) = 0LL;
    if ( a2 )
    {
      *((_DWORD *)a1 + 11) = 0;
      *(_DWORD *)a1 = *(_DWORD *)a4;
      *((_DWORD *)a1 + 5) = *((_DWORD *)a4 + 1);
      *((_DWORD *)a1 + 10) = 1065353216;
      *((float *)a1 + 12) = (float)(1.0 - *(float *)a4) * *(float *)a2;
      v10 = (float)(1.0 - *((float *)a4 + 1)) * *((float *)a2 + 1);
      *((_DWORD *)a1 + 14) = 0;
      *((float *)a1 + 13) = v10;
      goto LABEL_4;
    }
    *(_QWORD *)((char *)a1 + 52) = 0LL;
    *(_QWORD *)((char *)a1 + 44) = 0LL;
    *(_DWORD *)a1 = *(_DWORD *)a4;
    *((_DWORD *)a1 + 5) = *((_DWORD *)a4 + 1);
LABEL_3:
    *((_DWORD *)a1 + 10) = 1065353216;
LABEL_4:
    *((_DWORD *)a1 + 15) = 1065353216;
    goto LABEL_5;
  }
  v11 = *((_DWORD *)a4 + 1);
  v12 = *(_DWORD *)a4;
  v19[14] = 0;
  v19[13] = 0;
  v19[12] = 0;
  v19[11] = 0;
  v19[9] = 0;
  v19[8] = 0;
  v19[7] = 0;
  v19[6] = 0;
  v19[4] = 0;
  v19[3] = 0;
  v19[2] = 0;
  v19[1] = 0;
  v19[5] = v11;
  v19[0] = v12;
  v19[10] = 1065353216;
  v19[15] = 1065353216;
  D2DMatrixRotationZ((struct D2DMatrix *)v20, a3);
  if ( a2 )
  {
    D2DMatrixTranspose((struct D2DMatrix *)v21, (const struct D2DMatrix *)v20);
    *(_QWORD *)((char *)a1 + 52) = 0LL;
    *(_QWORD *)((char *)a1 + 44) = 0LL;
    *((_DWORD *)a1 + 15) = 1065353216;
    *((_DWORD *)a1 + 10) = 1065353216;
    *((_DWORD *)a1 + 5) = 1065353216;
    *(_DWORD *)a1 = 1065353216;
    *((_QWORD *)a1 + 4) = 0LL;
    *((_QWORD *)a1 + 3) = 0LL;
    *(_QWORD *)((char *)a1 + 12) = 0LL;
    *(_QWORD *)((char *)a1 + 4) = 0LL;
    *((float *)a1 + 12) = 0.0 - *(float *)a2;
    *((float *)a1 + 13) = 0.0 - *((float *)a2 + 1);
    D2DMatrixMultiply(a1, a1, (const struct D2DMatrix *)v21);
    D2DMatrixMultiply(a1, v13, (const struct D2DMatrix *)v19);
    D2DMatrixMultiply(a1, v14, (const struct D2DMatrix *)v20);
    v15 = *((float *)a1 + 13);
    *((float *)a1 + 12) = *(float *)a2 + *((float *)a1 + 12);
    *((float *)a1 + 13) = v15 + *((float *)a2 + 1);
  }
  else
  {
    D2DMatrixTranspose(a1, (const struct D2DMatrix *)v20);
    D2DMatrixMultiply(v16, a1, (const struct D2DMatrix *)v19);
    D2DMatrixMultiply(a1, v17, (const struct D2DMatrix *)v20);
  }
LABEL_5:
  if ( a6 != 0.0 )
  {
    D2DMatrixRotationZ((struct D2DMatrix *)v20, a6);
    if ( a5 )
    {
      *((float *)a1 + 12) = *((float *)a1 + 12) - *(float *)a5;
      *((float *)a1 + 13) = *((float *)a1 + 13) - *((float *)a5 + 1);
      D2DMatrixMultiply(a1, a1, (const struct D2DMatrix *)v20);
      *((float *)a1 + 12) = *v18 + *((float *)a1 + 12);
      *((float *)a1 + 13) = v18[1] + *((float *)a1 + 13);
    }
    else
    {
      D2DMatrixMultiply(a1, a1, (const struct D2DMatrix *)v20);
    }
  }
  if ( a7 )
  {
    *((float *)a1 + 12) = *(float *)a7 + *((float *)a1 + 12);
    *((float *)a1 + 13) = *((float *)a7 + 1) + *((float *)a1 + 13);
  }
  return a1;
}
