/*
 * XREFs of IoSetShareAccess @ 0x14049384C
 * Callers:
 *     VerifierIoSetShareAccess @ 0x1406C086C (VerifierIoSetShareAccess.c)
 * Callees:
 *     IoSetShareAccessEx @ 0x1400D07B0 (IoSetShareAccessEx.c)
 */

void __stdcall IoSetShareAccess(
        ACCESS_MASK DesiredAccess,
        ULONG DesiredShareAccess,
        PFILE_OBJECT FileObject,
        PSHARE_ACCESS ShareAccess)
{
  IoSetShareAccessEx(DesiredAccess, DesiredShareAccess, FileObject, ShareAccess, 0LL);
}
