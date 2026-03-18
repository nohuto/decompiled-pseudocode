/*
 * XREFs of VerifierIoCheckShareAccess @ 0x140741EE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall VerifierIoCheckShareAccess(
        ACCESS_MASK DesiredAccess,
        ULONG DesiredShareAccess,
        PFILE_OBJECT FileObject,
        PSHARE_ACCESS ShareAccess,
        BOOLEAN Update)
{
  return pXdvIoCheckShareAccess(DesiredAccess, DesiredShareAccess, FileObject, ShareAccess, Update);
}
