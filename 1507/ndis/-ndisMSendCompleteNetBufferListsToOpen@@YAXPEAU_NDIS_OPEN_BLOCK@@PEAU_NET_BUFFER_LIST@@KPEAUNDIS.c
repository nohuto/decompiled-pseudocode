/*
 * XREFs of ?ndisMSendCompleteNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KPEAUNDIS_PCW_CONTEXT@@@Z @ 0x1C0002140
 * Callers:
 *     NdisSendNetBufferLists @ 0x1C00016E0 (NdisSendNetBufferLists.c)
 *     ndisMSendCompleteNetBufferListsInternal @ 0x1C0001DF0 (ndisMSendCompleteNetBufferListsInternal.c)
 * Callees:
 *     ?ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1W4_NDIS_NBL_TRACKER_OWNERSHIP_EVENT@@K@Z @ 0x1C0002A60 (-ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__.c)
 *     ?ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z @ 0x1C00231B0 (-ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z.c)
 *     ?ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z @ 0x1C00231FC (-ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00236D0 (_guard_dispatch_icall_nop.c)
 *     ?ndisPcwAddEvent@@YAXPEAUNDIS_PCW_CONTEXT@@_K1@Z @ 0x1C00649F8 (-ndisPcwAddEvent@@YAXPEAUNDIS_PCW_CONTEXT@@_K1@Z.c)
 */

void __fastcall ndisMSendCompleteNetBufferListsToOpen(
        struct _NDIS_OPEN_BLOCK *a1,
        struct _NET_BUFFER_LIST *a2,
        unsigned int a3,
        struct NDIS_PCW_CONTEXT *a4)
{
  if ( ndisNblTrackerMode )
    ndisNblTrackerTransferOwnershipInternal(a2, 0LL, a1->NblTracker, NdisNblTrackerEvent_SendCompletedToOpen, a3 & 1);
  if ( (a4->DatapathEventsMask & 0x80u) != 0 )
    ndisPcwAddEvent(a4, 7uLL, 1uLL);
  if ( (a4->DatapathCyclesMask & 0x200) != 0 )
    ndisPcwStartCycleCounter(a4, 9u);
  a1->ProtSendNetBufferListsComplete(a1->SendCompleteNetBufferListsContext, a2, a3);
  if ( (a4->DatapathCyclesMask & 0x200) != 0 )
    ndisPcwEndCycleCounter(a4, 9u, 0x16uLL);
}
