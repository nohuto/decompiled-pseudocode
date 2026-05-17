/*
 * XREFs of NtCreateEnlistment @ 0x1800942D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 NtCreateEnlistment()
{
  __int64 result; // rax

  result = 157LL;
  __asm { syscall; Low latency system call }
  return result;
}
