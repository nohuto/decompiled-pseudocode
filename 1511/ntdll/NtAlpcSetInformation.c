/*
 * XREFs of NtAlpcSetInformation @ 0x1800A61D0
 * Callers:
 *     AlpcAdjustCompletionListConcurrencyCount @ 0x18006BD10 (AlpcAdjustCompletionListConcurrencyCount.c)
 *     TppAllocAlpcCompletion @ 0x18006BF34 (TppAllocAlpcCompletion.c)
 *     AlpcRegisterCompletionList @ 0x180085530 (AlpcRegisterCompletionList.c)
 *     AlpcUnregisterCompletionList @ 0x1800862D0 (AlpcUnregisterCompletionList.c)
 *     AlpcRundownCompletionList @ 0x180086480 (AlpcRundownCompletionList.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtAlpcSetInformation(
        HANDLE PortHandle,
        ALPC_PORT_INFORMATION_CLASS PortInformationClass,
        PVOID PortInformation,
        ULONG Length)
{
  NTSTATUS result; // eax

  result = 137;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
