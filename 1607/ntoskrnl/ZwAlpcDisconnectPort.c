/*
 * XREFs of ZwAlpcDisconnectPort @ 0x14015B1F0
 * Callers:
 *     DbgkRegisterErrorPort @ 0x14057BE30 (DbgkRegisterErrorPort.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwAlpcDisconnectPort(HANDLE PortHandle, ULONG Flags)
{
  _disable();
  __readeflags();
  return KiServiceInternal(PortHandle);
}
