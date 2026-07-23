/*
 * XREFs of KiFastReadyThread @ 0x1400F05F8
 * Callers:
 *     KeReadyThread @ 0x1400F0DBC (KeReadyThread.c)
 *     KeSwapProcessOrStack @ 0x14013D844 (KeSwapProcessOrStack.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002E830 (KeYieldProcessorEx.c)
 *     KiDeferredReadyThread @ 0x140056640 (KiDeferredReadyThread.c)
 *     EtwTraceReadyThread @ 0x140225EF4 (EtwTraceReadyThread.c)
 */

__int64 __fastcall KiFastReadyThread(__int64 a1, __int64 a2, _SINGLE_LIST_ENTRY *a3, __int64 a4)
{
  unsigned __int8 CurrentIrql; // si
  struct _KPRCB *CurrentPrcb; // rdi
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  int v11; // [rsp+30h] [rbp+8h] BYREF

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
  {
    LOBYTE(a3) = *(_BYTE *)(a1 + 567);
    LOBYTE(a2) = *(_BYTE *)(a1 + 566);
    EtwTraceReadyThread(a1, a2, a3);
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v11 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
  {
    do
      KeYieldProcessorEx(&v11);
    while ( *(_QWORD *)(a1 + 64) );
  }
  *(_BYTE *)(a1 + 388) = 7;
  *(_QWORD *)(a1 + 64) = 0LL;
  KiDeferredReadyThread((__int64)CurrentPrcb, (_BYTE *)a1, a3, a4);
  LOBYTE(v7) = CurrentIrql;
  return KiCheckForThreadDispatch(CurrentPrcb, v7, v8, v9);
}
