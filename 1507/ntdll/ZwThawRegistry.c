/*
 * XREFs of ZwThawRegistry @ 0x180095340
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS ZwThawRegistry(void)
{
  NTSTATUS result; // eax

  result = 420;
  __asm { syscall; Low latency system call }
  return result;
}
