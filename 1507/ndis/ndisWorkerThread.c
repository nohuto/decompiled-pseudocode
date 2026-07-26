/*
 * XREFs of ndisWorkerThread @ 0x1C001D4D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00236D0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C0037744 (WPP_SF_q.c)
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
    if ( (int)WPP_MAIN_CB.Dpc.TargetInfoAsUlong >= 10 )
      break;
    ++WPP_MAIN_CB.Dpc.TargetInfoAsUlong;
    KeReleaseSpinLock(&ndisThreadPoolLock, v4);
    v0 = KeRemoveQueue(&ndisWorkerQueue, 0, 0LL);
    v1 = v0;
    if ( (unsigned __int8)byte_1C0085313 >= 4u )
      WPP_SF_q(23LL, &WPP_83ec3feda1c7d74e49c0301905f57f77_Traceguids, v0);
    v2 = KeAcquireSpinLockRaiseToDpc(&ndisThreadPoolLock);
    --WPP_MAIN_CB.Dpc.TargetInfoAsUlong;
    v3 = v2;
    if ( _InterlockedExchangeAdd(&ndisWorkerQueueItemCount, 0xFFFFFFFF) > 1 )
    {
      KeSetTimer(&ndisThreadPoolTimer, *(LARGE_INTEGER *)&WPP_MAIN_CB.DeviceQueue.Type, 0LL);
    }
    else
    {
      KeCancelTimer(&ndisThreadPoolTimer);
      ndisThreadPoolTimerQueued = 0;
    }
    KeReleaseSpinLock(&ndisThreadPoolLock, v3);
    ((void (__fastcall *)(_LIST_ENTRY *))v1[1].Flink)(v1[1].Blink);
  }
  --WPP_MAIN_CB.AlignmentRequirement;
  KeReleaseSpinLock(&ndisThreadPoolLock, v4);
}
