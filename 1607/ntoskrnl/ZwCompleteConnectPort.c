/*
 * XREFs of ZwCompleteConnectPort @ 0x14015B4F0
 * Callers:
 *     SepRmLsaConnectRequest @ 0x14056BF00 (SepRmLsaConnectRequest.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwCompleteConnectPort(HANDLE PortHandle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(PortHandle);
}
