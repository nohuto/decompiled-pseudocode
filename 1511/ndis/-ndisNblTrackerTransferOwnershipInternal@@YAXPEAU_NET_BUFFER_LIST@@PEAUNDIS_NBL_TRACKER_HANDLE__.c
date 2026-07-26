/*
 * XREFs of ?ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1W4_NDIS_NBL_TRACKER_OWNERSHIP_EVENT@@K@Z @ 0x1C00040C0
 * Callers:
 *     ?ndisDoPeriodicReceivesIndication@@YAKPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@@Z @ 0x1C0001380 (-ndisDoPeriodicReceivesIndication@@YAKPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@@Z.c)
 *     ndisMDispatchReceiveNetBufferLists @ 0x1C0001AE0 (ndisMDispatchReceiveNetBufferLists.c)
 *     ndisMTopReceiveNetBufferLists @ 0x1C0002240 (ndisMTopReceiveNetBufferLists.c)
 *     ndisMIndicateNetBufferListsToOpen @ 0x1C00029D0 (ndisMIndicateNetBufferListsToOpen.c)
 *     ?ndisMSendCompleteNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KPEAUNDIS_PCW_CONTEXT@@@Z @ 0x1C0003558 (-ndisMSendCompleteNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KPEAUNDIS.c)
 *     NdisMSendNetBufferListsComplete @ 0x1C0003600 (NdisMSendNetBufferListsComplete.c)
 *     NdisMIndicateReceiveNetBufferLists @ 0x1C00039D0 (NdisMIndicateReceiveNetBufferLists.c)
 *     ndisFilterIndicateReceiveNetBufferLists @ 0x1C000EB20 (ndisFilterIndicateReceiveNetBufferLists.c)
 *     ndisReturnNblWithPowerQueue @ 0x1C000ED60 (ndisReturnNblWithPowerQueue.c)
 *     ndisReturnQueuedLowPowerNbls @ 0x1C00126D0 (ndisReturnQueuedLowPowerNbls.c)
 *     NdisFreeFragmentNetBufferList @ 0x1C0014FA0 (NdisFreeFragmentNetBufferList.c)
 *     ndisMDispatchReceiveNetBufferListsWithLock @ 0x1C0021200 (ndisMDispatchReceiveNetBufferListsWithLock.c)
 *     ndisMSendNetBufferListsCompleteInternal @ 0x1C0050F7C (ndisMSendNetBufferListsCompleteInternal.c)
 *     ndisMSendNetBufferListsCompleteToNdisPackets @ 0x1C0051090 (ndisMSendNetBufferListsCompleteToNdisPackets.c)
 *     ndisMSendPacketsToNetBufferLists @ 0x1C0051A80 (ndisMSendPacketsToNetBufferLists.c)
 *     ?ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z @ 0x1C00526B0 (-ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z.c)
 *     ndisStackExpansionFallbackWorker @ 0x1C0054AD0 (ndisStackExpansionFallbackWorker.c)
 *     NdisNblTrackerTransferOwnership @ 0x1C00601A0 (NdisNblTrackerTransferOwnership.c)
 *     ndisMIndicatePacketsToNetBufferLists @ 0x1C0062240 (ndisMIndicatePacketsToNetBufferLists.c)
 *     ndisMIndicateSplitNblChain @ 0x1C00625A8 (ndisMIndicateSplitNblChain.c)
 *     ndisReturnNetBufferListsInternal @ 0x1C0062E18 (ndisReturnNetBufferListsInternal.c)
 *     ndisQueueReceiveNblsOnMiniport @ 0x1C0066A4C (ndisQueueReceiveNblsOnMiniport.c)
 *     ndisQueueSendNblsOnMiniport @ 0x1C0066AB0 (ndisQueueSendNblsOnMiniport.c)
 *     ndisReplayRecvNbls @ 0x1C0066B30 (ndisReplayRecvNbls.c)
 *     ndisReplaySendNbls @ 0x1C0066B90 (ndisReplaySendNbls.c)
 * Callees:
 *     ?ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1C00266C8 (-ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z.c)
 *     ?ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z @ 0x1C0026A14 (-ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z.c)
 */

