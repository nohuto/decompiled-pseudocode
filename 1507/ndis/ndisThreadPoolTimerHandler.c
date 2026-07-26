/*
 * XREFs of ndisThreadPoolTimerHandler @ 0x1C0020470
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_ @ 0x1C00228A0 (WPP_SF_.c)
 *     WPP_SF_d @ 0x1C003DCF4 (WPP_SF_d.c)
 *     ndisCreateThread @ 0x1C00A72C0 (ndisCreateThread.c)
 */

NTSTATUS ndisThreadPoolTimerHandler()
{
  NTSTATUS result; // eax
  KIRQL v1; // al
  int v2; // eax
  KIRQL v3; // al
  PVOID Object; // [rsp+48h] [rbp+10h] BYREF

  while ( 1 )
  {
    result = KeWaitForSingleObject(&ndisThreadPoolTimer, Executive, 0, 0, 0LL);
    if ( ndisThreadPoolTerminating )
      break;
    v1 = KeAcquireSpinLockRaiseToDpc(&ndisThreadPoolLock);
    ndisThreadPoolTimerQueued = 0;
    KeReleaseSpinLock(&ndisThreadPoolLock, v1);
    if ( ndisWorkerQueueItemCount > 0 )
    {
      if ( (unsigned __int8)byte_1C0085313 >= 3u )
        WPP_SF_(21LL, &WPP_83ec3feda1c7d74e49c0301905f57f77_Traceguids);
      v2 = ndisCreateThread(ndisWorkerThread, 0LL, 0LL, &Object);
      if ( v2 < 0 )
      {
        if ( (unsigned __int8)byte_1C0085313 >= 2u )
          WPP_SF_d(22LL, &WPP_83ec3feda1c7d74e49c0301905f57f77_Traceguids, (unsigned int)v2);
      }
      else
      {
        ObfDereferenceObject(Object);
        v3 = KeAcquireSpinLockRaiseToDpc(&ndisThreadPoolLock);
        ++WPP_MAIN_CB.AlignmentRequirement;
        KeReleaseSpinLock(&ndisThreadPoolLock, v3);
      }
    }
  }
  return result;
}
