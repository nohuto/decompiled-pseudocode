/*
 * XREFs of MiGetCrossPartitionCharges @ 0x1401F1AF0
 * Callers:
 *     MiChargeControlAreaPartition @ 0x140027BE0 (MiChargeControlAreaPartition.c)
 *     MiGetSubsectionCharges @ 0x1401F50F8 (MiGetSubsectionCharges.c)
 *     MiAllocateCombineProto @ 0x1401F7B48 (MiAllocateCombineProto.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14002E9A0 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14002EB90 (ExAcquireSpinLockExclusive.c)
 */

__int64 __fastcall MiGetCrossPartitionCharges(unsigned __int64 *a1, __int64 a2)
{
  unsigned int v4; // edi
  KIRQL v5; // al
  unsigned __int64 v6; // rcx
  KIRQL v7; // r8
  unsigned __int64 v8; // rax

  v4 = 1;
  v5 = ExAcquireSpinLockExclusive(&dword_140323BC0);
  v6 = a1[4];
  v7 = v5;
  if ( v6 && ((v8 = *a1, *a1 >= v6) || v8 + a2 <= v8 || v8 + a2 > v6) )
  {
    v4 = 0;
    ++a1[1];
  }
  else
  {
    *a1 += a2;
    if ( *a1 > a1[2] )
      a1[2] = *a1;
  }
  ExReleaseSpinLockExclusive(&dword_140323BC0, v7);
  return v4;
}
