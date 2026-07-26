/*
 * XREFs of ndisCreateReceiveWorkerThreadPool @ 0x1C00A88B0
 * Callers:
 *     ndisConfigurePeriodicReceives @ 0x1C0008E54 (ndisConfigurePeriodicReceives.c)
 * Callees:
 *     NdisGroupActiveProcessorCount @ 0x1C0020250 (NdisGroupActiveProcessorCount.c)
 *     WPP_SF_ @ 0x1C00228A0 (WPP_SF_.c)
 *     ndisCreateThread @ 0x1C00A72C0 (ndisCreateThread.c)
 *     ndisKillReceiveWorkerThreadPool @ 0x1C00CD79C (ndisKillReceiveWorkerThreadPool.c)
 */

__int64 ndisCreateReceiveWorkerThreadPool()
{
  int Thread; // ebx
  __int64 v1; // rdi
  ULONG active; // esi

  Thread = 0;
  if ( (unsigned __int8)byte_1C0085313 >= 4u )
    WPP_SF_(0x52u, &WPP_83ec3feda1c7d74e49c0301905f57f77_Traceguids);
  v1 = 0LL;
  active = NdisGroupActiveProcessorCount(0xFFFFu);
  if ( active )
  {
    while ( 1 )
    {
      Thread = ndisCreateThread(
                 (KSTART_ROUTINE *)ndisReceiveWorkerThread,
                 (void *)(unsigned int)v1,
                 dword_1C0084D48,
                 (PVOID *)P + v1);
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
    if ( (unsigned __int8)byte_1C0085313 >= 4u )
      WPP_SF_(0x53u, &WPP_83ec3feda1c7d74e49c0301905f57f77_Traceguids);
  }
  return (unsigned int)Thread;
}
