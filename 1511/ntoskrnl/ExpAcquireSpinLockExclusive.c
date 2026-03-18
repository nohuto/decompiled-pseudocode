/*
 * XREFs of ExpAcquireSpinLockExclusive @ 0x1400A65D0
 * Callers:
 *     MiMakeSystemCacheRangeValid @ 0x1400A5070 (MiMakeSystemCacheRangeValid.c)
 *     MiTrimOrAgeWorkingSet @ 0x1400A59F0 (MiTrimOrAgeWorkingSet.c)
 *     NtResetWriteWatch @ 0x1400A5E20 (NtResetWriteWatch.c)
 *     MiCountSharedPages @ 0x1400A6110 (MiCountSharedPages.c)
 *     MmDoesFileHaveUserWritableReferences @ 0x1400A6440 (MmDoesFileHaveUserWritableReferences.c)
 *     MiComputeContiguousSubsectionPte @ 0x1400A6520 (MiComputeContiguousSubsectionPte.c)
 *     MiDereferenceControlAreaBySection @ 0x1400A6E80 (MiDereferenceControlAreaBySection.c)
 *     MiInsertVadEvent @ 0x1400A6EF0 (MiInsertVadEvent.c)
 *     MiInsertUnusedSegment @ 0x1400A8590 (MiInsertUnusedSegment.c)
 *     MiInsertUnusedSubsection @ 0x1400A86E0 (MiInsertUnusedSubsection.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1402140C0 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14000A380 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     HvlNotifyLongSpinWait @ 0x1401AE950 (HvlNotifyLongSpinWait.c)
 */

__int64 __fastcall ExpAcquireSpinLockExclusive(volatile signed __int32 *a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  __int64 v5; // rdx
  bool v7; // zf
  unsigned __int32 v8; // eax

  v3 = 0;
  if ( _interlockedbittestandset(a1, 0x1Fu) )
    v3 = ExpWaitForSpinLockExclusiveAndAcquire(a1, a2, a3);
  v5 = *(unsigned int *)a1;
  if ( (*a1 & 0xBFFFFFFF) != 0x80000000 )
  {
    do
    {
      if ( (v5 & 0x40000000) == 0 )
      {
        v8 = _InterlockedCompareExchange(a1, v5 | 0x40000000, v5);
        v7 = (_DWORD)v5 == v8;
        v5 = v8;
        if ( !v7 )
          continue;
      }
      if ( (++v3 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v3, v5, a3);
      v5 = *(unsigned int *)a1;
    }
    while ( (v5 & 0xBFFFFFFF) != 0x80000000 );
  }
  return v3;
}
