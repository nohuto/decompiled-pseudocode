/*
 * XREFs of FixedPointSubPixel @ 0x1C01CA858
 * Callers:
 *     DCEInverseTransform @ 0x1C01DB628 (DCEInverseTransform.c)
 *     PhysicalToLogicalInPlacePoint @ 0x1C01DC23C (PhysicalToLogicalInPlacePoint.c)
 *     TransformVector @ 0x1C02235C0 (TransformVector.c)
 * Callees:
 *     <none>
 */

float __fastcall FixedPointSubPixel(__int64 a1)
{
  __int64 v1; // rax

  if ( a1 < 0 )
    v1 = -(__int64)(-a1 & 0xFFFFFFFFFFFF0000uLL);
  else
    LODWORD(v1) = a1 & 0xFFFF0000;
  return (float)(a1 - v1) * 0.000015258789;
}
