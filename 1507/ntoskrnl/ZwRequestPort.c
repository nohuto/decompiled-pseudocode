/*
 * XREFs of ZwRequestPort @ 0x140181B90
 * Callers:
 *     SepRmDispatchDataToLsa @ 0x140117760 (SepRmDispatchDataToLsa.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwRequestPort(HANDLE PortHandle, PPORT_MESSAGE LpcMessage)
{
  _disable();
  __readeflags();
  return KiServiceInternal(PortHandle);
}
