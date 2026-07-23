/*
 * XREFs of ZwAlpcSendWaitReceivePort @ 0x14015B2F0
 * Callers:
 *     PopUmpoProcessMessages @ 0x140009A6C (PopUmpoProcessMessages.c)
 *     PopUmpoSendPowerMessage @ 0x1400F94C4 (PopUmpoSendPowerMessage.c)
 *     PopMonitorProcessLoop @ 0x14057EC3C (PopMonitorProcessLoop.c)
 *     DbgkpSendErrorMessage @ 0x14061A5D8 (DbgkpSendErrorMessage.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwAlpcSendWaitReceivePort(
        HANDLE PortHandle,
        ULONG Flags,
        PPORT_MESSAGE SendMessageA,
        PALPC_MESSAGE_ATTRIBUTES SendMessageAttributes,
        PPORT_MESSAGE ReceiveMessage,
        PSIZE_T BufferLength,
        PALPC_MESSAGE_ATTRIBUTES ReceiveMessageAttributes,
        PLARGE_INTEGER Timeout)
{
  _disable();
  __readeflags();
  return KiServiceInternal(PortHandle);
}
