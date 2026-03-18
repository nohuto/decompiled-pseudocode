/*
 * XREFs of VerifierFreeTrackedPool @ 0x1401EEE28
 * Callers:
 *     ExFreeLargePool @ 0x140010BE0 (ExFreeLargePool.c)
 *     MmFreeSpecialPool @ 0x1401EC0A4 (MmFreeSpecialPool.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 * Callees:
 *     VerifierBugCheckIfAppropriate @ 0x14070C2E8 (VerifierBugCheckIfAppropriate.c)
 */

__int64 __fastcall VerifierFreeTrackedPool(int a1, int a2)
{
  if ( !VerifierIsTrackingPool )
    VerifierBugCheckIfAppropriate(194, 153, a1, 0, 0LL);
  return ViFreeTrackedPool(a1, a2);
}
