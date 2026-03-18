/*
 * XREFs of VerifierIoRemoveShareAccess @ 0x1406C081C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall VerifierIoRemoveShareAccess(PFILE_OBJECT FileObject, PSHARE_ACCESS ShareAccess)
{
  pXdvIoRemoveShareAccess(FileObject, ShareAccess);
}
