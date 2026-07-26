/*
 * XREFs of ?ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z @ 0x1C0026D64
 * Callers:
 *     ?ndisDoPeriodicReceivesIndication@@YAKPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@@Z @ 0x1C0001160 (-ndisDoPeriodicReceivesIndication@@YAKPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@@Z.c)
 *     ndisMDispatchReceiveNetBufferLists @ 0x1C0001870 (ndisMDispatchReceiveNetBufferLists.c)
 *     ndisMSendCompleteNetBufferListsInternal @ 0x1C0002270 (ndisMSendCompleteNetBufferListsInternal.c)
 *     NdisMIndicateReceiveNetBufferLists @ 0x1C00025B0 (NdisMIndicateReceiveNetBufferLists.c)
 *     ndisMTopReceiveNetBufferLists @ 0x1C00031A0 (ndisMTopReceiveNetBufferLists.c)
 *     ndisMIndicateNetBufferListsToOpen @ 0x1C0003810 (ndisMIndicateNetBufferListsToOpen.c)
 *     NdisReturnNetBufferLists @ 0x1C0004140 (NdisReturnNetBufferLists.c)
 *     NdisSendNetBufferLists @ 0x1C0004690 (NdisSendNetBufferLists.c)
 *     NdisFSendNetBufferListsComplete @ 0x1C000D870 (NdisFSendNetBufferListsComplete.c)
 *     ndisMSendNBLToMiniportInternal @ 0x1C000DB00 (ndisMSendNBLToMiniportInternal.c)
 *     NdisFSendNetBufferLists @ 0x1C000DFF0 (NdisFSendNetBufferLists.c)
 *     NdisFReturnNetBufferLists @ 0x1C000E480 (NdisFReturnNetBufferLists.c)
 *     ndisFilterIndicateReceiveNetBufferLists @ 0x1C000E750 (ndisFilterIndicateReceiveNetBufferLists.c)
 *     ndisMDispatchReceiveNetBufferListsWithLock @ 0x1C001D890 (ndisMDispatchReceiveNetBufferListsWithLock.c)
 *     ?ndisIsPossibleSmuggling@@YAET_NDIS_NBL_TRACKER_OWNER@@0PEAX@Z @ 0x1C0064090 (-ndisIsPossibleSmuggling@@YAET_NDIS_NBL_TRACKER_OWNER@@0PEAX@Z.c)
 *     ?ndisNblTrackerTransferOneNbl@@YAXPEAU_NET_BUFFER_LIST@@T_NDIS_NBL_TRACKER_OWNER@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1PEAXPEA_J4@Z @ 0x1C00642E8 (-ndisNblTrackerTransferOneNbl@@YAXPEAU_NET_BUFFER_LIST@@T_NDIS_NBL_TRACKER_OWNER@@PEAUNDIS_NBL_T.c)
 *     ?ndisNblTrackerTransferOwnershipSingleNbl@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1E@Z @ 0x1C0064360 (-ndisNblTrackerTransferOwnershipSingleNbl@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE_.c)
 *     ndisMIndicateSplitNblChain @ 0x1C00667E8 (ndisMIndicateSplitNblChain.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisSourceHandleFromOwner(__int64 a1)
{
  if ( (a1 & 1) != 0 )
    return *(_QWORD *)((a1 & 0xFFFFFFFFFFFFFFF8uLL) + 24);
  else
    return a1;
}
