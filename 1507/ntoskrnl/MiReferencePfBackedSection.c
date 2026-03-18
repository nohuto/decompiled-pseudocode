/*
 * XREFs of MiReferencePfBackedSection @ 0x1400FD148
 * Callers:
 *     MiTrimSharedPage @ 0x1400FA3E8 (MiTrimSharedPage.c)
 *     MiGetPageFileSectionForReservation @ 0x14013A8D4 (MiGetPageFileSectionForReservation.c)
 * Callees:
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x140033D90 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiPagefileSectionCompare @ 0x140082E4C (MiPagefileSectionCompare.c)
 *     MiBuildWakeList @ 0x140088660 (MiBuildWakeList.c)
 *     MiRemoveUnusedSegment @ 0x1400886B0 (MiRemoveUnusedSegment.c)
 *     MiReleaseControlAreaWaiters @ 0x1400887AC (MiReleaseControlAreaWaiters.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x140264154 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140264210 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x140264230 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 */

_QWORD *__fastcall MiReferencePfBackedSection(unsigned __int64 a1)
{
  __int64 *v1; // rbp
  _QWORD *v3; // r15
  unsigned __int8 CurrentIrql; // r13
  int v5; // ett
  _QWORD *v6; // rbx
  int v7; // eax
  _QWORD *v8; // r12
  __int64 v9; // rsi
  volatile signed __int32 *v10; // rbx
  unsigned __int8 v11; // r14
  unsigned int v12; // edi
  signed __int32 v13; // edx
  __int64 *v14; // rax
  void *retaddr; // [rsp+48h] [rbp+0h]

  v1 = 0LL;
  v3 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockSharedAtDpcLevelInstrumented(&dword_14034E8B0);
  }
  else
  {
    _m_prefetchw(&dword_14034E8B0);
    v5 = dword_14034E8B0 & 0x7FFFFFFF;
    if ( v5 != _InterlockedCompareExchange(
                 &dword_14034E8B0,
                 (dword_14034E8B0 & 0x7FFFFFFF) + 1,
                 dword_14034E8B0 & 0x7FFFFFFF) )
      ExpWaitForSpinLockSharedAndAcquire(&dword_14034E8B0);
  }
  v6 = (_QWORD *)qword_14034E8A8;
  if ( qword_14034E8A8 )
  {
    do
    {
      v7 = MiPagefileSectionCompare(a1, (__int64)v6);
      if ( v7 < 0 )
      {
        v6 = (_QWORD *)*v6;
      }
      else
      {
        if ( v7 <= 0 )
          break;
        v6 = (_QWORD *)v6[1];
      }
    }
    while ( v6 );
    if ( v6 )
    {
      v8 = v6 - 7;
      v9 = *(v6 - 7);
      v10 = (volatile signed __int32 *)(v9 + 72);
      v11 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v9 + 72);
      }
      else
      {
        v12 = 0;
        if ( _interlockedbittestandset(v10, 0x1Fu) )
          v12 = ExpWaitForSpinLockExclusiveAndAcquire((volatile signed __int32 *)(v9 + 72));
        while ( 1 )
        {
          v13 = *v10;
          if ( (*v10 & 0xBFFFFFFF) == 0x80000000 )
            break;
          if ( (v13 & 0x40000000) == 0 )
            _InterlockedCompareExchange(v10, v13 | 0x40000000, v13);
          if ( (++v12 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
            _mm_pause();
          else
            HvlNotifyLongSpinWait(v12);
        }
      }
      if ( *(_BYTE *)(v9 + 56) & 1 | ((*(_DWORD *)(v9 + 56) & 2) != 0) )
      {
        if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
          ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v9 + 72, retaddr);
        else
          *v10 = 0;
      }
      else
      {
        v14 = MiBuildWakeList(v9, 4);
        ++*(_DWORD *)(v9 + 76);
        v1 = v14;
        MiRemoveUnusedSegment(v9);
        if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
          ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v9 + 72, retaddr);
        else
          *v10 = 0;
        v3 = v8;
      }
      __writecr8(v11);
    }
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    ExpReleaseSpinLockSharedFromDpcLevelInstrumented(&dword_14034E8B0, retaddr);
  }
  else
  {
    _InterlockedAnd(&dword_14034E8B0, 0xBFFFFFFF);
    _InterlockedDecrement(&dword_14034E8B0);
  }
  __writecr8(CurrentIrql);
  if ( v1 )
    MiReleaseControlAreaWaiters(v1);
  return v3;
}
