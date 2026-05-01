/*
 * XREFs of NtOpenKey_0 @ 0x180021382
 * Callers:
 *     RtlpTestHookInitialize @ 0x180020710 (RtlpTestHookInitialize.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall NtOpenKey_0(PHANDLE KeyHandle, ACCESS_MASK DesiredAccess, POBJECT_ATTRIBUTES ObjectAttributes)
{
  return NtOpenKey(KeyHandle, DesiredAccess, ObjectAttributes);
}
