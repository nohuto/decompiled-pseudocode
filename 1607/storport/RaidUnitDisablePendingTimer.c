/*
 * XREFs of RaidUnitDisablePendingTimer @ 0x1C0009F90
 * Callers:
 *     RaidUnitCompleteRequest @ 0x1C0006180 (RaidUnitCompleteRequest.c)
 *     RaUnitRemoveFromPendingList @ 0x1C000C928 (RaUnitRemoveFromPendingList.c)
 *     StorPortUnitPoFxD3Completion @ 0x1C0031EE0 (StorPortUnitPoFxD3Completion.c)
 * Callees:
 *     <none>
 */

void __fastcall RaidUnitDisablePendingTimer(__int64 a1)
{
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 32), &LockHandle);
  if ( (*(_BYTE *)(a1 + 153) & 0x20) == 0 && !*(_DWORD *)(*(_QWORD *)(a1 + 1456) + 56LL) )
  {
    KeCancelTimer((PKTIMER)(a1 + 664));
    *(_BYTE *)(a1 + 153) |= 0x20u;
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
