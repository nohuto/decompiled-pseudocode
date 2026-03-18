/*
 * XREFs of IoBuildSynchronousFsdRequest @ 0x14040DFC8
 * Callers:
 *     HalExamineMBR @ 0x1401389D8 (HalExamineMBR.c)
 *     IoShutdownSystem @ 0x1403FE27C (IoShutdownSystem.c)
 *     IopShutdownBaseFileSystems @ 0x1403FE590 (IopShutdownBaseFileSystems.c)
 *     PnpQueryInterface @ 0x14040DEB4 (PnpQueryInterface.c)
 *     IoSetPartitionInformation @ 0x14055FBF8 (IoSetPartitionInformation.c)
 *     IoReadPartitionTable @ 0x140562AE0 (IoReadPartitionTable.c)
 *     FstubReadSectors @ 0x140563264 (FstubReadSectors.c)
 *     IopCreateArcName @ 0x14058ED40 (IopCreateArcName.c)
 *     IoWritePartitionTable @ 0x14066ED20 (IoWritePartitionTable.c)
 *     FstubWriteSector @ 0x140670158 (FstubWriteSector.c)
 *     RawQueryFileSystemInformation @ 0x1406C6C80 (RawQueryFileSystemInformation.c)
 *     IopCreateArcNamesCd @ 0x1407B5E18 (IopCreateArcNamesCd.c)
 * Callees:
 *     IopBuildSynchronousFsdRequest @ 0x14040E000 (IopBuildSynchronousFsdRequest.c)
 */

PIRP __stdcall IoBuildSynchronousFsdRequest(
        ULONG MajorFunction,
        PDEVICE_OBJECT DeviceObject,
        PVOID Buffer,
        ULONG Length,
        PLARGE_INTEGER StartingOffset,
        PKEVENT Event,
        PIO_STATUS_BLOCK IoStatusBlock)
{
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  return (PIRP)IopBuildSynchronousFsdRequest(
                 MajorFunction,
                 (_DWORD)DeviceObject,
                 (_DWORD)Buffer,
                 Length,
                 (__int64)StartingOffset,
                 (__int64)Event,
                 (__int64)IoStatusBlock,
                 retaddr);
}
