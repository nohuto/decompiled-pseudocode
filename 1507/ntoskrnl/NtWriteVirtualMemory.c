/*
 * XREFs of NtWriteVirtualMemory @ 0x140548274
 * Callers:
 *     <none>
 * Callees:
 *     MiReadWriteVirtualMemory @ 0x1404BD6B0 (MiReadWriteVirtualMemory.c)
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
           (SIZE_T)BaseAddress,
           (unsigned __int64)Buffer,
           NumberOfBytesToWrite,
           (ULONG64)NumberOfBytesWritten,
           0x20u);
}
