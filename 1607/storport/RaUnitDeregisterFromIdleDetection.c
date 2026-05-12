/*
 * XREFs of RaUnitDeregisterFromIdleDetection @ 0x1C0030230
 * Callers:
 *     RaUnitRemoveDeviceIrp @ 0x1C003573C (RaUnitRemoveDeviceIrp.c)
 *     RaUnitSurpriseRemovalIrp @ 0x1C005F7C0 (RaUnitSurpriseRemovalIrp.c)
 * Callees:
 *     RaidUnitPoFxIdleComponent @ 0x1C0002F60 (RaidUnitPoFxIdleComponent.c)
 *     StorPortUnitFlushActivePendingRequestQueue @ 0x1C00034EC (StorPortUnitFlushActivePendingRequestQueue.c)
 *     RaidUnitReenablePendingTimer @ 0x1C0009EA8 (RaidUnitReenablePendingTimer.c)
 *     RaidUnitCancelWaitWakeIrp @ 0x1C000A8CC (RaidUnitCancelWaitWakeIrp.c)
 *     RaidIsUnitControlSupported @ 0x1C00110A8 (RaidIsUnitControlSupported.c)
 *     RaCallMiniportUnitControl @ 0x1C0011128 (RaCallMiniportUnitControl.c)
 *     __security_check_cookie @ 0x1C001A7E0 (__security_check_cookie.c)
 */

void __fastcall RaUnitDeregisterFromIdleDetection(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // rcx
  void *v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  char v9; // al
  struct _EX_RUNDOWN_REF_CACHE_AWARE *v10; // rcx
  _QWORD *v11; // rbx
  __int64 v12; // [rsp+20h] [rbp-50h]
  __int16 *v13; // [rsp+28h] [rbp-48h]
  __int64 v14; // [rsp+30h] [rbp-40h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-38h] BYREF
  __int16 v16; // [rsp+50h] [rbp-20h] BYREF
  __int64 v17; // [rsp+52h] [rbp-1Eh]
  int v18; // [rsp+5Ah] [rbp-16h]
  __int16 v19; // [rsp+5Eh] [rbp-12h]

  if ( *(char *)(a1 + 153) < 0 )
  {
    if ( *(_QWORD *)(a1 + 24)
      && (*(_DWORD *)(*(_QWORD *)(a1 + 1456) + 32LL) & 4) != 0
      && RaidIsUnitControlSupported(a1, 4) )
    {
      v2 = *(_QWORD *)(a1 + 24);
      v16 = 1;
      v17 = 0x40000LL;
      v14 = 0LL;
      v18 = 0;
      v19 = 0;
      LOWORD(v17) = *(_WORD *)(v2 + 56);
      HIWORD(v17) = *(_WORD *)(a1 + 88);
      LOBYTE(v18) = *(_BYTE *)(a1 + 90);
      v13 = &v16;
      v12 = 0x1800000001LL;
      RaCallMiniportUnitControl(v2 + 296);
    }
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 32), &LockHandle);
    RaidUnitCancelWaitWakeIrp(a1);
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    RaidUnitReenablePendingTimer(a1, 0);
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(*(_QWORD *)(a1 + 1456) + 88LL), &LockHandle);
    StorPortUnitFlushActivePendingRequestQueue(a1);
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    v5 = *(_QWORD *)(*(_QWORD *)(a1 + 1456) + 104LL);
    if ( v5 )
    {
      PoUnregisterCoalescingCallback(v5, v3, v4);
      *(_QWORD *)(*(_QWORD *)(a1 + 1456) + 104LL) = 0LL;
    }
    v6 = *(void **)(*(_QWORD *)(a1 + 1456) + 112LL);
    if ( v6 )
    {
      PoUnregisterPowerSettingCallback(v6);
      *(_QWORD *)(*(_QWORD *)(a1 + 1456) + 112LL) = 0LL;
    }
    v7 = *(_QWORD *)(*(_QWORD *)(a1 + 1456) + 120LL);
    if ( v7 )
    {
      LOBYTE(v3) = 1;
      ExDeleteTimer(v7, v3, 0LL, 0LL, v12, v13, v14);
      *(_QWORD *)(*(_QWORD *)(a1 + 1456) + 120LL) = 0LL;
    }
    v8 = *(_QWORD *)(*(_QWORD *)(a1 + 1456) + 128LL);
    if ( v8 )
    {
      LOBYTE(v3) = 1;
      v9 = ExDeleteTimer(v8, v3, 0LL, 0LL, v12, v13, v14);
      *(_QWORD *)(*(_QWORD *)(a1 + 1456) + 128LL) = 0LL;
      if ( v9 )
      {
        if ( (*(_DWORD *)(*(_QWORD *)(a1 + 1456) + 148LL) & 1) != 0 )
          RaidUnitPoFxIdleComponent(a1, 0, 0, 0LL);
      }
    }
    v10 = *(struct _EX_RUNDOWN_REF_CACHE_AWARE **)(a1 + 1448);
    *(_BYTE *)(a1 + 153) &= ~0x80u;
    ExWaitForRundownProtectionReleaseCacheAware(v10);
    v11 = *(_QWORD **)(a1 + 1456);
    *(_QWORD *)(a1 + 1456) = 0LL;
    PoFxUnregisterDevice(*v11);
    ExFreePoolWithTag(v11, 0x4F506152u);
  }
}
