/*
 * XREFs of ZwRequestWaitReplyPort @ 0x14015A630
 * Callers:
 *     SepRmDispatchDataToLsa @ 0x1400AFB40 (SepRmDispatchDataToLsa.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwRequestWaitReplyPort(HANDLE PortHandle, PPORT_MESSAGE LpcReply, PPORT_MESSAGE LpcRequest)
{
  _disable();
  __readeflags();
  return KiServiceInternal(PortHandle);
}
