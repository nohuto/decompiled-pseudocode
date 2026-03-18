/*
 * XREFs of NtCreateDirectoryObject @ 0x140540108
 * Callers:
 *     ObInitSystem @ 0x1407C266C (ObInitSystem.c)
 *     ObpCreateDosDevicesDirectory @ 0x1407E2610 (ObpCreateDosDevicesDirectory.c)
 *     ExpInitializeCallbacks @ 0x1407E3A04 (ExpInitializeCallbacks.c)
 *     CreateSystemRootLink @ 0x1407E59E8 (CreateSystemRootLink.c)
 *     IopCreateRootDirectories @ 0x1407E7698 (IopCreateRootDirectories.c)
 * Callees:
 *     ObpCreateDirectoryObject @ 0x140540120 (ObpCreateDirectoryObject.c)
 */

NTSTATUS __stdcall NtCreateDirectoryObject(
        PHANDLE DirectoryHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes)
{
  return ObpCreateDirectoryObject(DirectoryHandle, DesiredAccess, ObjectAttributes, 0LL, 0);
}
