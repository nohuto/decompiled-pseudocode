/*
 * XREFs of IsWithinThresholdF @ 0x180158080
 * Callers:
 *     ?CanAddThisColumnVectorToMatrix@?A0xe8837992@@YA_NPEAUD2DVector3@@IAEBU2@@Z @ 0x18014187C (-CanAddThisColumnVectorToMatrix@-A0xe8837992@@YA_NPEAUD2DVector3@@IAEBU2@@Z.c)
 *     ?D3DXVectorAreCloseToZero@@YAHAEBUD2DVector3@@@Z @ 0x18015801C (-D3DXVectorAreCloseToZero@@YAHAEBUD2DVector3@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsWithinThresholdF(float a1, float a2, float a3)
{
  float v3; // xmm4_4
  float v5; // xmm2_4
  float v7; // xmm1_4

  v3 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(a1) & _xmm);
  if ( v3 < 0.000099999997 )
  {
    v5 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(a2) & _xmm);
    if ( v5 < 0.000099999997 )
      return 1;
  }
  v7 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(a1 - a2)) & _xmm);
  return a3 >= v7;
}
