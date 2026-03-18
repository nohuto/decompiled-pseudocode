/*
 * XREFs of FstubAllocateDiskInformation @ 0x1404E8640
 * Callers:
 *     IoSetPartitionInformationEx @ 0x1404E8378 (IoSetPartitionInformationEx.c)
 *     IoReadPartitionTableEx @ 0x1404E8424 (IoReadPartitionTableEx.c)
 *     FstubCreateDiskEFI @ 0x1405160FC (FstubCreateDiskEFI.c)
 *     IoWritePartitionTableEx @ 0x14051621C (IoWritePartitionTableEx.c)
 *     IoVerifyPartitionTable @ 0x14051AB28 (IoVerifyPartitionTable.c)
 *     FstubCreateDiskMBR @ 0x1405F6164 (FstubCreateDiskMBR.c)
 *     FstubCreateDiskRaw @ 0x1405F6208 (FstubCreateDiskRaw.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     FstubGetDiskGeometry @ 0x1404E86F4 (FstubGetDiskGeometry.c)
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
