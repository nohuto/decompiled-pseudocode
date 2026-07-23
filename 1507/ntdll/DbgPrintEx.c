/*
 * XREFs of DbgPrintEx @ 0x18000F9B0
 * Callers:
 *     TpCheckTerminateWorker @ 0x18000A000 (TpCheckTerminateWorker.c)
 *     LdrpLoadResourceFromAlternativeModule @ 0x18001B314 (LdrpLoadResourceFromAlternativeModule.c)
 *     RtlDeactivateActivationContextUnsafeFast @ 0x180023E00 (RtlDeactivateActivationContextUnsafeFast.c)
 *     RtlFindActivationContextSectionGuid @ 0x180024380 (RtlFindActivationContextSectionGuid.c)
 *     sxsisol_SearchActCtxForDllName @ 0x180024D44 (sxsisol_SearchActCtxForDllName.c)
 *     RtlFindActivationContextSectionString @ 0x180025160 (RtlFindActivationContextSectionString.c)
 *     RtlpLocateActivationContextSection @ 0x180025550 (RtlpLocateActivationContextSection.c)
 *     RtlpFindUnicodeStringInSection @ 0x1800256D0 (RtlpFindUnicodeStringInSection.c)
 *     RtlpFindActivationContextSection_CheckParameters @ 0x180025980 (RtlpFindActivationContextSection_CheckParameters.c)
 *     RtlpWaitOnCriticalSection @ 0x180035D54 (RtlpWaitOnCriticalSection.c)
 *     TppCallbackCheckThreadAfterCallback @ 0x18003AC50 (TppCallbackCheckThreadAfterCallback.c)
 *     RtlQueryInformationActivationContext @ 0x18003E1C0 (RtlQueryInformationActivationContext.c)
 *     RtlGetAssemblyStorageRoot @ 0x180053150 (RtlGetAssemblyStorageRoot.c)
 *     RtlpGetActivationContextDataStorageMapAndRosterHeader @ 0x18005329C (RtlpGetActivationContextDataStorageMapAndRosterHeader.c)
 *     RtlpResolveAssemblyStorageMapEntry @ 0x18005381C (RtlpResolveAssemblyStorageMapEntry.c)
 *     RtlpAssemblyStorageMapResolutionDefaultCallback @ 0x180053C60 (RtlpAssemblyStorageMapResolutionDefaultCallback.c)
 *     RtlpInsertAssemblyStorageMapEntry @ 0x180054028 (RtlpInsertAssemblyStorageMapEntry.c)
 *     RtlpProbeAssemblyStorageRootForAssembly @ 0x180054164 (RtlpProbeAssemblyStorageRootForAssembly.c)
 *     RtlCreateActivationContext @ 0x180056830 (RtlCreateActivationContext.c)
 *     RtlpInitializeAssemblyStorageMap @ 0x180056998 (RtlpInitializeAssemblyStorageMap.c)
 *     RtlpValidateActivationContextData @ 0x180056A1C (RtlpValidateActivationContextData.c)
 *     RtlAcquireResourceShared @ 0x180061BC0 (RtlAcquireResourceShared.c)
 *     RtlAcquireResourceExclusive @ 0x180061D10 (RtlAcquireResourceExclusive.c)
 *     RtlDeactivateActivationContext @ 0x180063B20 (RtlDeactivateActivationContext.c)
 *     RtlpQueryRunLevel @ 0x18006ECE0 (RtlpQueryRunLevel.c)
 *     RtlpQueryInformationActivationContextDetailedInformation @ 0x18006EDD0 (RtlpQueryInformationActivationContextDetailedInformation.c)
 *     RtlpCrackActivationContextStringSectionHeader @ 0x18006F1B4 (RtlpCrackActivationContextStringSectionHeader.c)
 *     RtlQueryActivationContextApplicationSettings @ 0x180071930 (RtlQueryActivationContextApplicationSettings.c)
 *     UninitUser32Proc @ 0x180083CF0 (UninitUser32Proc.c)
 *     RtlpDbgPrintCriticalSectionTimeout @ 0x1800C2078 (RtlpDbgPrintCriticalSectionTimeout.c)
 *     RtlpNotOwnerCriticalSection @ 0x1800C2120 (RtlpNotOwnerCriticalSection.c)
 *     AVrfInitializeVerifier @ 0x1800C4CAC (AVrfInitializeVerifier.c)
 *     RtlpQueryAssemblyInformationActivationContextDetailedInformation @ 0x1800C9E9C (RtlpQueryAssemblyInformationActivationContextDetailedInformation.c)
 *     RtlpQueryFilesInAssemblyInformationActivationContextDetailedInformation @ 0x1800CA12C (RtlpQueryFilesInAssemblyInformationActivationContextDetailedInformation.c)
 *     RtlpGetAssemblyStorageMapRootLocation @ 0x1800CA470 (RtlpGetAssemblyStorageMapRootLocation.c)
 *     RtlAssert @ 0x1800D3780 (RtlAssert.c)
 *     RtlUnhandledExceptionFilter2 @ 0x1800E3F90 (RtlUnhandledExceptionFilter2.c)
 *     RtlReportCriticalFailure @ 0x1800EA560 (RtlReportCriticalFailure.c)
 *     ResCRuntimeGetSegmentDataEx @ 0x1800F7750 (ResCRuntimeGetSegmentDataEx.c)
 * Callees:
 *     vDbgPrintExWithPrefixInternal @ 0x180010048 (vDbgPrintExWithPrefixInternal.c)
 */

ULONG DbgPrintEx(ULONG ComponentId, ULONG Level, PCSTR Format, ...)
{
  va_list va; // [rsp+58h] [rbp+20h] BYREF

  va_start(va, Format);
  return vDbgPrintExWithPrefixInternal(&Flags, ComponentId, Level, Format, (__int64 *)va, 1);
}
