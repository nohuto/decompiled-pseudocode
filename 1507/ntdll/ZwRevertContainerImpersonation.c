/*
 * XREFs of ZwRevertContainerImpersonation @ 0x180094F20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS ZwRevertContainerImpersonation(void)
{
  NTSTATUS result; // eax

  result = 354;
  __asm { syscall; Low latency system call }
  return result;
}
