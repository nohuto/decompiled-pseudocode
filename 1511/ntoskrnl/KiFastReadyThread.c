/*
 * XREFs of KiFastReadyThread @ 0x14002AB48
 * Callers:
 *     KeReadyThread @ 0x1400287E0 (KeReadyThread.c)
 *     KeSwapProcessOrStack @ 0x140136234 (KeSwapProcessOrStack.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14007CAC0 (KeYieldProcessorEx.c)
 *     KiDeferredReadyThread @ 0x140087D50 (KiDeferredReadyThread.c)
 *     EtwTraceReadyThread @ 0x14020E210 (EtwTraceReadyThread.c)
 */

__int64 __fastcall KiFastReadyThread(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int8 CurrentIrql; // si
  struct _KPRCB *CurrentPrcb; // rdi
  __int64 v6; // rdx
  int v8; // [rsp+30h] [rbp+8h] BYREF

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
  {
    LOBYTE(a3) = *(_BYTE *)(a1 + 567);
    LOBYTE(a2) = *(_BYTE *)(a1 + 566);
    EtwTraceReadyThread(a1, a2, a3, 0LL);
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v8 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
  {
    do
      KeYieldProcessorEx(&v8);
    while ( *(_QWORD *)(a1 + 64) );
  }
  *(_BYTE *)(a1 + 388) = 7;
  *(_QWORD *)(a1 + 64) = 0LL;
  KiDeferredReadyThread(CurrentPrcb, a1);
  LOBYTE(v6) = CurrentIrql;
  return KiCheckForThreadDispatch(CurrentPrcb, v6);
}
