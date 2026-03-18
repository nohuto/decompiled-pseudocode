/*
 * XREFs of DpiMiracastPerfInitialPerfTrack @ 0x1C0170A6C
 * Callers:
 *     DxgkMiracastStartMiracastSession @ 0x1C00269F0 (DxgkMiracastStartMiracastSession.c)
 * Callees:
 *     memset @ 0x1C0010C80 (memset.c)
 */

__int64 __fastcall DpiMiracastPerfInitialPerfTrack(char *DeferredContext)
{
  _BYTE *v1; // rbx
  __int64 result; // rax

  v1 = DeferredContext + 712;
  memset(DeferredContext + 712, 0, 0x4F8uLL);
  KeInitializeTimerEx((PKTIMER)(DeferredContext + 808), SynchronizationTimer);
  KeInitializeDpc((PRKDPC)(DeferredContext + 872), (PKDEFERRED_ROUTINE)DpiMiracastPerfFlushTimerDpc, DeferredContext);
  result = 0LL;
  *v1 = 1;
  if ( DeferredContext[464] )
  {
    DeferredContext[714] = 0;
    DeferredContext[715] = 1;
  }
  else
  {
    DeferredContext[714] = 1;
    DeferredContext[715] = 0;
  }
  return result;
}
