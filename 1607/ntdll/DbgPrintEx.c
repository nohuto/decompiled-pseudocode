/*
 * XREFs of DbgPrintEx @ 0x18005BFC0
 * Callers:
 *     LdrpLoadResourceFromAlternativeModule @ 0x180010828 (LdrpLoadResourceFromAlternativeModule.c)
 *     RtlDeactivateActivationContextUnsafeFast @ 0x180018750 (RtlDeactivateActivationContextUnsafeFast.c)
 *     RtlFindActivationContextSectionGuid @ 0x180019EF0 (RtlFindActivationContextSectionGuid.c)
 *     sxsisol_SearchActCtxForDllName @ 0x18001A964 (sxsisol_SearchActCtxForDllName.c)
 *     RtlFindActivationContextSectionString @ 0x18001AD80 (RtlFindActivationContextSectionString.c)
 *     RtlpLocateActivationContextSection @ 0x18001B170 (RtlpLocateActivationContextSection.c)
 *     RtlpFindUnicodeStringInSection @ 0x18001B2E0 (RtlpFindUnicodeStringInSection.c)
 *     RtlpFindActivationContextSection_CheckParameters @ 0x18001B578 (RtlpFindActivationContextSection_CheckParameters.c)
 *     TppCallbackCheckThreadAfterCallback @ 0x18001FF50 (TppCallbackCheckThreadAfterCallback.c)
 *     RtlQueryInformationActivationContext @ 0x18003DAF0 (RtlQueryInformationActivationContext.c)
 *     TpCheckTerminateWorker @ 0x180052990 (TpCheckTerminateWorker.c)
 *     RtlpWaitOnCriticalSection @ 0x18006674C (RtlpWaitOnCriticalSection.c)
 *     RtlGetAssemblyStorageRoot @ 0x180068800 (RtlGetAssemblyStorageRoot.c)
 *     RtlpGetActivationContextDataStorageMapAndRosterHeader @ 0x18006893C (RtlpGetActivationContextDataStorageMapAndRosterHeader.c)
 *     RtlpResolveAssemblyStorageMapEntry @ 0x180068EAC (RtlpResolveAssemblyStorageMapEntry.c)
 *     RtlpAssemblyStorageMapResolutionDefaultCallback @ 0x1800692D0 (RtlpAssemblyStorageMapResolutionDefaultCallback.c)
 *     RtlpInsertAssemblyStorageMapEntry @ 0x180069698 (RtlpInsertAssemblyStorageMapEntry.c)
 *     RtlpProbeAssemblyStorageRootForAssembly @ 0x1800697C0 (RtlpProbeAssemblyStorageRootForAssembly.c)
 *     RtlCreateActivationContext @ 0x18006ABF0 (RtlCreateActivationContext.c)
 *     RtlpInitializeAssemblyStorageMap @ 0x18006AD58 (RtlpInitializeAssemblyStorageMap.c)
 *     RtlpValidateActivationContextData @ 0x18006ADDC (RtlpValidateActivationContextData.c)
 *     RtlAcquireResourceShared @ 0x18006CEC0 (RtlAcquireResourceShared.c)
 *     RtlAcquireResourceExclusive @ 0x18006CFB0 (RtlAcquireResourceExclusive.c)
 *     RtlDeactivateActivationContext @ 0x180077950 (RtlDeactivateActivationContext.c)
 *     RtlpQueryRunLevel @ 0x18007BA9C (RtlpQueryRunLevel.c)
 *     RtlpQueryInformationActivationContextDetailedInformation @ 0x18007BB8C (RtlpQueryInformationActivationContextDetailedInformation.c)
 *     RtlpCrackActivationContextStringSectionHeader @ 0x18007BF70 (RtlpCrackActivationContextStringSectionHeader.c)
 *     RtlQueryActivationContextApplicationSettings @ 0x180080A50 (RtlQueryActivationContextApplicationSettings.c)
 *     UninitUser32Proc @ 0x1800968A0 (UninitUser32Proc.c)
 *     RtlpDbgPrintCriticalSectionTimeout @ 0x1800D3A58 (RtlpDbgPrintCriticalSectionTimeout.c)
 *     RtlpNotOwnerCriticalSection @ 0x1800D3B00 (RtlpNotOwnerCriticalSection.c)
 *     AVrfInitializeVerifier @ 0x1800D5F68 (AVrfInitializeVerifier.c)
 *     RtlpQueryAssemblyInformationActivationContextDetailedInformation @ 0x1800DABCC (RtlpQueryAssemblyInformationActivationContextDetailedInformation.c)
 *     RtlpQueryFilesInAssemblyInformationActivationContextDetailedInformation @ 0x1800DAE5C (RtlpQueryFilesInAssemblyInformationActivationContextDetailedInformation.c)
 *     RtlpGetAssemblyStorageMapRootLocation @ 0x1800DB1A0 (RtlpGetAssemblyStorageMapRootLocation.c)
 *     RtlAssert @ 0x1800E4CD0 (RtlAssert.c)
 *     RtlUnhandledExceptionFilter2 @ 0x1800F1DF0 (RtlUnhandledExceptionFilter2.c)
 *     RtlReportCriticalFailure @ 0x1800F735C (RtlReportCriticalFailure.c)
 *     ResCRuntimeGetSegmentDataEx @ 0x1800FF43C (ResCRuntimeGetSegmentDataEx.c)
 * Callees:
 *     vDbgPrintExWithPrefixInternal @ 0x18005C428 (vDbgPrintExWithPrefixInternal.c)
 */

__int64 DbgPrintEx(int a1, int a2, const char *a3, ...)
{
  va_list va; // [rsp+58h] [rbp+20h] BYREF

  va_start(va, a3);
  return vDbgPrintExWithPrefixInternal((unsigned int)&unk_18010C822, a1, a2, (_DWORD)a3, (__int64)va, 1);
}
