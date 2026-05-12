/*
 * XREFs of RaidUnitCheckAndAcquirePoFx @ 0x1C0011408
 * Callers:
 *     RaidUnitCompleteRequest @ 0x1C00016A0 (RaidUnitCompleteRequest.c)
 *     RaidStartIoPacket @ 0x1C00037C0 (RaidStartIoPacket.c)
 *     StorPortExtendedFunction @ 0x1C0006190 (StorPortExtendedFunction.c)
 *     RaidUnitProcessSetDevicePowerIrpComplete @ 0x1C0008688 (RaidUnitProcessSetDevicePowerIrpComplete.c)
 *     StorUpdateCrashDumpPowerReady @ 0x1C0008808 (StorUpdateCrashDumpPowerReady.c)
 *     RaUnitScsiGetDumpPointersIoctl @ 0x1C000D8A8 (RaUnitScsiGetDumpPointersIoctl.c)
 *     RaUnitRemoveFromPendingList @ 0x1C001109C (RaUnitRemoveFromPendingList.c)
 *     RaidUnitPoFxIdleComponent @ 0x1C0011294 (RaidUnitPoFxIdleComponent.c)
 *     RaidUnitPoFxActivateComponent @ 0x1C0011398 (RaidUnitPoFxActivateComponent.c)
 *     StorPortUnitIdleCondition @ 0x1C00156B0 (StorPortUnitIdleCondition.c)
 *     RaidUnitPoFxIdleComponentFromMiniport @ 0x1C0026EF8 (RaidUnitPoFxIdleComponentFromMiniport.c)
 *     RaidUnitPoFxActivateComponentFromMiniport @ 0x1C00294FC (RaidUnitPoFxActivateComponentFromMiniport.c)
 *     RaidUnitAdaptiveIdleTimeout @ 0x1C002D59C (RaidUnitAdaptiveIdleTimeout.c)
 *     RaidUnitCancelWaitWakeIrp @ 0x1C002D748 (RaidUnitCancelWaitWakeIrp.c)
 *     RaidUnitEndMaintenanceTime @ 0x1C002D7B0 (RaidUnitEndMaintenanceTime.c)
 *     RaidUnitIoCoalescingCallback @ 0x1C002D890 (RaidUnitIoCoalescingCallback.c)
 *     RaidUnitMaintenanceTime @ 0x1C002D91C (RaidUnitMaintenanceTime.c)
 *     RaidUnitPowerSettingCallback @ 0x1C002DA80 (RaidUnitPowerSettingCallback.c)
 *     StorPortUnitActiveConditionStep1 @ 0x1C002E700 (StorPortUnitActiveConditionStep1.c)
 *     StorPortUnitFlushActivePendingRequestQueue @ 0x1C002E870 (StorPortUnitFlushActivePendingRequestQueue.c)
 *     StorPortUnitIdleState @ 0x1C002E960 (StorPortUnitIdleState.c)
 *     StorPortUnitPoFxD0Completion @ 0x1C002EC88 (StorPortUnitPoFxD0Completion.c)
 *     StorPortUnitPoFxD3Completion @ 0x1C002ED70 (StorPortUnitPoFxD3Completion.c)
 *     StorPortUnitPoFxWaitWakeCompletion @ 0x1C002EE10 (StorPortUnitPoFxWaitWakeCompletion.c)
 *     StorPortUnitPowerNotRequiredStep1 @ 0x1C002EED0 (StorPortUnitPowerNotRequiredStep1.c)
 *     StorPortUnitPowerRequiredStep1 @ 0x1C002F1F0 (StorPortUnitPowerRequiredStep1.c)
 *     RaUnitPowerCapIoctl @ 0x1C003240C (RaUnitPowerCapIoctl.c)
 *     RaUnitStoragePowerActive @ 0x1C0033160 (RaUnitStoragePowerActive.c)
 *     RaUnitStoragePowerIdle @ 0x1C00331B8 (RaUnitStoragePowerIdle.c)
 *     RaidUnitPoFxActivateComponentFromIoctl @ 0x1C0034A0C (RaidUnitPoFxActivateComponentFromIoctl.c)
 *     RaidUnitPoFxIdleComponentFromIoctl @ 0x1C0034A6C (RaidUnitPoFxIdleComponentFromIoctl.c)
 *     RaidUnitSubmitResetRequest @ 0x1C0035A50 (RaidUnitSubmitResetRequest.c)
 *     StorpCSEntryTelemetry @ 0x1C00383C4 (StorpCSEntryTelemetry.c)
 *     StorpCSExitTelemetry @ 0x1C0038794 (StorpCSExitTelemetry.c)
 *     StorpTelemetrySendAdaptiveIdleCounters @ 0x1C003A5BC (StorpTelemetrySendAdaptiveIdleCounters.c)
 *     RaUnitRegisterForIdleDetection @ 0x1C0052234 (RaUnitRegisterForIdleDetection.c)
 *     RaUnitStorageQueryDevicePowerPropertyIoctl @ 0x1C0053838 (RaUnitStorageQueryDevicePowerPropertyIoctl.c)
 * Callees:
 *     <none>
 */

BOOLEAN __fastcall RaidUnitCheckAndAcquirePoFx(__int64 a1)
{
  char v1; // dl

  v1 = 0;
  if ( *(char *)(a1 + 145) < 0 )
    return ExAcquireRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1448));
  return v1;
}
