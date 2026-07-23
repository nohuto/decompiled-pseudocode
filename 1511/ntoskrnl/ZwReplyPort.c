/*
 * XREFs of ZwReplyPort @ 0x1401507A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwReplyPort(HANDLE PortHandle, PPORT_MESSAGE LpcReply)
{
  _disable();
  __readeflags();
  return KiServiceInternal(PortHandle);
}
