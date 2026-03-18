/*
 * XREFs of ZwRequestPort @ 0x14015C900
 * Callers:
 *     SepRmDispatchDataToLsa @ 0x1400B1C00 (SepRmDispatchDataToLsa.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwRequestPort(HANDLE PortHandle, PPORT_MESSAGE LpcMessage)
{
  __int64 v2; // r8

  _disable();
  __readeflags();
  return KiServiceInternal(PortHandle, LpcMessage, v2);
}
