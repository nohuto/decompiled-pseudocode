/*
 * XREFs of IoReadPartitionTableEx @ 0x1404E8424
 * Callers:
 *     FstubSetPartitionInformationEFI @ 0x140515F18 (FstubSetPartitionInformationEFI.c)
 *     VerifierIoReadPartitionTableEx @ 0x1406C07D4 (VerifierIoReadPartitionTableEx.c)
 * Callees:
 *     FstubFreeDiskInformation @ 0x1404E84BC (FstubFreeDiskInformation.c)
 *     FstubDetectPartitionStyle @ 0x1404E84F4 (FstubDetectPartitionStyle.c)
 *     FstubAllocateDiskInformation @ 0x1404E8640 (FstubAllocateDiskInformation.c)
 *     FstubReadPartitionTableMBR @ 0x1404E888C (FstubReadPartitionTableMBR.c)
 *     FstubReadPartitionTableEFI @ 0x1405167E0 (FstubReadPartitionTableEFI.c)
 */

NTSTATUS __stdcall IoReadPartitionTableEx(
        PDEVICE_OBJECT DeviceObject,
        struct _DRIVE_LAYOUT_INFORMATION_EX **DriveLayout)
{
  NTSTATUS result; // eax
  PVOID v4; // rdi
  __int64 v5; // rdx
  NTSTATUS PartitionTableEFI; // ebx
  int v7; // [rsp+40h] [rbp+18h] BYREF
  PVOID P; // [rsp+48h] [rbp+20h]

  result = FstubAllocateDiskInformation(DeviceObject);
  if ( result < 0 )
    return result;
  v4 = P;
  PartitionTableEFI = FstubDetectPartitionStyle(P, &v7);
  if ( PartitionTableEFI >= 0 )
  {
    if ( !v7 )
      goto LABEL_8;
    if ( v7 != 1 )
    {
      if ( v7 != 2 )
      {
        PartitionTableEFI = -1073741823;
        goto LABEL_9;
      }
      goto LABEL_8;
    }
    PartitionTableEFI = FstubReadPartitionTableEFI(v4, 0LL, DriveLayout);
    if ( PartitionTableEFI < 0 )
    {
      PartitionTableEFI = FstubReadPartitionTableEFI(v4, 1LL, DriveLayout);
      if ( PartitionTableEFI < 0 )
LABEL_8:
        PartitionTableEFI = FstubReadPartitionTableMBR(v4, v5, DriveLayout);
    }
  }
LABEL_9:
  if ( v4 )
    FstubFreeDiskInformation(v4);
  return PartitionTableEFI;
}
