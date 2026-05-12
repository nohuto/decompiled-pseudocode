/*
 * XREFs of _TlgKeywordOn @ 0x1C0011B18
 * Callers:
 *     RaUnitDeviceUsageNotificationIrp @ 0x1C000D4F0 (RaUnitDeviceUsageNotificationIrp.c)
 *     RaUnitTelemetryIdIoctl @ 0x1C0011B48 (RaUnitTelemetryIdIoctl.c)
 *     RaidAdapterCompleteInitialization @ 0x1C0012168 (RaidAdapterCompleteInitialization.c)
 *     RaidAdapterResetBus @ 0x1C002492C (RaidAdapterResetBus.c)
 *     RaidAdapterSetMaxOperationalPower @ 0x1C002CBB4 (RaidAdapterSetMaxOperationalPower.c)
 *     RaidRegisterForRuntimePowerManagement @ 0x1C002CEAC (RaidRegisterForRuntimePowerManagement.c)
 *     RaUnitStartResetIo @ 0x1C0032E44 (RaUnitStartResetIo.c)
 *     RaidUnitCompleteResetRequest @ 0x1C0033F70 (RaidUnitCompleteResetRequest.c)
 *     StorpCSEntryTelemetry @ 0x1C00383C4 (StorpCSEntryTelemetry.c)
 *     StorpCSExitTelemetry @ 0x1C0038794 (StorpCSExitTelemetry.c)
 *     StorpLogPerAdapterStatistics @ 0x1C0038E94 (StorpLogPerAdapterStatistics.c)
 *     StorpLogPhysicalTopologyInfo @ 0x1C0039458 (StorpLogPhysicalTopologyInfo.c)
 *     StorpLogRegisterAdapterPerfStates @ 0x1C00399DC (StorpLogRegisterAdapterPerfStates.c)
 *     StorpTelemetryMarkUnitResponsive @ 0x1C003A2B8 (StorpTelemetryMarkUnitResponsive.c)
 *     StorpTelemetryMarkUnitUnresponsive @ 0x1C003A420 (StorpTelemetryMarkUnitUnresponsive.c)
 *     StorpTelemetrySendAdaptiveIdleCounters @ 0x1C003A5BC (StorpTelemetrySendAdaptiveIdleCounters.c)
 *     StorpTelemetrySendUnitErrorData @ 0x1C003A7D8 (StorpTelemetrySendUnitErrorData.c)
 *     StorpTelemetrySendUnitPerfData @ 0x1C003AC14 (StorpTelemetrySendUnitPerfData.c)
 *     StorpTelemetrySendUnitQos @ 0x1C003B2E0 (StorpTelemetrySendUnitQos.c)
 *     StorpTelemetrySendUnitSmartAttributes @ 0x1C003B6BC (StorpTelemetrySendUnitSmartAttributes.c)
 *     RaidInitializeAdapter @ 0x1C0051794 (RaidInitializeAdapter.c)
 *     RaidUnitGetDeviceParameters @ 0x1C00533C8 (RaidUnitGetDeviceParameters.c)
 *     RaidAdapterSurpriseRemovalIrp @ 0x1C0057390 (RaidAdapterSurpriseRemovalIrp.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall TlgKeywordOn(TraceLoggingHProvider hProvider, ULONGLONG keyword)
{
  BOOLEAN v2; // r8

  v2 = 0;
  if ( !keyword || (keyword & qword_1C0048040) != 0 && (keyword & qword_1C0048048) == qword_1C0048048 )
    return 1;
  return v2;
}
