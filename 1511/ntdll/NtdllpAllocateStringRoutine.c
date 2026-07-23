/*
 * XREFs of NtdllpAllocateStringRoutine @ 0x180018174
 * Callers:
 *     LdrpGetFullPath @ 0x18000C3E0 (LdrpGetFullPath.c)
 *     RtlGetAppContainerNamedObjectPath @ 0x18000C5D0 (RtlGetAppContainerNamedObjectPath.c)
 *     LdrpAllocateUnicodeString @ 0x18000E008 (LdrpAllocateUnicodeString.c)
 *     RtlUpcaseUnicodeString @ 0x1800106F0 (RtlUpcaseUnicodeString.c)
 *     LdrpAllocateFileNameBufferIfNeeded @ 0x180010FB4 (LdrpAllocateFileNameBufferIfNeeded.c)
 *     LdrpSnapKernelBaseExtensions @ 0x180011A58 (LdrpSnapKernelBaseExtensions.c)
 *     LdrpAppendUnicodeStringToFilenameBuffer @ 0x180012044 (LdrpAppendUnicodeStringToFilenameBuffer.c)
 *     LdrpLoadDependentModule @ 0x180013200 (LdrpLoadDependentModule.c)
 *     RtlAnsiStringToUnicodeString @ 0x180014B30 (RtlAnsiStringToUnicodeString.c)
 *     RtlUnicodeStringToAnsiString @ 0x180018200 (RtlUnicodeStringToAnsiString.c)
 *     RtlDosSearchPath_Ustr @ 0x1800185F0 (RtlDosSearchPath_Ustr.c)
 *     RtlGetFullPathName_UstrEx @ 0x180018C40 (RtlGetFullPathName_UstrEx.c)
 *     RtlCreateUnicodeString @ 0x180018FF0 (RtlCreateUnicodeString.c)
 *     RtlFormatCurrentUserKeyPath @ 0x180019080 (RtlFormatCurrentUserKeyPath.c)
 *     RtlpGetActivationContextDataStorageMapAndRosterHeader @ 0x180041CF8 (RtlpGetActivationContextDataStorageMapAndRosterHeader.c)
 *     RtlpResolveAssemblyStorageMapEntry @ 0x18004227C (RtlpResolveAssemblyStorageMapEntry.c)
 *     RtlpProbeAssemblyStorageRootForAssembly @ 0x180042A34 (RtlpProbeAssemblyStorageRootForAssembly.c)
 *     RtlpQueryRegistryDirect @ 0x180046E70 (RtlpQueryRegistryDirect.c)
 *     RtlpGetRegistryHandle @ 0x180046F68 (RtlpGetRegistryHandle.c)
 *     RtlStringFromGUIDEx @ 0x18004C9C0 (RtlStringFromGUIDEx.c)
 *     RtlUnicodeStringToOemString @ 0x18006F660 (RtlUnicodeStringToOemString.c)
 *     RtlpEnsureBufferSize @ 0x180075450 (RtlpEnsureBufferSize.c)
 *     RtlDowncaseUnicodeString @ 0x180076370 (RtlDowncaseUnicodeString.c)
 *     RtlDuplicateUnicodeString @ 0x1800774F0 (RtlDuplicateUnicodeString.c)
 *     RtlUpcaseUnicodeStringToOemString @ 0x180079480 (RtlUpcaseUnicodeStringToOemString.c)
 *     RtlOemStringToUnicodeString @ 0x180079680 (RtlOemStringToUnicodeString.c)
 *     RtlComputePrivatizedDllName_U @ 0x1800CB790 (RtlComputePrivatizedDllName_U.c)
 *     RtlpGetAssemblyStorageMapRootLocation @ 0x1800D2F4C (RtlpGetAssemblyStorageMapRootLocation.c)
 *     RtlUnicodeStringToCountedOemString @ 0x1800DA5E0 (RtlUnicodeStringToCountedOemString.c)
 *     RtlUpcaseUnicodeStringToAnsiString @ 0x1800DA730 (RtlUpcaseUnicodeStringToAnsiString.c)
 *     RtlUpcaseUnicodeStringToCountedOemString @ 0x1800DA850 (RtlUpcaseUnicodeStringToCountedOemString.c)
 * Callees:
 *     <none>
 */

PVOID __fastcall NtdllpAllocateStringRoutine(SIZE_T Size)
{
  return RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, Size);
}
