/*
 * XREFs of ZwRequestWaitReplyPort @ 0x14017F430
 * Callers:
 *     SepRmDispatchDataToLsa @ 0x140117760 (SepRmDispatchDataToLsa.c)
 *     VfZwRequestWaitReplyPort @ 0x140757C8C (VfZwRequestWaitReplyPort.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwRequestWaitReplyPort(HANDLE PortHandle, PPORT_MESSAGE LpcReply, PPORT_MESSAGE LpcRequest)
{
  _disable();
  __readeflags();
  return KiServiceInternal(PortHandle);
}
