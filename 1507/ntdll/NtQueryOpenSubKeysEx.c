/*
 * XREFs of NtQueryOpenSubKeysEx @ 0x180094CE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 NtQueryOpenSubKeysEx()
{
  __int64 result; // rax

  result = 318LL;
  __asm { syscall; Low latency system call }
  return result;
}
