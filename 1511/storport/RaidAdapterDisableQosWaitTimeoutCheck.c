/*
 * XREFs of RaidAdapterDisableQosWaitTimeoutCheck @ 0x1C0023B80
 * Callers:
 *     RaidDeleteUnit @ 0x1C0011E4C (RaidDeleteUnit.c)
 *     RaidUnitDisableWaitCheckTimer @ 0x1C0034230 (RaidUnitDisableWaitCheckTimer.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RaidAdapterDisableQosWaitTimeoutCheck(__int64 a1)
{
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 5592), &LockHandle);
  if ( *(_DWORD *)(a1 + 5600) == 1 )
    KeCancelTimer((PKTIMER)(a1 + 5464));
  --*(_DWORD *)(a1 + 5600);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return 0LL;
}
