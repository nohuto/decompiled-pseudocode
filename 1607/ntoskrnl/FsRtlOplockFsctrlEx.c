/*
 * XREFs of FsRtlOplockFsctrlEx @ 0x14046A800
 * Callers:
 *     <none>
 * Callees:
 *     FsRtlpOplockFsctrlInternal @ 0x14046A818 (FsRtlpOplockFsctrlInternal.c)
 */

NTSTATUS __stdcall FsRtlOplockFsctrlEx(POPLOCK Oplock, PIRP Irp, ULONG OpenCount, ULONG Flags)
{
  return FsRtlpOplockFsctrlInternal(Oplock, Irp, 28672);
}
