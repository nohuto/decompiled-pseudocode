/*
 * XREFs of IoCheckShareAccess @ 0x1403EBD50
 * Callers:
 *     <none>
 * Callees:
 *     IoCheckShareAccessEx @ 0x1403EBD6C (IoCheckShareAccessEx.c)
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
