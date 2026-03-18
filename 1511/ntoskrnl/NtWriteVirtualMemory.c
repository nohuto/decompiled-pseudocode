/*
 * XREFs of NtWriteVirtualMemory @ 0x1404B4884
 * Callers:
 *     <none>
 * Callees:
 *     MiReadWriteVirtualMemory @ 0x14047AA60 (MiReadWriteVirtualMemory.c)
 */

NTSTATUS __stdcall NtWriteVirtualMemory(
        HANDLE ProcessHandle,
        PVOID BaseAddress,
        PVOID Buffer,
        SIZE_T NumberOfBytesToWrite,
        PSIZE_T NumberOfBytesWritten)
{
  return MiReadWriteVirtualMemory(
           ProcessHandle,
           (size_t)BaseAddress,
           (size_t)Buffer,
           NumberOfBytesToWrite,
           (ULONG64)NumberOfBytesWritten,
           0x20u);
}
