/*
 * XREFs of IoReadPartitionTableEx @ 0x140562908
 * Callers:
 *     FstubSetPartitionInformationEFI @ 0x14066F8AC (FstubSetPartitionInformationEFI.c)
 *     VerifierIoReadPartitionTableEx @ 0x140741FC8 (VerifierIoReadPartitionTableEx.c)
 * Callees:
 *     FstubFreeDiskInformation @ 0x14056298C (FstubFreeDiskInformation.c)
 *     FstubReadPartitionTableMBR @ 0x1405629C4 (FstubReadPartitionTableMBR.c)
 *     FstubDetectPartitionStyle @ 0x1405631F8 (FstubDetectPartitionStyle.c)
 *     FstubAllocateDiskInformation @ 0x140563328 (FstubAllocateDiskInformation.c)
 *     FstubReadPartitionTableEFI @ 0x14066F604 (FstubReadPartitionTableEFI.c)
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
      goto LABEL_4;
    if ( v7 != 1 )
    {
      if ( v7 != 2 )
      {
        PartitionTableEFI = -1073741823;
        goto LABEL_5;
      }
      goto LABEL_4;
    }
    PartitionTableEFI = FstubReadPartitionTableEFI(v4, 0LL, DriveLayout);
    if ( PartitionTableEFI < 0 )
    {
      PartitionTableEFI = FstubReadPartitionTableEFI(v4, 1LL, DriveLayout);
      if ( PartitionTableEFI < 0 )
LABEL_4:
        PartitionTableEFI = FstubReadPartitionTableMBR(v4, v5, DriveLayout);
    }
  }
LABEL_5:
  if ( v4 )
    FstubFreeDiskInformation(v4);
  return PartitionTableEFI;
}
