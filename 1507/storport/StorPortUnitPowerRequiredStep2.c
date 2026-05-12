/*
 * XREFs of StorPortUnitPowerRequiredStep2 @ 0x1C002D71C
 * Callers:
 *     StorPortUnitPowerRequiredStep1 @ 0x1C002D5C0 (StorPortUnitPowerRequiredStep1.c)
 * Callees:
 *     RaidUnitPoFxIdleComponent @ 0x1C000EEC4 (RaidUnitPoFxIdleComponent.c)
 *     RaidAdapterPoFxActivateComponent @ 0x1C0021C84 (RaidAdapterPoFxActivateComponent.c)
 *     Template_pqcccq @ 0x1C002D894 (Template_pqcccq.c)
 */

void __fastcall StorPortUnitPowerRequiredStep2(__int64 Context)
{
  __int64 v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // rcx
  char v6; // al
  int v7; // r8d
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(Context + 32), &LockHandle);
  v2 = *(_QWORD *)(Context + 1440);
  if ( (*(_DWORD *)(v2 + 32) & 4) != 0 && (*(_DWORD *)(*(_QWORD *)(v2 + 8) + 12LL) & 1) != 0 )
  {
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    v5 = *(_QWORD *)(Context + 24);
    if ( *(_QWORD *)(v5 + 5088) )
    {
      v6 = *(_BYTE *)(Context + 145);
      if ( (v6 & 8) == 0 )
      {
        *(_BYTE *)(Context + 145) = v6 | 8;
        RaidAdapterPoFxActivateComponent(v5, 0LL, 0LL);
      }
    }
  }
  else if ( *(_DWORD *)(Context + 188) != 1 || (*(_BYTE *)(Context + 145) & 1) != 0 )
  {
    if ( PoRequestPowerIrp(
           *(PDEVICE_OBJECT *)(Context + 8),
           2u,
           (POWER_STATE)1,
           (PREQUEST_POWER_COMPLETE)RaidUnitDeviceStackPowerUpCompletion,
           (PVOID)Context,
           0LL) == 259 )
    {
      *(_BYTE *)(Context + 144) |= 0x80u;
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      _InterlockedExchange((volatile __int32 *)(Context + 1456), 0);
      return;
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    if ( _InterlockedCompareExchange((volatile signed __int32 *)(*(_QWORD *)(Context + 1440) + 36LL), 0, 1) )
      RaidUnitPoFxIdleComponent(Context, 0, 0, 0LL);
  }
  else
  {
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
  PoFxReportDevicePoweredOn(**(_QWORD **)(Context + 1440), v3, v4);
  if ( StorEtwLoggingEnabled )
  {
    if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x100000) != 0 )
      Template_pqcccq(
        *(_QWORD *)(Context + 24),
        (unsigned int)&EventUnitPowerRequiredStop,
        v7,
        **(_QWORD **)(Context + 1440),
        *(_DWORD *)(*(_QWORD *)(Context + 24) + 56LL),
        *(_BYTE *)(Context + 88),
        *(_BYTE *)(Context + 89),
        *(_BYTE *)(Context + 90),
        0);
  }
}
