/*
 * XREFs of RtlpSparseBitmapCtxLockShared @ 0x140273A9C
 * Callers:
 *     RtlpSparseBitmapCtxCheckRangeArray @ 0x140273248 (RtlpSparseBitmapCtxCheckRangeArray.c)
 *     RtlpSparseBitmapCtxFindNextBitInternal @ 0x140273334 (RtlpSparseBitmapCtxFindNextBitInternal.c)
 *     RtlpSparseBitmapCtxFindRunsInternal @ 0x1402737D8 (RtlpSparseBitmapCtxFindRunsInternal.c)
 * Callees:
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x140033D90 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x140264154 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 */

__int64 __fastcall RtlpSparseBitmapCtxLockShared(__int64 a1, _DWORD *a2)
{
  unsigned __int8 CurrentIrql; // bl
  signed __int32 v4; // ett

  if ( (*(_DWORD *)(a1 + 72) & 4) != 0 )
    return 1LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockSharedAtDpcLevelInstrumented(a2);
  }
  else
  {
    _m_prefetchw(a2);
    v4 = *a2 & 0x7FFFFFFF;
    if ( v4 != _InterlockedCompareExchange(a2, v4 + 1, v4) )
      ExpWaitForSpinLockSharedAndAcquire(a2);
  }
  return CurrentIrql;
}
