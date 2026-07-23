/*
 * XREFs of ZwShutdownWorkerFactory @ 0x180095290
 * Callers:
 *     TpReleasePool @ 0x180073F00 (TpReleasePool.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwShutdownWorkerFactory(HANDLE WorkerFactoryHandle, LONG *PendingWorkerCount)
{
  NTSTATUS result; // eax

  result = 409;
  __asm { syscall; Low latency system call }
  return result;
}
