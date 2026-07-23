/*
 * XREFs of IoBuildAsynchronousFsdRequest @ 0x14010AE94
 * Callers:
 *     FsRtlPrepareMdlWriteEx @ 0x1404D017C (FsRtlPrepareMdlWriteEx.c)
 *     FsRtlMdlReadEx @ 0x1404D0270 (FsRtlMdlReadEx.c)
 *     ?Read@PC_ENVIRONMENT@@SAJPEAX0K_K@Z @ 0x140575240 (-Read@PC_ENVIRONMENT@@SAJPEAX0K_K@Z.c)
 *     ?Write@PC_ENVIRONMENT@@SAJPEAX0K_K@Z @ 0x14061FF4C (-Write@PC_ENVIRONMENT@@SAJPEAX0K_K@Z.c)
 * Callees:
 *     IopBuildAsynchronousFsdRequest @ 0x14010AEC0 (IopBuildAsynchronousFsdRequest.c)
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
