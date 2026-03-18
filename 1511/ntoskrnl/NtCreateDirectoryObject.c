/*
 * XREFs of NtCreateDirectoryObject @ 0x14044E338
 * Callers:
 *     ObInitSystem @ 0x140758E84 (ObInitSystem.c)
 *     ExpInitializeCallbacks @ 0x14075B3F4 (ExpInitializeCallbacks.c)
 *     ObpCreateDosDevicesDirectory @ 0x14076D380 (ObpCreateDosDevicesDirectory.c)
 *     CreateSystemRootLink @ 0x14076FAA8 (CreateSystemRootLink.c)
 *     IopCreateRootDirectories @ 0x14077127C (IopCreateRootDirectories.c)
 * Callees:
 *     ObpCreateDirectoryObject @ 0x14044E350 (ObpCreateDirectoryObject.c)
 */

NTSTATUS __stdcall NtCreateDirectoryObject(
        PHANDLE DirectoryHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes)
{
  return ObpCreateDirectoryObject(DirectoryHandle, DesiredAccess, ObjectAttributes, 0LL, 0);
}
