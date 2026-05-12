/*
 * XREFs of RaidUnitDisablePendingTimer @ 0x1C002B7E0
 * Callers:
 *     RaidUnitCompleteRequest @ 0x1C0002480 (RaidUnitCompleteRequest.c)
 *     RaUnitRemoveFromPendingList @ 0x1C000ED80 (RaUnitRemoveFromPendingList.c)
 *     StorPortUnitPoFxD3Completion @ 0x1C002D140 (StorPortUnitPoFxD3Completion.c)
 * Callees:
 *     <none>
 */

void __fastcall RaidUnitDisablePendingTimer(__int64 a1)
{
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 32), &LockHandle);
  if ( (*(_BYTE *)(a1 + 145) & 0x20) == 0 && !*(_DWORD *)(*(_QWORD *)(a1 + 1440) + 56LL) )
  {
    KeCancelTimer((PKTIMER)(a1 + 640));
    *(_BYTE *)(a1 + 145) |= 0x20u;
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
