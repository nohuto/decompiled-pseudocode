/*
 * XREFs of RaidUnitCheckAndAcquirePoFx @ 0x1C000F038
 * Callers:
 *     RaidStartIoPacket @ 0x1C0001C90 (RaidStartIoPacket.c)
 *     RaidUnitCompleteRequest @ 0x1C0002480 (RaidUnitCompleteRequest.c)
 *     StorPortExtendedFunction @ 0x1C0005260 (StorPortExtendedFunction.c)
 *     RaidUnitProcessSetDevicePowerIrpComplete @ 0x1C000695C (RaidUnitProcessSetDevicePowerIrpComplete.c)
 *     StorUpdateCrashDumpPowerReady @ 0x1C0006AB4 (StorUpdateCrashDumpPowerReady.c)
 *     RaUnitScsiGetDumpPointersIoctl @ 0x1C000B640 (RaUnitScsiGetDumpPointersIoctl.c)
 *     RaUnitRemoveFromPendingList @ 0x1C000ED80 (RaUnitRemoveFromPendingList.c)
 *     RaidUnitPoFxIdleComponent @ 0x1C000EEC4 (RaidUnitPoFxIdleComponent.c)
 *     RaidUnitPoFxActivateComponent @ 0x1C000EFC8 (RaidUnitPoFxActivateComponent.c)
 *     RaidUnitPoFxIdleComponentFromMiniport @ 0x1C0024A58 (RaidUnitPoFxIdleComponentFromMiniport.c)
 *     RaidUnitPoFxActivateComponentFromMiniport @ 0x1C0027258 (RaidUnitPoFxActivateComponentFromMiniport.c)
 *     RaidUnitAdaptiveIdleTimeout @ 0x1C002B5DC (RaidUnitAdaptiveIdleTimeout.c)
 *     RaidUnitCancelWaitWakeIrp @ 0x1C002B784 (RaidUnitCancelWaitWakeIrp.c)
 *     RaidUnitEndMaintenanceTime @ 0x1C002B840 (RaidUnitEndMaintenanceTime.c)
 *     RaidUnitIoCoalescingCallback @ 0x1C002B950 (RaidUnitIoCoalescingCallback.c)
 *     RaidUnitMaintenanceTime @ 0x1C002B9DC (RaidUnitMaintenanceTime.c)
 *     RaidUnitPowerSettingCallback @ 0x1C002BC10 (RaidUnitPowerSettingCallback.c)
 *     StorPortUnitActiveConditionStep1 @ 0x1C002C990 (StorPortUnitActiveConditionStep1.c)
 *     StorPortUnitFlushActivePendingRequestQueue @ 0x1C002CB00 (StorPortUnitFlushActivePendingRequestQueue.c)
 *     StorPortUnitIdleCondition @ 0x1C002CBF0 (StorPortUnitIdleCondition.c)
 *     StorPortUnitIdleState @ 0x1C002CD30 (StorPortUnitIdleState.c)
 *     StorPortUnitPoFxD0Completion @ 0x1C002D058 (StorPortUnitPoFxD0Completion.c)
 *     StorPortUnitPoFxD3Completion @ 0x1C002D140 (StorPortUnitPoFxD3Completion.c)
 *     StorPortUnitPoFxWaitWakeCompletion @ 0x1C002D1E0 (StorPortUnitPoFxWaitWakeCompletion.c)
 *     StorPortUnitPowerNotRequiredStep1 @ 0x1C002D2A0 (StorPortUnitPowerNotRequiredStep1.c)
 *     StorPortUnitPowerRequiredStep1 @ 0x1C002D5C0 (StorPortUnitPowerRequiredStep1.c)
 *     RaUnitPowerCapIoctl @ 0x1C0031178 (RaUnitPowerCapIoctl.c)
 *     RaUnitStoragePowerActive @ 0x1C00318F8 (RaUnitStoragePowerActive.c)
 *     RaUnitStoragePowerIdle @ 0x1C0031950 (RaUnitStoragePowerIdle.c)
 *     RaidUnitPoFxActivateComponentFromIoctl @ 0x1C00330A0 (RaidUnitPoFxActivateComponentFromIoctl.c)
 *     RaidUnitPoFxIdleComponentFromIoctl @ 0x1C0033100 (RaidUnitPoFxIdleComponentFromIoctl.c)
 *     RaidUnitSubmitResetRequest @ 0x1C0034010 (RaidUnitSubmitResetRequest.c)
 *     StorpCSEntryTelemetry @ 0x1C0036564 (StorpCSEntryTelemetry.c)
 *     StorpCSExitTelemetry @ 0x1C0036934 (StorpCSExitTelemetry.c)
 *     StorpTelemetrySendAdaptiveIdleCounters @ 0x1C0038368 (StorpTelemetrySendAdaptiveIdleCounters.c)
 *     RaUnitRegisterForIdleDetection @ 0x1C004D334 (RaUnitRegisterForIdleDetection.c)
 *     RaUnitStorageQueryDevicePowerPropertyIoctl @ 0x1C004FAD8 (RaUnitStorageQueryDevicePowerPropertyIoctl.c)
 * Callees:
 *     <none>
 */

BOOLEAN __fastcall RaidUnitCheckAndAcquirePoFx(__int64 a1)
{
  char v1; // dl

  v1 = 0;
  if ( *(char *)(a1 + 145) < 0 )
    return ExAcquireRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1432));
  return v1;
}
