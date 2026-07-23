/*
 * XREFs of BiZwOpenKey @ 0x14012E5E0
 * Callers:
 *     BiCreateKey @ 0x14053DBE0 (BiCreateKey.c)
 *     BiOpenKey @ 0x14053E38C (BiOpenKey.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall BiZwOpenKey(PHANDLE KeyHandle, ACCESS_MASK DesiredAccess, POBJECT_ATTRIBUTES ObjectAttributes)
{
  return ZwOpenKey(KeyHandle, DesiredAccess, ObjectAttributes);
}
