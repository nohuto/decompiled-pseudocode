/*
 * XREFs of ?GetRealization@CRotateTransform3D@@MEAAXPEAVCMILMatrix@@@Z @ 0x18011E9B0
 * Callers:
 *     <none>
 * Callees:
 *     ?D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z @ 0x18001A890 (-D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z.c)
 *     ?D2DMatrixRotationAxis@@YAPEAUD2DMatrix@@PEAU1@PEBUD2DVector3@@M@Z @ 0x1801494BC (-D2DMatrixRotationAxis@@YAPEAUD2DMatrix@@PEAU1@PEBUD2DVector3@@M@Z.c)
 */

void __fastcall CRotateTransform3D::GetRealization(CRotateTransform3D *this, struct CMILMatrix *a2)
{
  double v3; // xmm2_8
  double v4; // xmm1_8
  double v5; // xmm6_8
  float v6; // xmm0_4
  double v7; // xmm7_8
  double v8; // xmm8_8
  float v9; // xmm8_4
  float v10; // xmm6_4
  float v11; // xmm7_4
  _DWORD v12[4]; // [rsp+28h] [rbp-69h] BYREF
  _DWORD v13[16]; // [rsp+38h] [rbp-59h] BYREF
  _DWORD v14[28]; // [rsp+78h] [rbp-19h] BYREF

  v3 = *((double *)this + 14);
  v4 = *((double *)this + 16);
  v5 = *((double *)this + 19);
  v6 = *((double *)this + 15);
  v7 = *((double *)this + 20);
  *(float *)v12 = v6;
  v8 = *((double *)this + 18);
  *(float *)&v12[2] = *((double *)this + 17);
  *(float *)&v12[1] = v4;
  v9 = v8;
  v10 = v5;
  v11 = v7;
  D2DMatrixRotationAxis(a2, (const struct D2DVector3 *)v12, (float)v3 * 0.017453292);
  if ( v9 != 0.0 || v10 != 0.0 || v11 != 0.0 )
  {
    v13[11] = 0;
    v13[9] = 0;
    v13[8] = 0;
    v13[7] = 0;
    v13[6] = 0;
    v13[4] = 0;
    v13[3] = 0;
    v13[2] = 0;
    v13[1] = 0;
    v14[11] = 0;
    v14[9] = 0;
    v14[8] = 0;
    v14[7] = 0;
    v14[6] = 0;
    v14[4] = 0;
    v14[3] = 0;
    v14[2] = 0;
    v14[1] = 0;
    v13[12] = LODWORD(v9) ^ _xmm;
    v13[14] = LODWORD(v11) ^ _xmm;
    v13[13] = LODWORD(v10) ^ _xmm;
    *(float *)&v14[12] = v9;
    *(float *)&v14[13] = v10;
    *(float *)&v14[14] = v11;
    v13[15] = 1065353216;
    v13[10] = 1065353216;
    v13[5] = 1065353216;
    v13[0] = 1065353216;
    v14[15] = 1065353216;
    v14[10] = 1065353216;
    v14[5] = 1065353216;
    v14[0] = 1065353216;
    D2DMatrixMultiply(a2, (const struct D2DMatrix *)v13, a2);
    D2DMatrixMultiply(a2, a2, (const struct D2DMatrix *)v14);
  }
}
