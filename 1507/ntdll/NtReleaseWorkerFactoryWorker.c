/*
 * XREFs of NtReleaseWorkerFactoryWorker @ 0x180094E50
 * Callers:
 *     TpPostTask @ 0x180027C78 (TpPostTask.c)
 *     TppWorkpExecuteCallback @ 0x18003AE20 (TppWorkpExecuteCallback.c)
 *     TppPrepareDirectParams @ 0x18003B540 (TppPrepareDirectParams.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtReleaseWorkerFactoryWorker(HANDLE WorkerFactoryHandle)
{
  NTSTATUS result; // eax

  result = 341;
  __asm { syscall; Low latency system call }
  return result;
}
