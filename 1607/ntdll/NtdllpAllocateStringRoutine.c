/*
 * XREFs of NtdllpAllocateStringRoutine @ 0x180018BE8
 * Callers:
 *     RtlComputePrivatizedDllName_U @ 0x180003540 (RtlComputePrivatizedDllName_U.c)
 *     LdrpGetFullPath @ 0x18000EF04 (LdrpGetFullPath.c)
 *     RtlGetAppContainerNamedObjectPath @ 0x18000F010 (RtlGetAppContainerNamedObjectPath.c)
 *     LdrpAllocateUnicodeString @ 0x18000FD28 (LdrpAllocateUnicodeString.c)
 *     RtlUpcaseUnicodeString @ 0x180011E30 (RtlUpcaseUnicodeString.c)
 *     LdrpAllocateFileNameBufferIfNeeded @ 0x1800132BC (LdrpAllocateFileNameBufferIfNeeded.c)
 *     RtlFormatCurrentUserKeyPath @ 0x1800152A0 (RtlFormatCurrentUserKeyPath.c)
 *     LdrpSnapKernelBaseExtensions @ 0x1800155AC (LdrpSnapKernelBaseExtensions.c)
 *     LdrpLoadDependentModule @ 0x180016680 (LdrpLoadDependentModule.c)
 *     RtlAnsiStringToUnicodeString @ 0x1800182E0 (RtlAnsiStringToUnicodeString.c)
 *     RtlUnicodeStringToAnsiString @ 0x180018950 (RtlUnicodeStringToAnsiString.c)
 *     LdrpAppendUnicodeStringToFilenameBuffer @ 0x180018C78 (LdrpAppendUnicodeStringToFilenameBuffer.c)
 *     RtlGetFullPathName_UstrEx @ 0x180019130 (RtlGetFullPathName_UstrEx.c)
 *     RtlDosSearchPath_Ustr @ 0x180042810 (RtlDosSearchPath_Ustr.c)
 *     RtlCreateUnicodeString @ 0x180056600 (RtlCreateUnicodeString.c)
 *     RtlpQueryRegistryDirect @ 0x1800581B4 (RtlpQueryRegistryDirect.c)
 *     RtlpGetRegistryHandle @ 0x1800582AC (RtlpGetRegistryHandle.c)
 *     RtlStringFromGUIDEx @ 0x18005E640 (RtlStringFromGUIDEx.c)
 *     RtlpGetActivationContextDataStorageMapAndRosterHeader @ 0x18006893C (RtlpGetActivationContextDataStorageMapAndRosterHeader.c)
 *     RtlpResolveAssemblyStorageMapEntry @ 0x180068EAC (RtlpResolveAssemblyStorageMapEntry.c)
 *     RtlpProbeAssemblyStorageRootForAssembly @ 0x1800697C0 (RtlpProbeAssemblyStorageRootForAssembly.c)
 *     RtlUnicodeStringToOemString @ 0x18006CBA0 (RtlUnicodeStringToOemString.c)
 *     RtlpEnsureBufferSize @ 0x1800767B0 (RtlpEnsureBufferSize.c)
 *     RtlDuplicateUnicodeString @ 0x180078CA0 (RtlDuplicateUnicodeString.c)
 *     RtlDowncaseUnicodeString @ 0x180078E40 (RtlDowncaseUnicodeString.c)
 *     RtlOemStringToUnicodeString @ 0x18007C4E0 (RtlOemStringToUnicodeString.c)
 *     RtlUpcaseUnicodeStringToOemString @ 0x18007C7C0 (RtlUpcaseUnicodeStringToOemString.c)
 *     RtlpGetAssemblyStorageMapRootLocation @ 0x1800DB1A0 (RtlpGetAssemblyStorageMapRootLocation.c)
 *     RtlUnicodeStringToCountedOemString @ 0x1800E31F0 (RtlUnicodeStringToCountedOemString.c)
 *     RtlUpcaseUnicodeStringToAnsiString @ 0x1800E3340 (RtlUpcaseUnicodeStringToAnsiString.c)
 *     RtlUpcaseUnicodeStringToCountedOemString @ 0x1800E3460 (RtlUpcaseUnicodeStringToCountedOemString.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NtdllpAllocateStringRoutine(__int64 a1)
{
  return RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0LL, a1);
}
