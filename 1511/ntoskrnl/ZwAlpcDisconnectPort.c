/*
 * XREFs of ZwAlpcDisconnectPort @ 0x140151620
 * Callers:
 *     DbgkRegisterErrorPort @ 0x140547930 (DbgkRegisterErrorPort.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwAlpcDisconnectPort(HANDLE PortHandle, ULONG Flags)
{
  _disable();
  __readeflags();
  return KiServiceInternal(PortHandle);
}
