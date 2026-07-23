/*
 * XREFs of NtAlpcSetInformation @ 0x180094190
 * Callers:
 *     AlpcRegisterCompletionList @ 0x180078A50 (AlpcRegisterCompletionList.c)
 *     AlpcRundownCompletionList @ 0x180079400 (AlpcRundownCompletionList.c)
 *     AlpcUnregisterCompletionList @ 0x180079420 (AlpcUnregisterCompletionList.c)
 *     AlpcAdjustCompletionListConcurrencyCount @ 0x1800797A0 (AlpcAdjustCompletionListConcurrencyCount.c)
 *     TppAllocAlpcCompletion @ 0x18007B264 (TppAllocAlpcCompletion.c)
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
  __asm { syscall; Low latency system call }
  return result;
}
