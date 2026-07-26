/*
 * XREFs of ndisCreateReceiveWorkerThreadPool @ 0x1C00A87A0
 * Callers:
 *     ndisConfigurePeriodicReceives @ 0x1C001C1A4 (ndisConfigurePeriodicReceives.c)
 * Callees:
 *     NdisGroupActiveProcessorCount @ 0x1C0020670 (NdisGroupActiveProcessorCount.c)
 *     WPP_SF_ @ 0x1C00267A0 (WPP_SF_.c)
 *     ndisCreateThread @ 0x1C00A86D4 (ndisCreateThread.c)
 *     ndisKillReceiveWorkerThreadPool @ 0x1C00CC770 (ndisKillReceiveWorkerThreadPool.c)
 */

__int64 ndisCreateReceiveWorkerThreadPool()
{
  int Thread; // ebx
  __int64 v1; // rdi
  ULONG active; // esi

  Thread = 0;
  if ( (unsigned __int8)byte_1C00895D3 >= 4u )
    WPP_SF_(0x52u, &WPP_79db669c0b7b3867b570cbb53c4c883f_Traceguids);
  v1 = 0LL;
  active = NdisGroupActiveProcessorCount(0xFFFFu);
  if ( active )
  {
    while ( 1 )
    {
      Thread = ndisCreateThread(
                 (KSTART_ROUTINE *)ndisReceiveWorkerThread,
                 (void *)(unsigned int)v1,
                 (KPRIORITY)WPP_MAIN_CB.DeviceQueue.DeviceListHead.Flink,
                 (PVOID *)WPP_MAIN_CB.Dpc.DeferredContext + v1);
      if ( Thread < 0 )
        break;
      v1 = (unsigned int)(v1 + 1);
      if ( (unsigned int)v1 >= active )
        goto LABEL_6;
    }
    ndisKillReceiveWorkerThreadPool();
  }
  else
  {
LABEL_6:
    if ( (unsigned __int8)byte_1C00895D3 >= 4u )
      WPP_SF_(0x53u, &WPP_79db669c0b7b3867b570cbb53c4c883f_Traceguids);
  }
  return (unsigned int)Thread;
}
