/*
 * XREFs of ZwPrepareComplete @ 0x180094B00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 ZwPrepareComplete()
{
  __int64 result; // rax

  result = 288LL;
  __asm { syscall; Low latency system call }
  return result;
}
