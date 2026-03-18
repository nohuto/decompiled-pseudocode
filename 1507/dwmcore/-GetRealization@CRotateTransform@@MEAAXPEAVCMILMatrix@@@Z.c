/*
 * XREFs of ?GetRealization@CRotateTransform@@MEAAXPEAVCMILMatrix@@@Z @ 0x18001A520
 * Callers:
 *     ?GetRealization@CTransformGroup@@MEAAXPEAVCMILMatrix@@@Z @ 0x18001A2D0 (-GetRealization@CTransformGroup@@MEAAXPEAVCMILMatrix@@@Z.c)
 * Callees:
 *     ?D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z @ 0x18001A890 (-D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     cosf_0 @ 0x180099B66 (cosf_0.c)
 *     fmod_0 @ 0x180099B8A (fmod_0.c)
 *     sinf_0 @ 0x180099BDE (sinf_0.c)
 */

void __fastcall CRotateTransform::GetRealization(CRotateTransform *this, struct CMILMatrix *a2)
{
  double v4; // xmm0_8
  double v5; // xmm8_8
  double v6; // xmm9_8
  double v7; // xmm3_8
  float v8; // xmm6_4
  const struct D2DMatrix *v9; // rdx
  float v10; // [rsp+28h] [rbp-39h] BYREF
  float v11; // [rsp+2Ch] [rbp-35h]
  int v12; // [rsp+30h] [rbp-31h]
  int v13; // [rsp+34h] [rbp-2Dh]
  int v14; // [rsp+38h] [rbp-29h]
  int v15; // [rsp+3Ch] [rbp-25h]
  __int64 v16; // [rsp+40h] [rbp-21h]
  __int64 v17; // [rsp+48h] [rbp-19h]
  int v18; // [rsp+50h] [rbp-11h]
  __int64 v19; // [rsp+54h] [rbp-Dh]
  __int64 v20; // [rsp+5Ch] [rbp-5h]
  int v21; // [rsp+64h] [rbp+3h]

  v4 = fmod_0(*((double *)this + 13), 360.0);
  v5 = *((double *)this + 14);
  v6 = *((double *)this + 15);
  v7 = v4 * 0.01745329238474369;
  *((_QWORD *)a2 + 5) = 1065353216LL;
  *((_QWORD *)a2 + 4) = 0LL;
  *(float *)&v4 = COERCE_DOUBLE(*(_QWORD *)&v5 ^ _xmm);
  *((_QWORD *)a2 + 3) = 0LL;
  *(_QWORD *)((char *)a2 + 12) = 0LL;
  *(_QWORD *)((char *)a2 + 4) = 0LL;
  *((_DWORD *)a2 + 15) = 1065353216;
  v8 = v7;
  *((_DWORD *)a2 + 5) = 1065353216;
  *(_DWORD *)a2 = 1065353216;
  *((_DWORD *)a2 + 14) = 0;
  *((_DWORD *)a2 + 12) = LODWORD(v4);
  *(float *)&v4 = COERCE_DOUBLE(*(_QWORD *)&v6 ^ _xmm);
  *((_DWORD *)a2 + 13) = LODWORD(v4);
  v12 = 0;
  v13 = 0;
  v11 = sinf_0(v8);
  v14 = LODWORD(v11) ^ _xmm;
  v10 = cosf_0(v8);
  v15 = LODWORD(v10);
  v16 = 0LL;
  v17 = 0LL;
  v18 = 1065353216;
  v19 = 0LL;
  v20 = 0LL;
  v21 = 1065353216;
  D2DMatrixMultiply(a2, a2, (const struct D2DMatrix *)&v10);
  LODWORD(v19) = 0;
  v17 = 0LL;
  v16 = 0LL;
  v14 = 0;
  v13 = 0;
  v12 = 0;
  v11 = 0.0;
  HIDWORD(v20) = 0;
  v21 = 1065353216;
  v18 = 1065353216;
  v15 = 1065353216;
  v10 = 1.0;
  *((float *)&v19 + 1) = v5;
  *(float *)&v20 = v6;
  D2DMatrixMultiply(a2, v9, (const struct D2DMatrix *)&v10);
}
