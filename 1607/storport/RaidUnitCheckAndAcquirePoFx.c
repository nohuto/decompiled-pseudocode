/*
 * XREFs of RaidUnitCheckAndAcquirePoFx @ 0x1C0003544
 * Callers:
 *     RaidUnitPoFxIdleComponent @ 0x1C0002F60 (RaidUnitPoFxIdleComponent.c)
 *     RaidUnitPoFxActivateComponent @ 0x1C0003308 (RaidUnitPoFxActivateComponent.c)
 *     StorPortUnitFlushActivePendingRequestQueue @ 0x1C00034EC (StorPortUnitFlushActivePendingRequestQueue.c)
 *     RaidStartIoPacket @ 0x1C0003FF0 (RaidStartIoPacket.c)
 *     RaidUnitCompleteRequest @ 0x1C0006180 (RaidUnitCompleteRequest.c)
 *     StorPortExtendedFunction @ 0x1C0007ED0 (StorPortExtendedFunction.c)
 *     RaidUnitProcessSetDevicePowerIrpComplete @ 0x1C000A660 (RaidUnitProcessSetDevicePowerIrpComplete.c)
 *     StorPortUnitPoFxD0Completion @ 0x1C000A834 (StorPortUnitPoFxD0Completion.c)
 *     RaidUnitCancelWaitWakeIrp @ 0x1C000A8CC (RaidUnitCancelWaitWakeIrp.c)
 *     RaUnitRemoveFromPendingList @ 0x1C000C928 (RaUnitRemoveFromPendingList.c)
 *     StorUpdateCrashDumpPowerReady @ 0x1C000F37C (StorUpdateCrashDumpPowerReady.c)
 *     RaUnitScsiGetDumpPointersIoctl @ 0x1C001162C (RaUnitScsiGetDumpPointersIoctl.c)
 *     RaidUnitPoFxIdleComponentFromMiniport @ 0x1C002A39C (RaidUnitPoFxIdleComponentFromMiniport.c)
 *     RaidUnitPoFxActivateComponentFromMiniport @ 0x1C002CEF4 (RaidUnitPoFxActivateComponentFromMiniport.c)
 *     RaidUnitAdaptiveIdleTimeout @ 0x1C0030DE0 (RaidUnitAdaptiveIdleTimeout.c)
 *     RaidUnitEndMaintenanceTime @ 0x1C0030F90 (RaidUnitEndMaintenanceTime.c)
 *     RaidUnitIoCoalescingCallback @ 0x1C0031070 (RaidUnitIoCoalescingCallback.c)
 *     RaidUnitMaintenanceTime @ 0x1C00310FC (RaidUnitMaintenanceTime.c)
 *     RaidUnitPowerSettingCallback @ 0x1C0031260 (RaidUnitPowerSettingCallback.c)
 *     StorPortUnitIdleState @ 0x1C0031BB0 (StorPortUnitIdleState.c)
 *     StorPortUnitPoFxD3Completion @ 0x1C0031EE0 (StorPortUnitPoFxD3Completion.c)
 *     StorPortUnitPoFxWaitWakeCompletion @ 0x1C0031F80 (StorPortUnitPoFxWaitWakeCompletion.c)
 *     StorPortUnitPowerNotRequiredStep1 @ 0x1C0032040 (StorPortUnitPowerNotRequiredStep1.c)
 *     StorPortUnitPowerRequiredStep1 @ 0x1C0032360 (StorPortUnitPowerRequiredStep1.c)
 *     RaUnitPowerCapIoctl @ 0x1C003557C (RaUnitPowerCapIoctl.c)
 *     RaUnitStoragePowerActive @ 0x1C00362F0 (RaUnitStoragePowerActive.c)
 *     RaUnitStoragePowerIdle @ 0x1C0036348 (RaUnitStoragePowerIdle.c)
 *     RaidUnitPoFxActivateComponentFromIoctl @ 0x1C0037C20 (RaidUnitPoFxActivateComponentFromIoctl.c)
 *     RaidUnitPoFxIdleComponentFromIoctl @ 0x1C0037C80 (RaidUnitPoFxIdleComponentFromIoctl.c)
 *     RaidUnitSubmitResetRequest @ 0x1C0038AA0 (RaidUnitSubmitResetRequest.c)
 *     StorpCSEntryTelemetry @ 0x1C003C108 (StorpCSEntryTelemetry.c)
 *     StorpCSExitTelemetry @ 0x1C003C4D8 (StorpCSExitTelemetry.c)
 *     StorpTelemetrySendAdaptiveIdleCounters @ 0x1C004005C (StorpTelemetrySendAdaptiveIdleCounters.c)
 *     RaUnitRegisterForIdleDetection @ 0x1C0058AB4 (RaUnitRegisterForIdleDetection.c)
 *     RaUnitStorageQueryDevicePowerPropertyIoctl @ 0x1C005C090 (RaUnitStorageQueryDevicePowerPropertyIoctl.c)
 * Callees:
 *     <none>
 */

BOOLEAN __fastcall RaidUnitCheckAndAcquirePoFx(__int64 a1)
{
  char v1; // dl

  v1 = 0;
  if ( *(char *)(a1 + 153) < 0 )
    return ExAcquireRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1448));
  return v1;
}
