/*
 * XREFs of IoSetPartitionInformation @ 0x140620120
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x140171AC0 (memset.c)
 *     PcSetPartition @ 0x14023B5B0 (PcSetPartition.c)
 */

NTSTATUS __stdcall IoSetPartitionInformation(
        PDEVICE_OBJECT DeviceObject,
        ULONG SectorSize,
        ULONG PartitionNumber,
        ULONG PartitionType)
{
  BYTE v6; // bl
  unsigned int v7; // r9d
  _SET_PARTITION_INFORMATION_EX v9; // [rsp+20h] [rbp-88h] BYREF

  v6 = PartitionType;
  memset(&v9.Mbr + 1, 0, 0x6FuLL);
  v9.PartitionStyle = PARTITION_STYLE_MBR;
  v9.Mbr.PartitionType = v6;
  return PcSetPartition(DeviceObject, PartitionNumber, &v9, v7);
}
