/*
 * XREFs of ZwReplyPort @ 0x140159E00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwReplyPort(HANDLE PortHandle, PPORT_MESSAGE LpcReply)
{
  __int64 v2; // r8

  _disable();
  __readeflags();
  return KiServiceInternal(PortHandle, LpcReply, v2);
}
