/*
 * XREFs of NtSetIRTimer @ 0x180095080
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 NtSetIRTimer()
{
  __int64 result; // rax

  result = 376LL;
  __asm { syscall; Low latency system call }
  return result;
}
