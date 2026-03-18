/*
 * XREFs of ZwReplyWaitReceivePort @ 0x140159DE0
 * Callers:
 *     SepRmCommandServerThread @ 0x14056B50C (SepRmCommandServerThread.c)
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
  return KiServiceInternal(PortHandle, PortContext, ReplyMessage);
}
