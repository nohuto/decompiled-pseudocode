/*
 * XREFs of ZwCreateTransactionManager @ 0x180094490
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 ZwCreateTransactionManager()
{
  __int64 result; // rax

  result = 185LL;
  __asm { syscall; Low latency system call }
  return result;
}
