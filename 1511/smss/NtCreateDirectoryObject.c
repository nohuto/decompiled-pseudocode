/*
 * XREFs of NtCreateDirectoryObject @ 0x14000C2A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall NtCreateDirectoryObject(
        PHANDLE DirectoryHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes)
{
  return __imp_NtCreateDirectoryObject(DirectoryHandle, DesiredAccess, ObjectAttributes);
}
