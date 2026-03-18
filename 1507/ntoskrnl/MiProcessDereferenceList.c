/*
 * XREFs of MiProcessDereferenceList @ 0x140145AB0
 * Callers:
 *     MiDereferenceSegmentThread @ 0x140167DD0 (MiDereferenceSegmentThread.c)
 *     MiRemoveUnusedSegments @ 0x140167F4C (MiRemoveUnusedSegments.c)
 * Callees:
 *     MiFreeClonePool @ 0x14000568C (MiFreeClonePool.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x140028FE0 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExfReleaseRundownProtection @ 0x140030F40 (ExfReleaseRundownProtection.c)
 *     KeResetEvent @ 0x1400484D0 (KeResetEvent.c)
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     ExfAcquireRundownProtection @ 0x1400D4A40 (ExfAcquireRundownProtection.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     MiAttemptPageFileReduction @ 0x140220C9C (MiAttemptPageFileReduction.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140264210 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     MiSegmentDelete @ 0x1404B2AE4 (MiSegmentDelete.c)
 *     MiExtendPagingFiles @ 0x1406A50F4 (MiExtendPagingFiles.c)
 */

PSLIST_ENTRY __fastcall MiProcessDereferenceList(__int64 a1)
{
  unsigned __int8 CurrentIrql; // r14
  signed __int8 v3; // cf
  unsigned int v4; // edi
  __int64 **v5; // r12
  __int64 *v6; // rsi
  __int64 v7; // rax
  struct _KEVENT *v8; // rdi
  char v9; // al
  unsigned int v10; // edi
  PSLIST_ENTRY result; // rax
  __int64 *v12; // rax
  _QWORD *v13; // rsi
  unsigned __int64 v14; // rtt
  unsigned __int64 v15; // rtt
  unsigned int v16; // esi
  _QWORD *v17; // rsi
  unsigned __int64 v18; // rtt
  unsigned __int64 v19; // rtt
  unsigned int v20; // edi
  unsigned int v21; // esi
  _OWORD v22[2]; // [rsp+20h] [rbp-60h] BYREF
  LIST_ENTRY WaitListHead; // [rsp+40h] [rbp-40h]
  __int128 v24; // [rsp+50h] [rbp-30h]
  __int128 v25; // [rsp+60h] [rbp-20h]
  __int64 *v26; // [rsp+70h] [rbp-10h]
  struct _LIST_ENTRY *Blink; // [rsp+78h] [rbp-8h]
  void *retaddr; // [rsp+A8h] [rbp+28h]

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(&dword_14034E740);
  }
  else
  {
    v3 = _interlockedbittestandset(&dword_14034E740, 0x1Fu);
    v4 = 0;
    if ( v3 )
      v4 = ExpWaitForSpinLockExclusiveAndAcquire(&dword_14034E740);
    while ( (dword_14034E740 & 0xBFFFFFFF) != 0x80000000 )
    {
      if ( (dword_14034E740 & 0x40000000) == 0 )
        _InterlockedCompareExchange(&dword_14034E740, dword_14034E740 | 0x40000000, dword_14034E740);
      if ( (++v4 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v4);
    }
  }
  v5 = (__int64 **)(a1 + 1256);
  while ( *v5 != (__int64 *)v5 )
  {
    v6 = *v5;
    v7 = **v5;
    if ( (__int64 **)(*v5)[1] != v5 || *(__int64 **)(v7 + 8) != v6 )
      __fastfail(3u);
    *v5 = (__int64 *)v7;
    v8 = (struct _KEVENT *)(v6 - 1);
    *(_QWORD *)(v7 + 8) = v5;
    if ( *(v6 - 1) )
    {
      if ( (unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel(&v8[3].Header.Lock) )
      {
        LODWORD(v8[2].Header.WaitListHead.Flink) &= ~0x8000000u;
        v6[1] = (__int64)v6;
        *v6 = (__int64)v6;
        v9 = BYTE6(PerfGlobalGroupMask);
        if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        {
          ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_14034E740, retaddr);
          v9 = BYTE6(PerfGlobalGroupMask);
        }
        else
        {
          dword_14034E740 = 0;
        }
        if ( (v9 & 1) != 0 )
          ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&v8[3], retaddr);
        else
          v8[3].Header.LockNV = 0;
        __writecr8(CurrentIrql);
        MiSegmentDelete(v6 - 1);
      }
      else
      {
        v12 = *v5;
        *v6 = (__int64)*v5;
        v6[1] = (__int64)v5;
        if ( (__int64 **)v12[1] != v5 )
          __fastfail(3u);
        v12[1] = (__int64)v6;
        *v5 = v6;
        if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
          ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_14034E740, retaddr);
        else
          dword_14034E740 = 0;
        __writecr8(CurrentIrql);
      }
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
LABEL_76:
        ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(&dword_14034E740);
      }
      else
      {
        v3 = _interlockedbittestandset(&dword_14034E740, 0x1Fu);
        v10 = 0;
        if ( v3 )
          v10 = ExpWaitForSpinLockExclusiveAndAcquire(&dword_14034E740);
        while ( (dword_14034E740 & 0xBFFFFFFF) != 0x80000000 )
        {
          if ( (dword_14034E740 & 0x40000000) == 0 )
            _InterlockedCompareExchange(&dword_14034E740, dword_14034E740 | 0x40000000, dword_14034E740);
          if ( (++v10 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
            _mm_pause();
          else
            HvlNotifyLongSpinWait(v10);
        }
      }
    }
    else if ( v8[1].Header.WaitListHead.Flink == (struct _LIST_ENTRY *)-1LL )
    {
      v13 = (_QWORD *)(a1 + 864);
      _m_prefetchw((const void *)(a1 + 864));
      v14 = *(_QWORD *)(a1 + 864) & 0xFFFFFFFFFFFFFFFEuLL;
      if ( v14 == _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 864), v14 + 2, v14)
        || ExfAcquireRundownProtection((PEX_RUNDOWN_REF)(a1 + 864)) )
      {
        if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
          ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_14034E740, retaddr);
        else
          dword_14034E740 = 0;
        __writecr8(CurrentIrql);
        MiAttemptPageFileReduction(v8);
        _m_prefetchw(v13);
        v15 = *v13 & 0xFFFFFFFFFFFFFFFEuLL;
        if ( v15 != _InterlockedCompareExchange64(v13, v15 - 2, v15) )
          ExfReleaseRundownProtection((PEX_RUNDOWN_REF)(a1 + 864));
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
        {
          ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(&dword_14034E740);
        }
        else
        {
          v3 = _interlockedbittestandset(&dword_14034E740, 0x1Fu);
          v16 = 0;
          if ( v3 )
            v16 = ExpWaitForSpinLockExclusiveAndAcquire(&dword_14034E740);
          while ( (dword_14034E740 & 0xBFFFFFFF) != 0x80000000 )
          {
            if ( (dword_14034E740 & 0x40000000) == 0 )
              _InterlockedCompareExchange(&dword_14034E740, dword_14034E740 | 0x40000000, dword_14034E740);
            if ( (++v16 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
              _mm_pause();
            else
              HvlNotifyLongSpinWait(v16);
          }
        }
      }
      if ( !BYTE1(v8[3].Header.WaitListHead.Blink) )
LABEL_90:
        KeSetEvent(v8 + 2, 0, 0);
    }
    else
    {
      v22[0] = *(_OWORD *)&v8->Header.Lock;
      v22[1] = *(_OWORD *)&v8->Header.WaitListHead.Blink;
      WaitListHead = v8[1].Header.WaitListHead;
      v24 = *(_OWORD *)&v8[2].Header.Lock;
      v25 = *(_OWORD *)&v8[2].Header.WaitListHead.Blink;
      Blink = v8[3].Header.WaitListHead.Blink;
      v26 = v6 - 1;
      v8[3].Header.WaitListHead.Flink = (struct _LIST_ENTRY *)v22;
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_14034E740, retaddr);
      else
        dword_14034E740 = 0;
      __writecr8(CurrentIrql);
      v17 = (_QWORD *)(a1 + 864);
      _m_prefetchw((const void *)(a1 + 864));
      v18 = *(_QWORD *)(a1 + 864) & 0xFFFFFFFFFFFFFFFEuLL;
      if ( v18 == _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 864), v18 + 2, v18)
        || ExfAcquireRundownProtection((PEX_RUNDOWN_REF)(a1 + 864)) )
      {
        MiExtendPagingFiles(v22);
        _m_prefetchw(v17);
        v19 = *v17 & 0xFFFFFFFFFFFFFFFEuLL;
        if ( v19 != _InterlockedCompareExchange64(v17, v19 - 2, v19) )
          ExfReleaseRundownProtection((PEX_RUNDOWN_REF)(a1 + 864));
      }
      if ( (_BYTE)Blink == 1 )
      {
        _InterlockedExchange(&v8[3].Header.Lock, 0);
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
          goto LABEL_76;
        v3 = _interlockedbittestandset(&dword_14034E740, 0x1Fu);
        v20 = 0;
        if ( v3 )
          v20 = ExpWaitForSpinLockExclusiveAndAcquire(&dword_14034E740);
        while ( (dword_14034E740 & 0xBFFFFFFF) != 0x80000000 )
        {
          if ( (dword_14034E740 & 0x40000000) == 0 )
            _InterlockedCompareExchange(&dword_14034E740, dword_14034E740 | 0x40000000, dword_14034E740);
          if ( (++v20 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
            _mm_pause();
          else
            HvlNotifyLongSpinWait(v20);
        }
      }
      else
      {
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
        {
          ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(&dword_14034E740);
        }
        else
        {
          v3 = _interlockedbittestandset(&dword_14034E740, 0x1Fu);
          v21 = 0;
          if ( v3 )
            v21 = ExpWaitForSpinLockExclusiveAndAcquire(&dword_14034E740);
          while ( (dword_14034E740 & 0xBFFFFFFF) != 0x80000000 )
          {
            if ( (dword_14034E740 & 0x40000000) == 0 )
              _InterlockedCompareExchange(&dword_14034E740, dword_14034E740 | 0x40000000, dword_14034E740);
            if ( (++v21 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
              _mm_pause();
            else
              HvlNotifyLongSpinWait(v21);
          }
        }
        if ( v26 )
        {
          v8[1].Header.WaitListHead.Blink = WaitListHead.Blink;
          goto LABEL_90;
        }
      }
    }
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_14034E740, retaddr);
  else
    dword_14034E740 = 0;
  __writecr8(CurrentIrql);
  result = (PSLIST_ENTRY)MiSystemPartition;
  if ( Event.Header.SignalState && (__int16 *)a1 == MiSystemPartition )
  {
    KeResetEvent(&Event);
    return MiFreeClonePool();
  }
  return result;
}
