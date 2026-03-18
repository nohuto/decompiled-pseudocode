/*
 * XREFs of KiRequestProcessInSwap @ 0x14010C75C
 * Callers:
 *     KiExitDispatcher @ 0x14004C6B0 (KiExitDispatcher.c)
 *     KiProcessThreadWaitList @ 0x1400F7350 (KiProcessThreadWaitList.c)
 *     KiInSwapSingleProcess @ 0x14010C694 (KiInSwapSingleProcess.c)
 *     KiReadyThread @ 0x1401109F0 (KiReadyThread.c)
 * Callees:
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 *     MmNotifyProcessInSwapTrigger @ 0x14010C878 (MmNotifyProcessInSwapTrigger.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 */

char __fastcall KiRequestProcessInSwap(__int64 a1, __int64 a2)
{
  char v2; // bp
  unsigned int v3; // esi
  _QWORD *v6; // rdi
  _QWORD *v7; // rcx
  signed __int64 v8; // rax
  signed __int64 *v9; // rbx
  signed __int64 v10; // rcx

  v2 = 0;
  v3 = 0;
  *(_DWORD *)(a1 + 436) = MEMORY[0xFFFFF78000000320];
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
  {
    do
    {
      if ( (++v3 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v3);
    }
    while ( *(_QWORD *)(a1 + 64) );
  }
  *(_BYTE *)(a1 + 388) = 9;
  *(_QWORD *)(a1 + 64) = 0LL;
  v6 = (_QWORD *)(a1 + 216);
  v7 = *(_QWORD **)(a2 + 256);
  *v6 = a2 + 248;
  v6[1] = v7;
  if ( *v7 != a2 + 248 )
    __fastfail(3u);
  *v7 = v6;
  *(_QWORD *)(a2 + 256) = v6;
  LOBYTE(v8) = *(_DWORD *)(a2 + 572) & 7;
  if ( (_BYTE)v8 == 1 )
  {
    _InterlockedXor((volatile signed __int32 *)(a2 + 572), 3u);
    v2 = 1;
  }
  _InterlockedAnd((volatile signed __int32 *)a2, 0xFFFFFF7F);
  if ( v2 )
  {
    MmNotifyProcessInSwapTrigger(a2);
    v9 = (signed __int64 *)(a2 + 264);
    _m_prefetchw(&KiProcessInSwapListHead);
    v8 = KiProcessInSwapListHead;
    do
    {
      *v9 = v8;
      v10 = v8;
      v8 = _InterlockedCompareExchange64(&KiProcessInSwapListHead, (signed __int64)v9, v8);
    }
    while ( v8 != v10 );
    if ( !v8 )
      LOBYTE(v8) = KeSetEvent(&KiSwapEvent, 10, 0);
  }
  return v8;
}
