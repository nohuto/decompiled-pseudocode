/*
 * XREFs of ZwReplyWaitReplyPort @ 0x14015C8E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwReplyWaitReplyPort(HANDLE PortHandle, PPORT_MESSAGE ReplyMessage)
{
  __int64 v2; // r8

  _disable();
  __readeflags();
  return KiServiceInternal(PortHandle, ReplyMessage, v2);
}
