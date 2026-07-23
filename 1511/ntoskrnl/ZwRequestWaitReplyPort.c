/*
 * XREFs of ZwRequestWaitReplyPort @ 0x140150A60
 * Callers:
 *     SepRmDispatchDataToLsa @ 0x1400D513C (SepRmDispatchDataToLsa.c)
 *     VfZwRequestWaitReplyPort @ 0x1406D40C4 (VfZwRequestWaitReplyPort.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwRequestWaitReplyPort(HANDLE PortHandle, PPORT_MESSAGE LpcReply, PPORT_MESSAGE LpcRequest)
{
  _disable();
  __readeflags();
  return KiServiceInternal(PortHandle);
}
