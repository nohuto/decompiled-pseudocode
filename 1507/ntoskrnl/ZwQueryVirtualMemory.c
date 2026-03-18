/*
 * XREFs of ZwQueryVirtualMemory @ 0x14017F450
 * Callers:
 *     LdrpResGetMappingSize @ 0x140463BF8 (LdrpResGetMappingSize.c)
 *     RtlCreateHeap @ 0x14057F114 (RtlCreateHeap.c)
 *     EtwTimLogRedirectionTrustPolicy @ 0x1406E2BC0 (EtwTimLogRedirectionTrustPolicy.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwQueryVirtualMemory(
        HANDLE ProcessHandle,
        PVOID BaseAddress,
        MEMORY_INFORMATION_CLASS MemoryInformationClass,
        PVOID MemoryInformation,
        SIZE_T MemoryInformationLength,
        PSIZE_T ReturnLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle, BaseAddress, *(_QWORD *)&MemoryInformationClass);
}
