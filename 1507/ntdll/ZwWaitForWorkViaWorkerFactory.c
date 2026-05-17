/*
 * XREFs of ZwWaitForWorkViaWorkerFactory @ 0x180095460
 * Callers:
 *     TppWorkerThread @ 0x180039390 (TppWorkerThread.c)
 * Callees:
 *     <none>
 */

__int64 ZwWaitForWorkViaWorkerFactory()
{
  __int64 result; // rax

  result = 438LL;
  __asm { syscall; Low latency system call }
  return result;
}
