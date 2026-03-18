/*
 * XREFs of IoSetShareAccess @ 0x14040C114
 * Callers:
 *     VerifierIoSetShareAccess @ 0x140742060 (VerifierIoSetShareAccess.c)
 * Callees:
 *     IoSetShareAccessEx @ 0x140006BF0 (IoSetShareAccessEx.c)
 */

void __stdcall IoSetShareAccess(
        ACCESS_MASK DesiredAccess,
        ULONG DesiredShareAccess,
        PFILE_OBJECT FileObject,
        PSHARE_ACCESS ShareAccess)
{
  IoSetShareAccessEx(DesiredAccess, DesiredShareAccess, FileObject, ShareAccess, 0LL);
}
