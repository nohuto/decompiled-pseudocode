/*
 * XREFs of MiRemoveViewsFromSectionWithPfn @ 0x140054170
 * Callers:
 *     MiRemoveMappedPtes @ 0x140039410 (MiRemoveMappedPtes.c)
 *     MiReleaseReadListResources @ 0x14049D640 (MiReleaseReadListResources.c)
 *     MiPfPrepareSequentialReadList @ 0x14049D9A0 (MiPfPrepareSequentialReadList.c)
 *     MiPfPrepareReadList @ 0x14049E0C0 (MiPfPrepareReadList.c)
 *     MiMapViewOfDataSection @ 0x1404B64E0 (MiMapViewOfDataSection.c)
 * Callees:
 *     MiDecrementSubsectionViewCount @ 0x140054300 (MiDecrementSubsectionViewCount.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiInsertUnusedSubsection @ 0x14010E120 (MiInsertUnusedSubsection.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     MiReturnSubsectionCharges @ 0x140230538 (MiReturnSubsectionCharges.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140264210 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MiRemoveViewsFromSectionWithPfn(_QWORD *a1, unsigned __int64 a2)
{
  volatile signed __int32 *v3; // rbx
  _QWORD *v4; // rsi
  unsigned __int8 CurrentIrql; // r14
  unsigned int v6; // edi
  signed __int32 v7; // eax
  __int64 v8; // rdi
  __int64 v9; // rcx
  unsigned __int64 v10; // rax
  __int64 result; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  v3 = (volatile signed __int32 *)(*a1 + 72LL);
  v4 = a1;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v3);
  }
  else
  {
    v6 = 0;
    if ( _interlockedbittestandset(v3, 0x1Fu) )
      v6 = ExpWaitForSpinLockExclusiveAndAcquire(v3);
    while ( 1 )
    {
      v7 = *v3;
      if ( (*v3 & 0xBFFFFFFF) == 0x80000000 )
        break;
      if ( (v7 & 0x40000000) == 0 )
        _InterlockedCompareExchange(v3, v7 | 0x40000000, v7);
      if ( (++v6 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v6);
    }
  }
  v8 = 0LL;
  do
  {
    v8 += MiDecrementSubsectionViewCount(v4, 1LL);
    if ( !v4[12] && (*((_BYTE *)v4 + 34) & 1) == 0 )
      v8 += MiInsertUnusedSubsection(v9, 1LL);
    if ( a2 )
    {
      v10 = *((unsigned int *)v4 + 11);
      if ( a2 <= v10 )
        break;
      a2 -= v10;
    }
    v4 = (_QWORD *)v4[2];
  }
  while ( v4 );
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v3, retaddr);
  else
    *v3 = 0;
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  if ( v8 )
    return MiReturnSubsectionCharges(v8);
  return result;
}
