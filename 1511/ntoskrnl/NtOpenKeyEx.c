/*
 * XREFs of NtOpenKeyEx @ 0x140412CF8
 * Callers:
 *     <none>
 * Callees:
 *     CmOpenKey @ 0x1404128E0 (CmOpenKey.c)
 */

NTSTATUS __cdecl NtOpenKeyEx(
        PHANDLE KeyHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        ULONG OpenOptions)
{
  return CmOpenKey(KeyHandle, DesiredAccess, (__int64)ObjectAttributes, OpenOptions, 0LL);
}
