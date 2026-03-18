/*
 * XREFs of FstubFreeDiskInformation @ 0x1404E84BC
 * Callers:
 *     IoSetPartitionInformationEx @ 0x1404E8378 (IoSetPartitionInformationEx.c)
 *     IoReadPartitionTableEx @ 0x1404E8424 (IoReadPartitionTableEx.c)
 *     FstubCreateDiskEFI @ 0x1405160FC (FstubCreateDiskEFI.c)
 *     IoWritePartitionTableEx @ 0x14051621C (IoWritePartitionTableEx.c)
 *     IoVerifyPartitionTable @ 0x14051AB28 (IoVerifyPartitionTable.c)
 *     FstubCreateDiskMBR @ 0x1405F6164 (FstubCreateDiskMBR.c)
 *     FstubCreateDiskRaw @ 0x1405F6208 (FstubCreateDiskRaw.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall FstubFreeDiskInformation(_QWORD *P)
{
  void *v2; // rcx

  if ( P )
  {
    v2 = (void *)P[6];
    if ( v2 )
    {
      ExFreePoolWithTag(v2, 0);
      P[6] = 0LL;
    }
    ExFreePoolWithTag(P, 0);
  }
  return 0LL;
}
