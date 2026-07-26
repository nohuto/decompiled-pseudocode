/*
 * XREFs of ?ndisCallReceiveCompleteHandler@@YAXPEAXP6AXXZ0PEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C000CCF0
 * Callers:
 *     ndisMTopReceiveNetBufferLists @ 0x1C00090E0 (ndisMTopReceiveNetBufferLists.c)
 *     NdisReturnNetBufferLists @ 0x1C000A000 (NdisReturnNetBufferLists.c)
 *     ndisInvokeNextReceiveCompleteHandler @ 0x1C0010F78 (ndisInvokeNextReceiveCompleteHandler.c)
 *     ndisMDispatchReceiveNetBufferListsWithLock @ 0x1C001C1B0 (ndisMDispatchReceiveNetBufferListsWithLock.c)
 *     ?ndisDoPeriodicReceivesIndication@@YAKPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@@Z @ 0x1C0061D5C (-ndisDoPeriodicReceivesIndication@@YAKPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@@Z.c)
 *     ndisMDispatchReceiveNetBufferLists @ 0x1C00630C0 (ndisMDispatchReceiveNetBufferLists.c)
 *     ndisMIndicateSplitNblChain @ 0x1C0063AB0 (ndisMIndicateSplitNblChain.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00236D0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ndisCallReceiveCompleteHandler(
        _QWORD *a1,
        void (*a2)(void),
        void *a3,
        struct _NET_BUFFER_LIST *a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7)
{
  if ( ndisVerifierNdisDispatch && *(_BYTE *)a1 == 5 && a1[113] )
    ((void (__fastcall *)(void *, struct _NET_BUFFER_LIST *, _QWORD))ndisVerifierNdisDispatch->NdisFilterReturnNetBufferListsHandler)(
      a3,
      a4,
      a7);
  else
    ((void (__fastcall *)(void *, struct _NET_BUFFER_LIST *, _QWORD))a2)(a3, a4, a7);
}
