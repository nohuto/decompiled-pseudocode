/*
 * XREFs of KeFastAcquireInStackQueuedSpinLockAndRaise @ 0x1400CF858
 * Callers:
 *     ExAcquireSharedWaitForExclusive @ 0x1400CF384 (ExAcquireSharedWaitForExclusive.c)
 *     ExConvertExclusiveToSharedLite @ 0x1400CF4E8 (ExConvertExclusiveToSharedLite.c)
 *     ExSetResourceOwnerPointerEx @ 0x1400CF5B8 (ExSetResourceOwnerPointerEx.c)
 *     ExTryConvertSharedToExclusiveLite @ 0x140213DB0 (ExTryConvertSharedToExclusiveLite.c)
 *     ExTryToAcquireResourceExclusiveLite @ 0x140213E54 (ExTryToAcquireResourceExclusiveLite.c)
 * Callees:
 *     KxWaitForLockOwnerShipWithIrql @ 0x1400CFA00 (KxWaitForLockOwnerShipWithIrql.c)
 *     KiFastAcquireQueuedSpinLockInstrumented @ 0x1401C48DC (KiFastAcquireQueuedSpinLockInstrumented.c)
 */

char __fastcall KeFastAcquireInStackQueuedSpinLockAndRaise(volatile __int64 *a1, _QWORD *a2)
{
  __int64 v3; // rdx
  char result; // al
  _BYTE v5[24]; // [rsp+20h] [rbp-18h] BYREF

  *a2 = 0LL;
  v5[0] = 2;
  a2[1] = a1;
  _disable();
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    result = KiFastAcquireQueuedSpinLockInstrumented(a2, a1, v5);
  }
  else
  {
    v3 = _InterlockedExchange64(a1, (__int64)a2);
    result = 0;
    if ( v3 )
    {
      KxWaitForLockOwnerShipWithIrql(a2, v3, v5);
      result = 1;
    }
  }
  if ( result )
  {
    _disable();
    result = v5[0];
    __writecr8(v5[0]);
  }
  return result;
}
