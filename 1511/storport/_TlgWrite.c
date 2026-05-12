/*
 * XREFs of _TlgWrite @ 0x1C0014C54
 * Callers:
 *     RaUnitDeviceUsageNotificationIrp @ 0x1C000D4F0 (RaUnitDeviceUsageNotificationIrp.c)
 *     RaUnitTelemetryIdIoctl @ 0x1C0011B48 (RaUnitTelemetryIdIoctl.c)
 *     RaidAdapterCompleteInitialization @ 0x1C0012168 (RaidAdapterCompleteInitialization.c)
 *     RaidAdapterResetBus @ 0x1C002492C (RaidAdapterResetBus.c)
 *     RaidAdapterSetMaxOperationalPower @ 0x1C002CBB4 (RaidAdapterSetMaxOperationalPower.c)
 *     RaidRegisterForRuntimePowerManagement @ 0x1C002CEAC (RaidRegisterForRuntimePowerManagement.c)
 *     RaUnitStartResetIo @ 0x1C0032E44 (RaUnitStartResetIo.c)
 *     RaidUnitCompleteResetRequest @ 0x1C0033F70 (RaidUnitCompleteResetRequest.c)
 *     RaidUnitResetTarget @ 0x1C0034E70 (RaidUnitResetTarget.c)
 *     RaidUnitResetUnit @ 0x1C003511C (RaidUnitResetUnit.c)
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
  return EtwWriteTransfer(qword_1C0048050, &EventDescriptor, 0LL, 0LL, cData, pData);
}
