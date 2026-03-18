/*
 * XREFs of DpiMiracastPerfInitialPerfTrack @ 0x1C019ECA0
 * Callers:
 *     DxgkMiracastStartMiracastSession @ 0x1C002D594 (DxgkMiracastStartMiracastSession.c)
 * Callees:
 *     memset @ 0x1C00127C0 (memset.c)
 */

__int64 __fastcall DpiMiracastPerfInitialPerfTrack(char *DeferredContext)
{
  _BYTE *v1; // rbx
  __int64 result; // rax

  v1 = DeferredContext + 808;
  memset(DeferredContext + 808, 0, 0x4F8uLL);
  KeInitializeTimerEx((PKTIMER)(DeferredContext + 904), SynchronizationTimer);
  KeInitializeDpc((PRKDPC)(DeferredContext + 968), (PKDEFERRED_ROUTINE)DpiMiracastPerfFlushTimerDpc, DeferredContext);
  result = 0LL;
  *v1 = 1;
  if ( DeferredContext[601] )
  {
    DeferredContext[810] = 0;
    DeferredContext[811] = 1;
  }
  else
  {
    DeferredContext[810] = 1;
    DeferredContext[811] = 0;
  }
  return result;
}
