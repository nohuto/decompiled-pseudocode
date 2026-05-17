/*
 * XREFs of NtCreateTimer2 @ 0x180094450
 * Callers:
 *     TppInitializeTimerSubQueue @ 0x18007CEC8 (TppInitializeTimerSubQueue.c)
 * Callees:
 *     <none>
 */

__int64 NtCreateTimer2()
{
  __int64 result; // rax

  result = 181LL;
  __asm { syscall; Low latency system call }
  return result;
}
