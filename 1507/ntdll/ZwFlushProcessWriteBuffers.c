/*
 * XREFs of ZwFlushProcessWriteBuffers @ 0x1800946B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS ZwFlushProcessWriteBuffers(void)
{
  NTSTATUS result; // eax

  result = 219;
  __asm { syscall; Low latency system call }
  return result;
}
