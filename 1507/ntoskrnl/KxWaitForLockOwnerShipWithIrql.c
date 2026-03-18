/*
 * XREFs of KxWaitForLockOwnerShipWithIrql @ 0x140103D00
 * Callers:
 *     ExAcquireSharedStarveExclusive @ 0x140052F60 (ExAcquireSharedStarveExclusive.c)
 *     ExpLockResource @ 0x14009D730 (ExpLockResource.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400C8A30 (ExAcquireResourceExclusiveLite.c)
 *     ExAcquireResourceSharedLite @ 0x1400C8DB0 (ExAcquireResourceSharedLite.c)
 *     ExpReleaseResourceForThreadLite @ 0x1400C92E0 (ExpReleaseResourceForThreadLite.c)
 *     ExIsResourceAcquiredSharedLite @ 0x1400CA650 (ExIsResourceAcquiredSharedLite.c)
 *     ExSetResourceOwnerPointerEx @ 0x1400D6534 (ExSetResourceOwnerPointerEx.c)
 *     ExConvertExclusiveToSharedLite @ 0x140103870 (ExConvertExclusiveToSharedLite.c)
 *     ExAcquireSharedWaitForExclusive @ 0x14012EDB8 (ExAcquireSharedWaitForExclusive.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140200B54 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiFastAcquireQueuedSpinLockInstrumented @ 0x140200C08 (KiFastAcquireQueuedSpinLockInstrumented.c)
 *     ExTryConvertSharedToExclusiveLite @ 0x140263AD8 (ExTryConvertSharedToExclusiveLite.c)
 *     ExTryToAcquireResourceExclusiveLite @ 0x140263C1C (ExTryToAcquireResourceExclusiveLite.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 */

__int64 __fastcall KxWaitForLockOwnerShipWithIrql(__int64 a1, _QWORD *a2, unsigned __int8 *a3)
{
  unsigned __int8 CurrentIrql; // dl
  unsigned int v5; // ebx

  *(_QWORD *)(a1 + 8) |= 1uLL;
  *a2 = a1;
  if ( a3 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(*a3);
    *a3 = CurrentIrql;
    _enable();
  }
  v5 = 0;
  do
  {
    if ( (++v5 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
      _mm_pause();
    else
      HvlNotifyLongSpinWait(v5);
  }
  while ( (*(_QWORD *)(a1 + 8) & 1) != 0 );
  return v5;
}
