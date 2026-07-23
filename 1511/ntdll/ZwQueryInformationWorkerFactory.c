/*
 * XREFs of ZwQueryInformationWorkerFactory @ 0x1800A77D0
 * Callers:
 *     TpQueryPoolStackInformation @ 0x1800F5010 (TpQueryPoolStackInformation.c)
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

  result = 313;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
