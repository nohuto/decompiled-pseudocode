/*
 * XREFs of ZwSetQuotaInformationFile @ 0x1800951A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwSetQuotaInformationFile(
        HANDLE FileHandle,
        PIO_STATUS_BLOCK IoStatusBlock,
        PVOID Buffer,
        ULONG Length)
{
  NTSTATUS result; // eax

  result = 394;
  __asm { syscall; Low latency system call }
  return result;
}
