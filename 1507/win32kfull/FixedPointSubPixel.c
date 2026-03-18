/*
 * XREFs of FixedPointSubPixel @ 0x1C01D10B0
 * Callers:
 *     DCEInverseTransform @ 0x1C01E48EC (DCEInverseTransform.c)
 *     TransformVector @ 0x1C022D550 (TransformVector.c)
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
