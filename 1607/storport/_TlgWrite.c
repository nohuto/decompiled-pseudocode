/*
 * XREFs of _TlgWrite @ 0x1C0018D00
 * Callers:
 *     RaidRegisterForRuntimePowerManagement @ 0x1C000EF80 (RaidRegisterForRuntimePowerManagement.c)
 *     RaUnitDeviceUsageNotificationIrp @ 0x1C0011168 (RaUnitDeviceUsageNotificationIrp.c)
 *     RaUnitTelemetryIdIoctl @ 0x1C0014C94 (RaUnitTelemetryIdIoctl.c)
 *     RaidAdapterCompleteInitialization @ 0x1C0015260 (RaidAdapterCompleteInitialization.c)
 *     RaidAdapterResetBus @ 0x1C0027CB0 (RaidAdapterResetBus.c)
 *     RaidAdapterSetMaxOperationalPower @ 0x1C003090C (RaidAdapterSetMaxOperationalPower.c)
 *     RaUnitStartResetIo @ 0x1C0035FD4 (RaUnitStartResetIo.c)
 *     RaidUnitCompleteResetRequest @ 0x1C0037150 (RaidUnitCompleteResetRequest.c)
 *     RaidUnitResetTarget @ 0x1C0038074 (RaidUnitResetTarget.c)
 *     RaidUnitResetUnit @ 0x1C0038320 (RaidUnitResetUnit.c)
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

TLG_STATUS __stdcall TlgWrite(
        TraceLoggingHProvider hProvider,
        const void *pEventMetadata,
        LPCGUID pActivityId,
        LPCGUID pRelatedActivityId,
        UINT32 cData,
        EVENT_DATA_DESCRIPTOR *pData)
{
  unsigned int v6; // ecx
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+30h] [rbp-18h] BYREF

  *(_DWORD *)&EventDescriptor.Id = ((_DWORD)pEventMetadata - (unsigned int)&TraceLoggingMetadata) | (*(unsigned __int8 *)pEventMetadata << 24);
  *(_DWORD *)&EventDescriptor.Level = *(unsigned __int16 *)((char *)pEventMetadata + 1);
  EventDescriptor.Keyword = *(_QWORD *)((char *)pEventMetadata + 3);
  pData->Ptr = (unsigned __int64)EventInformation;
  v6 = *(unsigned __int16 *)EventInformation;
  pData[1].Ptr = (unsigned __int64)pEventMetadata + 11;
  pData->Size = v6;
  pData->Reserved = 2;
  pData[1].Size = *(unsigned __int16 *)((char *)pEventMetadata + 11);
  pData[1].Reserved = 1;
  return EtwWriteTransfer(qword_1C004F030, &EventDescriptor, 0LL, 0LL, cData, pData);
}
