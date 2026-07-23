/*
 * XREFs of NtAlpcSetInformation @ 0x1800A7530
 * Callers:
 *     AlpcAdjustCompletionListConcurrencyCount @ 0x1800653E0 (AlpcAdjustCompletionListConcurrencyCount.c)
 *     TppAllocAlpcCompletion @ 0x180065604 (TppAllocAlpcCompletion.c)
 *     AlpcRegisterCompletionList @ 0x180088FD0 (AlpcRegisterCompletionList.c)
 *     AlpcRundownCompletionList @ 0x18008A2B0 (AlpcRundownCompletionList.c)
 *     AlpcUnregisterCompletionList @ 0x18008A2D0 (AlpcUnregisterCompletionList.c)
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
