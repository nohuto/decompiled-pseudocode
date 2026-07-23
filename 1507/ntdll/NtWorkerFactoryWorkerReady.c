/*
 * XREFs of NtWorkerFactoryWorkerReady @ 0x180093910
 * Callers:
 *     TppWorkerThread @ 0x180039390 (TppWorkerThread.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtWorkerFactoryWorkerReady(HANDLE WorkerFactoryHandle)
{
  NTSTATUS result; // eax

  result = 1;
  __asm { syscall; Low latency system call }
  return result;
}
