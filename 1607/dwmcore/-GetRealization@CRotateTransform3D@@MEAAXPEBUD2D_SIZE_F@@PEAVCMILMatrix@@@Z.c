/*
 * XREFs of ?GetRealization@CRotateTransform3D@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z @ 0x1800B69E0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetRotation@CMILMatrix@@QEAAXAEBUfloat3@Numerics@Foundation@Windows@@M@Z @ 0x1800155F8 (-SetRotation@CMILMatrix@@QEAAXAEBUfloat3@Numerics@Foundation@Windows@@M@Z.c)
 *     ?PrependTranslate@CMILMatrix@@QEAAXMMM@Z @ 0x180058E78 (-PrependTranslate@CMILMatrix@@QEAAXMMM@Z.c)
 *     ?Translate@CMILMatrix@@QEAAXMMM@Z @ 0x18005B548 (-Translate@CMILMatrix@@QEAAXMMM@Z.c)
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
  CMILMatrix *v13; // rcx
  _DWORD v14[4]; // [rsp+20h] [rbp-48h] BYREF

  v3 = *((double *)this + 27);
  v5 = *((double *)this + 29);
  v6 = *((double *)this + 32);
  v7 = *((double *)this + 28);
  v8 = *((double *)this + 33);
  *(float *)v14 = v7;
  v9 = *((double *)this + 31);
  *(float *)&v14[2] = *((double *)this + 30);
  *(float *)&v14[1] = v5;
  v10 = v9;
  v11 = v6;
  v12 = v8;
  CMILMatrix::SetRotation(a3, (const struct Windows::Foundation::Numerics::float3 *)v14, (float)v3 * 0.017453292);
  if ( v10 != 0.0 || v11 != 0.0 || v12 != 0.0 )
  {
    CMILMatrix::PrependTranslate(
      a3,
      COERCE_FLOAT(LODWORD(v10) ^ _xmm),
      COERCE_FLOAT(LODWORD(v11) ^ _xmm),
      COERCE_FLOAT(LODWORD(v12) ^ _xmm));
    CMILMatrix::Translate(v13, v10, v11, v12);
  }
}
