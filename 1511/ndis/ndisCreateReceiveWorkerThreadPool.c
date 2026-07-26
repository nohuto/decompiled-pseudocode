/*
 * XREFs of ndisCreateReceiveWorkerThreadPool @ 0x1C00A0B60
 * Callers:
 *     ndisConfigurePeriodicReceives @ 0x1C0004588 (ndisConfigurePeriodicReceives.c)
 * Callees:
 *     NdisGroupActiveProcessorCount @ 0x1C0024E60 (NdisGroupActiveProcessorCount.c)
 *     WPP_SF_ @ 0x1C003EBD4 (WPP_SF_.c)
 *     ndisCreateThread @ 0x1C00A0EF8 (ndisCreateThread.c)
 *     ndisKillReceiveWorkerThreadPool @ 0x1C00C6CD0 (ndisKillReceiveWorkerThreadPool.c)
 */

__int64 ndisCreateReceiveWorkerThreadPool()
{
  int Thread; // ebx
  __int64 v1; // rdi
  ULONG active; // esi

  Thread = 0;
  if ( (unsigned __int8)byte_1C0083713 >= 4u )
    WPP_SF_(0x52u, &WPP_6772f755ba2ecdacbfb9b612c2ccccf9_Traceguids);
  v1 = 0LL;
  active = NdisGroupActiveProcessorCount(0xFFFFu);
  if ( active )
  {
    while ( 1 )
    {
      Thread = ndisCreateThread(
                 ndisReceiveWorkerThread,
                 (unsigned int)v1,
                 (unsigned int)dword_1C0082D48,
                 (char *)P + 8 * v1);
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
    if ( (unsigned __int8)byte_1C0083713 >= 4u )
      WPP_SF_(0x53u, &WPP_6772f755ba2ecdacbfb9b612c2ccccf9_Traceguids);
  }
  return (unsigned int)Thread;
}
