/*
 * XREFs of ZwListenPort @ 0x140180E70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwListenPort(HANDLE PortHandle, PPORT_MESSAGE ConnectionRequest)
{
  __int64 v2; // r8

  _disable();
  __readeflags();
  return KiServiceInternal(PortHandle, ConnectionRequest, v2);
}
