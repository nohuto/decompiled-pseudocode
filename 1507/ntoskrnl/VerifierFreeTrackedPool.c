/*
 * XREFs of VerifierFreeTrackedPool @ 0x1402227B0
 * Callers:
 *     ExFreeLargePool @ 0x140046E10 (ExFreeLargePool.c)
 *     MmFreeSpecialPool @ 0x14021FC4C (MmFreeSpecialPool.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 * Callees:
 *     VerifierBugCheckIfAppropriate @ 0x140741A80 (VerifierBugCheckIfAppropriate.c)
 */

__int64 __fastcall VerifierFreeTrackedPool(int a1, int a2)
{
  if ( !VerifierIsTrackingPool )
    VerifierBugCheckIfAppropriate(194, 153, a1, 0, 0LL);
  return ViFreeTrackedPool(a1, a2);
}
