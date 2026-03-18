/*
 * XREFs of VidSchFlushContext @ 0x1C00424F0
 * Callers:
 *     VidSchTerminateContext @ 0x1C00410C0 (VidSchTerminateContext.c)
 * Callees:
 *     VidSchiCancelDelayTimerContext @ 0x1C0002014 (VidSchiCancelDelayTimerContext.c)
 *     VidSchiInterlockedReadUlong @ 0x1C00020BC (VidSchiInterlockedReadUlong.c)
 *     VidSchiCleanupDeferredWaiterContext @ 0x1C00020E8 (VidSchiCleanupDeferredWaiterContext.c)
 *     ??$VidSchRundownUnorderedWaiter@U_VIDSCH_CONTEXT@@@@YAJPEAU_VIDSCH_CONTEXT@@PEAU_VIDSCH_GLOBAL@@W4_VIDSCH_FLUSH_STAGE@@_NP6AX0@Z@Z @ 0x1C0002138 (--$VidSchRundownUnorderedWaiter@U_VIDSCH_CONTEXT@@@@YAJPEAU_VIDSCH_CONTEXT@@PEAU_VIDSCH_GLOBAL@@.c)
 *     memset @ 0x1C0014E40 (memset.c)
 *     VidSchiWaitFlushCompletion @ 0x1C00413E0 (VidSchiWaitFlushCompletion.c)
 */

__int64 __fastcall VidSchFlushContext(struct _KTIMER *DeferredContext, int *a2, __int64 a3, __int64 a4)
{
  __int64 Flink; // rdi
  __int64 v7; // rax
  union _LARGE_INTEGER v8; // [rsp+28h] [rbp-59h]
  _QWORD v9[20]; // [rsp+38h] [rbp-49h] BYREF

  if ( DeferredContext && a2 )
  {
    Flink = (__int64)DeferredContext[1].TimerListEntry.Blink[2].Flink;
    VidSchRundownUnorderedWaiter<_VIDSCH_CONTEXT>((__int64)DeferredContext, Flink, *a2, a4, v8);
    VidSchiCleanupDeferredWaiterContext((__int64)DeferredContext);
    if ( LODWORD(DeferredContext[12].Header.WaitListHead.Blink) )
    {
      memset(v9, 0, sizeof(v9));
      LODWORD(v9[2]) = 1;
      v9[5] = (char *)DeferredContext + 784;
      LODWORD(v9[4]) |= 0x14u;
      LODWORD(v9[6]) = WORD2(DeferredContext[1].TimerListEntry.Flink->Flink);
      VidSchiWaitFlushCompletion(Flink, (__int64)v9, 0x16u);
    }
    VidSchiInterlockedReadUlong((KSPIN_LOCK *)(Flink + 1856), &DeferredContext[12].Header.WaitListHead.Blink);
    if ( DeferredContext[12].DueTime.LowPart )
    {
      memset(v9, 0, sizeof(v9));
      LODWORD(v9[4]) |= 4u;
      LODWORD(v9[2]) = 3;
      v9[5] = (char *)DeferredContext + 792;
      VidSchiWaitFlushCompletion(Flink, (__int64)v9, 0x16u);
    }
    VidSchiCancelDelayTimerContext(DeferredContext);
    return 0LL;
  }
  else
  {
    v7 = WdLogNewEntry5_WdAssertion(DeferredContext, a2);
    *(_QWORD *)(v7 + 24) = -1073741811LL;
    WdLogEvent5_WdAssertion(v7);
    return 3221225485LL;
  }
}
