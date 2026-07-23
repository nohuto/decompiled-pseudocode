/*
 * XREFs of ZwSetEaFile @ 0x180095050
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwSetEaFile(HANDLE FileHandle, PIO_STATUS_BLOCK IoStatusBlock, PVOID Buffer, ULONG Length)
{
  NTSTATUS result; // eax

  result = 373;
  __asm { syscall; Low latency system call }
  return result;
}
