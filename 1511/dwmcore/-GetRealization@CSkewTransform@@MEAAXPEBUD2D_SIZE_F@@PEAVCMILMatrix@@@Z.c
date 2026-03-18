/*
 * XREFs of ?GetRealization@CSkewTransform@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z @ 0x1800126B0
 * Callers:
 *     <none>
 * Callees:
 *     ?D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z @ 0x180066F90 (-D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 *     fmod_0 @ 0x1800BC88A (fmod_0.c)
 *     tan_0 @ 0x1800BC91A (tan_0.c)
 */

void __fastcall CSkewTransform::GetRealization(
        CSkewTransform *this,
        const struct D2D_SIZE_F *a2,
        struct CMILMatrix *a3)
{
  double v3; // xmm9_8
  double v4; // xmm10_8
  double v5; // xmm3_8
  double v6; // xmm8_8
  float v8; // xmm0_4
  float v9; // xmm0_4
  double v10; // xmm0_8
  float v11; // xmm2_4
  double v12; // xmm0_8
  float v13; // xmm1_4
  const struct D2DMatrix *v14; // rdx
  int v15; // [rsp+28h] [rbp-29h] BYREF
  float v16; // [rsp+2Ch] [rbp-25h]
  int v17; // [rsp+30h] [rbp-21h]
  int v18; // [rsp+34h] [rbp-1Dh]
  float v19; // [rsp+38h] [rbp-19h]
  int v20; // [rsp+3Ch] [rbp-15h]
  __int64 v21; // [rsp+40h] [rbp-11h]
  __int64 v22; // [rsp+48h] [rbp-9h]
  int v23; // [rsp+50h] [rbp-1h]
  __int64 v24; // [rsp+54h] [rbp+3h]
  __int64 v25; // [rsp+5Ch] [rbp+Bh]
  int v26; // [rsp+64h] [rbp+13h]

  v3 = *((double *)this + 17);
  v4 = *((double *)this + 18);
  v5 = *((double *)this + 16);
  v6 = *((double *)this + 15);
  v8 = COERCE_DOUBLE(*(_QWORD *)&v3 ^ _xmm);
  *((_QWORD *)a3 + 5) = 1065353216LL;
  *((_QWORD *)a3 + 4) = 0LL;
  *((_QWORD *)a3 + 3) = 0LL;
  *(_QWORD *)((char *)a3 + 12) = 0LL;
  *(_QWORD *)((char *)a3 + 4) = 0LL;
  *((float *)a3 + 12) = v8;
  v9 = COERCE_DOUBLE(*(_QWORD *)&v4 ^ _xmm);
  *((_DWORD *)a3 + 15) = 1065353216;
  *((_DWORD *)a3 + 5) = 1065353216;
  *(_DWORD *)a3 = 1065353216;
  *((_DWORD *)a3 + 14) = 0;
  *((float *)a3 + 13) = v9;
  v15 = 1065353216;
  v10 = fmod_0(v5, 360.0);
  v17 = 0;
  v18 = 0;
  v11 = tan_0(v10 * 0.01745329238474369);
  v16 = v11;
  v12 = fmod_0(v6, 360.0);
  v20 = 1065353216;
  v13 = tan_0(v12 * 0.01745329238474369);
  v21 = 0LL;
  v22 = 0LL;
  v23 = 1065353216;
  v24 = 0LL;
  v25 = 0LL;
  v19 = v13;
  v26 = 1065353216;
  D2DMatrixMultiply(a3, a3, (const struct D2DMatrix *)&v15);
  LODWORD(v24) = 0;
  v22 = 0LL;
  v21 = 0LL;
  v19 = 0.0;
  v18 = 0;
  v17 = 0;
  v16 = 0.0;
  HIDWORD(v25) = 0;
  v26 = 1065353216;
  v23 = 1065353216;
  v20 = 1065353216;
  v15 = 1065353216;
  *((float *)&v24 + 1) = v3;
  *(float *)&v25 = v4;
  D2DMatrixMultiply(a3, v14, (const struct D2DMatrix *)&v15);
}
