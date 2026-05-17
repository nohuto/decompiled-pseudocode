/*
 * XREFs of NtCreateTokenEx @ 0x180094470
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 NtCreateTokenEx()
{
  __int64 result; // rax

  result = 183LL;
  __asm { syscall; Low latency system call }
  return result;
}
