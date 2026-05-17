/*
 * XREFs of NtWorkerFactoryWorkerReady @ 0x180093910
 * Callers:
 *     TppWorkerThread @ 0x180039390 (TppWorkerThread.c)
 * Callees:
 *     <none>
 */

__int64 NtWorkerFactoryWorkerReady()
{
  __int64 result; // rax

  result = 1LL;
  __asm { syscall; Low latency system call }
  return result;
}
