/*
 * XREFs of BiZwOpenKey @ 0x14014FE58
 * Callers:
 *     BiCreateKey @ 0x14056F820 (BiCreateKey.c)
 *     BiOpenKey @ 0x140570094 (BiOpenKey.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall BiZwOpenKey(PHANDLE KeyHandle, ACCESS_MASK DesiredAccess, POBJECT_ATTRIBUTES ObjectAttributes)
{
  return ZwOpenKey(KeyHandle, DesiredAccess, ObjectAttributes);
}
