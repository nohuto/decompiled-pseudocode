/*
 * XREFs of ndisKillReceiveWorkerThreadPool @ 0x1C00CD79C
 * Callers:
 *     ndisConfigurePeriodicReceives @ 0x1C0008E54 (ndisConfigurePeriodicReceives.c)
 *     ndisCreateReceiveWorkerThreadPool @ 0x1C00A88B0 (ndisCreateReceiveWorkerThreadPool.c)
 * Callees:
 *     WPP_SF_ @ 0x1C00228A0 (WPP_SF_.c)
 *     ?ndisInsertInWorkQueue@@YAXPEAU_NDIS_WORK_QUEUE@@PEAU_WORK_QUEUE_ITEM@@E@Z @ 0x1C0049168 (-ndisInsertInWorkQueue@@YAXPEAU_NDIS_WORK_QUEUE@@PEAU_WORK_QUEUE_ITEM@@E@Z.c)
 */

void ndisKillReceiveWorkerThreadPool()
{
  unsigned int v0; // edx
  __int64 i; // rbx
  struct _WORK_QUEUE_ITEM *v2; // rdx
  __int64 v3; // rbx
  void *v4; // rcx

  if ( (unsigned __int8)byte_1C0085313 >= 4u )
    WPP_SF_(0x54u, &WPP_83ec3feda1c7d74e49c0301905f57f77_Traceguids);
  v0 = ndisMaxNumberOfProcessors;
  for ( i = 0LL; (unsigned int)i < ndisMaxNumberOfProcessors; i = (unsigned int)(i + 1) )
  {
    if ( !*((_QWORD *)P + i) )
      break;
    v2 = (struct _WORK_QUEUE_ITEM *)&WPP_MAIN_CB.DeviceQueue.DeviceListHead.Flink[2 * (unsigned int)i];
    v2->WorkerRoutine = 0LL;
    v2->List.Flink = 0LL;
    v2->Parameter = v2;
    ndisInsertInWorkQueue((struct _KSEMAPHORE *)qword_1C0084D80 + 2 * (unsigned __int64)(unsigned int)i, v2, 0);
    v0 = ndisMaxNumberOfProcessors;
  }
  v3 = 0LL;
  if ( v0 )
  {
    do
    {
      v4 = (void *)*((_QWORD *)P + v3);
      if ( !v4 )
        break;
      KeWaitForSingleObject(v4, Executive, 0, 0, 0LL);
      ObfDereferenceObject(*((PVOID *)P + v3));
      *((_QWORD *)P + v3) = 0LL;
      v3 = (unsigned int)(v3 + 1);
    }
    while ( (unsigned int)v3 < ndisMaxNumberOfProcessors );
  }
  if ( (unsigned __int8)byte_1C0085313 >= 4u )
    WPP_SF_(0x55u, &WPP_83ec3feda1c7d74e49c0301905f57f77_Traceguids);
}
