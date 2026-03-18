/*
 * XREFs of MmQueryProcessWorkingSetSwapPages @ 0x1400C75D8
 * Callers:
 *     PfpPrivSourceEnum @ 0x140508A08 (PfpPrivSourceEnum.c)
 *     SmStoreCompressionStop @ 0x14054BCFC (SmStoreCompressionStop.c)
 *     SmStoreCompressionStart @ 0x14054BD68 (SmStoreCompressionStart.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14002E9A0 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14002EB90 (ExAcquireSpinLockExclusive.c)
 *     MiPartitionIdToPointer @ 0x1400680A0 (MiPartitionIdToPointer.c)
 *     MiGetWorkingSetSwapSupport @ 0x140075E5C (MiGetWorkingSetSwapSupport.c)
 */

__int64 __fastcall MmQueryProcessWorkingSetSwapPages(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rdi
  __int64 v4; // r8
  unsigned int v6; // ebx
  volatile LONG *v7; // rsi
  unsigned __int64 WorkingSetSwapSupport; // rax
  KIRQL v9; // r9

  v2 = a1 + 1280;
  if ( (unsigned __int64)MiGetWorkingSetSwapSupport(a1 + 1280) <= 2 )
    return 3221226021LL;
  v6 = -1073741275;
  v7 = MiPartitionIdToPointer(*(_WORD *)(v4 + 1444)) + 262;
  ExAcquireSpinLockExclusive(v7);
  WorkingSetSwapSupport = MiGetWorkingSetSwapSupport(v2);
  if ( WorkingSetSwapSupport > 2 )
  {
    v6 = 0;
    *a2 = *(_QWORD *)(*(_QWORD *)WorkingSetSwapSupport + 24LL);
  }
  ExReleaseSpinLockExclusive(v7, v9);
  return v6;
}
