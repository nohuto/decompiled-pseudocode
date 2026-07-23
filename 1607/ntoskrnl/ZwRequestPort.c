/*
 * XREFs of ZwRequestPort @ 0x14015CE70
 * Callers:
 *     SepRmDispatchDataToLsa @ 0x1400AFB40 (SepRmDispatchDataToLsa.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwRequestPort(HANDLE PortHandle, PPORT_MESSAGE LpcMessage)
{
  _disable();
  __readeflags();
  return KiServiceInternal(PortHandle);
}
