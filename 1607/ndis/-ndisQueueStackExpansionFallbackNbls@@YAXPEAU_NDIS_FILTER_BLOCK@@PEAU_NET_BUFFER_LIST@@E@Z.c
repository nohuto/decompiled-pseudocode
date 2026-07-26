/*
 * XREFs of ?ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z @ 0x1C00267D0
 * Callers:
 *     ?ndisDoPeriodicReceivesIndication@@YAKPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@@Z @ 0x1C0001160 (-ndisDoPeriodicReceivesIndication@@YAKPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@@Z.c)
 *     ndisMDispatchReceiveNetBufferLists @ 0x1C0001870 (ndisMDispatchReceiveNetBufferLists.c)
 *     NdisMSendNetBufferListsComplete @ 0x1C0001F60 (NdisMSendNetBufferListsComplete.c)
 *     NdisMIndicateReceiveNetBufferLists @ 0x1C00025B0 (NdisMIndicateReceiveNetBufferLists.c)
 *     ndisMTopReceiveNetBufferLists @ 0x1C00031A0 (ndisMTopReceiveNetBufferLists.c)
 *     NdisReturnNetBufferLists @ 0x1C0004140 (NdisReturnNetBufferLists.c)
 *     NdisSendNetBufferLists @ 0x1C0004690 (NdisSendNetBufferLists.c)
 *     ndisInvokeNextSendCompleteHandler @ 0x1C00104B8 (ndisInvokeNextSendCompleteHandler.c)
 *     ndisInvokeNextReceiveHandler @ 0x1C0010604 (ndisInvokeNextReceiveHandler.c)
 *     ndisMDispatchReceiveNetBufferListsWithLock @ 0x1C001D890 (ndisMDispatchReceiveNetBufferListsWithLock.c)
 *     ?ndisInvokeNextSendHandler@@YAXPEAU_NET_BUFFER_LIST@@KKPEAU_NDIS_OBJECT_HEADER@@PEAXP6AX20KK@Z@Z @ 0x1C001E204 (-ndisInvokeNextSendHandler@@YAXPEAU_NET_BUFFER_LIST@@KKPEAU_NDIS_OBJECT_HEADER@@PEAXP6AX20KK@Z@Z.c)
 *     ndisInvokeNextReceiveCompleteHandler @ 0x1C0058D80 (ndisInvokeNextReceiveCompleteHandler.c)
 *     ndisMIndicateSplitNblChain @ 0x1C00667E8 (ndisMIndicateSplitNblChain.c)
 * Callees:
 *     ?ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1W4_NDIS_NBL_TRACKER_OWNERSHIP_EVENT@@K@Z @ 0x1C0003F60 (-ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__.c)
 *     ndisQueueStackExpansionFallbackWorkItem @ 0x1C0058FA4 (ndisQueueStackExpansionFallbackWorkItem.c)
 */

void __fastcall ndisQueueStackExpansionFallbackNbls(
        struct _NDIS_FILTER_BLOCK *a1,
        struct _NET_BUFFER_LIST *a2,
        char a3)
{
  KIRQL v6; // r14
  _NET_BUFFER_LIST **p_SentNblsToComplete; // rcx
  _NET_BUFFER_LIST *i; // rax

  if ( ndisNblTrackerMode )
    ndisNblTrackerTransferOwnershipInternal(a2, a1->NblTracker, 0xA0uLL, 1u, 0);
  v6 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
  a1->LockThread = KeGetCurrentThread();
  p_SentNblsToComplete = &a1->StackExpansionFallback.PendingWork.SentNblsToComplete;
  a1->LockDbg = 2099841;
  if ( !a3 )
    p_SentNblsToComplete = &a1->StackExpansionFallback.PendingWork.ReceivedNblsToComplete;
  for ( i = *p_SentNblsToComplete; i; i = (_NET_BUFFER_LIST *)i->Link.Alignment )
    p_SentNblsToComplete = &i->Next;
  *p_SentNblsToComplete = a2;
  ndisQueueStackExpansionFallbackWorkItem(a1);
  a1->LockThread = 0LL;
  a1->LockDbg = 0;
  KeReleaseSpinLock(&a1->Lock, v6);
}
