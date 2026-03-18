/*
 * XREFs of FsRtlOplockFsctrlEx @ 0x14048EA0C
 * Callers:
 *     <none>
 * Callees:
 *     FsRtlpOplockFsctrlInternal @ 0x14048EA24 (FsRtlpOplockFsctrlInternal.c)
 */

NTSTATUS __stdcall FsRtlOplockFsctrlEx(POPLOCK Oplock, PIRP Irp, ULONG OpenCount, ULONG Flags)
{
  return FsRtlpOplockFsctrlInternal(Oplock, Irp, 28672);
}
