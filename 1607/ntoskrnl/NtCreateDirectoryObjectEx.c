/*
 * XREFs of NtCreateDirectoryObjectEx @ 0x1404D2974
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __cdecl NtCreateDirectoryObjectEx(
        PHANDLE DirectoryHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        HANDLE ShadowDirectoryHandle,
        ULONG Flags)
{
  return ObpCreateDirectoryObject(
           (unsigned __int64)DirectoryHandle,
           DesiredAccess,
           (int)ObjectAttributes,
           ShadowDirectoryHandle,
           Flags);
}
