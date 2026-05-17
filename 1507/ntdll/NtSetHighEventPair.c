/*
 * XREFs of NtSetHighEventPair @ 0x180095060
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 NtSetHighEventPair()
{
  __int64 result; // rax

  result = 374LL;
  __asm { syscall; Low latency system call }
  return result;
}
