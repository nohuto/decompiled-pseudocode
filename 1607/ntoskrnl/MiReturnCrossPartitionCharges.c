/*
 * XREFs of MiReturnCrossPartitionCharges @ 0x1401F1F3C
 * Callers:
 *     MiChargeControlAreaPartition @ 0x140027BE0 (MiChargeControlAreaPartition.c)
 *     MiGetSubsectionCharges @ 0x1401F50F8 (MiGetSubsectionCharges.c)
 *     MiReturnSubsectionCharges @ 0x1401F5310 (MiReturnSubsectionCharges.c)
 *     MiAllocateCombineProto @ 0x1401F7B48 (MiAllocateCombineProto.c)
 *     MiFreeCombineBlock @ 0x1401F9C24 (MiFreeCombineBlock.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14002EB90 (ExAcquireSpinLockExclusive.c)
 */

void __fastcall MiReturnCrossPartitionCharges(_QWORD *a1, __int64 a2)
{
  KIRQL v4; // al

  v4 = ExAcquireSpinLockExclusive(&dword_140323BC0);
  *a1 -= a2;
  ExReleaseSpinLockExclusive(&dword_140323BC0, v4);
}
