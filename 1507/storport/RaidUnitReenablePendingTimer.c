/*
 * XREFs of RaidUnitReenablePendingTimer @ 0x1C002BCC0
 * Callers:
 *     RaidUnitClaimIrp @ 0x1C0003EF0 (RaidUnitClaimIrp.c)
 *     RaUnitDeregisterFromIdleDetection @ 0x1C002A55C (RaUnitDeregisterFromIdleDetection.c)
 *     StorPortUnitPowerNotRequiredStep1 @ 0x1C002D2A0 (StorPortUnitPowerNotRequiredStep1.c)
 *     StorPortUnitPowerRequiredStep1 @ 0x1C002D5C0 (StorPortUnitPowerRequiredStep1.c)
 * Callees:
 *     <none>
 */

void __fastcall RaidUnitReenablePendingTimer(__int64 a1)
{
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 32), &LockHandle);
  if ( (*(_BYTE *)(a1 + 145) & 0x20) != 0 )
  {
    KeSetCoalescableTimer((PKTIMER)(a1 + 640), (LARGE_INTEGER)-20000000LL, 0x7D0u, 0x12Cu, (PKDPC)(a1 + 704));
    *(_BYTE *)(a1 + 145) &= ~0x20u;
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
