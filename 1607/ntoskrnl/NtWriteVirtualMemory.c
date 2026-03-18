/*
 * XREFs of NtWriteVirtualMemory @ 0x1404DBF30
 * Callers:
 *     <none>
 * Callees:
 *     MiReadWriteVirtualMemory @ 0x14050BC60 (MiReadWriteVirtualMemory.c)
 */

NTSTATUS __stdcall NtWriteVirtualMemory(
        HANDLE ProcessHandle,
        PVOID BaseAddress,
        PVOID Buffer,
        SIZE_T NumberOfBytesToWrite,
        PSIZE_T NumberOfBytesWritten)
{
  return MiReadWriteVirtualMemory((ULONG_PTR)ProcessHandle, (__int64)NumberOfBytesWritten, 32);
}
