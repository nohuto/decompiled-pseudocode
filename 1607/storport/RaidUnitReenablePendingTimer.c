/*
 * XREFs of RaidUnitReenablePendingTimer @ 0x1C0009EA8
 * Callers:
 *     RaidUnitClaimIrp @ 0x1C0004D00 (RaidUnitClaimIrp.c)
 *     RaUnitDeregisterFromIdleDetection @ 0x1C0030230 (RaUnitDeregisterFromIdleDetection.c)
 *     StorPortUnitPowerNotRequiredStep1 @ 0x1C0032040 (StorPortUnitPowerNotRequiredStep1.c)
 *     StorPortUnitPowerRequiredStep1 @ 0x1C0032360 (StorPortUnitPowerRequiredStep1.c)
 *     RaUnitRemoveDeviceIrp @ 0x1C003573C (RaUnitRemoveDeviceIrp.c)
 * Callees:
 *     <none>
 */

void __fastcall RaidUnitReenablePendingTimer(__int64 a1, char a2)
{
  ULONG v4; // esi
  ULONG v5; // ebp
  int v6; // r14d
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-38h] BYREF

  v4 = 2000;
  v5 = 300;
  v6 = 4;
  if ( *(_BYTE *)(a1 + 2552) )
  {
    v5 = 50;
    v4 = 500;
    v6 = 1;
  }
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 32), &LockHandle);
  if ( (*(_BYTE *)(a1 + 153) & 0x20) != 0 || a2 )
  {
    KeSetCoalescableTimer((PKTIMER)(a1 + 664), (LARGE_INTEGER)(-10000LL * v4), v4, v5, (PKDPC)(a1 + 728));
    *(_DWORD *)(*(_QWORD *)(a1 + 208) + 4LL) = v6;
    *(_BYTE *)(a1 + 153) &= ~0x20u;
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
