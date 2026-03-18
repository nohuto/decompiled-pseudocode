/*
 * XREFs of MiTrimSharedPage @ 0x1400FA3E8
 * Callers:
 *     MiClaimPhysicalRun @ 0x14005ACA0 (MiClaimPhysicalRun.c)
 * Callees:
 *     MiDecrementSubsections @ 0x140054288 (MiDecrementSubsections.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiDecrementModifiedWriteCount @ 0x14008563C (MiDecrementModifiedWriteCount.c)
 *     MiReferenceSubsection @ 0x14008595C (MiReferenceSubsection.c)
 *     MiBuildWakeList @ 0x140088660 (MiBuildWakeList.c)
 *     MiRemoveUnusedSegment @ 0x1400886B0 (MiRemoveUnusedSegment.c)
 *     MiReleaseControlAreaWaiters @ 0x1400887AC (MiReleaseControlAreaWaiters.c)
 *     MiTrimSection @ 0x1400FA79C (MiTrimSection.c)
 *     MiReferencePfBackedSection @ 0x1400FD148 (MiReferencePfBackedSection.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     MiGetPrototypePteDirect @ 0x140225B58 (MiGetPrototypePteDirect.c)
 *     MiReturnSubsectionCharges @ 0x140230538 (MiReturnSubsectionCharges.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140264210 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MiTrimSharedPage(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx
  unsigned __int64 v5; // r12
  unsigned int v6; // edi
  __int64 v8; // r15
  __int64 PrototypePteDirect; // rax
  __int64 v10; // r14
  __int64 v12; // r13
  volatile signed __int32 *v13; // rdi
  signed __int32 i; // edx
  int v15; // ecx
  __int64 *v16; // rax
  __int64 *v17; // r15
  __int64 *v18; // rax
  volatile signed __int32 *v19; // rdi
  unsigned __int8 CurrentIrql; // r15
  unsigned int v21; // r14d
  signed __int32 j; // edx
  __int64 v23; // r14
  _QWORD *v24; // rax
  _QWORD v25[5]; // [rsp+20h] [rbp-68h] BYREF
  int v26; // [rsp+48h] [rbp-40h]
  void *retaddr; // [rsp+88h] [rbp+0h]
  __int64 v28; // [rsp+90h] [rbp+8h]
  unsigned __int8 v29; // [rsp+98h] [rbp+10h]
  unsigned int v30; // [rsp+A0h] [rbp+18h]

  v30 = a3;
  v29 = a2;
  v4 = 0;
  v5 = *(_QWORD *)(a1 + 8) | 0x8000000000000000uLL;
  v28 = 0LL;
  v6 = a3;
  v8 = 0LL;
  if ( (*(_DWORD *)(a1 + 16) & 0x400LL) != 0 )
  {
    PrototypePteDirect = MiGetPrototypePteDirect(*(_QWORD *)(a1 + 16), a2, a3, a4);
    v10 = PrototypePteDirect;
    if ( (*(_BYTE *)(PrototypePteDirect + 34) & 2) != 0 )
      return 0LL;
    v12 = *(_QWORD *)PrototypePteDirect;
    v13 = (volatile signed __int32 *)(*(_QWORD *)PrototypePteDirect + 72LL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(*(_QWORD *)PrototypePteDirect + 72LL);
    }
    else
    {
      if ( _interlockedbittestandset(v13, 0x1Fu) )
        LODWORD(v8) = ExpWaitForSpinLockExclusiveAndAcquire(v13);
      for ( i = *v13; (*v13 & 0xBFFFFFFF) != 0x80000000; i = *v13 )
      {
        if ( (i & 0x40000000) == 0 )
          _InterlockedCompareExchange(v13, i | 0x40000000, i);
        LODWORD(v8) = v8 + 1;
        if ( ((unsigned int)v8 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait((unsigned int)v8);
      }
    }
    v15 = *(_DWORD *)(v12 + 56);
    if ( v15 & 1 | ((v15 & 2) != 0) )
    {
LABEL_17:
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v13, retaddr);
      else
        *v13 = 0;
      return 0LL;
    }
    if ( (v15 & 0x20) == 0 )
    {
      if ( (*(_BYTE *)(v10 + 34) & 1) != 0 )
        goto LABEL_17;
      v28 = v10;
      MiReferenceSubsection(v10, 0LL);
    }
    v16 = MiBuildWakeList(v12, 4);
    ++*(_DWORD *)(v12 + 76);
    v17 = v16;
    MiRemoveUnusedSegment(v12);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v13, retaddr);
    else
      *v13 = 0;
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(v29);
    MiReleaseControlAreaWaiters(v17);
    v6 = v30;
    v8 = v28;
  }
  else
  {
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8((unsigned __int8)a2);
    v18 = (__int64 *)MiReferencePfBackedSection(v5);
    v10 = (__int64)v18;
    if ( !v18 )
    {
      __writecr8(2uLL);
      while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) )
      {
        do
        {
          if ( (++v4 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
            _mm_pause();
          else
            HvlNotifyLongSpinWait(v4);
        }
        while ( (*(_QWORD *)(a1 + 24) & 0x8000000000000000uLL) != 0 );
      }
      return 0LL;
    }
    v12 = *v18;
  }
  v25[0] = v12;
  v25[1] = v5;
  v25[2] = v5;
  v25[3] = v10;
  v25[4] = v10;
  v26 = 0;
  if ( (unsigned int)MiTrimSection(v25, 1LL, v6) || (*(_BYTE *)(a1 + 34) & 7) == 6 )
    MiTrimSection(v25, 1LL, v6);
  if ( v8 )
  {
    v19 = (volatile signed __int32 *)(v12 + 72);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v12 + 72);
    }
    else
    {
      v21 = 0;
      if ( _interlockedbittestandset(v19, 0x1Fu) )
        v21 = ExpWaitForSpinLockExclusiveAndAcquire((volatile signed __int32 *)(v12 + 72));
      for ( j = *v19; (*v19 & 0xBFFFFFFF) != 0x80000000; j = *v19 )
      {
        if ( (j & 0x40000000) == 0 )
          _InterlockedCompareExchange(v19, j | 0x40000000, j);
        if ( (++v21 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v21);
      }
    }
    v23 = MiDecrementSubsections(v28, v28, 0);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v12 + 72, retaddr);
    else
      *v19 = 0;
    __writecr8(CurrentIrql);
    if ( v23 )
      MiReturnSubsectionCharges(v23);
  }
  v24 = (_QWORD *)MiDecrementModifiedWriteCount(v12, 0);
  if ( v24 )
    MiReleaseControlAreaWaiters(v24);
  __writecr8(2uLL);
  if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v4 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v4);
    }
    while ( (*(_QWORD *)(a1 + 24) & 0x8000000000000000uLL) != 0
         || _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) );
  }
  return (*(_BYTE *)(a1 + 34) & 7) != 6 ? 2 : 0;
}
