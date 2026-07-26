/*
 * XREFs of NdisFRestartFilter @ 0x1C0058050
 * Callers:
 *     <none>
 * Callees:
 *     ndisReferenceRef @ 0x1C0015D1C (ndisReferenceRef.c)
 *     WPP_SF_q @ 0x1C003C368 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C004451C (WPP_SF_qD.c)
 *     ?ndisQueueFilterRestart@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C00CDCE4 (-ndisQueueFilterRestart@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 */

NDIS_STATUS __stdcall NdisFRestartFilter(NDIS_HANDLE NdisFilterHandle)
{
  int v2; // ebx
  struct _WORK_QUEUE_ITEM *PoolWithTag; // rdi

  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0x27u, &WPP_769814ed3e85312f0115d0e4b03a7387_Traceguids, (__int64)NdisFilterHandle);
  if ( KeGetCurrentIrql() >= 2u )
  {
    v2 = 0;
    PoolWithTag = (struct _WORK_QUEUE_ITEM *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x28uLL, 0x2020444Eu);
    if ( PoolWithTag )
    {
      if ( ndisReferenceRef((PKSPIN_LOCK)NdisFilterHandle + 39, 0x16u) )
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
    WPP_SF_qD(0x28u, &WPP_769814ed3e85312f0115d0e4b03a7387_Traceguids, (__int64)NdisFilterHandle, v2);
  return v2;
}
