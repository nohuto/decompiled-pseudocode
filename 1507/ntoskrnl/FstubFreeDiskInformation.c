/*
 * XREFs of FstubFreeDiskInformation @ 0x14056298C
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
