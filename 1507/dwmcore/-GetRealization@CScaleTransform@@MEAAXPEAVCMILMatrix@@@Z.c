/*
 * XREFs of ?GetRealization@CScaleTransform@@MEAAXPEAVCMILMatrix@@@Z @ 0x180016AC0
 * Callers:
 *     <none>
 * Callees:
 *     ?D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z @ 0x18001A890 (-D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 */

void __fastcall CScaleTransform::GetRealization(CScaleTransform *this, struct CMILMatrix *a2)
{
  double v2; // xmm6_8
  double v3; // xmm3_8
  double v4; // xmm4_8
  double v5; // xmm0_8
  double v6; // xmm5_8
  struct D2DMatrix *v7; // rdx
  float v8; // [rsp+20h] [rbp-60h] BYREF
  int v9; // [rsp+24h] [rbp-5Ch]
  int v10; // [rsp+28h] [rbp-58h]
  int v11; // [rsp+2Ch] [rbp-54h]
  int v12; // [rsp+30h] [rbp-50h]
  float v13; // [rsp+34h] [rbp-4Ch]
  int v14; // [rsp+38h] [rbp-48h]
  int v15; // [rsp+3Ch] [rbp-44h]
  int v16; // [rsp+40h] [rbp-40h]
  int v17; // [rsp+44h] [rbp-3Ch]
  int v18; // [rsp+48h] [rbp-38h]
  int v19; // [rsp+4Ch] [rbp-34h]
  float v20; // [rsp+50h] [rbp-30h]
  float v21; // [rsp+54h] [rbp-2Ch]
  int v22; // [rsp+58h] [rbp-28h]
  int v23; // [rsp+5Ch] [rbp-24h]

  v2 = *((double *)this + 16);
  v3 = *((double *)this + 13);
  v4 = *((double *)this + 14);
  *(_QWORD *)&v5 = *((_QWORD *)this + 15) ^ _xmm;
  v22 = 0;
  v21 = 0.0;
  v20 = 0.0;
  v19 = 0;
  v17 = 0;
  v16 = 0;
  v15 = 0;
  v14 = 0;
  v12 = 0;
  v11 = 0;
  v10 = 0;
  v9 = 0;
  *(float *)&v5 = v5;
  *((_QWORD *)a2 + 4) = 0LL;
  *((_QWORD *)a2 + 3) = 0LL;
  *(_QWORD *)((char *)a2 + 12) = 0LL;
  *(_QWORD *)((char *)a2 + 4) = 0LL;
  *((_DWORD *)a2 + 14) = 0;
  *((_DWORD *)a2 + 12) = LODWORD(v5);
  *(float *)&v5 = COERCE_DOUBLE(*(_QWORD *)&v2 ^ _xmm);
  *((_QWORD *)a2 + 5) = 1065353216LL;
  *((_DWORD *)a2 + 15) = 1065353216;
  *((_DWORD *)a2 + 5) = 1065353216;
  *(_DWORD *)a2 = 1065353216;
  v18 = 1065353216;
  v23 = 1065353216;
  *((_DWORD *)a2 + 13) = LODWORD(v5);
  v13 = v4;
  v8 = v3;
  D2DMatrixMultiply(a2, a2, (const struct D2DMatrix *)&v8);
  v19 = 0;
  v17 = 0;
  v16 = 0;
  v15 = 0;
  v14 = 0;
  v12 = 0;
  v11 = 0;
  v10 = 0;
  v9 = 0;
  v22 = 0;
  v23 = 1065353216;
  v18 = 1065353216;
  v13 = 1.0;
  v8 = 1.0;
  v20 = v6;
  v21 = v2;
  D2DMatrixMultiply(v7, v7, (const struct D2DMatrix *)&v8);
}
