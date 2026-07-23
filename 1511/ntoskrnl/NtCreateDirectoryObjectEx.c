/*
 * XREFs of NtCreateDirectoryObjectEx @ 0x1404C40BC
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
  return ObpCreateDirectoryObject(DirectoryHandle, DesiredAccess, (int)ObjectAttributes, ShadowDirectoryHandle, Flags);
}
