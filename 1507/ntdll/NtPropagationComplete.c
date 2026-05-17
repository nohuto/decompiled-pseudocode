/*
 * XREFs of NtPropagationComplete @ 0x180094B50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 NtPropagationComplete()
{
  __int64 result; // rax

  result = 293LL;
  __asm { syscall; Low latency system call }
  return result;
}
