/*
 * XREFs of ZwRecoverEnlistment @ 0x180094DF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 ZwRecoverEnlistment()
{
  __int64 result; // rax

  result = 335LL;
  __asm { syscall; Low latency system call }
  return result;
}
