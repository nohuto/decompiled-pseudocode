/*
 * XREFs of RaidAdapterEnableQosWaitTimeoutCheck @ 0x1C0023BCC
 * Callers:
 *     RaUnitSetQOSIoctl @ 0x1C0032864 (RaUnitSetQOSIoctl.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RaidAdapterEnableQosWaitTimeoutCheck(__int64 a1)
{
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 5592), &LockHandle);
  if ( !*(_DWORD *)(a1 + 5600) )
    KeSetCoalescableTimer((PKTIMER)(a1 + 5464), (LARGE_INTEGER)-5000000LL, 0x1F4u, 0x32u, (PKDPC)(a1 + 5528));
  ++*(_DWORD *)(a1 + 5600);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return 0LL;
}
