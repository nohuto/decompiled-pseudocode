/*
 * XREFs of NtQueryInformationPort @ 0x180094C20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtQueryInformationPort(
        HANDLE PortHandle,
        PORT_INFORMATION_CLASS PortInformationClass,
        PVOID PortInformation,
        ULONG Length,
        PULONG ReturnLength)
{
  NTSTATUS result; // eax

  result = 306;
  __asm { syscall; Low latency system call }
  return result;
}
