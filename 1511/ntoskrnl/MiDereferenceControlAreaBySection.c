/*
 * XREFs of MiDereferenceControlAreaBySection @ 0x1400A6E80
 * Callers:
 *     MiCreateSection @ 0x1403F80B0 (MiCreateSection.c)
 *     MiSectionDelete @ 0x14047B400 (MiSectionDelete.c)
 * Callees:
 *     ExpAcquireSpinLockExclusive @ 0x1400A65D0 (ExpAcquireSpinLockExclusive.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1402140C0 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 */

__int64 __fastcall MiDereferenceControlAreaBySection(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v4; // rsi
  volatile signed __int32 *v5; // rcx
  unsigned __int8 CurrentIrql; // di

  v4 = a2;
  v5 = (volatile signed __int32 *)(a1 + 72);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v5, CurrentIrql);
  else
    ExpAcquireSpinLockExclusive(v5, CurrentIrql, a3);
  --*(_QWORD *)(a1 + 24);
  *(_QWORD *)(a1 + 48) -= v4;
  return MiCheckControlArea(a1, CurrentIrql);
}
