/*
 * XREFs of ZwCompleteConnectPort @ 0x14015AF80
 * Callers:
 *     SepRmLsaConnectRequest @ 0x14056B9C0 (SepRmLsaConnectRequest.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwCompleteConnectPort(HANDLE PortHandle)
{
  __int64 v1; // rdx
  __int64 v2; // r8

  _disable();
  __readeflags();
  return KiServiceInternal(PortHandle, v1, v2);
}
