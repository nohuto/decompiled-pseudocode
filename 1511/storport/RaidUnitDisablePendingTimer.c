/*
 * XREFs of RaidUnitDisablePendingTimer @ 0x1C000785C
 * Callers:
 *     RaidUnitCompleteRequest @ 0x1C00016A0 (RaidUnitCompleteRequest.c)
 *     RaUnitRemoveFromPendingList @ 0x1C001109C (RaUnitRemoveFromPendingList.c)
 *     StorPortUnitPoFxD3Completion @ 0x1C002ED70 (StorPortUnitPoFxD3Completion.c)
 * Callees:
 *     <none>
 */

void __fastcall RaidUnitDisablePendingTimer(__int64 a1)
{
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 32), &LockHandle);
  if ( (*(_BYTE *)(a1 + 145) & 0x20) == 0 && !*(_DWORD *)(*(_QWORD *)(a1 + 1456) + 56LL) )
  {
    KeCancelTimer((PKTIMER)(a1 + 664));
    *(_BYTE *)(a1 + 145) |= 0x20u;
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
