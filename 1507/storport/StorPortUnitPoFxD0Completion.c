/*
 * XREFs of StorPortUnitPoFxD0Completion @ 0x1C002D058
 * Callers:
 *     RaidUnitProcessSetDevicePowerIrpComplete @ 0x1C000695C (RaidUnitProcessSetDevicePowerIrpComplete.c)
 * Callees:
 *     RaidUnitPoFxIdleComponent @ 0x1C000EEC4 (RaidUnitPoFxIdleComponent.c)
 *     RaidUnitCheckAndAcquirePoFx @ 0x1C000F038 (RaidUnitCheckAndAcquirePoFx.c)
 *     RaidUnitCancelWaitWakeIrp @ 0x1C002B784 (RaidUnitCancelWaitWakeIrp.c)
 *     Template_pqcccq @ 0x1C002D894 (Template_pqcccq.c)
 */

void __fastcall StorPortUnitPoFxD0Completion(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdx
  __int64 v6; // r8
  int v7; // r8d
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-28h] BYREF

  if ( RaidUnitCheckAndAcquirePoFx(a4) )
  {
    if ( _InterlockedCompareExchange((volatile signed __int32 *)(*(_QWORD *)(a4 + 1440) + 36LL), 0, 1) )
      RaidUnitPoFxIdleComponent(a4, 0, 0, 0LL);
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a4 + 32), &LockHandle);
    RaidUnitCancelWaitWakeIrp(a4);
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    PoFxReportDevicePoweredOn(**(_QWORD **)(a4 + 1440), v5, v6);
    if ( StorEtwLoggingEnabled )
    {
      if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x100000) != 0 )
        Template_pqcccq(
          *(_QWORD *)(a4 + 24),
          (unsigned int)&EventUnitPowerRequiredStop,
          v7,
          **(_QWORD **)(a4 + 1440),
          *(_DWORD *)(*(_QWORD *)(a4 + 24) + 56LL),
          *(_BYTE *)(a4 + 88),
          *(_BYTE *)(a4 + 89),
          *(_BYTE *)(a4 + 90),
          1);
    }
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a4 + 1432));
  }
}
