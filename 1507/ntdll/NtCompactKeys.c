/*
 * XREFs of NtCompactKeys @ 0x180094240
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 NtCompactKeys()
{
  __int64 result; // rax

  result = 148LL;
  __asm { syscall; Low latency system call }
  return result;
}
