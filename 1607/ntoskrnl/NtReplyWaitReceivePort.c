/*
 * XREFs of NtReplyWaitReceivePort @ 0x1404B2F8C
 * Callers:
 *     <none>
 * Callees:
 *     NtReplyWaitReceivePortEx @ 0x1404B2FA0 (NtReplyWaitReceivePortEx.c)
 */

NTSTATUS __stdcall NtReplyWaitReceivePort(
        HANDLE PortHandle,
        PVOID *PortContext,
        PPORT_MESSAGE ReplyMessage,
        PPORT_MESSAGE ReceiveMessage)
{
  return NtReplyWaitReceivePortEx(PortHandle, PortContext, ReplyMessage, ReceiveMessage, 0LL);
}
