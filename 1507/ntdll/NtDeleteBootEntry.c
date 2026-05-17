/*
 * XREFs of NtDeleteBootEntry @ 0x180094520
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 NtDeleteBootEntry()
{
  __int64 result; // rax

  result = 194LL;
  __asm { syscall; Low latency system call }
  return result;
}
