/*
 * XREFs of NtdllpAllocateStringRoutine @ 0x180018BD8
 * Callers:
 *     RtlComputePrivatizedDllName_U @ 0x180003540 (RtlComputePrivatizedDllName_U.c)
 *     LdrpGetFullPath @ 0x18000EEF4 (LdrpGetFullPath.c)
 *     RtlGetAppContainerNamedObjectPath @ 0x18000F000 (RtlGetAppContainerNamedObjectPath.c)
 *     LdrpAllocateUnicodeString @ 0x18000FD18 (LdrpAllocateUnicodeString.c)
 *     RtlUpcaseUnicodeString @ 0x180011E20 (RtlUpcaseUnicodeString.c)
 *     LdrpAllocateFileNameBufferIfNeeded @ 0x1800132AC (LdrpAllocateFileNameBufferIfNeeded.c)
 *     RtlFormatCurrentUserKeyPath @ 0x180015290 (RtlFormatCurrentUserKeyPath.c)
 *     LdrpSnapKernelBaseExtensions @ 0x18001559C (LdrpSnapKernelBaseExtensions.c)
 *     LdrpLoadDependentModule @ 0x180016670 (LdrpLoadDependentModule.c)
 *     RtlAnsiStringToUnicodeString @ 0x1800182D0 (RtlAnsiStringToUnicodeString.c)
 *     RtlUnicodeStringToAnsiString @ 0x180018940 (RtlUnicodeStringToAnsiString.c)
 *     LdrpAppendUnicodeStringToFilenameBuffer @ 0x180018C68 (LdrpAppendUnicodeStringToFilenameBuffer.c)
 *     RtlGetFullPathName_UstrEx @ 0x180019120 (RtlGetFullPathName_UstrEx.c)
 *     RtlDosSearchPath_Ustr @ 0x180042800 (RtlDosSearchPath_Ustr.c)
 *     RtlCreateUnicodeString @ 0x1800565F0 (RtlCreateUnicodeString.c)
 *     RtlpQueryRegistryDirect @ 0x1800581A4 (RtlpQueryRegistryDirect.c)
 *     RtlpGetRegistryHandle @ 0x18005829C (RtlpGetRegistryHandle.c)
 *     RtlStringFromGUIDEx @ 0x18005E630 (RtlStringFromGUIDEx.c)
 *     RtlpGetActivationContextDataStorageMapAndRosterHeader @ 0x18006892C (RtlpGetActivationContextDataStorageMapAndRosterHeader.c)
 *     RtlpResolveAssemblyStorageMapEntry @ 0x180068E9C (RtlpResolveAssemblyStorageMapEntry.c)
 *     RtlpProbeAssemblyStorageRootForAssembly @ 0x1800697B0 (RtlpProbeAssemblyStorageRootForAssembly.c)
 *     RtlUnicodeStringToOemString @ 0x18006CB90 (RtlUnicodeStringToOemString.c)
 *     RtlpEnsureBufferSize @ 0x1800767A0 (RtlpEnsureBufferSize.c)
 *     RtlDuplicateUnicodeString @ 0x180078C90 (RtlDuplicateUnicodeString.c)
 *     RtlDowncaseUnicodeString @ 0x180078E30 (RtlDowncaseUnicodeString.c)
 *     RtlOemStringToUnicodeString @ 0x18007C4D0 (RtlOemStringToUnicodeString.c)
 *     RtlUpcaseUnicodeStringToOemString @ 0x18007C7B0 (RtlUpcaseUnicodeStringToOemString.c)
 *     RtlpGetAssemblyStorageMapRootLocation @ 0x1800DB260 (RtlpGetAssemblyStorageMapRootLocation.c)
 *     RtlUnicodeStringToCountedOemString @ 0x1800E32B0 (RtlUnicodeStringToCountedOemString.c)
 *     RtlUpcaseUnicodeStringToAnsiString @ 0x1800E3400 (RtlUpcaseUnicodeStringToAnsiString.c)
 *     RtlUpcaseUnicodeStringToCountedOemString @ 0x1800E3520 (RtlUpcaseUnicodeStringToCountedOemString.c)
 * Callees:
 *     <none>
 */

PVOID __fastcall NtdllpAllocateStringRoutine(SIZE_T Size)
{
  return RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, Size);
}
