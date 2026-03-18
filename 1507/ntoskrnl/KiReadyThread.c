/*
 * XREFs of KiReadyThread @ 0x1401109F0
 * Callers:
 *     ExTryQueueWorkItem @ 0x1400292FC (ExTryQueueWorkItem.c)
 *     KiReadyOutSwappedThreads @ 0x1401106FC (KiReadyOutSwappedThreads.c)
 *     KiSetSystemTimeDpc @ 0x1401549C4 (KiSetSystemTimeDpc.c)
 * Callees:
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 *     KiDeferredReadyThread @ 0x14004CE40 (KiDeferredReadyThread.c)
 *     KiRequestProcessInSwap @ 0x14010C75C (KiRequestProcessInSwap.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 */

char __fastcall KiReadyThread(__int64 a1, __int64 a2)
{
  int v2; // eax
  signed __int64 v5; // rax
  volatile signed __int32 *v6; // rbx
  unsigned int v7; // ebp
  signed __int64 *v8; // rdi
  signed __int64 v9; // rcx
  unsigned int v10; // esi

  v2 = *(_DWORD *)(a2 + 120);
  if ( (v2 & 0x10000) != 0 )
  {
    if ( (v2 & 0x40000) == 0 )
      goto LABEL_3;
    _interlockedbittestandreset((volatile signed __int32 *)(a2 + 120), 0x12u);
    if ( (_InterlockedExchangeAdd((volatile signed __int32 *)(*(_QWORD *)(a2 + 184) + 572LL), 8u) & 7) == 0 )
      goto LABEL_3;
    v6 = *(volatile signed __int32 **)(a2 + 184);
    v10 = 0;
    while ( _interlockedbittestandset(v6, 7u) )
    {
      do
      {
        if ( (++v10 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v10);
      }
      while ( (*v6 & 0x80u) != 0 );
    }
    if ( (v6[143] & 7) == 0 )
    {
      _InterlockedAnd(v6, 0xFFFFFF7F);
LABEL_3:
      LOBYTE(v5) = KiDeferredReadyThread(a1, (_BYTE *)a2);
      return v5;
    }
    goto LABEL_28;
  }
  v6 = *(volatile signed __int32 **)(a2 + 184);
  v7 = 0;
  while ( _interlockedbittestandset(v6, 7u) )
  {
    do
    {
      if ( (++v7 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v7);
    }
    while ( (*v6 & 0x80u) != 0 );
  }
  if ( (v6[143] & 7) != 0 )
  {
LABEL_28:
    LOBYTE(v5) = KiRequestProcessInSwap(a2, (__int64)v6);
    return v5;
  }
  _InterlockedExchangeAdd(v6 + 143, 8u);
  _InterlockedAnd(v6, 0xFFFFFF7F);
  _interlockedbittestandreset((volatile signed __int32 *)(a2 + 120), 0x12u);
  *(_BYTE *)(a2 + 388) = 6;
  v8 = (signed __int64 *)(a2 + 216);
  _m_prefetchw(&KiStackInSwapListHead);
  v5 = KiStackInSwapListHead;
  do
  {
    *v8 = v5;
    v9 = v5;
    v5 = _InterlockedCompareExchange64(&KiStackInSwapListHead, (signed __int64)v8, v5);
  }
  while ( v5 != v9 );
  if ( !v5 )
    LOBYTE(v5) = KeSetEvent(&KiSwapEvent, 10, 0);
  return v5;
}
