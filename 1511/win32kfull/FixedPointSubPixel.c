/*
 * XREFs of FixedPointSubPixel @ 0x1C01D2D0C
 * Callers:
 *     DCEInverseTransform @ 0x1C01E4D7C (DCEInverseTransform.c)
 *     TransformVector @ 0x1C022D854 (TransformVector.c)
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
