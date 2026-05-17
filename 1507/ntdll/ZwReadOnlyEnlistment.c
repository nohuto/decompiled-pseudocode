/*
 * XREFs of ZwReadOnlyEnlistment @ 0x180094DE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 ZwReadOnlyEnlistment()
{
  __int64 result; // rax

  result = 334LL;
  __asm { syscall; Low latency system call }
  return result;
}
