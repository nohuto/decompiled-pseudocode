/*
 * XREFs of IoSetPartitionInformationEx @ 0x1404E8378
 * Callers:
 *     VerifierIoSetPartitionInformationEx @ 0x1406C0864 (VerifierIoSetPartitionInformationEx.c)
 * Callees:
 *     IoSetPartitionInformation @ 0x1404E3140 (IoSetPartitionInformation.c)
 *     FstubFreeDiskInformation @ 0x1404E84BC (FstubFreeDiskInformation.c)
 *     FstubDetectPartitionStyle @ 0x1404E84F4 (FstubDetectPartitionStyle.c)
 *     FstubAllocateDiskInformation @ 0x1404E8640 (FstubAllocateDiskInformation.c)
 *     FstubSetPartitionInformationEFI @ 0x140515F18 (FstubSetPartitionInformationEFI.c)
 */

NTSTATUS __stdcall IoSetPartitionInformationEx(
        PDEVICE_OBJECT DeviceObject,
        ULONG PartitionNumber,
        struct _SET_PARTITION_INFORMATION_EX *PartitionInfo)
{
  NTSTATUS result; // eax
  NTSTATUS v7; // ebx
  int v9; // [rsp+68h] [rbp+20h] BYREF

  result = FstubAllocateDiskInformation(DeviceObject);
  if ( result >= 0 )
  {
    v7 = FstubDetectPartitionStyle(0LL, &v9);
    if ( v7 >= 0 )
    {
      if ( v9 == PartitionInfo->PartitionStyle )
      {
        if ( !v9 )
          return IoSetPartitionInformation(DeviceObject, MEMORY[8], PartitionNumber, PartitionInfo->Mbr.PartitionType);
        if ( v9 != 1 )
          return -1073741637;
        return FstubSetPartitionInformationEFI(0LL, PartitionNumber, &PartitionInfo->Mbr);
      }
      else
      {
        return -1073741811;
      }
    }
    return v7;
  }
  return result;
}
