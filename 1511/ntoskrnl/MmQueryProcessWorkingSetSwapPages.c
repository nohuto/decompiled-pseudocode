/*
 * XREFs of MmQueryProcessWorkingSetSwapPages @ 0x1400EEE30
 * Callers:
 *     PfpPrivSourceEnum @ 0x14044B238 (PfpPrivSourceEnum.c)
 *     SmStoreCompressionStop @ 0x140517730 (SmStoreCompressionStop.c)
 *     SmStoreCompressionStart @ 0x14051779C (SmStoreCompressionStart.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14000A2E0 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusive @ 0x14004CC00 (ExReleaseSpinLockExclusive.c)
 *     MiPartitionIdToPointer @ 0x1400AA2C0 (MiPartitionIdToPointer.c)
 */

__int64 __fastcall MmQueryProcessWorkingSetSwapPages(__int64 a1, _QWORD *a2)
{
  unsigned int v5; // ebx
  volatile LONG *v6; // rbp
  KIRQL v7; // al
  unsigned __int64 v8; // rdx

  if ( *(_QWORD *)(a1 + 1512) <= 2uLL )
    return 3221226021LL;
  v5 = -1073741275;
  v6 = MiPartitionIdToPointer(*(_WORD *)(a1 + 1460)) + 264;
  v7 = ExAcquireSpinLockExclusive(v6);
  v8 = *(_QWORD *)(a1 + 1512);
  if ( v8 > 2 )
  {
    v5 = 0;
    *a2 = *(_QWORD *)(*(_QWORD *)v8 + 24LL);
  }
  ExReleaseSpinLockExclusive(v6, v7);
  return v5;
}
