/*
 * XREFs of PfSnTraceTimerRoutine @ 0x1401022D0
 * Callers:
 *     <none>
 * Callees:
 *     KxAcquireSpinLock @ 0x140076D00 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x1400775A0 (KxReleaseSpinLock.c)
 *     PfSnTraceGetLogEntry @ 0x140079C34 (PfSnTraceGetLogEntry.c)
 *     ExAcquireRundownProtection @ 0x140079FF0 (ExAcquireRundownProtection.c)
 *     KeSetTimer @ 0x140091530 (KeSetTimer.c)
 *     ExQueueWorkItem @ 0x140101400 (ExQueueWorkItem.c)
 */

void __fastcall PfSnTraceTimerRoutine(
        struct _KDPC *Dpc,
        int *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  int v5; // edx
  unsigned __int64 *v6; // rcx
  unsigned __int64 *v7; // [rsp+38h] [rbp+10h] BYREF

  if ( !DeferredContext[100] )
  {
    v5 = DeferredContext[83];
    if ( v5 > DeferredContext[85] )
      v5 = DeferredContext[85];
    if ( DeferredContext[81] > v5 )
      DeferredContext[81] = v5;
    DeferredContext[DeferredContext[82] + 71] = v5 - DeferredContext[81];
    DeferredContext[81] = v5;
    if ( (int)PfSnTraceGetLogEntry((__int64)DeferredContext, 1u, &v7) >= 0 )
    {
      v6 = v7;
      *v7 &= 7uLL;
      v6[1] = 0LL;
      *v6 = *v6 & 0xFFFFFFFFFFFFFFF8uLL | 4;
      if ( ++DeferredContext[82] >= dword_140305734 )
      {
        if ( !_InterlockedCompareExchange(DeferredContext + 100, 4, 0) )
          ExQueueWorkItem((PWORK_QUEUE_ITEM)(DeferredContext + 92), DelayedWorkQueue);
      }
      else
      {
        KxAcquireSpinLock((PKSPIN_LOCK)DeferredContext + 34);
        if ( !DeferredContext[100] && ExAcquireRundownProtection((PEX_RUNDOWN_REF)DeferredContext + 45) )
          KeSetTimer(
            (PKTIMER)(DeferredContext + 34),
            *(LARGE_INTEGER *)(DeferredContext + 50),
            (PKDPC)(DeferredContext + 52));
        KxReleaseSpinLock((PKSPIN_LOCK)DeferredContext + 34);
      }
    }
  }
  ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)DeferredContext + 45);
}
