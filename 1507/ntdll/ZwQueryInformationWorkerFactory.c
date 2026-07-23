/*
 * XREFs of ZwQueryInformationWorkerFactory @ 0x180094C60
 * Callers:
 *     TpQueryPoolStackInformation @ 0x1800F5610 (TpQueryPoolStackInformation.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwQueryInformationWorkerFactory(
        HANDLE WorkerFactoryHandle,
        WORKERFACTORYINFOCLASS WorkerFactoryInformationClass,
        PVOID WorkerFactoryInformation,
        ULONG WorkerFactoryInformationLength,
        PULONG ReturnLength)
{
  NTSTATUS result; // eax

  result = 310;
  __asm { syscall; Low latency system call }
  return result;
}
