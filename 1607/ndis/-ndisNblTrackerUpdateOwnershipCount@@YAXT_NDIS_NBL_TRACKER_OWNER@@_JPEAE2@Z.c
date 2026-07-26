/*
 * XREFs of ?ndisNblTrackerUpdateOwnershipCount@@YAXT_NDIS_NBL_TRACKER_OWNER@@_JPEAE2@Z @ 0x1C0012AB0
 * Callers:
 *     ?ndisDoPeriodicReceivesIndication@@YAKPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@@Z @ 0x1C0001160 (-ndisDoPeriodicReceivesIndication@@YAKPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@@Z.c)
 *     ndisMDispatchReceiveNetBufferLists @ 0x1C0001870 (ndisMDispatchReceiveNetBufferLists.c)
 *     ndisMSendCompleteNetBufferListsInternal @ 0x1C0002270 (ndisMSendCompleteNetBufferListsInternal.c)
 *     NdisMIndicateReceiveNetBufferLists @ 0x1C00025B0 (NdisMIndicateReceiveNetBufferLists.c)
 *     ndisMTopReceiveNetBufferLists @ 0x1C00031A0 (ndisMTopReceiveNetBufferLists.c)
 *     ndisMIndicateNetBufferListsToOpen @ 0x1C0003810 (ndisMIndicateNetBufferListsToOpen.c)
 *     NdisSendNetBufferLists @ 0x1C0004690 (NdisSendNetBufferLists.c)
 *     NdisFreeCloneNetBufferList @ 0x1C0006C90 (NdisFreeCloneNetBufferList.c)
 *     ndisFilterIndicateReceiveNetBufferLists @ 0x1C000E750 (ndisFilterIndicateReceiveNetBufferLists.c)
 *     ndisMDispatchReceiveNetBufferListsWithLock @ 0x1C001D890 (ndisMDispatchReceiveNetBufferListsWithLock.c)
 *     ?ndisNblTrackerTransferOwnershipSingleNbl@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1E@Z @ 0x1C0064360 (-ndisNblTrackerTransferOwnershipSingleNbl@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE_.c)
 *     ndisMIndicateSplitNblChain @ 0x1C00667E8 (ndisMIndicateSplitNblChain.c)
 * Callees:
 *     <none>
 */

char __fastcall ndisNblTrackerUpdateOwnershipCount(unsigned __int64 a1, unsigned __int64 a2, _BYTE *a3, _BYTE *a4)
{
  unsigned int v6; // eax
  unsigned __int64 v8; // rcx
  __int64 v9; // r8
  _QWORD *v10; // rdx

  if ( a2 )
  {
    if ( !*a3 && !*a4 )
    {
      *a4 = 1;
      LOBYTE(v6) = KeGetCurrentIrql() == 2;
      *a3 = v6;
    }
    v8 = a1 & 0xFFFFFFFFFFFFFFF8uLL;
    v9 = 2 * ((a1 >> 1) & 1);
    if ( *a3 )
    {
      v6 = KeGetPcr()->Prcb.Number << 12;
      v10 = (_QWORD *)(*(_QWORD *)(v8 + 8 * v9 + 40) + v6);
      *v10 += a2;
    }
    else
    {
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v8 + 8 * v9 + 48), a2);
    }
  }
  return v6;
}
