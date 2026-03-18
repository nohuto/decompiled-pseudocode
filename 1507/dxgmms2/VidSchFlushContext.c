/*
 * XREFs of VidSchFlushContext @ 0x1C002F270
 * Callers:
 *     VidSchTerminateContext @ 0x1C002E1C0 (VidSchTerminateContext.c)
 * Callees:
 *     VidSchiCancelDelayTimerContext @ 0x1C000354C (VidSchiCancelDelayTimerContext.c)
 *     VidSchiInterlockedReadUlong @ 0x1C00035EC (VidSchiInterlockedReadUlong.c)
 *     VidSchiCleanupDeferredWaiterContext @ 0x1C0003770 (VidSchiCleanupDeferredWaiterContext.c)
 *     ??$VidSchRundownUnorderedWaiter@U_VIDSCH_CONTEXT@@@@YAJPEAU_VIDSCH_CONTEXT@@PEAU_VIDSCH_GLOBAL@@W4_VIDSCH_FLUSH_STAGE@@_NP6AX0@Z@Z @ 0x1C00037C0 (--$VidSchRundownUnorderedWaiter@U_VIDSCH_CONTEXT@@@@YAJPEAU_VIDSCH_CONTEXT@@PEAU_VIDSCH_GLOBAL@@.c)
 *     memset @ 0x1C0008500 (memset.c)
 *     VidSchiWaitFlushCompletion @ 0x1C0077804 (VidSchiWaitFlushCompletion.c)
 */

__int64 __fastcall VidSchFlushContext(struct _KTIMER *DeferredContext, int *a2, __int64 a3, __int64 a4)
{
  __int64 Flink; // rdi
  __int64 v7; // rax
  union _LARGE_INTEGER v8; // [rsp+20h] [rbp-B8h]
  _QWORD v9[20]; // [rsp+30h] [rbp-A8h] BYREF

  if ( DeferredContext && a2 )
  {
    Flink = (__int64)DeferredContext[1].TimerListEntry.Blink[2].Flink;
    VidSchRundownUnorderedWaiter<_VIDSCH_CONTEXT>((__int64)DeferredContext, Flink, *a2, a4, v8);
    VidSchiCleanupDeferredWaiterContext((__int64)DeferredContext);
    if ( DeferredContext[11].Processor )
    {
      memset(v9, 0, sizeof(v9));
      LODWORD(v9[2]) = 1;
      v9[5] = (char *)DeferredContext + 760;
      LODWORD(v9[4]) |= 0x28u;
      LODWORD(v9[6]) = WORD2(DeferredContext[1].TimerListEntry.Flink->Flink);
      VidSchiWaitFlushCompletion((struct _VIDSCH_GLOBAL *)Flink);
    }
    VidSchiInterlockedReadUlong((KSPIN_LOCK *)(Flink + 1872), &DeferredContext[11].Processor);
    VidSchiCancelDelayTimerContext(DeferredContext);
    return 0LL;
  }
  else
  {
    v7 = WdLogNewEntry5_WdAssertion(DeferredContext, a2, a3, a4);
    *(_QWORD *)(v7 + 24) = -1073741811LL;
    WdLogEvent5_WdAssertion(v7);
    return 3221225485LL;
  }
}
