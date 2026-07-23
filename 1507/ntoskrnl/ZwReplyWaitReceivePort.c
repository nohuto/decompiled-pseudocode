/*
 * XREFs of ZwReplyWaitReceivePort @ 0x14017F150
 * Callers:
 *     SepRmCommandServerThread @ 0x1405A7600 (SepRmCommandServerThread.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwReplyWaitReceivePort(
        HANDLE PortHandle,
        PVOID *PortContext,
        PPORT_MESSAGE ReplyMessage,
        PPORT_MESSAGE ReceiveMessage)
{
  _disable();
  __readeflags();
  return KiServiceInternal(PortHandle);
}
