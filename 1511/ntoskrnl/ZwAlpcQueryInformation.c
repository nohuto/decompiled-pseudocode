/*
 * XREFs of ZwAlpcQueryInformation @ 0x1401516C0
 * Callers:
 *     VfZwAlpcQueryInformation @ 0x1406D164C (VfZwAlpcQueryInformation.c)
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
