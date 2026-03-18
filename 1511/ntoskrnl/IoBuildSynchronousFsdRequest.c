/*
 * XREFs of IoBuildSynchronousFsdRequest @ 0x1404A9D3C
 * Callers:
 *     HalExamineMBR @ 0x140105C4C (HalExamineMBR.c)
 *     IoShutdownSystem @ 0x1403ADE5C (IoShutdownSystem.c)
 *     IopShutdownBaseFileSystems @ 0x1403AE170 (IopShutdownBaseFileSystems.c)
 *     IoSetPartitionInformation @ 0x1404E3140 (IoSetPartitionInformation.c)
 *     FstubReadSectors @ 0x1404E857C (FstubReadSectors.c)
 *     IoReadPartitionTable @ 0x1404E89A8 (IoReadPartitionTable.c)
 *     PnpQueryInterface @ 0x1404F0558 (PnpQueryInterface.c)
 *     FstubWriteSector @ 0x140516724 (FstubWriteSector.c)
 *     RawQueryFileSystemInformation @ 0x140518FE0 (RawQueryFileSystemInformation.c)
 *     IopCreateArcName @ 0x140522480 (IopCreateArcName.c)
 *     IoWritePartitionTable @ 0x1405F5BF8 (IoWritePartitionTable.c)
 *     IopCreateArcNamesCd @ 0x14074F274 (IopCreateArcNamesCd.c)
 * Callees:
 *     IopBuildSynchronousFsdRequest @ 0x1404A9D74 (IopBuildSynchronousFsdRequest.c)
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
