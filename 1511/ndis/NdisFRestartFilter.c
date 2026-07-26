/*
 * XREFs of NdisFRestartFilter @ 0x1C0053470
 * Callers:
 *     <none>
 * Callees:
 *     ndisReferenceRef @ 0x1C0004A64 (ndisReferenceRef.c)
 *     WPP_SF_q @ 0x1C00383F4 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C0038424 (WPP_SF_qD.c)
 *     ?ndisQueueFilterRestart@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C00C8410 (-ndisQueueFilterRestart@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 */

NDIS_STATUS __stdcall NdisFRestartFilter(NDIS_HANDLE NdisFilterHandle)
{
  int v2; // ebx
  struct _WORK_QUEUE_ITEM *PoolWithTag; // rdi

  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0x27u, &WPP_350f249dad1d39316f5dcf1630ed8af4_Traceguids, (__int64)NdisFilterHandle);
  if ( KeGetCurrentIrql() >= 2u )
  {
    v2 = 0;
    PoolWithTag = (struct _WORK_QUEUE_ITEM *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x28uLL, 0x2020444Eu);
    if ( PoolWithTag )
    {
      if ( ndisReferenceRef((PKSPIN_LOCK)NdisFilterHandle + 39) )
      {
        PoolWithTag->Parameter = PoolWithTag;
        PoolWithTag->WorkerRoutine = ndisQueuedRestartFilter;
        PoolWithTag->List.Flink = 0LL;
        PoolWithTag[1].List.Flink = (_LIST_ENTRY *)NdisFilterHandle;
        ExQueueWorkItem(PoolWithTag, NormalWorkQueue);
      }
      else
      {
        ExFreePoolWithTag(PoolWithTag, 0);
        v2 = -1073741823;
      }
    }
    else
    {
      v2 = -1073741670;
    }
  }
  else
  {
    ndisQueueFilterRestart((struct _NDIS_FILTER_BLOCK *)NdisFilterHandle);
    v2 = 0;
  }
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_qD(0x28u, &WPP_350f249dad1d39316f5dcf1630ed8af4_Traceguids, (__int64)NdisFilterHandle, v2);
  return v2;
}
