/*
 * XREFs of ZwAlpcDisconnectPort @ 0x14017FFF0
 * Callers:
 *     DbgkRegisterErrorPort @ 0x1405BE8F4 (DbgkRegisterErrorPort.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwAlpcDisconnectPort(HANDLE PortHandle, ULONG Flags)
{
  _disable();
  __readeflags();
  return KiServiceInternal(PortHandle);
}
