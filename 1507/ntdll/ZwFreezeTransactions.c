/*
 * XREFs of ZwFreezeTransactions @ 0x180094700
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 ZwFreezeTransactions()
{
  __int64 result; // rax

  result = 224LL;
  __asm { syscall; Low latency system call }
  return result;
}
