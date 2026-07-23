/*
 * XREFs of ZwImpersonateClientOfPort @ 0x140150A00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwImpersonateClientOfPort(HANDLE PortHandle, PPORT_MESSAGE ClientMessage)
{
  _disable();
  __readeflags();
  return KiServiceInternal(PortHandle);
}
