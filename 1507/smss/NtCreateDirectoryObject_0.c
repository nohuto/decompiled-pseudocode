/*
 * XREFs of NtCreateDirectoryObject_0 @ 0x14000C4C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall NtCreateDirectoryObject_0(
        PHANDLE DirectoryHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes)
{
  return NtCreateDirectoryObject(DirectoryHandle, DesiredAccess, ObjectAttributes);
}
