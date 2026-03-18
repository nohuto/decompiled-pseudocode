/*
 * XREFs of DpiMiracastPerfInitialPerfTrack @ 0x1C01752EC
 * Callers:
 *     DxgkMiracastStartMiracastSession @ 0x1C0026540 (DxgkMiracastStartMiracastSession.c)
 * Callees:
 *     memset @ 0x1C0012400 (memset.c)
 */

__int64 __fastcall DpiMiracastPerfInitialPerfTrack(char *DeferredContext)
{
  _BYTE *v1; // rbx
  __int64 result; // rax

  v1 = DeferredContext + 720;
  memset(DeferredContext + 720, 0, 0x4F8uLL);
  KeInitializeTimerEx((PKTIMER)(DeferredContext + 816), SynchronizationTimer);
  KeInitializeDpc((PRKDPC)(DeferredContext + 880), (PKDEFERRED_ROUTINE)DpiMiracastPerfFlushTimerDpc, DeferredContext);
  result = 0LL;
  *v1 = 1;
  if ( DeferredContext[473] )
  {
    DeferredContext[722] = 0;
    DeferredContext[723] = 1;
  }
  else
  {
    DeferredContext[722] = 1;
    DeferredContext[723] = 0;
  }
  return result;
}
