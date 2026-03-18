/*
 * XREFs of KiProcessThreadWaitList @ 0x1400F7350
 * Callers:
 *     KiPriQueueThreadPriorityChanged @ 0x14000A02C (KiPriQueueThreadPriorityChanged.c)
 *     KeTerminateThread @ 0x14000F218 (KeTerminateThread.c)
 *     KeRemovePriQueue @ 0x1400319E0 (KeRemovePriQueue.c)
 *     KeRemoveQueueEx @ 0x14009E640 (KeRemoveQueueEx.c)
 *     KiCommitThreadWait @ 0x1400A0220 (KiCommitThreadWait.c)
 *     KiSwapThread @ 0x1400A0810 (KiSwapThread.c)
 *     KiRetireDpcList @ 0x1400A4C50 (KiRetireDpcList.c)
 *     CcMapAndCopyInToCache @ 0x1400B2720 (CcMapAndCopyInToCache.c)
 *     PpmCheckRun @ 0x1400E7D30 (PpmCheckRun.c)
 *     KiTimer2Expiration @ 0x1400F5180 (KiTimer2Expiration.c)
 *     KiExpireTimer2 @ 0x1400F5400 (KiExpireTimer2.c)
 *     KiProcessExpiredTimerList @ 0x140209C50 (KiProcessExpiredTimerList.c)
 * Callees:
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 *     KiDeferredReadyThread @ 0x14004CE40 (KiDeferredReadyThread.c)
 *     KiRequestProcessInSwap @ 0x14010C75C (KiRequestProcessInSwap.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     EtwTraceReadyThread @ 0x14025D4F0 (EtwTraceReadyThread.c)
 */

int __fastcall KiProcessThreadWaitList(__int64 a1, unsigned int a2, unsigned __int8 a3, unsigned int a4)
{
  __int64 **v4; // r15
  __int64 v7; // rax
  __int64 *v8; // rsi
  __int64 *v9; // rbx
  __int64 *v10; // rdi
  volatile signed __int32 *v11; // r14
  unsigned int v12; // ebp
  __int64 *v13; // rcx
  __int64 **v14; // rax
  int v15; // eax
  signed __int64 v16; // rax
  volatile signed __int32 *v17; // rbx
  unsigned int v18; // edi
  signed __int64 *v19; // rsi
  signed __int64 v20; // rcx
  unsigned int v21; // edi

  v4 = *(__int64 ***)(a1 + 11400);
  *(_QWORD *)(a1 + 11400) = 0LL;
  do
  {
    v7 = *((unsigned __int8 *)v4 + 371);
    v8 = (__int64 *)(v4 - 27);
    v9 = *(v4 - 1);
    v4 = (__int64 **)*v4;
    v10 = &v9[6 * v7];
    do
    {
      if ( *((_BYTE *)v9 + 17) < 5u )
      {
        v11 = (volatile signed __int32 *)v9[4];
        v12 = 0;
        if ( _interlockedbittestandset(v11, 7u) )
        {
          do
          {
            if ( (++v12 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
              _mm_pause();
            else
              HvlNotifyLongSpinWait(v12);
          }
          while ( (*v11 & 0x80u) != 0 || _interlockedbittestandset(v11, 7u) );
        }
        if ( *((_BYTE *)v9 + 17) == 4 )
        {
          v13 = (__int64 *)*v9;
          v14 = (__int64 **)v9[1];
          if ( *(__int64 **)(*v9 + 8) != v9 || *v14 != v9 )
            __fastfail(3u);
          *v14 = v13;
          v13[1] = (__int64)v14;
        }
        _InterlockedAnd(v11, 0xFFFFFF7F);
      }
      v9 += 6;
    }
    while ( v9 != v10 );
    *((_BYTE *)v8 + 566) = a2;
    *((_BYTE *)v8 + 567) = a3;
    if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
      EtwTraceReadyThread(v8, a2, a3, a4);
    v15 = *((_DWORD *)v8 + 30);
    if ( (v15 & 0x10000) != 0 )
    {
      if ( (v15 & 0x40000) == 0 )
        goto LABEL_15;
      _interlockedbittestandreset((volatile signed __int32 *)v8 + 30, 0x12u);
      if ( (_InterlockedExchangeAdd((volatile signed __int32 *)(v8[23] + 572), 8u) & 7) == 0 )
        goto LABEL_15;
      v17 = (volatile signed __int32 *)v8[23];
      v21 = 0;
      if ( _interlockedbittestandset(v17, 7u) )
      {
        do
        {
          if ( (++v21 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
            _mm_pause();
          else
            HvlNotifyLongSpinWait(v21);
        }
        while ( (*v17 & 0x80u) != 0 || _interlockedbittestandset(v17, 7u) );
      }
      if ( (v17[143] & 7) == 0 )
      {
        _InterlockedAnd(v17, 0xFFFFFF7F);
LABEL_15:
        LODWORD(v16) = KiDeferredReadyThread(a1, v8);
        continue;
      }
LABEL_32:
      LODWORD(v16) = KiRequestProcessInSwap(v8, v17);
      continue;
    }
    v17 = (volatile signed __int32 *)v8[23];
    v18 = 0;
    if ( _interlockedbittestandset(v17, 7u) )
    {
      do
      {
        if ( (++v18 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v18);
      }
      while ( (*v17 & 0x80u) != 0 || _interlockedbittestandset(v17, 7u) );
    }
    if ( (v17[143] & 7) != 0 )
      goto LABEL_32;
    _InterlockedExchangeAdd(v17 + 143, 8u);
    _InterlockedAnd(v17, 0xFFFFFF7F);
    _interlockedbittestandreset((volatile signed __int32 *)v8 + 30, 0x12u);
    *((_BYTE *)v8 + 388) = 6;
    v19 = v8 + 27;
    _m_prefetchw(&KiStackInSwapListHead);
    v16 = KiStackInSwapListHead;
    do
    {
      *v19 = v16;
      v20 = v16;
      v16 = _InterlockedCompareExchange64(&KiStackInSwapListHead, (signed __int64)v19, v16);
    }
    while ( v16 != v20 );
    if ( !v16 )
      LODWORD(v16) = KeSetEvent(&KiSwapEvent, 10, 0);
  }
  while ( v4 );
  return v16;
}
