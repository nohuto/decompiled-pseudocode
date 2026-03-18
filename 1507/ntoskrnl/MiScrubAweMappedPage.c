/*
 * XREFs of MiScrubAweMappedPage @ 0x1402324DC
 * Callers:
 *     MiScrubProcesses @ 0x1406AA9CC (MiScrubProcesses.c)
 * Callees:
 *     KeFlushSingleTb @ 0x14003FB20 (KeFlushSingleTb.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiUnlockWorkingSetExclusive @ 0x14008ABC0 (MiUnlockWorkingSetExclusive.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 *     MiScrubPage @ 0x140232D48 (MiScrubPage.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 */

__int64 __fastcall MiScrubAweMappedPage(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 PteShadow; // rdi
  unsigned __int64 v5; // r12
  __int64 v6; // r15
  unsigned __int64 v7; // r13
  volatile signed __int32 *v9; // rsi
  unsigned __int8 CurrentIrql; // bp
  unsigned int v11; // ebx
  unsigned int v12; // ebp
  signed __int32 i; // edx
  __int64 v14; // rdi
  unsigned __int8 v16; // [rsp+60h] [rbp+8h]

  PteShadow = *a1;
  v5 = (__int64)((_QWORD)a1 << 25) >> 16;
  v6 = 48 * a2 - 0x58000000000LL;
  v7 = (unsigned __int64)(a1 + 0x12090482600LL);
  if ( (unsigned __int64)(a1 + 0x12090482600LL) <= 0x7F8 )
    PteShadow = MiReadPteShadow((__int64)a1, *a1);
  v9 = (volatile signed __int32 *)(a4 + 1272);
  CurrentIrql = KeGetCurrentIrql();
  v16 = CurrentIrql;
  __writecr8(2uLL);
  v11 = 0;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(a4 + 1272);
  }
  else
  {
    v12 = 0;
    if ( _interlockedbittestandset(v9, 0x1Fu) )
      v12 = ExpWaitForSpinLockExclusiveAndAcquire((volatile signed __int32 *)(a4 + 1272));
    for ( i = *v9; (*v9 & 0xBFFFFFFF) != 0x80000000; i = *v9 )
    {
      if ( (i & 0x40000000) == 0 )
        _InterlockedCompareExchange(v9, i | 0x40000000, i);
      if ( (++v12 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v12);
    }
    CurrentIrql = v16;
  }
  if ( *(_WORD *)(v6 + 32) == 2 )
  {
    *a1 = 0LL;
    if ( v7 <= 0x7F8 )
      MiWritePteShadow((__int64)a1, 0LL);
    KeFlushSingleTb(v5, 1, 0);
    v14 = PteShadow | 0x20;
    v11 = MiScrubPage(a3, *(_QWORD *)(a3 + 24), v6);
    *a1 = v14;
    if ( v7 <= 0x7F8 )
      MiWritePteShadow((__int64)a1, v14);
  }
  MiUnlockWorkingSetExclusive((__int64)v9, CurrentIrql);
  return v11;
}
