/*
 * XREFs of BiZwOpenKey @ 0x14011BBCC
 * Callers:
 *     BiCreateKey @ 0x1404FCD80 (BiCreateKey.c)
 *     BiOpenKey @ 0x1404FD5F4 (BiOpenKey.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall BiZwOpenKey(PHANDLE KeyHandle, ACCESS_MASK DesiredAccess, POBJECT_ATTRIBUTES ObjectAttributes)
{
  return ZwOpenKey(KeyHandle, DesiredAccess, ObjectAttributes);
}
