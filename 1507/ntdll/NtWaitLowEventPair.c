/*
 * XREFs of NtWaitLowEventPair @ 0x180095480
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 NtWaitLowEventPair()
{
  __int64 result; // rax

  result = 440LL;
  __asm { syscall; Low latency system call }
  return result;
}
