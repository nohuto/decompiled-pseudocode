/*
 * XREFs of ?GetRealization@CRotateTransform@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z @ 0x180066D90
 * Callers:
 *     ?GetRealization@CTransformGroup@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z @ 0x180066850 (-GetRealization@CTransformGroup@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z.c)
 * Callees:
 *     ?D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z @ 0x180066F90 (-D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z.c)
 *     ?D2DMatrixRotationZ@@YAPEAUD2DMatrix@@PEAU1@M@Z @ 0x1800673C4 (-D2DMatrixRotationZ@@YAPEAUD2DMatrix@@PEAU1@M@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 *     fmod_0 @ 0x1800BC88A (fmod_0.c)
 */

void __fastcall CRotateTransform::GetRealization(
        CRotateTransform *this,
        const struct D2D_SIZE_F *a2,
        struct CMILMatrix *a3)
{
  double v5; // xmm0_8
  double v6; // xmm6_8
  double v7; // xmm7_8
  double v8; // xmm3_8
  float v9; // xmm1_4
  const struct D2DMatrix *v10; // rdx
  _DWORD v11[16]; // [rsp+28h] [rbp-19h] BYREF

  v5 = fmod_0(*((double *)this + 15), 360.0);
  v6 = *((double *)this + 16);
  v7 = *((double *)this + 17);
  v8 = v5 * 0.01745329238474369;
  *((_QWORD *)a3 + 4) = 0LL;
  *((_QWORD *)a3 + 3) = 0LL;
  *(float *)&v5 = COERCE_DOUBLE(*(_QWORD *)&v6 ^ _xmm);
  *(_QWORD *)((char *)a3 + 12) = 0LL;
  *(_QWORD *)((char *)a3 + 4) = 0LL;
  *((_DWORD *)a3 + 14) = 0;
  *((_QWORD *)a3 + 5) = 1065353216LL;
  *((_DWORD *)a3 + 15) = 1065353216;
  *((_DWORD *)a3 + 12) = LODWORD(v5);
  *(float *)&v5 = COERCE_DOUBLE(*(_QWORD *)&v7 ^ _xmm);
  *((_DWORD *)a3 + 5) = 1065353216;
  *(_DWORD *)a3 = 1065353216;
  v9 = v8;
  *((_DWORD *)a3 + 13) = LODWORD(v5);
  D2DMatrixRotationZ((struct D2DMatrix *)v11, v9);
  D2DMatrixMultiply(a3, a3, (const struct D2DMatrix *)v11);
  v11[11] = 0;
  v11[9] = 0;
  v11[8] = 0;
  v11[7] = 0;
  v11[6] = 0;
  v11[4] = 0;
  v11[3] = 0;
  v11[2] = 0;
  v11[1] = 0;
  v11[14] = 0;
  v11[15] = 1065353216;
  v11[10] = 1065353216;
  v11[5] = 1065353216;
  v11[0] = 1065353216;
  *(float *)&v11[12] = v6;
  *(float *)&v11[13] = v7;
  D2DMatrixMultiply(a3, v10, (const struct D2DMatrix *)v11);
}
