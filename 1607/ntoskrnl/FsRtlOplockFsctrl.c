/*
 * XREFs of FsRtlOplockFsctrl @ 0x14046A7E4
 * Callers:
 *     <none>
 * Callees:
 *     FsRtlpOplockFsctrlInternal @ 0x14046A818 (FsRtlpOplockFsctrlInternal.c)
 */

NTSTATUS __stdcall FsRtlOplockFsctrl(POPLOCK Oplock, PIRP Irp, ULONG OpenCount)
{
  return FsRtlpOplockFsctrlInternal(Oplock, Irp, 28672);
}
