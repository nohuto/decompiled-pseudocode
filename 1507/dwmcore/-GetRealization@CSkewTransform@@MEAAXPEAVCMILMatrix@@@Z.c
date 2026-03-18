/*
 * XREFs of ?GetRealization@CSkewTransform@@MEAAXPEAVCMILMatrix@@@Z @ 0x18011F780
 * Callers:
 *     <none>
 * Callees:
 *     ?D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z @ 0x18001A890 (-D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     fmod_0 @ 0x180099B8A (fmod_0.c)
 *     tan_0 @ 0x180099C02 (tan_0.c)
 */

void __fastcall CSkewTransform::GetRealization(CSkewTransform *this, struct CMILMatrix *a2)
{
  double v2; // xmm9_8
  double v3; // xmm10_8
  double v4; // xmm3_8
  double v5; // xmm8_8
  float v7; // xmm0_4
  float v8; // xmm0_4
  double v9; // xmm0_8
  float v10; // xmm2_4
  double v11; // xmm0_8
  float v12; // xmm1_4
  const struct D2DMatrix *v13; // rdx
  int v14; // [rsp+28h] [rbp-29h] BYREF
  float v15; // [rsp+2Ch] [rbp-25h]
  int v16; // [rsp+30h] [rbp-21h]
  int v17; // [rsp+34h] [rbp-1Dh]
  float v18; // [rsp+38h] [rbp-19h]
  int v19; // [rsp+3Ch] [rbp-15h]
  __int64 v20; // [rsp+40h] [rbp-11h]
  __int64 v21; // [rsp+48h] [rbp-9h]
  int v22; // [rsp+50h] [rbp-1h]
  __int64 v23; // [rsp+54h] [rbp+3h]
  __int64 v24; // [rsp+5Ch] [rbp+Bh]
  int v25; // [rsp+64h] [rbp+13h]

  v2 = *((double *)this + 15);
  v3 = *((double *)this + 16);
  v4 = *((double *)this + 14);
  v5 = *((double *)this + 13);
  v7 = COERCE_DOUBLE(*(_QWORD *)&v2 ^ _xmm);
  *((_QWORD *)a2 + 5) = 1065353216LL;
  *((_QWORD *)a2 + 4) = 0LL;
  *((_QWORD *)a2 + 3) = 0LL;
  *(_QWORD *)((char *)a2 + 12) = 0LL;
  *(_QWORD *)((char *)a2 + 4) = 0LL;
  *((float *)a2 + 12) = v7;
  v8 = COERCE_DOUBLE(*(_QWORD *)&v3 ^ _xmm);
  *((_DWORD *)a2 + 15) = 1065353216;
  *((_DWORD *)a2 + 5) = 1065353216;
  *(_DWORD *)a2 = 1065353216;
  *((_DWORD *)a2 + 14) = 0;
  *((float *)a2 + 13) = v8;
  v14 = 1065353216;
  v9 = fmod_0(v4, 360.0);
  v16 = 0;
  v17 = 0;
  v10 = tan_0(v9 * 0.01745329238474369);
  v15 = v10;
  v11 = fmod_0(v5, 360.0);
  v19 = 1065353216;
  v12 = tan_0(v11 * 0.01745329238474369);
  v20 = 0LL;
  v21 = 0LL;
  v22 = 1065353216;
  v23 = 0LL;
  v24 = 0LL;
  v18 = v12;
  v25 = 1065353216;
  D2DMatrixMultiply(a2, a2, (const struct D2DMatrix *)&v14);
  LODWORD(v23) = 0;
  v21 = 0LL;
  v20 = 0LL;
  v18 = 0.0;
  v17 = 0;
  v16 = 0;
  v15 = 0.0;
  HIDWORD(v24) = 0;
  v25 = 1065353216;
  v22 = 1065353216;
  v19 = 1065353216;
  v14 = 1065353216;
  *((float *)&v23 + 1) = v2;
  *(float *)&v24 = v3;
  D2DMatrixMultiply(a2, v13, (const struct D2DMatrix *)&v14);
}
