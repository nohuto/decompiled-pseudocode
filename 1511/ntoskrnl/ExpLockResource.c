/*
 * XREFs of ExpLockResource @ 0x14007F3A0
 * Callers:
 *     ExAcquireResourceExclusiveLite @ 0x14003F890 (ExAcquireResourceExclusiveLite.c)
 *     ExpBoostIoAfterAcquire @ 0x14007967C (ExpBoostIoAfterAcquire.c)
 *     ExpApplyPriorityBoost @ 0x14007EC80 (ExpApplyPriorityBoost.c)
 *     ExAcquireSharedWaitForExclusive @ 0x1400CF384 (ExAcquireSharedWaitForExclusive.c)
 *     ExpExpandResourceOwnerTable @ 0x1400CF8AC (ExpExpandResourceOwnerTable.c)
 *     ExDisableResourceBoostLite @ 0x14010672C (ExDisableResourceBoostLite.c)
 * Callees:
 *     KxWaitForLockOwnerShipWithIrql @ 0x1400CFA00 (KxWaitForLockOwnerShipWithIrql.c)
 *     KiFastAcquireQueuedSpinLockInstrumented @ 0x1401C48DC (KiFastAcquireQueuedSpinLockInstrumented.c)
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
