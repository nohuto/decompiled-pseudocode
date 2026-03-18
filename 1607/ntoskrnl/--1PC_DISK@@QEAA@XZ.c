/*
 * XREFs of ??1PC_DISK@@QEAA@XZ @ 0x1401475A4
 * Callers:
 *     PcReadPartitionTable @ 0x1401474EC (PcReadPartitionTable.c)
 *     PcCreatePartitionTable @ 0x14023B660 (PcCreatePartitionTable.c)
 *     PcSetPartition @ 0x14023B6CC (PcSetPartition.c)
 *     PcVerifyPartitionTable @ 0x14023B78C (PcVerifyPartitionTable.c)
 *     PcWritePartitionTable @ 0x14023B81C (PcWritePartitionTable.c)
 * Callees:
 *     PspQueueApcSpecialApc @ 0x1403E5244 (PspQueueApcSpecialApc.c)
 */

void __fastcall PC_DISK::~PC_DISK(PC_DISK *this)
{
  void *v1; // rcx

  v1 = (void *)*((_QWORD *)this + 6);
  if ( v1 )
    PspQueueApcSpecialApc(v1);
}
