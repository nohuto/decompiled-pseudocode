/*
 * XREFs of _TlgWrite @ 0x140092474
 * Callers:
 *     HvlpEnterIumSecureMode @ 0x1400EB69C (HvlpEnterIumSecureMode.c)
 *     PopTraceEsState @ 0x14011A04C (PopTraceEsState.c)
 *     PopTraceThermalZonePassiveHistogram @ 0x14011A180 (PopTraceThermalZonePassiveHistogram.c)
 *     PopTraceEsSetting @ 0x140142208 (PopTraceEsSetting.c)
 *     SetFailureLocation @ 0x1401A9C98 (SetFailureLocation.c)
 *     CmpLogTransactionAbortedByName @ 0x1401AA574 (CmpLogTransactionAbortedByName.c)
 *     HvpLogIneligibleLogHeader @ 0x1401AB1EC (HvpLogIneligibleLogHeader.c)
 *     HvpLogInvalidLogHeader @ 0x1401AB28C (HvpLogInvalidLogHeader.c)
 *     HvpLogUnreadableLog @ 0x1401AB3F4 (HvpLogUnreadableLog.c)
 *     MiLogContinueTrim @ 0x1401D7C40 (MiLogContinueTrim.c)
 *     PopTraceCr3Mitigated @ 0x1401F0BE4 (PopTraceCr3Mitigated.c)
 *     PopTraceCr3Tripped @ 0x1401F0C78 (PopTraceCr3Tripped.c)
 *     PopTracePowerReconfig @ 0x1401F0D0C (PopTracePowerReconfig.c)
 *     PopTraceThermalRequestPassiveHistogram @ 0x1401F0E14 (PopTraceThermalRequestPassiveHistogram.c)
 *     PopTraceThermalStandbyComplete @ 0x1401F0FD4 (PopTraceThermalStandbyComplete.c)
 *     PopTraceThermalStandbyInitiated @ 0x1401F10A0 (PopTraceThermalStandbyInitiated.c)
 *     EtwTraceSystemTimeChange @ 0x14039DA64 (EtwTraceSystemTimeChange.c)
 *     IopLiveDumpCaptureMemoryPages @ 0x1403AE820 (IopLiveDumpCaptureMemoryPages.c)
 *     PopGetLockConsoleTimeoutUnsafe @ 0x1403B56AC (PopGetLockConsoleTimeoutUnsafe.c)
 *     HvLoadHive @ 0x1403D3A54 (HvLoadHive.c)
 *     CmpInitHiveFromFile @ 0x1403DCB84 (CmpInitHiveFromFile.c)
 *     SeTokenCanImpersonate @ 0x140426A30 (SeTokenCanImpersonate.c)
 *     EtwTraceProcess @ 0x1404497E4 (EtwTraceProcess.c)
 *     EtwTraceAppStateChange @ 0x14044A950 (EtwTraceAppStateChange.c)
 *     CmpFlushHive @ 0x14044B9C0 (CmpFlushHive.c)
 *     PnpTraceSetDevNodeProblem @ 0x1404A0CC8 (PnpTraceSetDevNodeProblem.c)
 *     CmpLogFlushPhaseEnd @ 0x1404B6844 (CmpLogFlushPhaseEnd.c)
 *     CmpLogFlushPhaseStart @ 0x1404B77AC (CmpLogFlushPhaseStart.c)
 *     HvSwapLogFiles @ 0x1404BF75C (HvSwapLogFiles.c)
 *     PopBatteryApplyCompositeState @ 0x1404F9820 (PopBatteryApplyCompositeState.c)
 *     PnpCompareInterruptInformation @ 0x14050B294 (PnpCompareInterruptInformation.c)
 *     PopTransitionTelemetryOsState @ 0x14050BE6C (PopTransitionTelemetryOsState.c)
 *     PnpTraceDeviceConfig @ 0x140513818 (PnpTraceDeviceConfig.c)
 *     PnpTraceClearDevNodeProblem @ 0x140519F98 (PnpTraceClearDevNodeProblem.c)
 *     CmpLogFailureToGetFileSize @ 0x1405E7624 (CmpLogFailureToGetFileSize.c)
 *     HvpGetLogHeader @ 0x1405EC47C (HvpGetLogHeader.c)
 *     IoCaptureLiveDump @ 0x1405FC30C (IoCaptureLiveDump.c)
 *     IoWriteDeferredLiveDumpData @ 0x1405FC8A4 (IoWriteDeferredLiveDumpData.c)
 *     IopLiveDumpAllocAndInitResources @ 0x1405FCA38 (IopLiveDumpAllocAndInitResources.c)
 *     PnpTraceDeviceRemovalForResetComplete @ 0x14061441C (PnpTraceDeviceRemovalForResetComplete.c)
 *     PnpTraceDeviceRemoveProcessVeto @ 0x1406145E4 (PnpTraceDeviceRemoveProcessVeto.c)
 *     PnpTraceDockDeviceEnumeration @ 0x1406146DC (PnpTraceDockDeviceEnumeration.c)
 *     PnpTraceQueryStopFailure @ 0x1406147B8 (PnpTraceQueryStopFailure.c)
 *     PnpTraceRebalanceResult @ 0x1406148CC (PnpTraceRebalanceResult.c)
 *     PnpTraceRequestDeviceRemovalForReset @ 0x140614AF0 (PnpTraceRequestDeviceRemovalForReset.c)
 *     PopEstimateChargeTime @ 0x14063727C (PopEstimateChargeTime.c)
 *     PopSqmFanEnumeration @ 0x14063E094 (PopSqmFanEnumeration.c)
 *     PopSqmThermalCriticalEvent @ 0x14063E108 (PopSqmThermalCriticalEvent.c)
 *     PopSqmThermalUsermodeEvent @ 0x14063E2F0 (PopSqmThermalUsermodeEvent.c)
 *     PopSqmThermalZoneEnumeration @ 0x14063E404 (PopSqmThermalZoneEnumeration.c)
 *     EtwpTraceSystemShutdown @ 0x1406625C8 (EtwpTraceSystemShutdown.c)
 *     EtwpTraceSystemInitialization @ 0x140755A0C (EtwpTraceSystemInitialization.c)
 *     HvlpIumInitializeTelemetry @ 0x140782AA8 (HvlpIumInitializeTelemetry.c)
 * Callees:
 *     EtwWriteTransfer @ 0x14009250C (EtwWriteTransfer.c)
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
