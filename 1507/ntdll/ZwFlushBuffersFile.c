/*
 * XREFs of ZwFlushBuffersFile @ 0x180093DB0
 * Callers:
 *     RtlUnlockBootStatusData @ 0x180079310 (RtlUnlockBootStatusData.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwFlushBuffersFile(HANDLE FileHandle, PIO_STATUS_BLOCK IoStatusBlock)
{
  NTSTATUS result; // eax

  result = 75;
  __asm { syscall; Low latency system call }
  return result;
}
