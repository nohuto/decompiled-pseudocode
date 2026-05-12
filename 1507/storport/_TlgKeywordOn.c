/*
 * XREFs of _TlgKeywordOn @ 0x1C000F6DC
 * Callers:
 *     RaUnitDeviceUsageNotificationIrp @ 0x1C000B288 (RaUnitDeviceUsageNotificationIrp.c)
 *     RaUnitTelemetryIdIoctl @ 0x1C000F8A0 (RaUnitTelemetryIdIoctl.c)
 *     RaidAdapterCompleteInitialization @ 0x1C000FE34 (RaidAdapterCompleteInitialization.c)
 *     RaidAdapterSetMaxOperationalPower @ 0x1C002ABF4 (RaidAdapterSetMaxOperationalPower.c)
 *     RaidRegisterForRuntimePowerManagement @ 0x1C002AEEC (RaidRegisterForRuntimePowerManagement.c)
 *     RaUnitStartResetIo @ 0x1C00315DC (RaUnitStartResetIo.c)
 *     RaidUnitCompleteResetRequest @ 0x1C0032710 (RaidUnitCompleteResetRequest.c)
 *     StorpCSEntryTelemetry @ 0x1C0036564 (StorpCSEntryTelemetry.c)
 *     StorpCSExitTelemetry @ 0x1C0036934 (StorpCSExitTelemetry.c)
 *     StorpLogPerAdapterStatistics @ 0x1C0037034 (StorpLogPerAdapterStatistics.c)
 *     StorpLogPhysicalTopologyInfo @ 0x1C00375D4 (StorpLogPhysicalTopologyInfo.c)
 *     StorpLogRegisterAdapterPerfStates @ 0x1C0037B58 (StorpLogRegisterAdapterPerfStates.c)
 *     StorpTelemetrySendAdaptiveIdleCounters @ 0x1C0038368 (StorpTelemetrySendAdaptiveIdleCounters.c)
 *     StorpTelemetrySendUnitErrorData @ 0x1C0038584 (StorpTelemetrySendUnitErrorData.c)
 *     StorpTelemetrySendUnitPerfData @ 0x1C003896C (StorpTelemetrySendUnitPerfData.c)
 *     StorpTelemetrySendUnitSmartAttributes @ 0x1C0038FE0 (StorpTelemetrySendUnitSmartAttributes.c)
 *     StorpRegisterTraceLogging @ 0x1C004C914 (StorpRegisterTraceLogging.c)
 *     RaidInitializeAdapter @ 0x1C004DBB8 (RaidInitializeAdapter.c)
 *     RaidUnitGetDeviceParameters @ 0x1C004F668 (RaidUnitGetDeviceParameters.c)
 *     RaidAdapterSurpriseRemovalIrp @ 0x1C0053420 (RaidAdapterSurpriseRemovalIrp.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall TlgKeywordOn(TraceLoggingHProvider hProvider, ULONGLONG keyword)
{
  BOOLEAN v2; // r8

  v2 = 0;
  if ( !keyword || (keyword & qword_1C0044060) != 0 && (keyword & qword_1C0044068) == qword_1C0044068 )
    return 1;
  return v2;
}
