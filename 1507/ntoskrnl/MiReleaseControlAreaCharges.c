/*
 * XREFs of MiReleaseControlAreaCharges @ 0x140089C74
 * Callers:
 *     MiInsertUnusedSegment @ 0x140089B00 (MiInsertUnusedSegment.c)
 *     MiSegmentDelete @ 0x1404B2AE4 (MiSegmentDelete.c)
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiIncludeSharedCommit @ 0x14008AF50 (MiIncludeSharedCommit.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140264210 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MiReleaseControlAreaCharges(__int64 a1)
{
  int v2; // edx
  __int64 v3; // rcx
  __int64 v5; // r14
  volatile signed __int32 *v6; // rbx
  unsigned __int8 CurrentIrql; // bp
  unsigned int v8; // esi
  signed __int32 v9; // eax
  __int64 v10; // rcx
  __int64 v11; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( !(unsigned int)MiIncludeSharedCommit() )
    return 0LL;
  v5 = 0LL;
  if ( v2 == 1 )
  {
    CurrentIrql = 17;
  }
  else
  {
    v6 = (volatile signed __int32 *)(v3 + 72);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v3 + 72);
    }
    else
    {
      v8 = 0;
      if ( _interlockedbittestandset(v6, 0x1Fu) )
        v8 = ExpWaitForSpinLockExclusiveAndAcquire((volatile signed __int32 *)(v3 + 72));
      while ( 1 )
      {
        v9 = *v6;
        if ( (*v6 & 0xBFFFFFFF) == 0x80000000 )
          break;
        if ( (v9 & 0x40000000) == 0 )
          _InterlockedCompareExchange(v6, v9 | 0x40000000, v9);
        if ( (++v8 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v8);
      }
    }
  }
  if ( (*(_DWORD *)(a1 + 60) & 0xFFFFFC00) != 0 )
  {
    v10 = a1 + 120;
    *(_DWORD *)(a1 + 60) &= 0x3FFu;
    while ( v10 )
    {
      v11 = *(unsigned int *)(v10 + 44);
      v10 = *(_QWORD *)(v10 + 16);
      v5 += v11;
    }
  }
  if ( CurrentIrql != 17 )
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(a1 + 72, retaddr);
    else
      *(_DWORD *)(a1 + 72) = 0;
    __writecr8(CurrentIrql);
  }
  return v5;
}
