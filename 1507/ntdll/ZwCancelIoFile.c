/*
 * XREFs of ZwCancelIoFile @ 0x180093ED0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwCancelIoFile(HANDLE FileHandle, PIO_STATUS_BLOCK IoStatusBlock)
{
  NTSTATUS result; // eax

  result = 93;
  __asm { syscall; Low latency system call }
  return result;
}
