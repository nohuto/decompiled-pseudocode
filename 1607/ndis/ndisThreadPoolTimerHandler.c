/*
 * XREFs of ndisThreadPoolTimerHandler @ 0x1C0020510
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_ @ 0x1C00267A0 (WPP_SF_.c)
 *     WPP_SF_d @ 0x1C00429F8 (WPP_SF_d.c)
 *     ndisCreateThread @ 0x1C00A86D4 (ndisCreateThread.c)
 */

NTSTATUS ndisThreadPoolTimerHandler()
{
  NTSTATUS result; // eax
  KIRQL v1; // al
  __int64 v2; // r8
  int v3; // eax
  KIRQL v4; // al
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
      if ( (unsigned __int8)byte_1C00895D3 >= 3u )
        WPP_SF_(21LL, &WPP_79db669c0b7b3867b570cbb53c4c883f_Traceguids, v2);
      v3 = ndisCreateThread(ndisWorkerThread, 0LL, 0LL, &Object);
      if ( v3 < 0 )
      {
        if ( (unsigned __int8)byte_1C00895D3 >= 2u )
          WPP_SF_d(22LL, &WPP_79db669c0b7b3867b570cbb53c4c883f_Traceguids, (unsigned int)v3);
      }
      else
      {
        ObfDereferenceObject(Object);
        v4 = KeAcquireSpinLockRaiseToDpc(&ndisThreadPoolLock);
        ++LODWORD(WPP_MAIN_CB.Queue.ListEntry.Flink);
        KeReleaseSpinLock(&ndisThreadPoolLock, v4);
      }
    }
  }
  return result;
}
