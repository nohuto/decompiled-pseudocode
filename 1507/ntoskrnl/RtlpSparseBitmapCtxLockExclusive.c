/*
 * XREFs of RtlpSparseBitmapCtxLockExclusive @ 0x1402739E0
 * Callers:
 *     RtlpSparseBitmapCtxCheckRangeArray @ 0x140273248 (RtlpSparseBitmapCtxCheckRangeArray.c)
 *     RtlpSparseBitmapCtxUpdateBits @ 0x140273CF0 (RtlpSparseBitmapCtxUpdateBits.c)
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 */

__int64 __fastcall RtlpSparseBitmapCtxLockExclusive(__int64 a1, volatile signed __int32 *a2)
{
  unsigned __int8 CurrentIrql; // bp
  unsigned int v6; // esi
  signed __int32 v7; // edx

  if ( (*(_DWORD *)(a1 + 72) & 4) != 0 )
    return 1LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(a2);
  }
  else
  {
    v6 = 0;
    if ( _interlockedbittestandset(a2, 0x1Fu) )
      v6 = ExpWaitForSpinLockExclusiveAndAcquire(a2);
    while ( 1 )
    {
      v7 = *a2;
      if ( (*a2 & 0xBFFFFFFF) == 0x80000000 )
        break;
      if ( (v7 & 0x40000000) == 0 )
        _InterlockedCompareExchange(a2, v7 | 0x40000000, v7);
      if ( (++v6 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v6);
    }
  }
  return CurrentIrql;
}
