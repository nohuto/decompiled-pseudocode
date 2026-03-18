/*
 * XREFs of _TlgKeywordOn @ 0x1400EFFB0
 * Callers:
 *     MiProcessWorkingSets @ 0x140099DB0 (MiProcessWorkingSets.c)
 *     TraceLoggingProviderEnabled @ 0x1400EFF88 (TraceLoggingProviderEnabled.c)
 *     MmNotifyProcessInSwapTrigger @ 0x14010C878 (MmNotifyProcessInSwapTrigger.c)
 *     HvlpEnterIumSecureMode @ 0x1401289D4 (HvlpEnterIumSecureMode.c)
 *     MiLogTrimWs @ 0x14012F884 (MiLogTrimWs.c)
 *     PopTraceEsState @ 0x1401480C0 (PopTraceEsState.c)
 *     PopTraceThermalZonePassiveHistogram @ 0x140148454 (PopTraceThermalZonePassiveHistogram.c)
 *     PopTraceEsSetting @ 0x14016FEA0 (PopTraceEsSetting.c)
 *     SetFailureLocation @ 0x1401DE608 (SetFailureLocation.c)
 *     MiLogOutswappedProcessCommitReacquire @ 0x14020F294 (MiLogOutswappedProcessCommitReacquire.c)
 *     MiLogOutswappedProcessCommitRelease @ 0x14020F404 (MiLogOutswappedProcessCommitRelease.c)
 *     MiStoreLogFullPagefile @ 0x1402315CC (MiStoreLogFullPagefile.c)
 *     MiStoreLogNotCandidate @ 0x140231634 (MiStoreLogNotCandidate.c)
 *     MiStoreLogWriteCompleteFailure @ 0x1402316E8 (MiStoreLogWriteCompleteFailure.c)
 *     MiStoreLogWriteDisabled @ 0x140231778 (MiStoreLogWriteDisabled.c)
 *     MiStoreLogWriteIssueFailure @ 0x140231800 (MiStoreLogWriteIssueFailure.c)
 *     MiStoreLogWriteIssueRetry @ 0x14023193C (MiStoreLogWriteIssueRetry.c)
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
 *     MiLogStrongCodeDriverLoadFailure @ 0x1406A0F7C (MiLogStrongCodeDriverLoadFailure.c)
 *     PopEstimateChargeTime @ 0x1406B70DC (PopEstimateChargeTime.c)
 *     PopSqmFanEnumeration @ 0x1406BE998 (PopSqmFanEnumeration.c)
 *     PopSqmThermalCriticalEvent @ 0x1406BEA0C (PopSqmThermalCriticalEvent.c)
 *     PopSqmThermalUsermodeEvent @ 0x1406BEBC8 (PopSqmThermalUsermodeEvent.c)
 *     PopSqmThermalZoneEnumeration @ 0x1406BECDC (PopSqmThermalZoneEnumeration.c)
 *     EtwTimLogRedirectionTrustPolicy @ 0x1406E2BC0 (EtwTimLogRedirectionTrustPolicy.c)
 *     EtwpTraceSystemShutdown @ 0x1406E56E0 (EtwpTraceSystemShutdown.c)
 *     MiFlushStrongCodeDriverLoadFailures @ 0x1407C9518 (MiFlushStrongCodeDriverLoadFailures.c)
 *     EtwpTraceSystemInitialization @ 0x1407E549C (EtwpTraceSystemInitialization.c)
 *     HvlpIumInitializeTelemetry @ 0x1407F922C (HvlpIumInitializeTelemetry.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall TlgKeywordOn(TraceLoggingHProvider hProvider, ULONGLONG keyword)
{
  BOOLEAN v2; // r8

  v2 = 0;
  if ( !keyword || (keyword & hProvider->KeywordAny) != 0 && (keyword & hProvider->KeywordAll) == hProvider->KeywordAll )
    return 1;
  return v2;
}
