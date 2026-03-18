/*
 * XREFs of VerifierIoUpdateShareAccess @ 0x1406C089C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall VerifierIoUpdateShareAccess(PFILE_OBJECT FileObject, PSHARE_ACCESS ShareAccess)
{
  pXdvIoUpdateShareAccess(FileObject, ShareAccess);
}
