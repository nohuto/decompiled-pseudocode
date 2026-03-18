/*
 * XREFs of BiZwOpenKey @ 0x14012E070
 * Callers:
 *     BiCreateKey @ 0x14053D6A0 (BiCreateKey.c)
 *     BiOpenKey @ 0x14053DE4C (BiOpenKey.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall BiZwOpenKey(PHANDLE KeyHandle, ACCESS_MASK DesiredAccess, POBJECT_ATTRIBUTES ObjectAttributes)
{
  return ZwOpenKey(KeyHandle, DesiredAccess, ObjectAttributes);
}
