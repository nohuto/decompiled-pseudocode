/*
 * XREFs of VerifierIoSetShareAccess @ 0x1406C086C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall VerifierIoSetShareAccess(
        ACCESS_MASK DesiredAccess,
        ULONG DesiredShareAccess,
        PFILE_OBJECT FileObject,
        PSHARE_ACCESS ShareAccess)
{
  pXdvIoSetShareAccess(DesiredAccess, DesiredShareAccess, FileObject, ShareAccess);
}
