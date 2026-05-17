/*
 * XREFs of NtdllpFreeStringRoutine @ 0x1800094E0
 * Callers:
 *     RtlAddSIDToBoundaryDescriptorEx @ 0x18000B784 (RtlAddSIDToBoundaryDescriptorEx.c)
 *     LdrpMapDllFullPath @ 0x18000E3A0 (LdrpMapDllFullPath.c)
 *     LdrpMapDllSearchPath @ 0x18000E5C8 (LdrpMapDllSearchPath.c)
 *     LdrpFreeUnicodeString @ 0x18000E8FC (LdrpFreeUnicodeString.c)
 *     LdrpGetFullPath @ 0x18000EF04 (LdrpGetFullPath.c)
 *     LdrpResolveDllName @ 0x18000FA94 (LdrpResolveDllName.c)
 *     RtlUpcaseUnicodeString @ 0x180011E30 (RtlUpcaseUnicodeString.c)
 *     LdrpFindLoadedDll @ 0x180012330 (LdrpFindLoadedDll.c)
 *     LdrpFindLoadedDllInternal @ 0x1800123F8 (LdrpFindLoadedDllInternal.c)
 *     LdrpLoadForwardedDll @ 0x180013300 (LdrpLoadForwardedDll.c)
 *     LdrpLoadDependentModule @ 0x180016680 (LdrpLoadDependentModule.c)
 *     RtlAnsiStringToUnicodeString @ 0x1800182E0 (RtlAnsiStringToUnicodeString.c)
 *     RtlUnicodeStringToAnsiString @ 0x180018950 (RtlUnicodeStringToAnsiString.c)
 *     RtlGetFullPathName_UstrEx @ 0x180019130 (RtlGetFullPathName_UstrEx.c)
 *     RtlDosApplyFileIsolationRedirection_Ustr @ 0x18001B5F0 (RtlDosApplyFileIsolationRedirection_Ustr.c)
 *     sxsisol_CanonicalizeFullPathFileName @ 0x18001BADC (sxsisol_CanonicalizeFullPathFileName.c)
 *     RtlFreeAnsiString @ 0x1800427E0 (RtlFreeAnsiString.c)
 *     RtlCreateUnicodeString @ 0x180056600 (RtlCreateUnicodeString.c)
 *     RtlpGetRegistryHandle @ 0x1800582AC (RtlpGetRegistryHandle.c)
 *     RtlDestroyEnvironment @ 0x18005EF00 (RtlDestroyEnvironment.c)
 *     RtlCreateEnvironmentEx @ 0x18005EF20 (RtlCreateEnvironmentEx.c)
 *     RtlSetEnvironmentVar @ 0x18005F2B0 (RtlSetEnvironmentVar.c)
 *     RtlpResolveAssemblyStorageMapEntry @ 0x180068EAC (RtlpResolveAssemblyStorageMapEntry.c)
 *     RtlpProbeAssemblyStorageRootForAssembly @ 0x1800697C0 (RtlpProbeAssemblyStorageRootForAssembly.c)
 *     RtlUnicodeStringToOemString @ 0x18006CBA0 (RtlUnicodeStringToOemString.c)
 *     RtlpEnsureBufferSize @ 0x1800767B0 (RtlpEnsureBufferSize.c)
 *     RtlDuplicateUnicodeString @ 0x180078CA0 (RtlDuplicateUnicodeString.c)
 *     RtlDowncaseUnicodeString @ 0x180078E40 (RtlDowncaseUnicodeString.c)
 *     RtlOemStringToUnicodeString @ 0x18007C4E0 (RtlOemStringToUnicodeString.c)
 *     RtlUpcaseUnicodeStringToOemString @ 0x18007C7C0 (RtlUpcaseUnicodeStringToOemString.c)
 *     RtlSetEnvironmentStrings @ 0x180085F40 (RtlSetEnvironmentStrings.c)
 *     LdrpCorInitialize @ 0x1800863F0 (LdrpCorInitialize.c)
 *     RtlSetCurrentEnvironment @ 0x180088EF0 (RtlSetCurrentEnvironment.c)
 *     RtlFreeOemString @ 0x18008C730 (RtlFreeOemString.c)
 *     LdrpGetProcApphelpCheckModule @ 0x1800D20E0 (LdrpGetProcApphelpCheckModule.c)
 *     RtlUnicodeStringToCountedOemString @ 0x1800E31F0 (RtlUnicodeStringToCountedOemString.c)
 *     RtlUpcaseUnicodeStringToAnsiString @ 0x1800E3340 (RtlUpcaseUnicodeStringToAnsiString.c)
 *     RtlUpcaseUnicodeStringToCountedOemString @ 0x1800E3460 (RtlUpcaseUnicodeStringToCountedOemString.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NtdllpFreeStringRoutine(__int64 a1)
{
  return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, a1);
}
