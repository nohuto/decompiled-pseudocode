/*
 * XREFs of IoCheckShareAccess @ 0x14040C128
 * Callers:
 *     VerifierIoCheckShareAccess @ 0x140741EE0 (VerifierIoCheckShareAccess.c)
 * Callees:
 *     IoCheckShareAccessEx @ 0x14040C150 (IoCheckShareAccessEx.c)
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
