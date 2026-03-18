/*
 * XREFs of KiProcessThreadWaitList @ 0x1400C7610
 * Callers:
 *     KeTerminateThread @ 0x14002B7EC (KeTerminateThread.c)
 *     KiExpireTimer2 @ 0x140033E90 (KiExpireTimer2.c)
 *     KiRetireDpcList @ 0x140044110 (KiRetireDpcList.c)
 *     KeRemovePriQueue @ 0x14006FC60 (KeRemovePriQueue.c)
 *     KeRemoveQueueEx @ 0x1400807E0 (KeRemoveQueueEx.c)
 *     KiCommitThreadWait @ 0x140081ED0 (KiCommitThreadWait.c)
 *     KiSwapThread @ 0x140082450 (KiSwapThread.c)
 *     IopfCompleteRequest @ 0x140084CF0 (IopfCompleteRequest.c)
 *     IopCompleteRequest @ 0x140086090 (IopCompleteRequest.c)
 *     KiPriQueueThreadPriorityChanged @ 0x1400E7488 (KiPriQueueThreadPriorityChanged.c)
 *     KiProcessExpiredTimerList @ 0x1401CB088 (KiProcessExpiredTimerList.c)
 * Callees:
 *     KiAcquireKobjectLockSafe @ 0x140034400 (KiAcquireKobjectLockSafe.c)
 *     KeYieldProcessorEx @ 0x14007CAC0 (KeYieldProcessorEx.c)
 *     KeSetEvent @ 0x1400875D0 (KeSetEvent.c)
 *     KiDeferredReadyThread @ 0x140087D50 (KiDeferredReadyThread.c)
 *     KiRequestProcessInSwap @ 0x1400C7BB0 (KiRequestProcessInSwap.c)
 *     EtwTraceReadyThread @ 0x14020E210 (EtwTraceReadyThread.c)
 */

int __fastcall KiProcessThreadWaitList(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 **v4; // r15
  unsigned __int8 v5; // r12
  unsigned __int8 v6; // r13
  __int64 v8; // rax
  __int64 v9; // rsi
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
  unsigned int v22; // [rsp+78h] [rbp+20h]

  v22 = a4;
  v4 = *(__int64 ***)(a1 + 11400);
  v5 = a3;
  *(_QWORD *)(a1 + 11400) = 0LL;
  v6 = a2;
  do
  {
    v8 = *((unsigned __int8 *)v4 + 371);
    v9 = (__int64)(v4 - 27);
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
            KeYieldProcessorEx(&v21, a2, a3);
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
    *(_BYTE *)(v9 + 566) = v6;
    *(_BYTE *)(v9 + 567) = v5;
    if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
      EtwTraceReadyThread(v9, v6, v5, v22);
    v15 = *(_DWORD *)(v9 + 120);
    if ( (v15 & 0x10000) != 0 )
    {
      if ( (v15 & 0x40000) == 0 )
        goto LABEL_15;
      _interlockedbittestandreset((volatile signed __int32 *)(v9 + 120), 0x12u);
      if ( (_InterlockedExchangeAdd((volatile signed __int32 *)(*(_QWORD *)(v9 + 184) + 572LL), 8u) & 7) == 0 )
        goto LABEL_15;
      v17 = *(volatile signed __int32 **)(v9 + 184);
      KiAcquireKobjectLockSafe(v17, a2, a3);
      if ( (v17[143] & 7) == 0 )
      {
        _InterlockedAnd(v17, 0xFFFFFF7F);
LABEL_15:
        LODWORD(v16) = KiDeferredReadyThread(a1, v9, a3);
        continue;
      }
LABEL_28:
      LODWORD(v16) = KiRequestProcessInSwap(v9, v17);
      continue;
    }
    v17 = *(volatile signed __int32 **)(v9 + 184);
    KiAcquireKobjectLockSafe(v17, a2, a3);
    if ( (v17[143] & 7) != 0 )
      goto LABEL_28;
    _InterlockedExchangeAdd(v17 + 143, 8u);
    _InterlockedAnd(v17, 0xFFFFFF7F);
    _interlockedbittestandreset((volatile signed __int32 *)(v9 + 120), 0x12u);
    *(_BYTE *)(v9 + 388) = 6;
    v18 = (signed __int64 *)(v9 + 216);
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
