/*
 * XREFs of ZwAlpcQueryInformation @ 0x140180090
 * Callers:
 *     VfZwAlpcQueryInformation @ 0x140755214 (VfZwAlpcQueryInformation.c)
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
  _disable();
  __readeflags();
  return KiServiceInternal(PortHandle);
}
