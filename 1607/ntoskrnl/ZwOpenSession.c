/*
 * XREFs of ZwOpenSession @ 0x14015C590
 * Callers:
 *     PnpInitializeNotifyEntry @ 0x14052AE60 (PnpInitializeNotifyEntry.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwOpenSession(PHANDLE SessionHandle, ACCESS_MASK DesiredAccess, POBJECT_ATTRIBUTES ObjectAttributes)
{
  _disable();
  __readeflags();
  return KiServiceInternal(SessionHandle);
}