void __fastcall ndisNblTrackerTransferOwnershipInternal(
        struct _NET_BUFFER_LIST *a1,
        struct NDIS_NBL_TRACKER_HANDLE__ *a2,
        struct NDIS_NBL_TRACKER_HANDLE__ *a3,
        unsigned int a4,
        unsigned int a5)
{
  __int64 v5; // rsi
  char v6; // bp
  char v7; // r14
  char v8; // r11
  unsigned __int64 v9; // rbx
  struct _NET_BUFFER_LIST *Alignment; // rdi
  __int64 v12; // r15
  __int64 v13; // r12
  unsigned __int64 v14; // rbx
  unsigned __int64 v15; // r9
  unsigned __int64 v16; // rdx
  void *SourceHandle; // rax
  unsigned __int64 v18; // r15
  unsigned __int64 v19; // rsi
  unsigned __int64 v20; // rdx
  unsigned int v21; // eax
  unsigned int v22; // eax

  v5 = 0LL;
  v6 = ndisNblTrackerEpoch;
  v7 = a5 & 1;
  v8 = 0;
  v9 = (unsigned __int64)a3;
  Alignment = a1;
  v12 = 0LL;
  v13 = 0LL;
  if ( ndisNblTrackerMode >= NdisTrackNblFullLogNoStack )
  {
    ndisNblTrackerRecordEvent(a1, a2, a4, a3, a5);
    v8 = 0;
  }
  v14 = v9 & 0xFFFFFFFFFFFFFFFDuLL;
  if ( (v14 & 1) != 0 )
    v15 = *(_QWORD *)((v14 & 0xFFFFFFFFFFFFFFF8uLL) + 24);
  else
    v15 = v14;
  if ( (v14 & 1) != 0 )
    v14 ^= ((unsigned __int8)v14 ^ (unsigned __int8)(2 * v6)) & 2;
  for ( ; Alignment; v12 = v5 )
  {
    v16 = (unsigned __int64)Alignment->NetBufferListInfo[26];
    do
    {
      if ( Alignment->NetBufferListInfo[26] != (void *)v16 )
        break;
      if ( !v16 && !Alignment->SourceHandle )
        Alignment->SourceHandle = (void *)ndisSourceHandleFromOwner(
                                            (unsigned __int64)a2 & 0xFFFFFFFFFFFFFFFDuLL,
                                            0LL,
                                            a3);
      if ( (v16 & 4) != 0 || (SourceHandle = Alignment->SourceHandle) == 0LL )
      {
        Alignment->NetBufferListInfo[26] = (void *)(v14 | 4);
      }
      else if ( SourceHandle != (void *)v15 || Alignment->ParentNetBufferList )
      {
        ++v5;
        Alignment->NetBufferListInfo[26] = (void *)v14;
      }
      else
      {
        ++v13;
        Alignment->NetBufferListInfo[26] = (void *)24;
        ++v5;
      }
      Alignment = (struct _NET_BUFFER_LIST *)Alignment->Link.Alignment;
    }
    while ( Alignment );
    v18 = v12 - v5;
    if ( (v16 & 1) != 0 && v18 )
    {
      if ( !v7 && !v8 )
      {
        v8 = 1;
        v7 = KeGetCurrentIrql() == 2;
      }
      a3 = (struct NDIS_NBL_TRACKER_HANDLE__ *)((v16 & 0xFFFFFFFFFFFFFFF8uLL) + 16 * ((v16 >> 1) & 1));
      if ( v7 )
      {
        v22 = KeGetPcr()->Prcb.Number << 12;
        *(_QWORD *)(*((_QWORD *)a3 + 5) + v22) += v18;
      }
      else
      {
        _InterlockedExchangeAdd64((volatile signed __int64 *)a3 + 6, v18);
      }
    }
  }
  v19 = v5 - v13;
  if ( (v14 & 1) != 0 && v19 )
  {
    if ( !v7 && !v8 )
      v7 = KeGetCurrentIrql() == 2;
    v20 = (v14 & 0xFFFFFFFFFFFFFFF8uLL) + 16 * ((v14 >> 1) & 1);
    if ( v7 )
    {
      v21 = KeGetPcr()->Prcb.Number << 12;
      *(_QWORD *)(*(_QWORD *)(v20 + 40) + v21) += v19;
    }
    else
    {
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v20 + 48), v19);
    }
  }
}
