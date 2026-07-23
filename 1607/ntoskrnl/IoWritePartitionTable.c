/*
 * XREFs of IoWritePartitionTable @ 0x140620188
 * Callers:
 *     <none>
 * Callees:
 *     PcWritePartitionTable @ 0x14023B700 (PcWritePartitionTable.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ?AllocatePool@PC_ENVIRONMENT@@SAPEAXKEK@Z @ 0x140575378 (-AllocatePool@PC_ENVIRONMENT@@SAPEAXKEK@Z.c)
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall IoWritePartitionTable(
        PDEVICE_OBJECT DeviceObject,
        ULONG SectorSize,
        ULONG SectorsPerTrack,
        ULONG NumberOfHeads,
        struct _DRIVE_LAYOUT_INFORMATION *PartitionBuffer)
{
  struct _DRIVE_LAYOUT_INFORMATION_EX *Pool; // rax
  struct _DRIVE_LAYOUT_INFORMATION_EX *v7; // rbx
  NTSTATUS v8; // edi
  __int64 v9; // r8
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx

  Pool = (struct _DRIVE_LAYOUT_INFORMATION_EX *)PC_ENVIRONMENT::AllocatePool(
                                                  144 * PartitionBuffer->PartitionCount + 48,
                                                  *(__int64 *)&SectorSize,
                                                  0x54506F49u);
  v7 = Pool;
  if ( !Pool )
    return -1073741670;
  Pool->PartitionStyle = 0;
  v9 = 0LL;
  Pool->PartitionCount = PartitionBuffer->PartitionCount;
  for ( Pool->Mbr.Signature = PartitionBuffer->Signature;
        (unsigned int)v9 < PartitionBuffer->PartitionCount;
        v7->PartitionEntry[v12].Mbr.HiddenSectors = *(DWORD *)((char *)&PartitionBuffer->PartitionEntry[0].HiddenSectors
                                                             + v11) )
  {
    v10 = (unsigned int)v9;
    v11 = (unsigned int)v9;
    v9 = (unsigned int)(v9 + 1);
    v11 *= 32LL;
    v12 = v10;
    v7->PartitionEntry[v12].PartitionStyle = PARTITION_STYLE_MBR;
    v7->PartitionEntry[v12].StartingOffset.QuadPart = *(LONGLONG *)((char *)&PartitionBuffer->PartitionEntry[0].StartingOffset.QuadPart
                                                                  + v11);
    v7->PartitionEntry[v12].PartitionLength.QuadPart = *(LONGLONG *)((char *)&PartitionBuffer->PartitionEntry[0].PartitionLength.QuadPart
                                                                   + v11);
    v7->PartitionEntry[v12].PartitionNumber = *(DWORD *)((char *)&PartitionBuffer->PartitionEntry[0].PartitionNumber
                                                       + v11);
    v7->PartitionEntry[v12].RewritePartition = *(&PartitionBuffer->PartitionEntry[0].RewritePartition + v11);
    v7->PartitionEntry[v12].Mbr.PartitionType = *(&PartitionBuffer->PartitionEntry[0].PartitionType + v11);
    v7->PartitionEntry[v12].Mbr.BootIndicator = *(&PartitionBuffer->PartitionEntry[0].BootIndicator + v11);
    v7->PartitionEntry[v12].Mbr.RecognizedPartition = *(&PartitionBuffer->PartitionEntry[0].RecognizedPartition + v11);
  }
  v8 = PcWritePartitionTable(DeviceObject, v7, v9, 0);
  ExFreePoolWithTag(v7, 0);
  return v8;
}
