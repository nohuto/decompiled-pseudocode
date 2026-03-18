/*
 * XREFs of ?Is2DAxisAlignedPreserving@D2DMatrixHelper@@YA_NAEBUD2D_MATRIX_3X2_F@@@Z @ 0x18000E5A0
 * Callers:
 *     ?UpdateHWDrawListCache@CPrimitiveGroupDrawListGenerator@@QEAAJ_KPEAVCDrawListPrimitiveBuilder@@W4D2D1_ANTIALIAS_MODE@@PEBVCMILMatrix@@PEAVCShape@@_NPEAVCHWDrawListCache@@@Z @ 0x18007627C (-UpdateHWDrawListCache@CPrimitiveGroupDrawListGenerator@@QEAAJ_KPEAVCDrawListPrimitiveBuilder@@W.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall D2DMatrixHelper::Is2DAxisAlignedPreserving(D2DMatrixHelper *this, const struct D2D_MATRIX_3X2_F *a2)
{
  float v2; // xmm1_4
  float v3; // xmm1_4
  _BOOL8 result; // rax
  float v5; // xmm1_4
  float v6; // xmm1_4

  v2 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)this + 1)) & _xmm);
  result = 1;
  if ( v2 >= 0.00012207031
    || (v3 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)this + 2)) & _xmm), v3 >= 0.00012207031) )
  {
    v5 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)this) & _xmm);
    if ( v5 >= 0.00012207031 )
      return 0;
    v6 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)this + 3)) & _xmm);
    if ( v6 >= 0.00012207031 )
      return 0;
  }
  return result;
}
