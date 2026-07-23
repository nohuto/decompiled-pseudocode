/*
 * XREFs of ZwOpenEvent @ 0x14015A9F0
 * Callers:
 *     PspShutdownCsrProcess @ 0x14067EB60 (PspShutdownCsrProcess.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwOpenEvent(PHANDLE EventHandle, ACCESS_MASK DesiredAccess, POBJECT_ATTRIBUTES ObjectAttributes)
{
  _disable();
  __readeflags();
  return KiServiceInternal(EventHandle);
}
