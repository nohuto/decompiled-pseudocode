/*
 * XREFs of KiRequestProcessInSwap @ 0x1400CCB40
 * Callers:
 *     KiExitDispatcher @ 0x140056280 (KiExitDispatcher.c)
 *     KiReadyThread @ 0x14005F76C (KiReadyThread.c)
 *     KiProcessThreadWaitList @ 0x14008D420 (KiProcessThreadWaitList.c)
 *     KiInSwapSingleProcess @ 0x1400CCAA4 (KiInSwapSingleProcess.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002E830 (KeYieldProcessorEx.c)
 *     KeSetEvent @ 0x140055E50 (KeSetEvent.c)
 *     MmNotifyProcessInSwapTrigger @ 0x1400CCC44 (MmNotifyProcessInSwapTrigger.c)
 */

char __fastcall KiRequestProcessInSwap(__int64 a1, __int64 a2)
{
  char v2; // si
  _QWORD *v5; // rcx
  _QWORD *v6; // rbx
  signed __int64 v7; // rax
  signed __int64 *v8; // rdi
  signed __int64 v9; // rcx
  int v11; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  *(_DWORD *)(a1 + 436) = MEMORY[0xFFFFF78000000320];
  v11 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
  {
    do
      KeYieldProcessorEx(&v11);
    while ( *(_QWORD *)(a1 + 64) );
  }
  *(_BYTE *)(a1 + 388) = 9;
  if ( (*(_DWORD *)(a1 + 120) & 0x800) != 0 )
    _interlockedbittestandreset((volatile signed __int32 *)(a1 + 120), 0xBu);
  *(_QWORD *)(a1 + 64) = 0LL;
  v5 = *(_QWORD **)(a2 + 256);
  v6 = (_QWORD *)(a1 + 216);
  if ( *v5 != a2 + 248 )
    __fastfail(3u);
  *v6 = a2 + 248;
  v6[1] = v5;
  *v5 = v6;
  *(_QWORD *)(a2 + 256) = v6;
  LOBYTE(v7) = *(_DWORD *)(a2 + 572) & 7;
  if ( (_BYTE)v7 == 1 )
  {
    _InterlockedXor((volatile signed __int32 *)(a2 + 572), 3u);
    v2 = 1;
  }
  _InterlockedAnd((volatile signed __int32 *)a2, 0xFFFFFF7F);
  if ( v2 )
  {
    MmNotifyProcessInSwapTrigger(a2);
    v8 = (signed __int64 *)(a2 + 264);
    _m_prefetchw(&KiProcessInSwapListHead);
    v7 = KiProcessInSwapListHead;
    do
    {
      *v8 = v7;
      v9 = v7;
      v7 = _InterlockedCompareExchange64(&KiProcessInSwapListHead, (signed __int64)v8, v7);
    }
    while ( v7 != v9 );
    if ( !v7 )
      LOBYTE(v7) = KeSetEvent(&KiSwapEvent, 10, 0);
  }
  return v7;
}
