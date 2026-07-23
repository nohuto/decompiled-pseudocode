/*
 * XREFs of ZwOpenSession @ 0x1401812D0
 * Callers:
 *     PnpInitializeNotifyEntry @ 0x1405619FC (PnpInitializeNotifyEntry.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwOpenSession(PHANDLE SessionHandle, ACCESS_MASK DesiredAccess, POBJECT_ATTRIBUTES ObjectAttributes)
{
  _disable();
  __readeflags();
  return KiServiceInternal(SessionHandle);
}
