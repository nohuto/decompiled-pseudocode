/*
 * XREFs of NtFlushWriteBuffer @ 0x1800946D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS NtFlushWriteBuffer(void)
{
  NTSTATUS result; // eax

  result = 221;
  __asm { syscall; Low latency system call }
  return result;
}
