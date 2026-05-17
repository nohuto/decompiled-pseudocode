/*
 * XREFs of ZwOpenSession @ 0x180094A70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 ZwOpenSession()
{
  __int64 result; // rax

  result = 279LL;
  __asm { syscall; Low latency system call }
  return result;
}
