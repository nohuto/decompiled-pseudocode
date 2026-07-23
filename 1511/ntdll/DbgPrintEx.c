/*
 * XREFs of DbgPrintEx @ 0x1800492F0
 * Callers:
 *     RtlQueryInformationActivationContext @ 0x18000D770 (RtlQueryInformationActivationContext.c)
 *     RtlFindActivationContextSectionGuid @ 0x1800127A0 (RtlFindActivationContextSectionGuid.c)
 *     RtlDeactivateActivationContextUnsafeFast @ 0x180014F90 (RtlDeactivateActivationContextUnsafeFast.c)
 *     sxsisol_SearchActCtxForDllName @ 0x180015A2C (sxsisol_SearchActCtxForDllName.c)
 *     RtlFindActivationContextSectionString @ 0x180015E40 (RtlFindActivationContextSectionString.c)
 *     RtlpLocateActivationContextSection @ 0x180016240 (RtlpLocateActivationContextSection.c)
 *     RtlpFindUnicodeStringInSection @ 0x18001653C (RtlpFindUnicodeStringInSection.c)
 *     RtlpFindActivationContextSection_CheckParameters @ 0x1800168D0 (RtlpFindActivationContextSection_CheckParameters.c)
 *     TppCallbackCheckThreadAfterCallback @ 0x18002CC00 (TppCallbackCheckThreadAfterCallback.c)
 *     RtlpWaitOnCriticalSection @ 0x18002FD78 (RtlpWaitOnCriticalSection.c)
 *     LdrpLoadResourceFromAlternativeModule @ 0x18003A5C8 (LdrpLoadResourceFromAlternativeModule.c)
 *     RtlGetAssemblyStorageRoot @ 0x180041BAC (RtlGetAssemblyStorageRoot.c)
 *     RtlpGetActivationContextDataStorageMapAndRosterHeader @ 0x180041CF8 (RtlpGetActivationContextDataStorageMapAndRosterHeader.c)
 *     RtlpResolveAssemblyStorageMapEntry @ 0x18004227C (RtlpResolveAssemblyStorageMapEntry.c)
 *     RtlpAssemblyStorageMapResolutionDefaultCallback @ 0x1800426C0 (RtlpAssemblyStorageMapResolutionDefaultCallback.c)
 *     RtlpInsertAssemblyStorageMapEntry @ 0x1800428F8 (RtlpInsertAssemblyStorageMapEntry.c)
 *     RtlpProbeAssemblyStorageRootForAssembly @ 0x180042A34 (RtlpProbeAssemblyStorageRootForAssembly.c)
 *     RtlCreateActivationContext @ 0x180043360 (RtlCreateActivationContext.c)
 *     RtlpInitializeAssemblyStorageMap @ 0x1800434C8 (RtlpInitializeAssemblyStorageMap.c)
 *     RtlpValidateActivationContextData @ 0x18004354C (RtlpValidateActivationContextData.c)
 *     TpCheckTerminateWorker @ 0x18005C650 (TpCheckTerminateWorker.c)
 *     RtlAcquireResourceShared @ 0x18006F2D0 (RtlAcquireResourceShared.c)
 *     RtlAcquireResourceExclusive @ 0x18006F420 (RtlAcquireResourceExclusive.c)
 *     RtlDeactivateActivationContext @ 0x1800760D0 (RtlDeactivateActivationContext.c)
 *     RtlpQueryRunLevel @ 0x180079E84 (RtlpQueryRunLevel.c)
 *     RtlpQueryInformationActivationContextDetailedInformation @ 0x180079F74 (RtlpQueryInformationActivationContextDetailedInformation.c)
 *     RtlpCrackActivationContextStringSectionHeader @ 0x18007A358 (RtlpCrackActivationContextStringSectionHeader.c)
 *     RtlQueryActivationContextApplicationSettings @ 0x18007D330 (RtlQueryActivationContextApplicationSettings.c)
 *     UninitUser32Proc @ 0x1800954A0 (UninitUser32Proc.c)
 *     RtlpDbgPrintCriticalSectionTimeout @ 0x1800CBD98 (RtlpDbgPrintCriticalSectionTimeout.c)
 *     RtlpNotOwnerCriticalSection @ 0x1800CBE40 (RtlpNotOwnerCriticalSection.c)
 *     AVrfInitializeVerifier @ 0x1800CDFDC (AVrfInitializeVerifier.c)
 *     RtlpQueryAssemblyInformationActivationContextDetailedInformation @ 0x1800D297C (RtlpQueryAssemblyInformationActivationContextDetailedInformation.c)
 *     RtlpQueryFilesInAssemblyInformationActivationContextDetailedInformation @ 0x1800D2C08 (RtlpQueryFilesInAssemblyInformationActivationContextDetailedInformation.c)
 *     RtlpGetAssemblyStorageMapRootLocation @ 0x1800D2F4C (RtlpGetAssemblyStorageMapRootLocation.c)
 *     RtlAssert @ 0x1800DBA70 (RtlAssert.c)
 *     RtlUnhandledExceptionFilter2 @ 0x1800E8AF0 (RtlUnhandledExceptionFilter2.c)
 *     RtlReportCriticalFailure @ 0x1800EE670 (RtlReportCriticalFailure.c)
 *     ResCRuntimeGetSegmentDataEx @ 0x1800F72E8 (ResCRuntimeGetSegmentDataEx.c)
 * Callees:
 *     vDbgPrintExWithPrefixInternal @ 0x180049998 (vDbgPrintExWithPrefixInternal.c)
 */

ULONG DbgPrintEx(ULONG ComponentId, ULONG Level, PCSTR Format, ...)
{
  va_list va; // [rsp+58h] [rbp+20h] BYREF

  va_start(va, Format);
  return vDbgPrintExWithPrefixInternal(&Flags, ComponentId, Level, Format, (__int64 *)va, 1);
}
