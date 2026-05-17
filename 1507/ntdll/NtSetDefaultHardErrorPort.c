/*
 * XREFs of NtSetDefaultHardErrorPort @ 0x180095010
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 NtSetDefaultHardErrorPort()
{
  __int64 result; // rax

  result = 369LL;
  __asm { syscall; Low latency system call }
  return result;
}
