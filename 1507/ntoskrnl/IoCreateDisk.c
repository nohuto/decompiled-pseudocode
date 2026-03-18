/*
 * XREFs of IoCreateDisk @ 0x140670214
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall IoCreateDisk(PDEVICE_OBJECT DeviceObject, struct _CREATE_DISK *Disk)
{
  PARTITION_STYLE PartitionStyle; // eax
  __int32 v3; // eax

  PartitionStyle = PARTITION_STYLE_RAW;
  if ( Disk )
    PartitionStyle = Disk->PartitionStyle;
  if ( PartitionStyle == PARTITION_STYLE_MBR )
    return FstubCreateDiskMBR(DeviceObject, &Disk->Mbr.Signature);
  v3 = PartitionStyle - 1;
  if ( !v3 )
    return FstubCreateDiskEFI(DeviceObject, (__int128 *)&Disk->Mbr);
  if ( v3 == 1 )
    return FstubCreateDiskRaw(DeviceObject);
  return -1073741637;
}
