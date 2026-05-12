/*
 * XREFs of _TlgWrite @ 0x1C000F63C
 * Callers:
 *     RaUnitDeviceUsageNotificationIrp @ 0x1C000B288 (RaUnitDeviceUsageNotificationIrp.c)
 *     RaUnitTelemetryIdIoctl @ 0x1C000F8A0 (RaUnitTelemetryIdIoctl.c)
 *     RaidAdapterCompleteInitialization @ 0x1C000FE34 (RaidAdapterCompleteInitialization.c)
 *     RaidAdapterResetBus @ 0x1C00223E8 (RaidAdapterResetBus.c)
 *     RaidAdapterSetMaxOperationalPower @ 0x1C002ABF4 (RaidAdapterSetMaxOperationalPower.c)
 *     RaidRegisterForRuntimePowerManagement @ 0x1C002AEEC (RaidRegisterForRuntimePowerManagement.c)
 *     RaUnitStartResetIo @ 0x1C00315DC (RaUnitStartResetIo.c)
 *     RaidUnitCompleteResetRequest @ 0x1C0032710 (RaidUnitCompleteResetRequest.c)
 *     RaidUnitResetTarget @ 0x1C003346C (RaidUnitResetTarget.c)
 *     RaidUnitResetUnit @ 0x1C00336F4 (RaidUnitResetUnit.c)
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
  return EtwWriteTransfer(qword_1C0044070, &EventDescriptor, 0LL, 0LL, cData, pData);
}
