/*
 * XREFs of MiDecrementModifiedWriteCount @ 0x14008563C
 * Callers:
 *     MiWriteComplete @ 0x14008247C (MiWriteComplete.c)
 *     MiUnlockFlushMdl @ 0x140085148 (MiUnlockFlushMdl.c)
 *     MiTrimSharedPage @ 0x1400FA3E8 (MiTrimSharedPage.c)
 *     MiReleasePageFileSectionInfo @ 0x14013A978 (MiReleasePageFileSectionInfo.c)
 *     MiDeleteCachedSubsection @ 0x140210AF8 (MiDeleteCachedSubsection.c)
 *     MiFlushControlArea @ 0x140211468 (MiFlushControlArea.c)
 *     MiFlushComplete @ 0x14021E5B8 (MiFlushComplete.c)
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiBuildWakeList @ 0x140088660 (MiBuildWakeList.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140264210 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MiDecrementModifiedWriteCount(__int64 a1, int a2)
{
  volatile signed __int32 *v3; // rbx
  unsigned __int8 CurrentIrql; // bp
  unsigned int v5; // edi
  signed __int32 v6; // eax
  __int64 v7; // rbx
  _DWORD *v8; // rcx
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( a2 == 1 )
  {
    CurrentIrql = 17;
  }
  else
  {
    v3 = (volatile signed __int32 *)(a1 + 72);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(a1 + 72);
    }
    else
    {
      v5 = 0;
      if ( _interlockedbittestandset(v3, 0x1Fu) )
        v5 = ExpWaitForSpinLockExclusiveAndAcquire((volatile signed __int32 *)(a1 + 72));
      while ( 1 )
      {
        v6 = *v3;
        if ( (*v3 & 0xBFFFFFFF) == 0x80000000 )
          break;
        if ( (v6 & 0x40000000) == 0 )
          _InterlockedCompareExchange(v3, v6 | 0x40000000, v6);
        if ( (++v5 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v5);
      }
    }
  }
  --*(_DWORD *)(a1 + 76);
  v7 = MiBuildWakeList(a1, 8LL);
  if ( CurrentIrql != 17 )
  {
    v8 = (_DWORD *)(a1 + 72);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v8, retaddr);
    else
      *v8 = 0;
    __writecr8(CurrentIrql);
  }
  return v7;
}
