/*
 * XREFs of ExpLockResource @ 0x14009D730
 * Callers:
 *     ExpApplyPriorityBoost @ 0x14009CD90 (ExpApplyPriorityBoost.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400C8A30 (ExAcquireResourceExclusiveLite.c)
 *     ExpBoostIoAfterAcquire @ 0x1400D6454 (ExpBoostIoAfterAcquire.c)
 *     ExpExpandResourceOwnerTable @ 0x1400D6868 (ExpExpandResourceOwnerTable.c)
 *     ExAcquireSharedWaitForExclusive @ 0x14012EDB8 (ExAcquireSharedWaitForExclusive.c)
 *     ExDisableResourceBoostLite @ 0x1401397D0 (ExDisableResourceBoostLite.c)
 * Callees:
 *     KxWaitForLockOwnerShipWithIrql @ 0x140103D00 (KxWaitForLockOwnerShipWithIrql.c)
 *     KiFastAcquireQueuedSpinLockInstrumented @ 0x140200C08 (KiFastAcquireQueuedSpinLockInstrumented.c)
 */

__int64 __fastcall ExpLockResource(__int64 a1, _QWORD *a2)
{
  volatile __int64 *v2; // r9
  __int64 result; // rax
  __int64 v4; // rdx
  char v5; // cl
  unsigned __int8 v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = (volatile __int64 *)(a1 + 96);
  v6 = 2;
  a2[1] = a1 + 96;
  result = (__int64)a2;
  *a2 = 0LL;
  _disable();
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    result = KiFastAcquireQueuedSpinLockInstrumented(a2, v2, &v6);
    v5 = result;
  }
  else
  {
    v4 = _InterlockedExchange64(v2, (__int64)a2);
    v5 = 0;
    if ( v4 )
    {
      result = KxWaitForLockOwnerShipWithIrql(result, v4, &v6);
      v5 = 1;
    }
  }
  if ( v5 )
  {
    _disable();
    result = v6;
    __writecr8(v6);
  }
  return result;
}
