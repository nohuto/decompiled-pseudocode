/*
 * XREFs of NtReadVirtualMemory @ 0x14047AA40
 * Callers:
 *     <none>
 * Callees:
 *     MiReadWriteVirtualMemory @ 0x14047AA60 (MiReadWriteVirtualMemory.c)
 */

NTSTATUS __stdcall NtReadVirtualMemory(
        HANDLE ProcessHandle,
        PVOID BaseAddress,
        PVOID Buffer,
        SIZE_T NumberOfBytesToRead,
        PSIZE_T NumberOfBytesRead)
{
  return MiReadWriteVirtualMemory(ProcessHandle, (__int64)NumberOfBytesRead, 0x10u);
}
