/*
 * XREFs of ZwAlpcCreatePort @ 0x14017FED0
 * Callers:
 *     VfZwAlpcCreatePort @ 0x14075501C (VfZwAlpcCreatePort.c)
 *     PopUmpoInitializeChannel @ 0x1407E46C0 (PopUmpoInitializeChannel.c)
 *     PopUmpoInitializeMonitorChannel @ 0x1407E6004 (PopUmpoInitializeMonitorChannel.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwAlpcCreatePort(
        PHANDLE PortHandle,
        POBJECT_ATTRIBUTES ObjectAttributes,
        PALPC_PORT_ATTRIBUTES PortAttributes)
{
  _disable();
  __readeflags();
  return KiServiceInternal(PortHandle);
}
