/*
 * XREFs of _TlgKeywordOn @ 0x1C0014C64
 * Callers:
 *     RaidRegisterForRuntimePowerManagement @ 0x1C000EF80 (RaidRegisterForRuntimePowerManagement.c)
 *     RaUnitDeviceUsageNotificationIrp @ 0x1C0011168 (RaUnitDeviceUsageNotificationIrp.c)
 *     RaUnitTelemetryIdIoctl @ 0x1C0014C94 (RaUnitTelemetryIdIoctl.c)
 *     RaidAdapterCompleteInitialization @ 0x1C0015260 (RaidAdapterCompleteInitialization.c)
 *     RaidAdapterResetBus @ 0x1C0027CB0 (RaidAdapterResetBus.c)
 *     RaidAdapterSetMaxOperationalPower @ 0x1C003090C (RaidAdapterSetMaxOperationalPower.c)
 *     RaUnitStartResetIo @ 0x1C0035FD4 (RaUnitStartResetIo.c)
 *     RaidUnitCompleteResetRequest @ 0x1C0037150 (RaidUnitCompleteResetRequest.c)
 *     StorpCSEntryTelemetry @ 0x1C003C108 (StorpCSEntryTelemetry.c)
 *     StorpCSExitTelemetry @ 0x1C003C4D8 (StorpCSExitTelemetry.c)
 *     StorpLogPerAdapterStatistics @ 0x1C003CC34 (StorpLogPerAdapterStatistics.c)
 *     StorpLogPhysicalTopologyInfo @ 0x1C003D238 (StorpLogPhysicalTopologyInfo.c)
 *     StorpLogRegisterAdapterPerfStates @ 0x1C003D7B0 (StorpLogRegisterAdapterPerfStates.c)
 *     StorpTelemetryLogUnitDeviceStatisticsCriticalData @ 0x1C003DBA4 (StorpTelemetryLogUnitDeviceStatisticsCriticalData.c)
 *     StorpTelemetryLogUnitDeviceStatisticsMeasures @ 0x1C003E0D8 (StorpTelemetryLogUnitDeviceStatisticsMeasures.c)
 *     StorpTelemetryLogUnitErrorDataCriticalData @ 0x1C003E604 (StorpTelemetryLogUnitErrorDataCriticalData.c)
 *     StorpTelemetryLogUnitErrorDataMeasures @ 0x1C003E888 (StorpTelemetryLogUnitErrorDataMeasures.c)
 *     StorpTelemetryLogUnitPerfDataCriticalData @ 0x1C003EB10 (StorpTelemetryLogUnitPerfDataCriticalData.c)
 *     StorpTelemetryLogUnitPerfDataMeasures @ 0x1C003EEA0 (StorpTelemetryLogUnitPerfDataMeasures.c)
 *     StorpTelemetryLogUnitQosDataMeasures @ 0x1C003F228 (StorpTelemetryLogUnitQosDataMeasures.c)
 *     StorpTelemetryLogUnitSmartAttributesCriticalData @ 0x1C003F548 (StorpTelemetryLogUnitSmartAttributesCriticalData.c)
 *     StorpTelemetryLogUnitSmartAttributesMeasures @ 0x1C003F948 (StorpTelemetryLogUnitSmartAttributesMeasures.c)
 *     StorpTelemetryMarkUnitResponsive @ 0x1C003FD58 (StorpTelemetryMarkUnitResponsive.c)
 *     StorpTelemetryMarkUnitUnresponsive @ 0x1C003FEC0 (StorpTelemetryMarkUnitUnresponsive.c)
 *     StorpTelemetrySendAdaptiveIdleCounters @ 0x1C004005C (StorpTelemetrySendAdaptiveIdleCounters.c)
 *     StorpTelemetrySendUnitNvmeHealthInfo @ 0x1C00408B4 (StorpTelemetrySendUnitNvmeHealthInfo.c)
 *     StorpTelemetrySendUnitPauseRequestCounters @ 0x1C0040DE4 (StorpTelemetrySendUnitPauseRequestCounters.c)
 *     RaidInitializeAdapter @ 0x1C00596D8 (RaidInitializeAdapter.c)
 *     RaidUnitGetDeviceParameters @ 0x1C005A2F4 (RaidUnitGetDeviceParameters.c)
 *     RaidAdapterSurpriseRemovalIrp @ 0x1C005E6F0 (RaidAdapterSurpriseRemovalIrp.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall TlgKeywordOn(TraceLoggingHProvider hProvider, ULONGLONG keyword)
{
  BOOLEAN v2; // r8

  v2 = 0;
  if ( !keyword || (keyword & qword_1C004F020) != 0 && (keyword & qword_1C004F028) == qword_1C004F028 )
    return 1;
  return v2;
}
