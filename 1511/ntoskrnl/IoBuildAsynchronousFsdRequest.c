/*
 * XREFs of IoBuildAsynchronousFsdRequest @ 0x1400E520C
 * Callers:
 *     FsRtlPrepareMdlWriteEx @ 0x1404C3814 (FsRtlPrepareMdlWriteEx.c)
 *     FsRtlMdlReadEx @ 0x1404C3908 (FsRtlMdlReadEx.c)
 * Callees:
 *     IopBuildAsynchronousFsdRequest @ 0x1400E5238 (IopBuildAsynchronousFsdRequest.c)
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
