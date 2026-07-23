/*
 * XREFs of NtOpenKeyEx @ 0x1404F5548
 * Callers:
 *     <none>
 * Callees:
 *     CmOpenKey @ 0x1404F5560 (CmOpenKey.c)
 */

NTSTATUS __cdecl NtOpenKeyEx(
        PHANDLE KeyHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        ULONG OpenOptions)
{
  return CmOpenKey((_DWORD)KeyHandle, DesiredAccess, (_DWORD)ObjectAttributes, OpenOptions, 0LL);
}
