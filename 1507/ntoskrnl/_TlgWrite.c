/*
 * XREFs of _TlgWrite @ 0x1400EFEB0
 * Callers:
 *     HvlpEnterIumSecureMode @ 0x1401289D4 (HvlpEnterIumSecureMode.c)
 *     PopTraceEsState @ 0x1401480C0 (PopTraceEsState.c)
 *     PopTraceThermalZonePassiveHistogram @ 0x140148454 (PopTraceThermalZonePassiveHistogram.c)
 *     PopTraceEsSetting @ 0x14016FEA0 (PopTraceEsSetting.c)
 *     SetFailureLocation @ 0x1401DE608 (SetFailureLocation.c)
 *     PopTraceCr3Tripped @ 0x14023EF40 (PopTraceCr3Tripped.c)
 *     PopTracePowerReconfig @ 0x14023EFB4 (PopTracePowerReconfig.c)
 *     PopTraceThermalRequestPassiveHistogram @ 0x14023F0BC (PopTraceThermalRequestPassiveHistogram.c)
 *     PopTraceThermalStandbyComplete @ 0x14023F27C (PopTraceThermalStandbyComplete.c)
 *     PopTraceThermalStandbyInitiated @ 0x14023F348 (PopTraceThermalStandbyInitiated.c)
 *     EtwTraceSystemTimeChange @ 0x1403EFDA8 (EtwTraceSystemTimeChange.c)
 *     IopLiveDumpCaptureMemoryPages @ 0x1403FEC1C (IopLiveDumpCaptureMemoryPages.c)
 *     SeTokenCanImpersonate @ 0x1404798B0 (SeTokenCanImpersonate.c)
 *     HvLoadHive @ 0x1404AE98C (HvLoadHive.c)
 *     EtwTraceAppStateChange @ 0x1405075DC (EtwTraceAppStateChange.c)
 *     EtwTraceProcess @ 0x14050C208 (EtwTraceProcess.c)
 *     PnpTraceSetDevNodeProblem @ 0x140538B60 (PnpTraceSetDevNodeProblem.c)
 *     HvSwapLogFiles @ 0x1405560A0 (HvSwapLogFiles.c)
 *     PopBatteryApplyCompositeState @ 0x14056B6B4 (PopBatteryApplyCompositeState.c)
 *     PnpCompareInterruptInformation @ 0x140582570 (PnpCompareInterruptInformation.c)
 *     PopTransitionTelemetryOsState @ 0x1405825E0 (PopTransitionTelemetryOsState.c)
 *     PnpTraceClearDevNodeProblem @ 0x14058DECC (PnpTraceClearDevNodeProblem.c)
 *     IoCaptureLiveDump @ 0x140676C1C (IoCaptureLiveDump.c)
 *     IoWriteDeferredLiveDumpData @ 0x1406771E4 (IoWriteDeferredLiveDumpData.c)
 *     IopLiveDumpAllocAndInitResources @ 0x140677378 (IopLiveDumpAllocAndInitResources.c)
 *     PnpTraceDeviceConfig @ 0x1406939B4 (PnpTraceDeviceConfig.c)
 *     PnpTraceDeviceRemoveProcessVeto @ 0x140693B48 (PnpTraceDeviceRemoveProcessVeto.c)
 *     PopEstimateChargeTime @ 0x1406B70DC (PopEstimateChargeTime.c)
 *     PopSqmFanEnumeration @ 0x1406BE998 (PopSqmFanEnumeration.c)
 *     PopSqmThermalCriticalEvent @ 0x1406BEA0C (PopSqmThermalCriticalEvent.c)
 *     PopSqmThermalUsermodeEvent @ 0x1406BEBC8 (PopSqmThermalUsermodeEvent.c)
 *     PopSqmThermalZoneEnumeration @ 0x1406BECDC (PopSqmThermalZoneEnumeration.c)
 *     EtwTimLogRedirectionTrustPolicy @ 0x1406E2BC0 (EtwTimLogRedirectionTrustPolicy.c)
 *     EtwpTraceSystemShutdown @ 0x1406E56E0 (EtwpTraceSystemShutdown.c)
 *     EtwpTraceSystemInitialization @ 0x1407E549C (EtwpTraceSystemInitialization.c)
 *     HvlpIumInitializeTelemetry @ 0x1407F922C (HvlpIumInitializeTelemetry.c)
 * Callees:
 *     EtwWriteTransfer @ 0x1400EFF50 (EtwWriteTransfer.c)
 */

TLG_STATUS __stdcall TlgWrite(
        TraceLoggingHProvider hProvider,
        const void *pEventMetadata,
        LPCGUID pActivityId,
        LPCGUID pRelatedActivityId,
        UINT32 cData,
        EVENT_DATA_DESCRIPTOR *pData)
{
  ULONG v7; // ecx
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+30h] [rbp-18h] BYREF

  *(_DWORD *)&EventDescriptor.Id = ((_DWORD)pEventMetadata - (unsigned int)&TraceLoggingMetadata) | (*(unsigned __int8 *)pEventMetadata << 24);
  *(_DWORD *)&EventDescriptor.Level = *(unsigned __int16 *)((char *)pEventMetadata + 1);
  EventDescriptor.Keyword = *(_QWORD *)((char *)pEventMetadata + 3);
  pData->Ptr = (ULONGLONG)hProvider->ProviderMetadataPtr;
  v7 = *hProvider->ProviderMetadataPtr;
  pData[1].Ptr = (ULONGLONG)pEventMetadata + 11;
  pData->Size = v7;
  pData->Reserved = 2;
  pData[1].Size = *(unsigned __int16 *)((char *)pEventMetadata + 11);
  pData[1].Reserved = 1;
  return EtwWriteTransfer(hProvider->RegHandle, &EventDescriptor, pActivityId, pRelatedActivityId, cData, pData);
}
