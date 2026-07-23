/*
 * XREFs of NtdllpFreeStringRoutine @ 0x1800094D0
 * Callers:
 *     RtlAddSIDToBoundaryDescriptorEx @ 0x18000B774 (RtlAddSIDToBoundaryDescriptorEx.c)
 *     LdrpMapDllFullPath @ 0x18000E390 (LdrpMapDllFullPath.c)
 *     LdrpMapDllSearchPath @ 0x18000E5B8 (LdrpMapDllSearchPath.c)
 *     LdrpFreeUnicodeString @ 0x18000E8EC (LdrpFreeUnicodeString.c)
 *     LdrpGetFullPath @ 0x18000EEF4 (LdrpGetFullPath.c)
 *     LdrpResolveDllName @ 0x18000FA84 (LdrpResolveDllName.c)
 *     RtlUpcaseUnicodeString @ 0x180011E20 (RtlUpcaseUnicodeString.c)
 *     LdrpFindLoadedDll @ 0x180012320 (LdrpFindLoadedDll.c)
 *     LdrpFindLoadedDllInternal @ 0x1800123E8 (LdrpFindLoadedDllInternal.c)
 *     LdrpLoadForwardedDll @ 0x1800132F0 (LdrpLoadForwardedDll.c)
 *     LdrpLoadDependentModule @ 0x180016670 (LdrpLoadDependentModule.c)
 *     RtlAnsiStringToUnicodeString @ 0x1800182D0 (RtlAnsiStringToUnicodeString.c)
 *     RtlUnicodeStringToAnsiString @ 0x180018940 (RtlUnicodeStringToAnsiString.c)
 *     RtlGetFullPathName_UstrEx @ 0x180019120 (RtlGetFullPathName_UstrEx.c)
 *     RtlDosApplyFileIsolationRedirection_Ustr @ 0x18001B5E0 (RtlDosApplyFileIsolationRedirection_Ustr.c)
 *     sxsisol_CanonicalizeFullPathFileName @ 0x18001BACC (sxsisol_CanonicalizeFullPathFileName.c)
 *     RtlFreeAnsiString @ 0x1800427D0 (RtlFreeAnsiString.c)
 *     RtlCreateUnicodeString @ 0x1800565F0 (RtlCreateUnicodeString.c)
 *     RtlpGetRegistryHandle @ 0x18005829C (RtlpGetRegistryHandle.c)
 *     RtlDestroyEnvironment @ 0x18005EEF0 (RtlDestroyEnvironment.c)
 *     RtlCreateEnvironmentEx @ 0x18005EF10 (RtlCreateEnvironmentEx.c)
 *     RtlSetEnvironmentVar @ 0x18005F2A0 (RtlSetEnvironmentVar.c)
 *     RtlpResolveAssemblyStorageMapEntry @ 0x180068E9C (RtlpResolveAssemblyStorageMapEntry.c)
 *     RtlpProbeAssemblyStorageRootForAssembly @ 0x1800697B0 (RtlpProbeAssemblyStorageRootForAssembly.c)
 *     RtlUnicodeStringToOemString @ 0x18006CB90 (RtlUnicodeStringToOemString.c)
 *     RtlpEnsureBufferSize @ 0x1800767A0 (RtlpEnsureBufferSize.c)
 *     RtlDuplicateUnicodeString @ 0x180078C90 (RtlDuplicateUnicodeString.c)
 *     RtlDowncaseUnicodeString @ 0x180078E30 (RtlDowncaseUnicodeString.c)
 *     RtlOemStringToUnicodeString @ 0x18007C4D0 (RtlOemStringToUnicodeString.c)
 *     RtlUpcaseUnicodeStringToOemString @ 0x18007C7B0 (RtlUpcaseUnicodeStringToOemString.c)
 *     RtlSetEnvironmentStrings @ 0x180085F30 (RtlSetEnvironmentStrings.c)
 *     LdrpCorInitialize @ 0x1800863E0 (LdrpCorInitialize.c)
 *     RtlSetCurrentEnvironment @ 0x180088EE0 (RtlSetCurrentEnvironment.c)
 *     RtlFreeOemString @ 0x18008C720 (RtlFreeOemString.c)
 *     LdrpGetProcApphelpCheckModule @ 0x1800D21A0 (LdrpGetProcApphelpCheckModule.c)
 *     RtlUnicodeStringToCountedOemString @ 0x1800E32B0 (RtlUnicodeStringToCountedOemString.c)
 *     RtlUpcaseUnicodeStringToAnsiString @ 0x1800E3400 (RtlUpcaseUnicodeStringToAnsiString.c)
 *     RtlUpcaseUnicodeStringToCountedOemString @ 0x1800E3520 (RtlUpcaseUnicodeStringToCountedOemString.c)
 * Callees:
 *     <none>
 */

LOGICAL __fastcall NtdllpFreeStringRoutine(void *a1)
{
  return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, a1);
}
