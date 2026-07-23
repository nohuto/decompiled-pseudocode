/*
 * XREFs of KiProcessThreadWaitList @ 0x14008D420
 * Callers:
 *     IopfCompleteRequest @ 0x1400530F0 (IopfCompleteRequest.c)
 *     KiRetireDpcList @ 0x140057E00 (KiRetireDpcList.c)
 *     KiTimer2Expiration @ 0x140059C20 (KiTimer2Expiration.c)
 *     KiCommitThreadWait @ 0x14005A850 (KiCommitThreadWait.c)
 *     KiSwapThread @ 0x14005AD80 (KiSwapThread.c)
 *     KeRemoveQueueEx @ 0x140069F30 (KeRemoveQueueEx.c)
 *     KiPriQueueThreadPriorityChanged @ 0x1400A6028 (KiPriQueueThreadPriorityChanged.c)
 *     KeRemovePriQueue @ 0x1400E5870 (KeRemovePriQueue.c)
 *     KiExpireTimer2 @ 0x1400E9EF0 (KiExpireTimer2.c)
 *     KeTerminateThread @ 0x1400F02A4 (KeTerminateThread.c)
 *     KiProcessExpiredTimerList @ 0x14010D420 (KiProcessExpiredTimerList.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002E830 (KeYieldProcessorEx.c)
 *     KeSetEvent @ 0x140055E50 (KeSetEvent.c)
 *     KiDeferredReadyThread @ 0x140056640 (KiDeferredReadyThread.c)
 *     KiRequestProcessInSwap @ 0x1400CCB40 (KiRequestProcessInSwap.c)
 *     KiAcquireKobjectLockSafe @ 0x1400EC640 (KiAcquireKobjectLockSafe.c)
 *     EtwTraceReadyThread @ 0x140225EF4 (EtwTraceReadyThread.c)
 */

int __fastcall KiProcessThreadWaitList(__int64 a1, unsigned __int8 a2, _SINGLE_LIST_ENTRY *a3, __int64 a4)
{
  __int64 **v4; // r15
  unsigned __int8 v5; // r12
  __int64 v8; // rax
  __int64 *v9; // rsi
  __int64 *v10; // rbx
  __int64 *v11; // rdi
  volatile signed __int32 *v12; // r14
  __int64 *v13; // rcx
  __int64 **v14; // rax
  int v15; // eax
  signed __int64 v16; // rax
  volatile signed __int32 *v17; // rbx
  signed __int64 *v18; // rsi
  signed __int64 v19; // rcx
  int v21; // [rsp+60h] [rbp+8h] BYREF
  int v22; // [rsp+78h] [rbp+20h]

  v22 = a4;
  v4 = *(__int64 ***)(a1 + 11400);
  v5 = (unsigned __int8)a3;
  *(_QWORD *)(a1 + 11400) = 0LL;
  do
  {
    v8 = *((unsigned __int8 *)v4 + 371);
    v9 = (__int64 *)(v4 - 27);
    v10 = *(v4 - 1);
    v4 = (__int64 **)*v4;
    v11 = &v10[6 * v8];
    do
    {
      if ( *((_BYTE *)v10 + 17) < 5u )
      {
        v12 = (volatile signed __int32 *)v10[4];
        v21 = 0;
        while ( _interlockedbittestandset(v12, 7u) )
        {
          do
            KeYieldProcessorEx(&v21);
          while ( (*v12 & 0x80u) != 0 );
        }
        if ( *((_BYTE *)v10 + 17) == 4 )
        {
          v13 = (__int64 *)*v10;
          v14 = (__int64 **)v10[1];
          if ( *(__int64 **)(*v10 + 8) != v10 || *v14 != v10 )
            __fastfail(3u);
          *v14 = v13;
          v13[1] = (__int64)v14;
        }
        _InterlockedAnd(v12, 0xFFFFFF7F);
      }
      v10 += 6;
    }
    while ( v10 != v11 );
    *((_BYTE *)v9 + 566) = a2;
    *((_BYTE *)v9 + 567) = v5;
    if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
      EtwTraceReadyThread(v9, a2, v5);
    v15 = *((_DWORD *)v9 + 30);
    if ( (v15 & 0x10000) != 0 )
    {
      if ( (v15 & 0x40000) == 0 )
        goto LABEL_15;
      _interlockedbittestandreset((volatile signed __int32 *)v9 + 30, 0x12u);
      if ( (_InterlockedExchangeAdd((volatile signed __int32 *)(v9[23] + 572), 8u) & 7) == 0 )
        goto LABEL_15;
      v17 = (volatile signed __int32 *)v9[23];
      KiAcquireKobjectLockSafe(v17);
      if ( (v17[143] & 7) == 0 )
      {
        _InterlockedAnd(v17, 0xFFFFFF7F);
LABEL_15:
        LODWORD(v16) = KiDeferredReadyThread(a1, v9, a3, a4);
        continue;
      }
LABEL_23:
      LODWORD(v16) = KiRequestProcessInSwap(v9, v17);
      continue;
    }
    v17 = (volatile signed __int32 *)v9[23];
    KiAcquireKobjectLockSafe(v17);
    if ( (v17[143] & 7) != 0 )
      goto LABEL_23;
    _InterlockedExchangeAdd(v17 + 143, 8u);
    _InterlockedAnd(v17, 0xFFFFFF7F);
    _interlockedbittestandreset((volatile signed __int32 *)v9 + 30, 0x12u);
    *((_BYTE *)v9 + 388) = 6;
    v18 = v9 + 27;
    _m_prefetchw(&KiStackInSwapListHead);
    v16 = KiStackInSwapListHead;
    do
    {
      *v18 = v16;
      v19 = v16;
      v16 = _InterlockedCompareExchange64(&KiStackInSwapListHead, (signed __int64)v18, v16);
    }
    while ( v16 != v19 );
    if ( !v16 )
      LODWORD(v16) = KeSetEvent(&KiSwapEvent, 10, 0);
  }
  while ( v4 );
  return v16;
}
