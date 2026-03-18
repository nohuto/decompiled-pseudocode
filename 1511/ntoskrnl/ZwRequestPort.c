/*
 * XREFs of ZwRequestPort @ 0x140153220
 * Callers:
 *     SepRmDispatchDataToLsa @ 0x1400D513C (SepRmDispatchDataToLsa.c)
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
