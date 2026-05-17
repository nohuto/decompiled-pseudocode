/*
 * XREFs of ZwOpenTimer @ 0x180094AA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 ZwOpenTimer()
{
  __int64 result; // rax

  result = 282LL;
  __asm { syscall; Low latency system call }
  return result;
}
