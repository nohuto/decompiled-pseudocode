/*
 * XREFs of ZwWriteRequestData @ 0x180093E70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwWriteRequestData(
        HANDLE PortHandle,
        PPORT_MESSAGE Message,
        ULONG DataEntryIndex,
        PVOID Buffer,
        SIZE_T BufferSize,
        PSIZE_T NumberOfBytesWritten)
{
  NTSTATUS result; // eax

  result = 87;
  __asm { syscall; Low latency system call }
  return result;
}
