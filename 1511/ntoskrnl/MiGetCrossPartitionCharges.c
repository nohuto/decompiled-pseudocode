/*
 * XREFs of MiGetCrossPartitionCharges @ 0x1401D948C
 * Callers:
 *     MiChargeControlAreaPartition @ 0x14006DBF0 (MiChargeControlAreaPartition.c)
 *     MiAllocateCombineProto @ 0x140128770 (MiAllocateCombineProto.c)
 *     MiGetSubsectionCharges @ 0x1401E2FC8 (MiGetSubsectionCharges.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14000A2E0 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusive @ 0x14004CC00 (ExReleaseSpinLockExclusive.c)
 */

__int64 __fastcall MiGetCrossPartitionCharges(unsigned __int64 *a1, __int64 a2)
{
  unsigned int v4; // edi
  KIRQL v5; // al
  unsigned __int64 v6; // rcx
  KIRQL v7; // r8
  unsigned __int64 v8; // rax

  v4 = 1;
  v5 = ExAcquireSpinLockExclusive(&dword_140300340);
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
  ExReleaseSpinLockExclusive(&dword_140300340, v7);
  return v4;
}
