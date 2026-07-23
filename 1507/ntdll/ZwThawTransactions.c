/*
 * XREFs of ZwThawTransactions @ 0x180095350
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS ZwThawTransactions(void)
{
  NTSTATUS result; // eax

  result = 421;
  __asm { syscall; Low latency system call }
  return result;
}
