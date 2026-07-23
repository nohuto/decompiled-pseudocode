/*
 * XREFs of ZwWaitForWorkViaWorkerFactory @ 0x180095460
 * Callers:
 *     TppWorkerThread @ 0x180039390 (TppWorkerThread.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwWaitForWorkViaWorkerFactory(
        HANDLE WorkerFactoryHandle,
        PFILE_IO_COMPLETION_INFORMATION MiniPackets,
        ULONG Count,
        PULONG PacketsReturned,
        PWORKER_FACTORY_DEFERRED_WORK DeferredWork)
{
  NTSTATUS result; // eax

  result = 438;
  __asm { syscall; Low latency system call }
  return result;
}
