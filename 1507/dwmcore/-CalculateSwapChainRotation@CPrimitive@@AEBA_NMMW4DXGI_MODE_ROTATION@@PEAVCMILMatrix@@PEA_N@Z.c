/*
 * XREFs of ?CalculateSwapChainRotation@CPrimitive@@AEBA_NMMW4DXGI_MODE_ROTATION@@PEAVCMILMatrix@@PEA_N@Z @ 0x180116D30
 * Callers:
 *     ?CalculateSwapChainContentSize@CPrimitive@@AEBAXPEAUD2D_SIZE_F@@PEAUD2D_MATRIX_3X2_F@@@Z @ 0x180116A08 (-CalculateSwapChainContentSize@CPrimitive@@AEBAXPEAUD2D_SIZE_F@@PEAUD2D_MATRIX_3X2_F@@@Z.c)
 * Callees:
 *     ??0CMILMatrix@@QEAA@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x180076174 (--0CMILMatrix@@QEAA@PEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 */

bool __fastcall CPrimitive::CalculateSwapChainRotation(
        CPrimitive *this,
        float a2,
        float a3,
        enum DXGI_MODE_ROTATION a4,
        struct CMILMatrix *a5,
        bool *a6)
{
  bool v7; // r14
  char v8; // si
  int v9; // r9d
  int v10; // r9d
  int v11; // r9d
  __m128 dy_low; // xmm3
  __m128 dx_low; // xmm2
  __m128 v14; // xmm3
  __m128 v15; // xmm2
  CMILMatrix *v16; // rax
  __int128 v17; // xmm1
  bool result; // al
  __int128 v19; // [rsp+28h] [rbp-99h]
  __int128 v20; // [rsp+28h] [rbp-99h]
  struct D2D_MATRIX_3X2_F v21; // [rsp+38h] [rbp-89h] BYREF
  unsigned __int64 v22; // [rsp+50h] [rbp-71h]
  D2D1_MATRIX_3X2_F matrix; // [rsp+58h] [rbp-69h] BYREF
  _BYTE v24[64]; // [rsp+78h] [rbp-49h] BYREF

  v7 = 0;
  v8 = 0;
  *(_OWORD *)&v21.m[1][0] = _xmm;
  v22 = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
  v9 = a4 - 1;
  if ( !v9 )
  {
    v8 = 1;
    goto LABEL_10;
  }
  v10 = v9 - 1;
  if ( !v10 )
  {
    D2D1MakeRotateMatrix(90.0, (D2D1_POINT_2F)*(_OWORD *)&_mm_unpacklo_ps((__m128)0LL, (__m128)0LL), &matrix);
    dx_low = (__m128)LODWORD(matrix.dx);
    dy_low = (__m128)LODWORD(matrix.dy);
    dy_low.m128_f32[0] = (float)((float)(matrix.dy * 0.0) + matrix.dx) + a2;
    dx_low.m128_f32[0] = (float)((float)(matrix.dx * 0.0) + matrix.dy) + 0.0;
    goto LABEL_8;
  }
  v11 = v10 - 1;
  if ( v11 )
  {
    if ( v11 == 1 )
    {
      D2D1MakeRotateMatrix(270.0, (D2D1_POINT_2F)*(_OWORD *)&_mm_unpacklo_ps((__m128)0LL, (__m128)0LL), &matrix);
      dx_low = (__m128)LODWORD(matrix.dx);
      dy_low = (__m128)LODWORD(matrix.dy);
      dy_low.m128_f32[0] = (float)((float)(matrix.dy * 0.0) + matrix.dx) + 0.0;
      dx_low.m128_f32[0] = (float)((float)(matrix.dx * 0.0) + matrix.dy) + a3;
LABEL_8:
      v7 = 1;
      *(float *)&v20 = (float)(matrix.m12 * 0.0) + matrix.m11;
      *((float *)&v20 + 1) = (float)(matrix.m11 * 0.0) + matrix.m12;
      *((float *)&v20 + 2) = (float)(matrix.m22 * 0.0) + matrix.m21;
      *((float *)&v20 + 3) = (float)(matrix.m21 * 0.0) + matrix.m22;
      *(_OWORD *)&v21.m[1][0] = v20;
      v22 = _mm_unpacklo_ps(dy_low, dx_low).m128_u64[0];
    }
  }
  else
  {
    D2D1MakeRotateMatrix(180.0, (D2D1_POINT_2F)*(_OWORD *)&_mm_unpacklo_ps((__m128)0LL, (__m128)0LL), &matrix);
    v14 = (__m128)LODWORD(matrix.dy);
    v15 = (__m128)LODWORD(matrix.dx);
    *(float *)&v19 = (float)(matrix.m12 * 0.0) + matrix.m11;
    v14.m128_f32[0] = (float)((float)(matrix.dy * 0.0) + matrix.dx) + a2;
    *((float *)&v19 + 1) = (float)(matrix.m11 * 0.0) + matrix.m12;
    v15.m128_f32[0] = (float)((float)(matrix.dx * 0.0) + matrix.dy) + a3;
    *((float *)&v19 + 2) = (float)(matrix.m22 * 0.0) + matrix.m21;
    *((float *)&v19 + 3) = (float)(matrix.m21 * 0.0) + matrix.m22;
    *(_OWORD *)&v21.m[1][0] = v19;
    v22 = _mm_unpacklo_ps(v14, v15).m128_u64[0];
  }
LABEL_10:
  v16 = CMILMatrix::CMILMatrix((CMILMatrix *)v24, (struct D2D_MATRIX_3X2_F *)v21.m[1]);
  *(_OWORD *)a5 = *(_OWORD *)v16;
  *((_OWORD *)a5 + 1) = *((_OWORD *)v16 + 1);
  *((_OWORD *)a5 + 2) = *((_OWORD *)v16 + 2);
  v17 = *((_OWORD *)v16 + 3);
  result = v8 == 0;
  *((_OWORD *)a5 + 3) = v17;
  *a6 = v7;
  return result;
}
