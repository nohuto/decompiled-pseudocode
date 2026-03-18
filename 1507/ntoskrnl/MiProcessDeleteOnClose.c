/*
 * XREFs of MiProcessDeleteOnClose @ 0x1402119C8
 * Callers:
 *     MiDereferenceSegmentThread @ 0x140167DD0 (MiDereferenceSegmentThread.c)
 * Callees:
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x140028FE0 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KiSetTimerEx @ 0x140068414 (KiSetTimerEx.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiReleaseControlAreaWaiters @ 0x1400887AC (MiReleaseControlAreaWaiters.c)
 *     MiInsertUnusedSegment @ 0x140089B00 (MiInsertUnusedSegment.c)
 *     MiDestroySection @ 0x140158E20 (MiDestroySection.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     MiFlushControlArea @ 0x140211468 (MiFlushControlArea.c)
 *     MiReturnSubsectionCharges @ 0x140230538 (MiReturnSubsectionCharges.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140264210 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MiProcessDeleteOnClose(__int64 a1)
{
  unsigned __int8 CurrentIrql; // bp
  int v3; // r13d
  volatile signed __int32 **v4; // r12
  volatile signed __int32 *v5; // rdi
  unsigned int v6; // edi
  signed __int8 v7; // cf
  volatile signed __int32 *v8; // rsi
  volatile signed __int32 *v9; // r14
  volatile signed __int32 *v10; // rdx
  volatile signed __int32 **v11; // rcx
  __int64 v12; // rcx
  __int64 inserted; // rdi
  unsigned int v14; // edi
  __int64 result; // rax
  void *retaddr; // [rsp+58h] [rbp+0h]
  _QWORD *v17; // [rsp+60h] [rbp+8h] BYREF

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(&dword_14034E740);
  }
  else
  {
    v6 = 0;
    v7 = _interlockedbittestandset(&dword_14034E740, 0x1Fu);
    if ( v7 )
      v6 = ExpWaitForSpinLockExclusiveAndAcquire(&dword_14034E740);
    while ( (dword_14034E740 & 0xBFFFFFFF) != 0x80000000 )
    {
      if ( (dword_14034E740 & 0x40000000) == 0 )
        _InterlockedCompareExchange(&dword_14034E740, dword_14034E740 | 0x40000000, dword_14034E740);
      if ( (++v6 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v6);
    }
  }
  v3 = *(_DWORD *)(a1 + 1356);
  v4 = (volatile signed __int32 **)(a1 + 1272);
  v5 = *(volatile signed __int32 **)(a1 + 1272);
  do
  {
    while ( 1 )
    {
      if ( v5 == (volatile signed __int32 *)v4 )
      {
LABEL_36:
        *(_BYTE *)(a1 + 1352) = 0;
        goto LABEL_37;
      }
      v8 = v5 - 2;
      v9 = v5 + 16;
      if ( (unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel(v9) )
        break;
      if ( !--v3 )
        goto LABEL_48;
      v5 = *(volatile signed __int32 **)v5;
    }
    --*(_DWORD *)(a1 + 1356);
    v10 = *(volatile signed __int32 **)v5;
    v11 = (volatile signed __int32 **)*((_QWORD *)v8 + 2);
    if ( *(volatile signed __int32 **)(*(_QWORD *)v5 + 8LL) != v5 || *v11 != v5 )
      __fastfail(3u);
    *v11 = v10;
    *((_QWORD *)v10 + 1) = v11;
    *((_DWORD *)v8 + 14) &= ~0x8000000u;
    *((_QWORD *)v5 + 1) = v5;
    *(_QWORD *)v5 = v5;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_14034E740, retaddr);
    else
      dword_14034E740 = 0;
    v12 = (__int64)(v5 - 2);
    if ( *((_DWORD *)v8 + 19) )
    {
      inserted = MiInsertUnusedSegment(v12);
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v9, retaddr);
      else
        *v9 = 0;
      __writecr8(CurrentIrql);
      if ( inserted )
        MiReturnSubsectionCharges(inserted);
    }
    else
    {
      if ( (unsigned int)MiFlushControlArea(v12, CurrentIrql, (__int64 *)&v17) == 1 )
        MiDestroySection((__int64)(v5 - 2), CurrentIrql);
      if ( v17 )
        MiReleaseControlAreaWaiters(v17);
    }
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(&dword_14034E740);
    }
    else
    {
      v14 = 0;
      v7 = _interlockedbittestandset(&dword_14034E740, 0x1Fu);
      if ( v7 )
        v14 = ExpWaitForSpinLockExclusiveAndAcquire(&dword_14034E740);
      while ( (dword_14034E740 & 0xBFFFFFFF) != 0x80000000 )
      {
        if ( (dword_14034E740 & 0x40000000) == 0 )
          _InterlockedCompareExchange(&dword_14034E740, dword_14034E740 | 0x40000000, dword_14034E740);
        if ( (++v14 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v14);
      }
    }
    v5 = *v4;
    if ( *v4 == (volatile signed __int32 *)v4 )
      goto LABEL_36;
    --v3;
  }
  while ( v3 );
LABEL_48:
  KiSetTimerEx(a1 + 1288, Mi10Milliseconds.QuadPart, 0, 0, 0LL);
LABEL_37:
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_14034E740, retaddr);
  else
    dword_14034E740 = 0;
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
