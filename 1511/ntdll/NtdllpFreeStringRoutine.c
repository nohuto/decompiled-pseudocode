/*
 * XREFs of NtdllpFreeStringRoutine @ 0x1800207A0
 * Callers:
 *     LdrpMapDllFullPath @ 0x18000946C (LdrpMapDllFullPath.c)
 *     LdrpMapDllSearchPath @ 0x18000A018 (LdrpMapDllSearchPath.c)
 *     LdrpFreeUnicodeString @ 0x18000A308 (LdrpFreeUnicodeString.c)
 *     LdrpGetFullPath @ 0x18000C3E0 (LdrpGetFullPath.c)
 *     LdrpResolveDllName @ 0x18000CFF8 (LdrpResolveDllName.c)
 *     RtlUpcaseUnicodeString @ 0x1800106F0 (RtlUpcaseUnicodeString.c)
 *     LdrpLoadForwardedDll @ 0x180010DF8 (LdrpLoadForwardedDll.c)
 *     LdrpFindLoadedDll @ 0x1800112C4 (LdrpFindLoadedDll.c)
 *     LdrpFindLoadedDllInternal @ 0x18001138C (LdrpFindLoadedDllInternal.c)
 *     LdrpLoadDependentModule @ 0x180013200 (LdrpLoadDependentModule.c)
 *     RtlAnsiStringToUnicodeString @ 0x180014B30 (RtlAnsiStringToUnicodeString.c)
 *     RtlDosApplyFileIsolationRedirection_Ustr @ 0x1800155C0 (RtlDosApplyFileIsolationRedirection_Ustr.c)
 *     sxsisol_CanonicalizeFullPathFileName @ 0x180016948 (sxsisol_CanonicalizeFullPathFileName.c)
 *     RtlUnicodeStringToAnsiString @ 0x180018200 (RtlUnicodeStringToAnsiString.c)
 *     RtlGetFullPathName_UstrEx @ 0x180018C40 (RtlGetFullPathName_UstrEx.c)
 *     RtlCreateUnicodeString @ 0x180018FF0 (RtlCreateUnicodeString.c)
 *     RtlFreeAnsiString @ 0x18001C980 (RtlFreeAnsiString.c)
 *     RtlpResolveAssemblyStorageMapEntry @ 0x18004227C (RtlpResolveAssemblyStorageMapEntry.c)
 *     RtlpProbeAssemblyStorageRootForAssembly @ 0x180042A34 (RtlpProbeAssemblyStorageRootForAssembly.c)
 *     RtlpGetRegistryHandle @ 0x180046F68 (RtlpGetRegistryHandle.c)
 *     RtlDestroyEnvironment @ 0x18004D890 (RtlDestroyEnvironment.c)
 *     RtlCreateEnvironmentEx @ 0x18004D8B0 (RtlCreateEnvironmentEx.c)
 *     RtlSetEnvironmentVar @ 0x18004DC40 (RtlSetEnvironmentVar.c)
 *     LdrpCorInitialize @ 0x18004EBB0 (LdrpCorInitialize.c)
 *     RtlAddSIDToBoundaryDescriptorEx @ 0x180062C6C (RtlAddSIDToBoundaryDescriptorEx.c)
 *     RtlUnicodeStringToOemString @ 0x18006F660 (RtlUnicodeStringToOemString.c)
 *     RtlpEnsureBufferSize @ 0x180075450 (RtlpEnsureBufferSize.c)
 *     RtlDowncaseUnicodeString @ 0x180076370 (RtlDowncaseUnicodeString.c)
 *     RtlDuplicateUnicodeString @ 0x1800774F0 (RtlDuplicateUnicodeString.c)
 *     RtlUpcaseUnicodeStringToOemString @ 0x180079480 (RtlUpcaseUnicodeStringToOemString.c)
 *     RtlOemStringToUnicodeString @ 0x180079680 (RtlOemStringToUnicodeString.c)
 *     RtlSetEnvironmentStrings @ 0x180081BC0 (RtlSetEnvironmentStrings.c)
 *     RtlFreeOemString @ 0x1800832C0 (RtlFreeOemString.c)
 *     RtlSetCurrentEnvironment @ 0x180084E90 (RtlSetCurrentEnvironment.c)
 *     RtlUnicodeStringToCountedOemString @ 0x1800DA5E0 (RtlUnicodeStringToCountedOemString.c)
 *     RtlUpcaseUnicodeStringToAnsiString @ 0x1800DA730 (RtlUpcaseUnicodeStringToAnsiString.c)
 *     RtlUpcaseUnicodeStringToCountedOemString @ 0x1800DA850 (RtlUpcaseUnicodeStringToCountedOemString.c)
 * Callees:
 *     <none>
 */

LOGICAL __fastcall NtdllpFreeStringRoutine(void *a1)
{
  return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, a1);
}
