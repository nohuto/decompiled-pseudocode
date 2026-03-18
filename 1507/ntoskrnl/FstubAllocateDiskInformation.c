/*
 * XREFs of FstubAllocateDiskInformation @ 0x140563328
 * Callers:
 *     IoSetPartitionInformationEx @ 0x14055FB64 (IoSetPartitionInformationEx.c)
 *     IoReadPartitionTableEx @ 0x140562908 (IoReadPartitionTableEx.c)
 *     IoVerifyPartitionTable @ 0x14058E680 (IoVerifyPartitionTable.c)
 *     FstubCreateDiskEFI @ 0x14066F28C (FstubCreateDiskEFI.c)
 *     FstubCreateDiskMBR @ 0x14066F3AC (FstubCreateDiskMBR.c)
 *     FstubCreateDiskRaw @ 0x14066F450 (FstubCreateDiskRaw.c)
 *     IoWritePartitionTableEx @ 0x14067024C (IoWritePartitionTableEx.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     FstubGetDiskGeometry @ 0x1405633DC (FstubGetDiskGeometry.c)
 */

__int64 __fastcall FstubAllocateDiskInformation(PDEVICE_OBJECT DeviceObject, _QWORD *a2)
{
  _QWORD *PoolWithTag; // rbx
  int DiskGeometry; // edi
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rax
  PVOID v8; // rax
  __int64 result; // rax

  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x40uLL, 0x42747346u);
  if ( !PoolWithTag )
    return 3221225626LL;
  DiskGeometry = FstubGetDiskGeometry(DeviceObject);
  if ( DiskGeometry < 0 )
    goto LABEL_9;
  v6 = *((unsigned int *)PoolWithTag + 9);
  if ( (_DWORD)v6 )
  {
    v7 = PoolWithTag[5];
    if ( v7 )
    {
      *((_DWORD *)PoolWithTag + 2) = v6;
      *PoolWithTag = DeviceObject;
      PoolWithTag[7] = v7 / v6;
      v8 = ExAllocatePoolWithTag(NonPagedPoolNxCacheAligned, (unsigned int)v6, 0x42747346u);
      if ( v8 )
      {
        PoolWithTag[6] = v8;
        result = 0LL;
        *a2 = PoolWithTag;
        return result;
      }
      DiskGeometry = -1073741670;
LABEL_9:
      ExFreePoolWithTag(PoolWithTag, 0);
      return (unsigned int)DiskGeometry;
    }
  }
  ExFreePoolWithTag(PoolWithTag, 0);
  return 3221225635LL;
}
