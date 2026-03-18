/*
 * XREFs of VerifierFreeTrackedPool @ 0x1401DD4E8
 * Callers:
 *     ExFreeLargePool @ 0x1400892D0 (ExFreeLargePool.c)
 *     MmFreeSpecialPool @ 0x1401DB2D8 (MmFreeSpecialPool.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 * Callees:
 *     VerifierBugCheckIfAppropriate @ 0x1406C028C (VerifierBugCheckIfAppropriate.c)
 */

__int64 __fastcall VerifierFreeTrackedPool(int a1, int a2)
{
  if ( !VerifierIsTrackingPool )
    VerifierBugCheckIfAppropriate(194, 153, a1, 0, 0LL);
  return ViFreeTrackedPool(a1, a2);
}
