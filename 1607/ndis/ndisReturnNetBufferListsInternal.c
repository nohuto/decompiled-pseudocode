/*
 * XREFs of ndisReturnNetBufferListsInternal @ 0x1C00671E8
 * Callers:
 *     ndisSortNetBufferLists @ 0x1C0003AE0 (ndisSortNetBufferLists.c)
 *     ndisMQueueReceiveNetBufferLists @ 0x1C00102D0 (ndisMQueueReceiveNetBufferLists.c)
 *     ?ndisMCoIndicateReceiveNetBufferListsToNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z @ 0x1C0052DD0 (-ndisMCoIndicateReceiveNetBufferListsToNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z.c)
 *     ndisEmptyPeriodicReceivesQueue @ 0x1C0065ED4 (ndisEmptyPeriodicReceivesQueue.c)
 *     ndisReturnPacketToNetBufferList @ 0x1C00675E8 (ndisReturnPacketToNetBufferList.c)
 * Callees:
 *     ?ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1W4_NDIS_NBL_TRACKER_OWNERSHIP_EVENT@@K@Z @ 0x1C0003F60 (-ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__.c)
 *     ?ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z @ 0x1C0010CD4 (-ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z.c)
 *     ?ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z @ 0x1C0010D10 (-ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z.c)
 *     ndisMarkNetBufferListCorrelationIdsAsUsed @ 0x1C00267B4 (ndisMarkNetBufferListCorrelationIdsAsUsed.c)
 *     ndisReturnPeriodicReceives @ 0x1C0026F18 (ndisReturnPeriodicReceives.c)
 *     ndisInvokeNextReceiveCompleteHandler @ 0x1C0058D80 (ndisInvokeNextReceiveCompleteHandler.c)
 */

void __fastcall ndisReturnNetBufferListsInternal(__int64 a1, struct _NET_BUFFER_LIST *a2, unsigned int a3, __int64 a4)
{
  struct NDIS_NBL_TRACKER_HANDLE__ *v4; // rbx
  unsigned int v6; // eax
  struct _NET_BUFFER_LIST *v9; // rdi
  unsigned int v10; // eax
  struct _NET_BUFFER_LIST *Alignment; // rcx
  KIRQL i; // bp
  char DatapathCyclesMask; // bl
  struct NDIS_PCW_CONTEXT v14; // [rsp+30h] [rbp-38h] BYREF

  v4 = 0LL;
  v14.PcwBlock = *(_NDIS_PCW_DATA_BLOCK **)(a1 + 40);
  v6 = *(_DWORD *)(a1 + 48);
  v14.CurrentCpu = -1;
  v14.DatapathEventsMask = v6;
  v9 = a2;
  v10 = *(_DWORD *)(a1 + 80);
  Alignment = a2;
  v14.DatapathCyclesMask = v10;
  for ( i = 2; Alignment; Alignment = (struct _NET_BUFFER_LIST *)Alignment->Link.Alignment )
    Alignment->Flags = Alignment->Flags & 0xFFFFFFF4 | 8;
  if ( Microsoft_Windows_Networking_CorrelationEnabled )
    ndisMarkNetBufferListCorrelationIdsAsUsed(a2);
  if ( *(_DWORD *)(a1 + 3272) )
    v9 = ndisReturnPeriodicReceives(a1, a2);
  if ( v9 )
  {
    if ( ndisNblTrackerMode )
    {
      if ( a4 )
        v4 = *(struct NDIS_NBL_TRACKER_HANDLE__ **)(a4 + 680);
      ndisNblTrackerTransferOwnershipInternal(v9, v4, *(_QWORD *)(a1 + 2544), 0x87u, a3 & 1);
    }
    DatapathCyclesMask = v14.DatapathCyclesMask;
    if ( (v14.DatapathCyclesMask & 0x20) != 0 )
    {
      if ( (a3 & 1) == 0 )
        i = KfRaiseIrql(2u);
      ndisPcwStartCycleCounter(&v14);
      DatapathCyclesMask = v14.DatapathCyclesMask;
    }
    ndisInvokeNextReceiveCompleteHandler(
      v9,
      a3,
      (struct _NDIS_FILTER_BLOCK *)a1,
      *(_BYTE **)(a1 + 2552),
      *(void **)(a1 + 2536),
      *(void (**)(void))(a1 + 2648));
    if ( (DatapathCyclesMask & 0x20) != 0 )
    {
      ndisPcwEndCycleCounter(&v14);
      if ( i != 2 )
        KeLowerIrql(i);
    }
  }
}
