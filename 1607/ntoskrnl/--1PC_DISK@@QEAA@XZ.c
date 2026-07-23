/*
 * XREFs of ??1PC_DISK@@QEAA@XZ @ 0x140147B14
 * Callers:
 *     PcReadPartitionTable @ 0x140147A5C (PcReadPartitionTable.c)
 *     PcCreatePartitionTable @ 0x14023B544 (PcCreatePartitionTable.c)
 *     PcSetPartition @ 0x14023B5B0 (PcSetPartition.c)
 *     PcVerifyPartitionTable @ 0x14023B670 (PcVerifyPartitionTable.c)
 *     PcWritePartitionTable @ 0x14023B700 (PcWritePartitionTable.c)
 * Callees:
 *     PspQueueApcSpecialApc @ 0x1403E6870 (PspQueueApcSpecialApc.c)
 */

void __fastcall PC_DISK::~PC_DISK(PC_DISK *this)
{
  void *v1; // rcx

  v1 = (void *)*((_QWORD *)this + 6);
  if ( v1 )
    PspQueueApcSpecialApc(v1);
}
