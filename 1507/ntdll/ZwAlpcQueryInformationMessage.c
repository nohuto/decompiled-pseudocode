/*
 * XREFs of ZwAlpcQueryInformationMessage @ 0x180094160
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwAlpcQueryInformationMessage(
        HANDLE PortHandle,
        PPORT_MESSAGE PortMessage,
        ALPC_MESSAGE_INFORMATION_CLASS MessageInformationClass,
        PVOID MessageInformation,
        ULONG Length,
        PULONG ReturnLength)
{
  NTSTATUS result; // eax

  result = 134;
  __asm { syscall; Low latency system call }
  return result;
}
