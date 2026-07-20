/*
 * XREFs of NtOpenKey @ 0x14000C220
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall NtOpenKey(PHANDLE KeyHandle, ACCESS_MASK DesiredAccess, POBJECT_ATTRIBUTES ObjectAttributes)
{
  return __imp_NtOpenKey(KeyHandle, DesiredAccess, ObjectAttributes);
}
