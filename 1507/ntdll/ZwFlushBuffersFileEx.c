/*
 * XREFs of ZwFlushBuffersFileEx @ 0x180094670
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwFlushBuffersFileEx(
        HANDLE FileHandle,
        ULONG Flags,
        PVOID Parameters,
        ULONG ParametersSize,
        PIO_STATUS_BLOCK IoStatusBlock)
{
  NTSTATUS result; // eax

  result = 215;
  __asm { syscall; Low latency system call }
  return result;
}
