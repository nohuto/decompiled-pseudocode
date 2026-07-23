/*
 * XREFs of DbgPrintEx @ 0x18005BFB0
 * Callers:
 *     LdrpLoadResourceFromAlternativeModule @ 0x180010818 (LdrpLoadResourceFromAlternativeModule.c)
 *     RtlDeactivateActivationContextUnsafeFast @ 0x180018740 (RtlDeactivateActivationContextUnsafeFast.c)
 *     RtlFindActivationContextSectionGuid @ 0x180019EE0 (RtlFindActivationContextSectionGuid.c)
 *     sxsisol_SearchActCtxForDllName @ 0x18001A954 (sxsisol_SearchActCtxForDllName.c)
 *     RtlFindActivationContextSectionString @ 0x18001AD70 (RtlFindActivationContextSectionString.c)
 *     RtlpLocateActivationContextSection @ 0x18001B160 (RtlpLocateActivationContextSection.c)
 *     RtlpFindUnicodeStringInSection @ 0x18001B2D0 (RtlpFindUnicodeStringInSection.c)
 *     RtlpFindActivationContextSection_CheckParameters @ 0x18001B568 (RtlpFindActivationContextSection_CheckParameters.c)
 *     TppCallbackCheckThreadAfterCallback @ 0x18001FF40 (TppCallbackCheckThreadAfterCallback.c)
 *     RtlQueryInformationActivationContext @ 0x18003DAE0 (RtlQueryInformationActivationContext.c)
 *     TpCheckTerminateWorker @ 0x180052980 (TpCheckTerminateWorker.c)
 *     RtlpWaitOnCriticalSection @ 0x18006673C (RtlpWaitOnCriticalSection.c)
 *     RtlGetAssemblyStorageRoot @ 0x1800687F0 (RtlGetAssemblyStorageRoot.c)
 *     RtlpGetActivationContextDataStorageMapAndRosterHeader @ 0x18006892C (RtlpGetActivationContextDataStorageMapAndRosterHeader.c)
 *     RtlpResolveAssemblyStorageMapEntry @ 0x180068E9C (RtlpResolveAssemblyStorageMapEntry.c)
 *     RtlpAssemblyStorageMapResolutionDefaultCallback @ 0x1800692C0 (RtlpAssemblyStorageMapResolutionDefaultCallback.c)
 *     RtlpInsertAssemblyStorageMapEntry @ 0x180069688 (RtlpInsertAssemblyStorageMapEntry.c)
 *     RtlpProbeAssemblyStorageRootForAssembly @ 0x1800697B0 (RtlpProbeAssemblyStorageRootForAssembly.c)
 *     RtlCreateActivationContext @ 0x18006ABE0 (RtlCreateActivationContext.c)
 *     RtlpInitializeAssemblyStorageMap @ 0x18006AD48 (RtlpInitializeAssemblyStorageMap.c)
 *     RtlpValidateActivationContextData @ 0x18006ADCC (RtlpValidateActivationContextData.c)
 *     RtlAcquireResourceShared @ 0x18006CEB0 (RtlAcquireResourceShared.c)
 *     RtlAcquireResourceExclusive @ 0x18006CFA0 (RtlAcquireResourceExclusive.c)
 *     RtlDeactivateActivationContext @ 0x180077940 (RtlDeactivateActivationContext.c)
 *     RtlpQueryRunLevel @ 0x18007BA8C (RtlpQueryRunLevel.c)
 *     RtlpQueryInformationActivationContextDetailedInformation @ 0x18007BB7C (RtlpQueryInformationActivationContextDetailedInformation.c)
 *     RtlpCrackActivationContextStringSectionHeader @ 0x18007BF60 (RtlpCrackActivationContextStringSectionHeader.c)
 *     RtlQueryActivationContextApplicationSettings @ 0x180080A40 (RtlQueryActivationContextApplicationSettings.c)
 *     UninitUser32Proc @ 0x180096890 (UninitUser32Proc.c)
 *     RtlpDbgPrintCriticalSectionTimeout @ 0x1800D3B18 (RtlpDbgPrintCriticalSectionTimeout.c)
 *     RtlpNotOwnerCriticalSection @ 0x1800D3BC0 (RtlpNotOwnerCriticalSection.c)
 *     AVrfInitializeVerifier @ 0x1800D6028 (AVrfInitializeVerifier.c)
 *     RtlpQueryAssemblyInformationActivationContextDetailedInformation @ 0x1800DAC8C (RtlpQueryAssemblyInformationActivationContextDetailedInformation.c)
 *     RtlpQueryFilesInAssemblyInformationActivationContextDetailedInformation @ 0x1800DAF1C (RtlpQueryFilesInAssemblyInformationActivationContextDetailedInformation.c)
 *     RtlpGetAssemblyStorageMapRootLocation @ 0x1800DB260 (RtlpGetAssemblyStorageMapRootLocation.c)
 *     RtlAssert @ 0x1800E4D90 (RtlAssert.c)
 *     RtlUnhandledExceptionFilter2 @ 0x1800F1DF0 (RtlUnhandledExceptionFilter2.c)
 *     RtlReportCriticalFailure @ 0x1800F735C (RtlReportCriticalFailure.c)
 *     ResCRuntimeGetSegmentDataEx @ 0x1800FF43C (ResCRuntimeGetSegmentDataEx.c)
 * Callees:
 *     vDbgPrintExWithPrefixInternal @ 0x18005C418 (vDbgPrintExWithPrefixInternal.c)
 */

ULONG DbgPrintEx(ULONG ComponentId, ULONG Level, PCSTR Format, ...)
{
  va_list va; // [rsp+58h] [rbp+20h] BYREF

  va_start(va, Format);
  return vDbgPrintExWithPrefixInternal(&Flags, ComponentId, Level, Format, (__int64 *)va, 1);
}
