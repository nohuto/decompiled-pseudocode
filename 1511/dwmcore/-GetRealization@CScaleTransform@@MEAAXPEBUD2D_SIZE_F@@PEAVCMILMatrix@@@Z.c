/*
 * XREFs of ?GetRealization@CScaleTransform@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z @ 0x180066080
 * Callers:
 *     ?GetRealization@CTransformGroup@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z @ 0x180066850 (-GetRealization@CTransformGroup@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z.c)
 * Callees:
 *     ?D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z @ 0x180066F90 (-D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 */

void __fastcall CScaleTransform::GetRealization(
        CScaleTransform *this,
        const struct D2D_SIZE_F *a2,
        struct CMILMatrix *a3)
{
  double v3; // xmm6_8
  double v4; // xmm3_8
  double v5; // xmm4_8
  double v6; // xmm0_8
  double v7; // xmm5_8
  const struct D2DMatrix *v8; // rdx
  struct D2DMatrix *v9; // r9
  float v10; // [rsp+20h] [rbp-60h] BYREF
  int v11; // [rsp+24h] [rbp-5Ch]
  int v12; // [rsp+28h] [rbp-58h]
  int v13; // [rsp+2Ch] [rbp-54h]
  int v14; // [rsp+30h] [rbp-50h]
  float v15; // [rsp+34h] [rbp-4Ch]
  int v16; // [rsp+38h] [rbp-48h]
  int v17; // [rsp+3Ch] [rbp-44h]
  int v18; // [rsp+40h] [rbp-40h]
  int v19; // [rsp+44h] [rbp-3Ch]
  int v20; // [rsp+48h] [rbp-38h]
  int v21; // [rsp+4Ch] [rbp-34h]
  float v22; // [rsp+50h] [rbp-30h]
  float v23; // [rsp+54h] [rbp-2Ch]
  int v24; // [rsp+58h] [rbp-28h]
  int v25; // [rsp+5Ch] [rbp-24h]

  v3 = *((double *)this + 18);
  v4 = *((double *)this + 15);
  v5 = *((double *)this + 16);
  *(_QWORD *)&v6 = *((_QWORD *)this + 17) ^ _xmm;
  v24 = 0;
  v23 = 0.0;
  v22 = 0.0;
  v21 = 0;
  v19 = 0;
  v18 = 0;
  v17 = 0;
  v16 = 0;
  v14 = 0;
  v13 = 0;
  v12 = 0;
  v11 = 0;
  *(float *)&v6 = v6;
  *((_QWORD *)a3 + 4) = 0LL;
  *((_QWORD *)a3 + 3) = 0LL;
  *(_QWORD *)((char *)a3 + 12) = 0LL;
  *(_QWORD *)((char *)a3 + 4) = 0LL;
  *((_DWORD *)a3 + 14) = 0;
  *((_DWORD *)a3 + 12) = LODWORD(v6);
  *(float *)&v6 = COERCE_DOUBLE(*(_QWORD *)&v3 ^ _xmm);
  *((_QWORD *)a3 + 5) = 1065353216LL;
  *((_DWORD *)a3 + 15) = 1065353216;
  *((_DWORD *)a3 + 5) = 1065353216;
  *(_DWORD *)a3 = 1065353216;
  v20 = 1065353216;
  v25 = 1065353216;
  *((_DWORD *)a3 + 13) = LODWORD(v6);
  v15 = v5;
  v10 = v4;
  D2DMatrixMultiply(a3, a3, (const struct D2DMatrix *)&v10);
  v21 = 0;
  v19 = 0;
  v18 = 0;
  v17 = 0;
  v16 = 0;
  v14 = 0;
  v13 = 0;
  v12 = 0;
  v11 = 0;
  v24 = 0;
  v25 = 1065353216;
  v20 = 1065353216;
  v15 = 1.0;
  v10 = 1.0;
  v22 = v7;
  v23 = v3;
  D2DMatrixMultiply(v9, v8, (const struct D2DMatrix *)&v10);
}
