/*
 * XREFs of NtQueryBootOptions @ 0x180094B90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 NtQueryBootOptions()
{
  __int64 result; // rax

  result = 297LL;
  __asm { syscall; Low latency system call }
  return result;
}
