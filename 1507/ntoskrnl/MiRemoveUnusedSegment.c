/*
 * XREFs of MiRemoveUnusedSegment @ 0x1400886B0
 * Callers:
 *     MiPrepareSegmentForDeletion @ 0x14008506C (MiPrepareSegmentForDeletion.c)
 *     MiComputeDataFlushRange @ 0x140085714 (MiComputeDataFlushRange.c)
 *     MiReferenceControlAreaForCacheManager @ 0x14008707C (MiReferenceControlAreaForCacheManager.c)
 *     MiReferenceControlArea @ 0x140089080 (MiReferenceControlArea.c)
 *     MiCheckForControlAreaDeletion @ 0x1400E6854 (MiCheckForControlAreaDeletion.c)
 *     MiTrimSharedPage @ 0x1400FA3E8 (MiTrimSharedPage.c)
 *     MiReferencePfBackedSection @ 0x1400FD148 (MiReferencePfBackedSection.c)
 *     MiAttemptSectionDelete @ 0x1401195C8 (MiAttemptSectionDelete.c)
 *     MiDeleteCachedSubsection @ 0x140210AF8 (MiDeleteCachedSubsection.c)
 *     MiSetDeleteOnClose @ 0x1402122AC (MiSetDeleteOnClose.c)
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140264210 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int16 __fastcall MiRemoveUnusedSegment(__int64 a1)
{
  _QWORD *v2; // rax
  __int64 v3; // rcx
  __int16 *v4; // rdi
  unsigned int v5; // esi
  __int64 v6; // r8
  _QWORD *v7; // rdx
  void *retaddr; // [rsp+28h] [rbp+0h]

  LOWORD(v2) = *(_WORD *)(a1 + 60) & 0x3FF;
  if ( (_WORD)v2 == 1023 )
  {
    v4 = MiSystemPartition;
  }
  else
  {
    v3 = (unsigned __int16)v2;
    LOWORD(v2) = qword_14034F0E8;
    v4 = *(__int16 **)(qword_14034F0E8 + 8 * v3);
  }
  if ( (*(_DWORD *)(a1 + 56) & 0x8000000) != 0 )
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(&dword_14034E740);
    }
    else
    {
      v5 = 0;
      if ( _interlockedbittestandset(&dword_14034E740, 0x1Fu) )
        v5 = ExpWaitForSpinLockExclusiveAndAcquire(&dword_14034E740);
      while ( (dword_14034E740 & 0xBFFFFFFF) != 0x80000000 )
      {
        if ( (dword_14034E740 & 0x40000000) == 0 )
          _InterlockedCompareExchange(&dword_14034E740, dword_14034E740 | 0x40000000, dword_14034E740);
        if ( (++v5 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v5);
      }
    }
    if ( (*(_DWORD *)(a1 + 56) & 0x40000) != 0 )
      --*((_DWORD *)v4 + 339);
    v6 = *(_QWORD *)(a1 + 8);
    v2 = (_QWORD *)(a1 + 8);
    v7 = *(_QWORD **)(a1 + 16);
    if ( *(_QWORD *)(v6 + 8) != a1 + 8 || (_QWORD *)*v7 != v2 )
      __fastfail(3u);
    *v7 = v6;
    *(_QWORD *)(v6 + 8) = v7;
    *(_DWORD *)(a1 + 56) &= ~0x8000000u;
    *(_QWORD *)(a1 + 16) = a1 + 8;
    *v2 = v2;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      LOWORD(v2) = ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_14034E740, retaddr);
    else
      dword_14034E740 = 0;
  }
  return (__int16)v2;
}
