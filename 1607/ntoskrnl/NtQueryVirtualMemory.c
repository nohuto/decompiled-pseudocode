/*
 * XREFs of NtQueryVirtualMemory @ 0x1404321FC
 * Callers:
 *     <none>
 * Callees:
 *     MmQueryVirtualMemory @ 0x140432230 (MmQueryVirtualMemory.c)
 */

NTSTATUS __stdcall NtQueryVirtualMemory(
        HANDLE ProcessHandle,
        PVOID BaseAddress,
        MEMORY_INFORMATION_CLASS MemoryInformationClass,
        PVOID MemoryInformation,
        SIZE_T MemoryInformationLength,
        PSIZE_T ReturnLength)
{
  return MmQueryVirtualMemory(ProcessHandle, MemoryInformationLength, (__int64)ReturnLength, 2);
}
