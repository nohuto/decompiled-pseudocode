/*
 * XREFs of ?GetRealization@CRotateTransform3D@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z @ 0x180066290
 * Callers:
 *     ?CalcEffectiveTransform@CVisual@@QEAAXW4Enum@CpuClippingMode@@PEBVCMILMatrix@@PEA_NPEAV4@3@Z @ 0x18004B150 (-CalcEffectiveTransform@CVisual@@QEAAXW4Enum@CpuClippingMode@@PEBVCMILMatrix@@PEA_NPEAV4@3@Z.c)
 *     ?GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z @ 0x1800677D4 (-GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z.c)
 * Callees:
 *     ?D2DMatrixRotationAxis@@YAPEAUD2DMatrix@@PEAU1@PEBUD2DVector3@@M@Z @ 0x180012410 (-D2DMatrixRotationAxis@@YAPEAUD2DMatrix@@PEAU1@PEBUD2DVector3@@M@Z.c)
 *     ?D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z @ 0x180066F90 (-D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z.c)
 */

void __fastcall CRotateTransform3D::GetRealization(
        CRotateTransform3D *this,
        const struct D2D_SIZE_F *a2,
        struct CMILMatrix *a3)
{
  double v3; // xmm2_8
  double v5; // xmm1_8
  double v6; // xmm6_8
  float v7; // xmm0_4
  double v8; // xmm7_8
  double v9; // xmm8_8
  float v10; // xmm8_4
  float v11; // xmm6_4
  float v12; // xmm7_4
  _DWORD v13[4]; // [rsp+28h] [rbp-69h] BYREF
  _DWORD v14[16]; // [rsp+38h] [rbp-59h] BYREF
  _DWORD v15[28]; // [rsp+78h] [rbp-19h] BYREF

  v3 = *((double *)this + 15);
  v5 = *((double *)this + 17);
  v6 = *((double *)this + 20);
  v7 = *((double *)this + 16);
  v8 = *((double *)this + 21);
  *(float *)v13 = v7;
  v9 = *((double *)this + 19);
  *(float *)&v13[2] = *((double *)this + 18);
  *(float *)&v13[1] = v5;
  v10 = v9;
  v11 = v6;
  v12 = v8;
  D2DMatrixRotationAxis(a3, (const struct D2DVector3 *)v13, (float)v3 * 0.017453292);
  if ( v10 != 0.0 || v11 != 0.0 || v12 != 0.0 )
  {
    v14[11] = 0;
    v14[9] = 0;
    v14[8] = 0;
    v14[7] = 0;
    v14[6] = 0;
    v14[4] = 0;
    v14[3] = 0;
    v14[2] = 0;
    v14[1] = 0;
    v15[11] = 0;
    v15[9] = 0;
    v15[8] = 0;
    v15[7] = 0;
    v15[6] = 0;
    v15[4] = 0;
    v15[3] = 0;
    v15[2] = 0;
    v15[1] = 0;
    v14[12] = LODWORD(v10) ^ _xmm;
    v14[14] = LODWORD(v12) ^ _xmm;
    v14[13] = LODWORD(v11) ^ _xmm;
    *(float *)&v15[12] = v10;
    *(float *)&v15[13] = v11;
    *(float *)&v15[14] = v12;
    v14[15] = 1065353216;
    v14[10] = 1065353216;
    v14[5] = 1065353216;
    v14[0] = 1065353216;
    v15[15] = 1065353216;
    v15[10] = 1065353216;
    v15[5] = 1065353216;
    v15[0] = 1065353216;
    D2DMatrixMultiply(a3, (const struct D2DMatrix *)v14, a3);
    D2DMatrixMultiply(a3, a3, (const struct D2DMatrix *)v15);
  }
}
