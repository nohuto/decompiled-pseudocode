/*
 * XREFs of ?ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1W4_NDIS_NBL_TRACKER_OWNERSHIP_EVENT@@K@Z @ 0x1C0003F60
 * Callers:
 *     ndisReturnNblWithPowerQueue @ 0x1C0001000 (ndisReturnNblWithPowerQueue.c)
 *     NdisMSendNetBufferListsComplete @ 0x1C0001F60 (NdisMSendNetBufferListsComplete.c)
 *     NdisMIndicateReceiveNetBufferLists @ 0x1C00025B0 (NdisMIndicateReceiveNetBufferLists.c)
 *     ndisMIndicateNetBufferListsToOpen @ 0x1C0003810 (ndisMIndicateNetBufferListsToOpen.c)
 *     ?ndisMSendCompleteNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KPEAUNDIS_PCW_CONTEXT@@@Z @ 0x1C00045EC (-ndisMSendCompleteNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KPEAUNDIS.c)
 *     ndisFilterIndicateReceiveNetBufferLists @ 0x1C000E750 (ndisFilterIndicateReceiveNetBufferLists.c)
 *     NdisFreeFragmentNetBufferList @ 0x1C0020E90 (NdisFreeFragmentNetBufferList.c)
 *     ?ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z @ 0x1C00267D0 (-ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z.c)
 *     ndisMSendNetBufferListsCompleteInternal @ 0x1C0055B4C (ndisMSendNetBufferListsCompleteInternal.c)
 *     ndisMSendNetBufferListsCompleteToNdisPackets @ 0x1C0055C60 (ndisMSendNetBufferListsCompleteToNdisPackets.c)
 *     ndisMSendPacketsToNetBufferLists @ 0x1C0056650 (ndisMSendPacketsToNetBufferLists.c)
 *     ndisStackExpansionFallbackWorker @ 0x1C0059150 (ndisStackExpansionFallbackWorker.c)
 *     NdisNblTrackerTransferOwnership @ 0x1C0064490 (NdisNblTrackerTransferOwnership.c)
 *     ndisMIndicatePacketsToNetBufferLists @ 0x1C0066480 (ndisMIndicatePacketsToNetBufferLists.c)
 *     ndisReturnNetBufferListsInternal @ 0x1C00671E8 (ndisReturnNetBufferListsInternal.c)
 *     ndisReturnQueuedLowPowerNbls @ 0x1C006761C (ndisReturnQueuedLowPowerNbls.c)
 *     ndisQueueReceiveNblsOnMiniport @ 0x1C006BB4C (ndisQueueReceiveNblsOnMiniport.c)
 *     ndisQueueSendNblsOnMiniport @ 0x1C006BBB0 (ndisQueueSendNblsOnMiniport.c)
 *     ndisReplayRecvNbls @ 0x1C006BCB4 (ndisReplayRecvNbls.c)
 *     ndisReplaySendNbls @ 0x1C006BD14 (ndisReplaySendNbls.c)
 * Callees:
 *     ?ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1C0026A20 (-ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z.c)
 */

void __fastcall ndisNblTrackerTransferOwnershipInternal(
        struct _NET_BUFFER_LIST *a1,
        struct NDIS_NBL_TRACKER_HANDLE__ *a2,
        unsigned __int64 a3,
        unsigned int a4,
        unsigned int a5)
{
  __int64 v5; // rsi
  char v6; // bp
  char v8; // r14
  char v9; // r9
  struct _NET_BUFFER_LIST *Alignment; // rdi
  __int64 v13; // r15
  __int64 v14; // r12
  unsigned __int64 v15; // rbx
  unsigned __int64 v16; // r8
  unsigned __int64 v17; // rax
  void *SourceHandle; // rcx
  unsigned __int64 v19; // r15
  unsigned __int64 v20; // rsi
  unsigned __int64 v21; // rdx
  unsigned int v22; // eax
  unsigned __int64 v23; // rdx
  unsigned int v24; // eax
  unsigned __int64 v25; // rcx

  v5 = 0LL;
  v6 = ndisNblTrackerEpoch;
  v8 = a5 & 1;
  v9 = 0;
  Alignment = a1;
  v13 = 0LL;
  v14 = 0LL;
  if ( ndisNblTrackerMode >= NdisTrackNblFullLogNoStack )
  {
    ndisNblTrackerRecordEvent(a1, a2, a4, (void *)a3, a5);
    v9 = 0;
  }
  v15 = a3 & 0xFFFFFFFFFFFFFFFDuLL;
  if ( (v15 & 1) != 0 )
    v16 = *(_QWORD *)((v15 & 0xFFFFFFFFFFFFFFF8uLL) + 24);
  else
    v16 = v15;
  if ( (v15 & 1) != 0 )
    v15 ^= ((unsigned __int8)v15 ^ (unsigned __int8)(2 * v6)) & 2;
  for ( ; Alignment; v13 = v5 )
  {
    v17 = (unsigned __int64)Alignment->NetBufferListInfo[26];
    do
    {
      if ( Alignment->NetBufferListInfo[26] != (void *)v17 )
        break;
      if ( !v17 && !Alignment->SourceHandle )
      {
        v25 = (unsigned __int64)a2 & 0xFFFFFFFFFFFFFFFDuLL;
        if ( ((unsigned __int8)a2 & 1) != 0 )
          v25 = *(_QWORD *)(((unsigned __int64)a2 & 0xFFFFFFFFFFFFFFF8uLL) + 24);
        Alignment->SourceHandle = (void *)v25;
      }
      if ( (v17 & 4) != 0 || (SourceHandle = Alignment->SourceHandle) == 0LL )
      {
        Alignment->NetBufferListInfo[26] = (void *)(v15 | 4);
      }
      else if ( SourceHandle != (void *)v16 || Alignment->ParentNetBufferList )
      {
        ++v5;
        Alignment->NetBufferListInfo[26] = (void *)v15;
      }
      else
      {
        ++v14;
        Alignment->NetBufferListInfo[26] = (void *)24;
        ++v5;
      }
      Alignment = (struct _NET_BUFFER_LIST *)Alignment->Link.Alignment;
    }
    while ( Alignment );
    v19 = v13 - v5;
    if ( (v17 & 1) != 0 && v19 )
    {
      if ( !v8 && !v9 )
      {
        v9 = 1;
        v8 = KeGetCurrentIrql() == 2;
      }
      v23 = (v17 & 0xFFFFFFFFFFFFFFF8uLL) + 16 * ((v17 >> 1) & 1);
      if ( v8 )
      {
        v24 = KeGetPcr()->Prcb.Number << 12;
        *(_QWORD *)(*(_QWORD *)(v23 + 40) + v24) += v19;
      }
      else
      {
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v23 + 48), v19);
      }
    }
  }
  v20 = v5 - v14;
  if ( (v15 & 1) != 0 && v20 )
  {
    if ( !v8 && !v9 )
      v8 = KeGetCurrentIrql() == 2;
    v21 = (v15 & 0xFFFFFFFFFFFFFFF8uLL) + 16 * ((v15 >> 1) & 1);
    if ( v8 )
    {
      v22 = KeGetPcr()->Prcb.Number << 12;
      *(_QWORD *)(*(_QWORD *)(v21 + 40) + v22) += v20;
    }
    else
    {
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v21 + 48), v20);
    }
  }
}
