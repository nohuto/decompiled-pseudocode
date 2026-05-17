/*
 * XREFs of NtOpenEnlistment @ 0x180094980
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 NtOpenEnlistment()
{
  __int64 result; // rax

  result = 264LL;
  __asm { syscall; Low latency system call }
  return result;
}
