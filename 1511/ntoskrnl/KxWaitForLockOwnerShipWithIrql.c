/*
 * XREFs of KxWaitForLockOwnerShipWithIrql @ 0x1400CFA00
 * Callers:
 *     ExIsResourceAcquiredSharedLite @ 0x14003DAD0 (ExIsResourceAcquiredSharedLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x14003F890 (ExAcquireResourceExclusiveLite.c)
 *     ExAcquireResourceSharedLite @ 0x14003FBC0 (ExAcquireResourceSharedLite.c)
 *     ExpReleaseResourceForThreadLite @ 0x14003FF80 (ExpReleaseResourceForThreadLite.c)
 *     ExpLockResource @ 0x14007F3A0 (ExpLockResource.c)
 *     ExAcquireSharedStarveExclusive @ 0x1400A4BB0 (ExAcquireSharedStarveExclusive.c)
 *     KeFastAcquireInStackQueuedSpinLockAndRaise @ 0x1400CF858 (KeFastAcquireInStackQueuedSpinLockAndRaise.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1401C4828 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiFastAcquireQueuedSpinLockInstrumented @ 0x1401C48DC (KiFastAcquireQueuedSpinLockInstrumented.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x1401AE950 (HvlNotifyLongSpinWait.c)
 */

__int64 __fastcall KxWaitForLockOwnerShipWithIrql(__int64 a1, _QWORD *CurrentIrql, _BYTE *a3)
{
  unsigned int v4; // ebx

  *(_QWORD *)(a1 + 8) |= 1uLL;
  *CurrentIrql = a1;
  if ( a3 )
  {
    CurrentIrql = (_QWORD *)KeGetCurrentIrql();
    __writecr8((unsigned __int8)*a3);
    *a3 = (_BYTE)CurrentIrql;
    _enable();
  }
  v4 = 0;
  do
  {
    if ( (++v4 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
      _mm_pause();
    else
      HvlNotifyLongSpinWait(v4, CurrentIrql, a3);
  }
  while ( (*(_QWORD *)(a1 + 8) & 1) != 0 );
  return v4;
}
