/*
 * XREFs of ndisMCancelSendNetBufferListsOnMiniport @ 0x1C0053E20
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0027180 (_guard_dispatch_icall_nop.c)
 *     ?ndisWdfSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z @ 0x1C006AB08 (-ndisWdfSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z.c)
 *     ?ndisWdmSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z @ 0x1C006ADF0 (-ndisWdmSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z.c)
 *     ndisClearBusy @ 0x1C006B5C8 (ndisClearBusy.c)
 */

unsigned __int8 __fastcall ndisMCancelSendNetBufferListsOnMiniport(
        struct _NDIS_MINIPORT_BLOCK *a1,
        void *a2,
        __int64 a3,
        void *a4)
{
  unsigned __int8 result; // al
  unsigned int v7; // [rsp+20h] [rbp-18h]

  if ( !a1->SelectiveSuspend
    || ((a1->Flags & 0x80u) == 0
      ? (result = ndisWdmSetBusyAsync(a1, 1u, NdisBusyCancelSend, a2, 0))
      : (result = ndisWdfSetBusyAsync(a1, 1u, NdisBusyCancelSend, a4, v7)),
        result) )
  {
    result = ((__int64 (__fastcall *)(void *, void *))a1->DriverHandle->MiniportDriverCharacteristics.CancelSendHandler)(
               a1->MiniportAdapterContext,
               a2);
    if ( a1->SelectiveSuspend )
      return ndisClearBusy(a1, 1LL, 53LL);
  }
  return result;
}
