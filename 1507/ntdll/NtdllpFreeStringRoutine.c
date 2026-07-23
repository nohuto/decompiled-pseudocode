/*
 * XREFs of NtdllpFreeStringRoutine @ 0x18002A210
 * Callers:
 *     LdrpCorInitialize @ 0x1800032D8 (LdrpCorInitialize.c)
 *     RtlpGetRegistryHandle @ 0x18000E020 (RtlpGetRegistryHandle.c)
 *     LdrpFindLoadedDll @ 0x18001870C (LdrpFindLoadedDll.c)
 *     LdrpFindLoadedDllInternal @ 0x1800187EC (LdrpFindLoadedDllInternal.c)
 *     RtlCreateUnicodeString @ 0x180020DE0 (RtlCreateUnicodeString.c)
 *     LdrpLoadDependentModule @ 0x180022010 (LdrpLoadDependentModule.c)
 *     RtlAnsiStringToUnicodeString @ 0x1800239A0 (RtlAnsiStringToUnicodeString.c)
 *     RtlUnicodeStringToAnsiString @ 0x1800240C0 (RtlUnicodeStringToAnsiString.c)
 *     RtlDosApplyFileIsolationRedirection_Ustr @ 0x1800248B0 (RtlDosApplyFileIsolationRedirection_Ustr.c)
 *     sxsisol_CanonicalizeFullPathFileName @ 0x1800259F8 (sxsisol_CanonicalizeFullPathFileName.c)
 *     RtlFreeAnsiString @ 0x180027410 (RtlFreeAnsiString.c)
 *     LdrpResolveDllName @ 0x18003F930 (LdrpResolveDllName.c)
 *     LdrpGetFullPath @ 0x18003FC30 (LdrpGetFullPath.c)
 *     LdrpMapDllSearchPath @ 0x180042A04 (LdrpMapDllSearchPath.c)
 *     LdrpFreeUnicodeString @ 0x180042C80 (LdrpFreeUnicodeString.c)
 *     LdrpMapDllFullPath @ 0x180042CB4 (LdrpMapDllFullPath.c)
 *     RtlDestroyEnvironment @ 0x1800467E0 (RtlDestroyEnvironment.c)
 *     RtlCreateEnvironmentEx @ 0x180046800 (RtlCreateEnvironmentEx.c)
 *     RtlSetEnvironmentVar @ 0x180046B90 (RtlSetEnvironmentVar.c)
 *     RtlUpcaseUnicodeString @ 0x180050AE0 (RtlUpcaseUnicodeString.c)
 *     RtlAddSIDToBoundaryDescriptorEx @ 0x18005291C (RtlAddSIDToBoundaryDescriptorEx.c)
 *     RtlpResolveAssemblyStorageMapEntry @ 0x18005381C (RtlpResolveAssemblyStorageMapEntry.c)
 *     RtlpProbeAssemblyStorageRootForAssembly @ 0x180054164 (RtlpProbeAssemblyStorageRootForAssembly.c)
 *     RtlGetFullPathName_UstrEx @ 0x180060240 (RtlGetFullPathName_UstrEx.c)
 *     RtlUnicodeStringToOemString @ 0x1800634C0 (RtlUnicodeStringToOemString.c)
 *     RtlpEnsureBufferSize @ 0x180068970 (RtlpEnsureBufferSize.c)
 *     RtlDowncaseUnicodeString @ 0x18006AA40 (RtlDowncaseUnicodeString.c)
 *     RtlDuplicateUnicodeString @ 0x18006BC20 (RtlDuplicateUnicodeString.c)
 *     RtlUpcaseUnicodeStringToOemString @ 0x18006D250 (RtlUpcaseUnicodeStringToOemString.c)
 *     RtlOemStringToUnicodeString @ 0x18006D450 (RtlOemStringToUnicodeString.c)
 *     RtlSetEnvironmentStrings @ 0x180075230 (RtlSetEnvironmentStrings.c)
 *     RtlFreeOemString @ 0x180077290 (RtlFreeOemString.c)
 *     RtlSetCurrentEnvironment @ 0x180078BC0 (RtlSetCurrentEnvironment.c)
 *     LdrpLoadForwardedDll @ 0x18007A1FC (LdrpLoadForwardedDll.c)
 *     RtlUnicodeStringToCountedOemString @ 0x1800D20C0 (RtlUnicodeStringToCountedOemString.c)
 *     RtlUpcaseUnicodeStringToAnsiString @ 0x1800D2210 (RtlUpcaseUnicodeStringToAnsiString.c)
 *     RtlUpcaseUnicodeStringToCountedOemString @ 0x1800D2330 (RtlUpcaseUnicodeStringToCountedOemString.c)
 * Callees:
 *     <none>
 */

LOGICAL __fastcall NtdllpFreeStringRoutine(void *a1)
{
  return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, a1);
}
