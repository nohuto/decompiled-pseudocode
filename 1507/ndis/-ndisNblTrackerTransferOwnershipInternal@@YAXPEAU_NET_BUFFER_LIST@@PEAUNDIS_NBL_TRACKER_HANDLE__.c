/*
 * XREFs of ?ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1W4_NDIS_NBL_TRACKER_OWNERSHIP_EVENT@@K@Z @ 0x1C0002A60
 * Callers:
 *     ndisReturnNblWithPowerQueue @ 0x1C0001570 (ndisReturnNblWithPowerQueue.c)
 *     NdisSendNetBufferLists @ 0x1C00016E0 (NdisSendNetBufferLists.c)
 *     ?ndisMSendCompleteNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KPEAUNDIS_PCW_CONTEXT@@@Z @ 0x1C0002140 (-ndisMSendCompleteNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KPEAUNDIS.c)
 *     NdisMSendNetBufferListsComplete @ 0x1C00021E0 (NdisMSendNetBufferListsComplete.c)
 *     NdisMIndicateReceiveNetBufferLists @ 0x1C00024B0 (NdisMIndicateReceiveNetBufferLists.c)
 *     ndisMTopReceiveNetBufferLists @ 0x1C00090E0 (ndisMTopReceiveNetBufferLists.c)
 *     ndisMIndicateNetBufferListsToOpen @ 0x1C00094A0 (ndisMIndicateNetBufferListsToOpen.c)
 *     ndisFilterIndicateReceiveNetBufferLists @ 0x1C000C6C0 (ndisFilterIndicateReceiveNetBufferLists.c)
 *     ndisReturnQueuedLowPowerNbls @ 0x1C000FA2C (ndisReturnQueuedLowPowerNbls.c)
 *     ndisMDispatchReceiveNetBufferListsWithLock @ 0x1C001C1B0 (ndisMDispatchReceiveNetBufferListsWithLock.c)
 *     NdisFreeFragmentNetBufferList @ 0x1C00212C0 (NdisFreeFragmentNetBufferList.c)
 *     ?ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z @ 0x1C0022A48 (-ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z.c)
 *     ndisMSendNetBufferListsCompleteInternal @ 0x1C00509DC (ndisMSendNetBufferListsCompleteInternal.c)
 *     ndisMSendNetBufferListsCompleteToNdisPackets @ 0x1C0050AF0 (ndisMSendNetBufferListsCompleteToNdisPackets.c)
 *     ndisMSendPacketsToNetBufferLists @ 0x1C00514E0 (ndisMSendPacketsToNetBufferLists.c)
 *     ndisStackExpansionFallbackWorker @ 0x1C00549F0 (ndisStackExpansionFallbackWorker.c)
 *     NdisNblTrackerTransferOwnership @ 0x1C0060990 (NdisNblTrackerTransferOwnership.c)
 *     ?ndisDoPeriodicReceivesIndication@@YAKPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@@Z @ 0x1C0061D5C (-ndisDoPeriodicReceivesIndication@@YAKPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@@Z.c)
 *     ndisMDispatchReceiveNetBufferLists @ 0x1C00630C0 (ndisMDispatchReceiveNetBufferLists.c)
 *     ndisMIndicatePacketsToNetBufferLists @ 0x1C00636F0 (ndisMIndicatePacketsToNetBufferLists.c)
 *     ndisMIndicateSplitNblChain @ 0x1C0063AB0 (ndisMIndicateSplitNblChain.c)
 *     ndisReturnNetBufferListsInternal @ 0x1C0064358 (ndisReturnNetBufferListsInternal.c)
 *     ndisQueueReceiveNblsOnMiniport @ 0x1C006797C (ndisQueueReceiveNblsOnMiniport.c)
 *     ndisQueueSendNblsOnMiniport @ 0x1C00679E0 (ndisQueueSendNblsOnMiniport.c)
 *     ndisReplayRecvNbls @ 0x1C0067A60 (ndisReplayRecvNbls.c)
 *     ndisReplaySendNbls @ 0x1C0067AC0 (ndisReplaySendNbls.c)
 * Callees:
 *     ?ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1C0022B24 (-ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z.c)
 *     ?ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z @ 0x1C0022E70 (-ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z.c)
 */

void __fastcall ndisNblTrackerTransferOwnershipInternal(
        struct _NET_BUFFER_LIST *a1,
        struct NDIS_NBL_TRACKER_HANDLE__ *a2,
        struct NDIS_NBL_TRACKER_HANDLE__ *a3,
        unsigned int a4,
        unsigned int a5)
{
  __int64 v5; // rdi
  char v6; // r15
  char v7; // bp
  char v8; // r11
  unsigned __int64 v9; // rbx
  struct _NET_BUFFER_LIST *Alignment; // rsi
  __int64 v12; // r14
  __int64 v13; // r12
  unsigned __int64 v14; // rbx
  unsigned __int64 v15; // r9
  unsigned __int64 v16; // rdx
  void *SourceHandle; // rax
  unsigned __int64 v18; // r14
  unsigned __int64 v19; // rdi
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
