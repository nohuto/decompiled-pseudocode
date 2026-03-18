/*
 * XREFs of ?GetRealization@CComponentTransform3D@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z @ 0x18001B410
 * Callers:
 *     ?CalcEffectiveTransform@CVisual@@QEAAXW4Enum@CpuClippingMode@@PEBVCMILMatrix@@PEA_NPEAV4@3@Z @ 0x1800528C0 (-CalcEffectiveTransform@CVisual@@QEAAXW4Enum@CpuClippingMode@@PEBVCMILMatrix@@PEA_NPEAV4@3@Z.c)
 * Callees:
 *     ?SetRotation@CMILMatrix@@QEAAXAEBUfloat3@Numerics@Foundation@Windows@@M@Z @ 0x1800155F8 (-SetRotation@CMILMatrix@@QEAAXAEBUfloat3@Numerics@Foundation@Windows@@M@Z.c)
 *     ?Scale@CMILMatrix@@QEAAXMMM@Z @ 0x180058DFC (-Scale@CMILMatrix@@QEAAXMMM@Z.c)
 *     ?Translate@CMILMatrix@@QEAAXMMM@Z @ 0x18005B548 (-Translate@CMILMatrix@@QEAAXMMM@Z.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x18005B70C (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?SetRotation@CMILMatrix@@QEAAXAEBUquaternion@Numerics@Foundation@Windows@@@Z @ 0x180162594 (-SetRotation@CMILMatrix@@QEAAXAEBUquaternion@Numerics@Foundation@Windows@@@Z.c)
 */

void __fastcall CComponentTransform3D::GetRealization(
        CComponentTransform3D *this,
        const struct D2D_SIZE_F *a2,
        struct CMILMatrix *a3)
{
  float v3; // xmm4_4
  float v4; // xmm2_4
  char v7; // si
  float v8; // xmm1_4
  float v9; // xmm2_4
  float v10; // xmm1_4
  float v11; // xmm0_4
  int v12; // xmm1_4
  int v13; // xmm0_4
  int v14; // xmm0_4
  int v15; // xmm1_4
  float v16; // [rsp+28h] [rbp-19h] BYREF
  int v17; // [rsp+2Ch] [rbp-15h]
  int v18; // [rsp+30h] [rbp-11h]
  int v19; // [rsp+34h] [rbp-Dh]
  _BYTE v20[64]; // [rsp+38h] [rbp-9h] BYREF
  int v21; // [rsp+78h] [rbp+37h]

  v3 = 0.0;
  v4 = 0.0;
  if ( a2 )
  {
    v3 = *((float *)this + 54) * a2->width;
    v4 = *((float *)this + 55) * a2->height;
  }
  v7 = 0;
  *(_OWORD *)a3 = *(_OWORD *)((char *)this + 280);
  *((_OWORD *)a3 + 1) = *(_OWORD *)((char *)this + 296);
  *((_OWORD *)a3 + 2) = *(_OWORD *)((char *)this + 312);
  *((_OWORD *)a3 + 3) = *(_OWORD *)((char *)this + 328);
  *((_DWORD *)a3 + 16) = *((_DWORD *)this + 86);
  v8 = *((float *)this + 56);
  if ( v8 != 0.0 || *((float *)this + 57) != 0.0 || *((float *)this + 58) != 0.0 || v3 != 0.0 || v4 != 0.0 )
  {
    CMILMatrix::Translate(
      a3,
      COERCE_FLOAT(COERCE_UNSIGNED_INT(v8 + v3) ^ _xmm),
      COERCE_FLOAT(COERCE_UNSIGNED_INT(v4 + *((float *)this + 57)) ^ _xmm),
      COERCE_FLOAT(*((_DWORD *)this + 58) ^ _xmm));
    v7 = 1;
  }
  if ( *((float *)this + 62) != 1.0 || *((float *)this + 63) != 1.0 || *((float *)this + 64) != 1.0 )
    CMILMatrix::Scale(a3, *((float *)this + 62), *((float *)this + 63), *((float *)this + 64));
  v9 = *((float *)this + 69);
  if ( v9 != 0.0 )
  {
    v11 = *((float *)this + 59);
    v12 = *((_DWORD *)this + 60);
    v21 = 0;
    v16 = v11;
    v18 = *((_DWORD *)this + 61);
    v17 = v12;
    CMILMatrix::SetRotation((CMILMatrix *)v20, (const struct Windows::Foundation::Numerics::float3 *)&v16, v9);
    CMILMatrix::Multiply(a3, (const struct CMILMatrix *)v20);
  }
  v10 = *((float *)this + 65);
  if ( v10 != 0.0 || *((float *)this + 66) != 0.0 || *((float *)this + 67) != 0.0 || *((float *)this + 68) != 1.0 )
  {
    v13 = *((_DWORD *)this + 66);
    v21 = 0;
    v17 = v13;
    v14 = *((_DWORD *)this + 68);
    v16 = v10;
    v15 = *((_DWORD *)this + 67);
    v19 = v14;
    v18 = v15;
    CMILMatrix::SetRotation((CMILMatrix *)v20, (const struct Windows::Foundation::Numerics::quaternion *)&v16);
    CMILMatrix::Multiply(a3, (const struct CMILMatrix *)v20);
  }
  if ( v7 )
    CMILMatrix::Translate(a3, *((float *)this + 56), *((float *)this + 57), *((float *)this + 58));
}
