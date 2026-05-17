/*
 * XREFs of ZwPrepareEnlistment @ 0x180094B10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 ZwPrepareEnlistment()
{
  __int64 result; // rax

  result = 289LL;
  __asm { syscall; Low latency system call }
  return result;
}
