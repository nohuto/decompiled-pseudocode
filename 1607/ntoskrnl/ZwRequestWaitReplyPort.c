/*
 * XREFs of ZwRequestWaitReplyPort @ 0x14015A0C0
 * Callers:
 *     SepRmDispatchDataToLsa @ 0x1400B1C00 (SepRmDispatchDataToLsa.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwRequestWaitReplyPort(HANDLE PortHandle, PPORT_MESSAGE LpcReply, PPORT_MESSAGE LpcRequest)
{
  _disable();
  __readeflags();
  return KiServiceInternal(PortHandle, LpcReply, LpcRequest);
}
