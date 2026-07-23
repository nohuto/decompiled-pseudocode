/*
 * XREFs of ZwRegisterThreadTerminatePort @ 0x14015CD30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwRegisterThreadTerminatePort(HANDLE TerminationPort)
{
  _disable();
  __readeflags();
  return KiServiceInternal(TerminationPort);
}
