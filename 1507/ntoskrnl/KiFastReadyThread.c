/*
 * XREFs of KiFastReadyThread @ 0x14000DBF8
 * Callers:
 *     KeReadyThread @ 0x14000FB8C (KeReadyThread.c)
 *     KeSwapProcessOrStack @ 0x140164CD4 (KeSwapProcessOrStack.c)
 * Callees:
 *     KiDeferredReadyThread @ 0x14004CE40 (KiDeferredReadyThread.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     EtwTraceReadyThread @ 0x14025D4F0 (EtwTraceReadyThread.c)
 */

__int64 __fastcall KiFastReadyThread(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int8 CurrentIrql; // bp
  struct _KPRCB *CurrentPrcb; // rsi
  unsigned int v6; // edi
  __int64 v7; // rdx

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
  {
    LOBYTE(a3) = *(_BYTE *)(a1 + 567);
    LOBYTE(a2) = *(_BYTE *)(a1 + 566);
    EtwTraceReadyThread(a1, a2, a3, 0LL);
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v6 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
  {
    do
    {
      if ( (++v6 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v6);
    }
    while ( *(_QWORD *)(a1 + 64) );
  }
  *(_BYTE *)(a1 + 388) = 7;
  *(_QWORD *)(a1 + 64) = 0LL;
  KiDeferredReadyThread(CurrentPrcb, a1);
  LOBYTE(v7) = CurrentIrql;
  return KiCheckForThreadDispatch(CurrentPrcb, v7);
}
