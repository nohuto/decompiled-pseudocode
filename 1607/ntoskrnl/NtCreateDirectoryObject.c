/*
 * XREFs of NtCreateDirectoryObject @ 0x140470CCC
 * Callers:
 *     ObInitSystem @ 0x1407A0370 (ObInitSystem.c)
 *     ExpInitializeCallbacks @ 0x1407A20B8 (ExpInitializeCallbacks.c)
 *     CreateSystemRootLink @ 0x1407BA050 (CreateSystemRootLink.c)
 *     IopCreateRootDirectories @ 0x1407BBEC0 (IopCreateRootDirectories.c)
 * Callees:
 *     ObpCreateDirectoryObject @ 0x140470CE4 (ObpCreateDirectoryObject.c)
 */

NTSTATUS __stdcall NtCreateDirectoryObject(
        PHANDLE DirectoryHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes)
{
  return ObpCreateDirectoryObject(DirectoryHandle, DesiredAccess, ObjectAttributes, 0LL, 0);
}
