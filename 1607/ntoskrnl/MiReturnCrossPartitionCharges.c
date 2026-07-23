/*
 * XREFs of MiReturnCrossPartitionCharges @ 0x1401F1D68
 * Callers:
 *     MiChargeControlAreaPartition @ 0x140027760 (MiChargeControlAreaPartition.c)
 *     MiGetSubsectionCharges @ 0x1401F4F24 (MiGetSubsectionCharges.c)
 *     MiReturnSubsectionCharges @ 0x1401F513C (MiReturnSubsectionCharges.c)
 *     MiAllocateCombineProto @ 0x1401F7974 (MiAllocateCombineProto.c)
 *     MiFreeCombineBlock @ 0x1401F9A50 (MiFreeCombineBlock.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14002E710 (ExAcquireSpinLockExclusive.c)
 */

void __fastcall MiReturnCrossPartitionCharges(_QWORD *a1, __int64 a2)
{
  KIRQL v4; // al

  v4 = ExAcquireSpinLockExclusive(&dword_140323C00);
  *a1 -= a2;
  ExReleaseSpinLockExclusive(&dword_140323C00, v4);
}
