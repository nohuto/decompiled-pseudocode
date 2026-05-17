/*
 * XREFs of ZwCommitTransaction @ 0x180094230
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 ZwCommitTransaction()
{
  __int64 result; // rax

  result = 147LL;
  __asm { syscall; Low latency system call }
  return result;
}
