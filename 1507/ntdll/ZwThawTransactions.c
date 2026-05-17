/*
 * XREFs of ZwThawTransactions @ 0x180095350
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 ZwThawTransactions()
{
  __int64 result; // rax

  result = 421LL;
  __asm { syscall; Low latency system call }
  return result;
}
