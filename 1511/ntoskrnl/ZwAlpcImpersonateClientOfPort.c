/*
 * XREFs of ZwAlpcImpersonateClientOfPort @ 0x140151660
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwAlpcImpersonateClientOfPort(HANDLE PortHandle, PPORT_MESSAGE Message, PVOID Flags)
{
  _disable();
  __readeflags();
  return KiServiceInternal(PortHandle);
}
