/*
 * XREFs of NtQueryOpenSubKeys @ 0x180094CD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 NtQueryOpenSubKeys()
{
  __int64 result; // rax

  result = 317LL;
  __asm { syscall; Low latency system call }
  return result;
}
