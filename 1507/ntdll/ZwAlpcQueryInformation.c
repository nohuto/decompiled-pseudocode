/*
 * XREFs of ZwAlpcQueryInformation @ 0x180094150
 * Callers:
 *     TpWaitForAlpcCompletion @ 0x18007A5B0 (TpWaitForAlpcCompletion.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwAlpcQueryInformation(
        HANDLE PortHandle,
        ALPC_PORT_INFORMATION_CLASS PortInformationClass,
        PVOID PortInformation,
        ULONG Length,
        PULONG ReturnLength)
{
  NTSTATUS result; // eax

  result = 133;
  __asm { syscall; Low latency system call }
  return result;
}
