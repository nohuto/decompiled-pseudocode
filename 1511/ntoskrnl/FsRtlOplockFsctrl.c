/*
 * XREFs of FsRtlOplockFsctrl @ 0x14048E9F0
 * Callers:
 *     <none>
 * Callees:
 *     FsRtlpOplockFsctrlInternal @ 0x14048EA24 (FsRtlpOplockFsctrlInternal.c)
 */

NTSTATUS __stdcall FsRtlOplockFsctrl(POPLOCK Oplock, PIRP Irp, ULONG OpenCount)
{
  return FsRtlpOplockFsctrlInternal(Oplock, Irp, 28672);
}
