/*
 * XREFs of NtIsProcessInJob @ 0x180093DF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 NtIsProcessInJob()
{
  __int64 result; // rax

  result = 79LL;
  __asm { syscall; Low latency system call }
  return result;
}
