/*
 * XREFs of IoCheckShareAccess @ 0x14049387C
 * Callers:
 *     VerifierIoCheckShareAccess @ 0x1406C06EC (VerifierIoCheckShareAccess.c)
 * Callees:
 *     IoCheckShareAccessEx @ 0x140493898 (IoCheckShareAccessEx.c)
 */

NTSTATUS __stdcall IoCheckShareAccess(
        ACCESS_MASK DesiredAccess,
        ULONG DesiredShareAccess,
        PFILE_OBJECT FileObject,
        PSHARE_ACCESS ShareAccess,
        BOOLEAN Update)
{
  return IoCheckShareAccessEx(DesiredAccess, DesiredShareAccess, FileObject, ShareAccess, Update, 0LL);
}
