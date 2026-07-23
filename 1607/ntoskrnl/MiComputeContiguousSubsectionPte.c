/*
 * XREFs of MiComputeContiguousSubsectionPte @ 0x14002C580
 * Callers:
 *     MiAdvanceVadView @ 0x140095AA8 (MiAdvanceVadView.c)
 *     MiMapViewOfDataSection @ 0x140434390 (MiMapViewOfDataSection.c)
 * Callees:
 *     ExpAcquireSpinLockExclusive @ 0x14002E7B0 (ExpAcquireSpinLockExclusive.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14022DB5C (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14022DCC8 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MiComputeContiguousSubsectionPte(__int64 a1, unsigned __int64 a2)
{
  _DWORD *v3; // rdi
  unsigned __int8 CurrentIrql; // si
  unsigned __int64 v6; // rcx
  __int64 v7; // rbx
  void *retaddr; // [rsp+28h] [rbp+0h]

  v3 = (_DWORD *)(*(_QWORD *)a1 + 72LL);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v3, CurrentIrql);
  else
    ExpAcquireSpinLockExclusive(v3, CurrentIrql);
  v6 = *(unsigned int *)(a1 + 44);
  if ( a2 >= v6 )
    v7 = *(_QWORD *)(a1 + 8) + 8LL * ((*(_DWORD *)(a1 + 52) & 0x7FFFFFFFu) + (_DWORD)v6 - 1);
  else
    v7 = *(_QWORD *)(a1 + 8) + 8 * a2;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v3, retaddr);
  else
    *v3 = 0;
  __writecr8(CurrentIrql);
  return v7;
}
