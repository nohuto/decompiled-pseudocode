/*
 * XREFs of ndisWorkerThread @ 0x1C001B8B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0027180 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C003C368 (WPP_SF_q.c)
 */

void ndisWorkerThread()
{
  PLIST_ENTRY v0; // rax
  PLIST_ENTRY v1; // rbx
  KIRQL v2; // al
  KIRQL v3; // di
  KIRQL v4; // al

  while ( 1 )
  {
    v4 = KeAcquireSpinLockRaiseToDpc(&ndisThreadPoolLock);
    if ( ndisThreadPoolIdleThreadCount >= 10 )
      break;
    ++ndisThreadPoolIdleThreadCount;
    KeReleaseSpinLock(&ndisThreadPoolLock, v4);
    v0 = KeRemoveQueue(&ndisWorkerQueue, 0, 0LL);
    v1 = v0;
    if ( (unsigned __int8)byte_1C00895D3 >= 4u )
      WPP_SF_q(23LL, &WPP_79db669c0b7b3867b570cbb53c4c883f_Traceguids, v0);
    v2 = KeAcquireSpinLockRaiseToDpc(&ndisThreadPoolLock);
    --ndisThreadPoolIdleThreadCount;
    v3 = v2;
    if ( _InterlockedExchangeAdd(&ndisWorkerQueueItemCount, 0xFFFFFFFF) > 1 )
    {
      KeSetTimer(&ndisThreadPoolTimer, ndisThreadPoolTimerDueTime, 0LL);
    }
    else
    {
      KeCancelTimer(&ndisThreadPoolTimer);
      ndisThreadPoolTimerQueued = 0;
    }
    KeReleaseSpinLock(&ndisThreadPoolLock, v3);
    ((void (__fastcall *)(_LIST_ENTRY *))v1[1].Flink)(v1[1].Blink);
  }
  --LODWORD(WPP_MAIN_CB.Queue.ListEntry.Flink);
  KeReleaseSpinLock(&ndisThreadPoolLock, v4);
}
