/*
 * XREFs of ZwAlpcAcceptConnectPort @ 0x140151480
 * Callers:
 *     PopUmpoProcessMessage @ 0x140449588 (PopUmpoProcessMessage.c)
 *     PopMonitorProcessLoop @ 0x140549504 (PopMonitorProcessLoop.c)
 *     VfZwAlpcAcceptConnectPort @ 0x1406D126C (VfZwAlpcAcceptConnectPort.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwAlpcAcceptConnectPort(
        PHANDLE PortHandle,
        HANDLE ConnectionPortHandle,
        ULONG Flags,
        POBJECT_ATTRIBUTES ObjectAttributes,
        PALPC_PORT_ATTRIBUTES PortAttributes,
        PVOID PortContext,
        PPORT_MESSAGE ConnectionRequest,
        PALPC_MESSAGE_ATTRIBUTES ConnectionMessageAttributes,
        BOOLEAN AcceptConnection)
{
  _disable();
  __readeflags();
  return KiServiceInternal(PortHandle);
}
