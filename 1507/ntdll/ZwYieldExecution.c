/*
 * XREFs of ZwYieldExecution @ 0x180093D60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS ZwYieldExecution(void)
{
  NTSTATUS result; // eax

  result = 70;
  __asm { syscall; Low latency system call }
  return result;
}
