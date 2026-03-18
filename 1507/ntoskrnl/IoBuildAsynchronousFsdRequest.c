/*
 * XREFs of IoBuildAsynchronousFsdRequest @ 0x140007244
 * Callers:
 *     FsRtlPrepareMdlWriteEx @ 0x140558E04 (FsRtlPrepareMdlWriteEx.c)
 *     FsRtlMdlReadEx @ 0x140558EF8 (FsRtlMdlReadEx.c)
 * Callees:
 *     IopBuildAsynchronousFsdRequest @ 0x140007270 (IopBuildAsynchronousFsdRequest.c)
 */

PIRP __stdcall IoBuildAsynchronousFsdRequest(
        ULONG MajorFunction,
        PDEVICE_OBJECT DeviceObject,
        PVOID Buffer,
        ULONG Length,
        PLARGE_INTEGER StartingOffset,
        PIO_STATUS_BLOCK IoStatusBlock)
{
  void *retaddr; // [rsp+48h] [rbp+0h]

  return (PIRP)IopBuildAsynchronousFsdRequest(
                 MajorFunction,
                 DeviceObject,
                 Buffer,
                 Length,
                 StartingOffset,
                 IoStatusBlock,
                 retaddr);
}
