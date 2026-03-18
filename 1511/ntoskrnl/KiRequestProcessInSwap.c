/*
 * XREFs of KiRequestProcessInSwap @ 0x1400C7BB0
 * Callers:
 *     KiReadyThread @ 0x140034300 (KiReadyThread.c)
 *     KiExitDispatcher @ 0x1400879A0 (KiExitDispatcher.c)
 *     KiProcessThreadWaitList @ 0x1400C7610 (KiProcessThreadWaitList.c)
 *     KiInSwapSingleProcess @ 0x1400C7B28 (KiInSwapSingleProcess.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14007CAC0 (KeYieldProcessorEx.c)
 *     KeSetEvent @ 0x1400875D0 (KeSetEvent.c)
 *     MmNotifyProcessInSwapTrigger @ 0x1400C7CC0 (MmNotifyProcessInSwapTrigger.c)
 */

char __fastcall KiRequestProcessInSwap(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // si
  _QWORD *v6; // rcx
  _QWORD *v7; // rbx
  signed __int64 v8; // rax
  signed __int64 *v9; // rdi
  signed __int64 v10; // rcx
  int v12; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0;
  v12 = 0;
  *(_DWORD *)(a1 + 436) = MEMORY[0xFFFFF78000000320];
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
  {
    do
      KeYieldProcessorEx(&v12, a2, a3);
    while ( *(_QWORD *)(a1 + 64) );
  }
  *(_BYTE *)(a1 + 388) = 9;
  if ( (*(_DWORD *)(a1 + 120) & 0x800) != 0 )
    _interlockedbittestandreset((volatile signed __int32 *)(a1 + 120), 0xBu);
  *(_QWORD *)(a1 + 64) = 0LL;
  v6 = *(_QWORD **)(a2 + 256);
  v7 = (_QWORD *)(a1 + 216);
  *v7 = a2 + 248;
  v7[1] = v6;
  if ( *v6 != a2 + 248 )
    __fastfail(3u);
  *v6 = v7;
  *(_QWORD *)(a2 + 256) = v7;
  LOBYTE(v8) = *(_DWORD *)(a2 + 572) & 7;
  if ( (_BYTE)v8 == 1 )
  {
    _InterlockedXor((volatile signed __int32 *)(a2 + 572), 3u);
    v3 = 1;
  }
  _InterlockedAnd((volatile signed __int32 *)a2, 0xFFFFFF7F);
  if ( v3 )
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
