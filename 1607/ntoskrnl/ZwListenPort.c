/*
 * XREFs of ZwListenPort @ 0x14015C0F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwListenPort(HANDLE PortHandle, PPORT_MESSAGE ConnectionRequest)
{
  _disable();
  __readeflags();
  return KiServiceInternal(PortHandle);
}
