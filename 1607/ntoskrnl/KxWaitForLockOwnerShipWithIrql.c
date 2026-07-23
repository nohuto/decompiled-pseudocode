/*
 * XREFs of KxWaitForLockOwnerShipWithIrql @ 0x140090070
 * Callers:
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1401D380C (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiFastAcquireQueuedSpinLockInstrumented @ 0x1401D38C0 (KiFastAcquireQueuedSpinLockInstrumented.c)
 *     EXP_LOCK_RESOURCE @ 0x14022D6D0 (EXP_LOCK_RESOURCE.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x1401BAD4C (HvlNotifyLongSpinWait.c)
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
