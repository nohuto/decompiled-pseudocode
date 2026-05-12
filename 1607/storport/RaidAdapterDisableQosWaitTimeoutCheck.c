/*
 * XREFs of RaidAdapterDisableQosWaitTimeoutCheck @ 0x1C0026F48
 * Callers:
 *     RaidDeleteUnit @ 0x1C0014FB0 (RaidDeleteUnit.c)
 *     RaidUnitDisableWaitCheckTimer @ 0x1C0037410 (RaidUnitDisableWaitCheckTimer.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RaidAdapterDisableQosWaitTimeoutCheck(__int64 a1)
{
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 5608), &LockHandle);
  if ( *(_DWORD *)(a1 + 5616) == 1 )
    KeCancelTimer((PKTIMER)(a1 + 5480));
  --*(_DWORD *)(a1 + 5616);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return 0LL;
}
