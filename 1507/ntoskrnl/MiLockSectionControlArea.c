/*
 * XREFs of MiLockSectionControlArea @ 0x140086F60
 * Callers:
 *     MiComputeFlushRange @ 0x140085450 (MiComputeFlushRange.c)
 *     MiReferenceControlAreaForCacheManager @ 0x14008707C (MiReferenceControlAreaForCacheManager.c)
 *     MiFlushDataSection @ 0x1400E07B8 (MiFlushDataSection.c)
 *     MmDisableModifiedWriteOfSection @ 0x140125D24 (MmDisableModifiedWriteOfSection.c)
 *     MmEnableModifiedWriteOfSection @ 0x140216DA8 (MmEnableModifiedWriteOfSection.c)
 * Callees:
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x140028FE0 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140264210 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MiLockSectionControlArea(_QWORD *a1, int a2, unsigned __int8 *a3)
{
  unsigned __int8 CurrentIrql; // di
  unsigned int v7; // ebx
  __int64 v8; // rbx
  unsigned __int8 v10; // bl
  void *retaddr; // [rsp+38h] [rbp+0h]

  while ( 1 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(&dword_14034E780);
    }
    else
    {
      v7 = 0;
      if ( _interlockedbittestandset(&dword_14034E780, 0x1Fu) )
        v7 = ExpWaitForSpinLockExclusiveAndAcquire(&dword_14034E780);
      while ( (dword_14034E780 & 0xBFFFFFFF) != 0x80000000 )
      {
        if ( (dword_14034E780 & 0x40000000) == 0 )
          _InterlockedCompareExchange(&dword_14034E780, dword_14034E780 | 0x40000000, dword_14034E780);
        if ( (++v7 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v7);
      }
    }
    *a3 = CurrentIrql;
    v8 = a2 == 1 ? *a1 : a1[2];
    if ( !v8 )
      break;
    if ( (unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel((volatile signed __int32 *)(v8 + 72)) )
    {
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_14034E780, retaddr);
      else
        dword_14034E780 = 0;
      return v8;
    }
    v10 = *a3;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_14034E780, retaddr);
    else
      dword_14034E780 = 0;
    __writecr8(v10);
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_14034E780, retaddr);
  else
    dword_14034E780 = 0;
  __writecr8(CurrentIrql);
  return 0LL;
}
