/*
 * XREFs of NtReplyWaitReceivePort @ 0x140423494
 * Callers:
 *     <none>
 * Callees:
 *     NtReplyWaitReceivePortEx @ 0x1404234B0 (NtReplyWaitReceivePortEx.c)
 */

NTSTATUS __stdcall NtReplyWaitReceivePort(
        HANDLE PortHandle,
        PVOID *PortContext,
        PPORT_MESSAGE ReplyMessage,
        PPORT_MESSAGE ReceiveMessage)
{
  return NtReplyWaitReceivePortEx(PortHandle, PortContext, ReplyMessage, ReceiveMessage, 0LL);
}
