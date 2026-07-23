/*
 * XREFs of ZwQueryDirectoryObject @ 0x180094BB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwQueryDirectoryObject(
        HANDLE DirectoryHandle,
        PVOID Buffer,
        ULONG Length,
        BOOLEAN ReturnSingleEntry,
        BOOLEAN RestartScan,
        PULONG Context,
        PULONG ReturnLength)
{
  NTSTATUS result; // eax

  result = 299;
  __asm { syscall; Low latency system call }
  return result;
}
