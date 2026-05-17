/*
 * XREFs of NtPropagationFailed @ 0x180094B60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 NtPropagationFailed()
{
  __int64 result; // rax

  result = 294LL;
  __asm { syscall; Low latency system call }
  return result;
}
