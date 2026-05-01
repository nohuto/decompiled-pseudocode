/*
 * XREFs of NtOpenKey_0 @ 0x18002B7C6
 * Callers:
 *     RtlpTestHookInitialize @ 0x18002A6B0 (RtlpTestHookInitialize.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall NtOpenKey_0(PHANDLE KeyHandle, ACCESS_MASK DesiredAccess, POBJECT_ATTRIBUTES ObjectAttributes)
{
  return NtOpenKey(KeyHandle, DesiredAccess, ObjectAttributes);
}
