/*
 * XREFs of MiReturnCrossPartitionCharges @ 0x1401D98AC
 * Callers:
 *     MiChargeControlAreaPartition @ 0x14006DBF0 (MiChargeControlAreaPartition.c)
 *     MiAllocateCombineProto @ 0x140128770 (MiAllocateCombineProto.c)
 *     MiFreeCombineBlock @ 0x14012B6C8 (MiFreeCombineBlock.c)
 *     MiGetSubsectionCharges @ 0x1401E2FC8 (MiGetSubsectionCharges.c)
 *     MiReturnSubsectionCharges @ 0x1401E3170 (MiReturnSubsectionCharges.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14000A2E0 (ExAcquireSpinLockExclusive.c)
 */

void __fastcall MiReturnCrossPartitionCharges(_QWORD *a1, __int64 a2)
{
  KIRQL v4; // al

  v4 = ExAcquireSpinLockExclusive(&dword_140300340);
  *a1 -= a2;
  ExReleaseSpinLockExclusive(&dword_140300340, v4);
}
