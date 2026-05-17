/*
 * XREFs of NtCompressKey @ 0x180094280
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 NtCompressKey()
{
  __int64 result; // rax

  result = 152LL;
  __asm { syscall; Low latency system call }
  return result;
}
