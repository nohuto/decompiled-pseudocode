/*
 * XREFs of NtdllpAllocateStringRoutine @ 0x180024358
 * Callers:
 *     RtlpQueryRegistryDirect @ 0x18000DF28 (RtlpQueryRegistryDirect.c)
 *     RtlpGetRegistryHandle @ 0x18000E020 (RtlpGetRegistryHandle.c)
 *     RtlFormatCurrentUserKeyPath @ 0x18001FB60 (RtlFormatCurrentUserKeyPath.c)
 *     LdrpSnapKernelBaseExtensions @ 0x1800205B8 (LdrpSnapKernelBaseExtensions.c)
 *     RtlCreateUnicodeString @ 0x180020DE0 (RtlCreateUnicodeString.c)
 *     LdrpAllocateFileNameBufferIfNeeded @ 0x1800215E4 (LdrpAllocateFileNameBufferIfNeeded.c)
 *     LdrpLoadDependentModule @ 0x180022010 (LdrpLoadDependentModule.c)
 *     RtlAnsiStringToUnicodeString @ 0x1800239A0 (RtlAnsiStringToUnicodeString.c)
 *     RtlUnicodeStringToAnsiString @ 0x1800240C0 (RtlUnicodeStringToAnsiString.c)
 *     RtlGetAppContainerNamedObjectPath @ 0x18003EE10 (RtlGetAppContainerNamedObjectPath.c)
 *     LdrpAllocateUnicodeString @ 0x18003FBC4 (LdrpAllocateUnicodeString.c)
 *     LdrpGetFullPath @ 0x18003FC30 (LdrpGetFullPath.c)
 *     RtlUpcaseUnicodeString @ 0x180050AE0 (RtlUpcaseUnicodeString.c)
 *     RtlpGetActivationContextDataStorageMapAndRosterHeader @ 0x18005329C (RtlpGetActivationContextDataStorageMapAndRosterHeader.c)
 *     RtlpResolveAssemblyStorageMapEntry @ 0x18005381C (RtlpResolveAssemblyStorageMapEntry.c)
 *     RtlpProbeAssemblyStorageRootForAssembly @ 0x180054164 (RtlpProbeAssemblyStorageRootForAssembly.c)
 *     RtlDosSearchPath_Ustr @ 0x18005FCB0 (RtlDosSearchPath_Ustr.c)
 *     RtlGetFullPathName_UstrEx @ 0x180060240 (RtlGetFullPathName_UstrEx.c)
 *     RtlUnicodeStringToOemString @ 0x1800634C0 (RtlUnicodeStringToOemString.c)
 *     RtlStringFromGUIDEx @ 0x180064E10 (RtlStringFromGUIDEx.c)
 *     RtlpEnsureBufferSize @ 0x180068970 (RtlpEnsureBufferSize.c)
 *     RtlDowncaseUnicodeString @ 0x18006AA40 (RtlDowncaseUnicodeString.c)
 *     RtlDuplicateUnicodeString @ 0x18006BC20 (RtlDuplicateUnicodeString.c)
 *     RtlUpcaseUnicodeStringToOemString @ 0x18006D250 (RtlUpcaseUnicodeStringToOemString.c)
 *     RtlOemStringToUnicodeString @ 0x18006D450 (RtlOemStringToUnicodeString.c)
 *     RtlComputePrivatizedDllName_U @ 0x1800C10D0 (RtlComputePrivatizedDllName_U.c)
 *     RtlpGetAssemblyStorageMapRootLocation @ 0x1800CA470 (RtlpGetAssemblyStorageMapRootLocation.c)
 *     RtlUnicodeStringToCountedOemString @ 0x1800D20C0 (RtlUnicodeStringToCountedOemString.c)
 *     RtlUpcaseUnicodeStringToAnsiString @ 0x1800D2210 (RtlUpcaseUnicodeStringToAnsiString.c)
 *     RtlUpcaseUnicodeStringToCountedOemString @ 0x1800D2330 (RtlUpcaseUnicodeStringToCountedOemString.c)
 * Callees:
 *     <none>
 */

PVOID __fastcall NtdllpAllocateStringRoutine(SIZE_T a1)
{
  return RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, a1);
}
