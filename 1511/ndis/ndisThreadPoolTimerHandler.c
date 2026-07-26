/*
 * XREFs of ndisThreadPoolTimerHandler @ 0x1C0025120
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_ @ 0x1C003EBD4 (WPP_SF_.c)
 *     WPP_SF_d @ 0x1C003ED9C (WPP_SF_d.c)
 *     ndisCreateThread @ 0x1C00A0EF8 (ndisCreateThread.c)
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
    LOBYTE(WPP_MAIN_CB.AlignmentRequirement) = 0;
    KeReleaseSpinLock(&ndisThreadPoolLock, v1);
    if ( ndisWorkerQueueItemCount > 0 )
    {
      if ( (unsigned __int8)byte_1C0083713 >= 3u )
        WPP_SF_(21LL, &WPP_6772f755ba2ecdacbfb9b612c2ccccf9_Traceguids, v2);
      v3 = ndisCreateThread(ndisWorkerThread, 0LL, 0LL, &Object);
      if ( v3 < 0 )
      {
        if ( (unsigned __int8)byte_1C0083713 >= 2u )
          WPP_SF_d(22LL, &WPP_6772f755ba2ecdacbfb9b612c2ccccf9_Traceguids, (unsigned int)v3);
      }
      else
      {
        ObfDereferenceObject(Object);
        v4 = KeAcquireSpinLockRaiseToDpc(&ndisThreadPoolLock);
        ++*(&WPP_MAIN_CB.AlignmentRequirement + 1);
        KeReleaseSpinLock(&ndisThreadPoolLock, v4);
      }
    }
  }
  return result;
}
