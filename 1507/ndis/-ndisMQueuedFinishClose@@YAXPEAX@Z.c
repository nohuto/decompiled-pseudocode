/*
 * XREFs of ?ndisMQueuedFinishClose@@YAXPEAX@Z @ 0x1C009AB90
 * Callers:
 *     <none>
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C0003280 (ndisDereferenceMiniport.c)
 *     ndisRemoveOpenFromGlobalList @ 0x1C000EE44 (ndisRemoveOpenFromGlobalList.c)
 *     ndisDereferenceProtocol @ 0x1C0019724 (ndisDereferenceProtocol.c)
 *     ndisReferenceMiniportNoCheck @ 0x1C001BCC4 (ndisReferenceMiniportNoCheck.c)
 *     WPP_SF_qq @ 0x1C0022860 (WPP_SF_qq.c)
 *     _guard_dispatch_icall_nop @ 0x1C00236D0 (_guard_dispatch_icall_nop.c)
 *     ndisDereferencePackage @ 0x1C0097790 (ndisDereferencePackage.c)
 *     ndisFreeOpenBlock @ 0x1C009AD7C (ndisFreeOpenBlock.c)
 *     ndisInvokeCloseAdapterComplete @ 0x1C009B1A0 (ndisInvokeCloseAdapterComplete.c)
 *     ndisNotifyWmiBindUnbind @ 0x1C00A7C88 (ndisNotifyWmiBindUnbind.c)
 */

void __fastcall ndisMQueuedFinishClose(struct _NDIS_OPEN_BLOCK *a1)
{
  __int64 MiniportHandle; // rdi
  _NDIS_PROTOCOL_BLOCK *ProtocolHandle; // rax
  __int64 v4; // rdx
  struct _KEVENT *CloseCompleteEvent; // rcx
  struct _KEVENT *UnsolicitedUnbindEvent; // rcx

  MiniportHandle = (__int64)a1->MiniportHandle;
  if ( (unsigned __int8)byte_1C008530D >= 4u )
    WPP_SF_qq(0xFu, &WPP_11d423e8e1961e492b47e90eefd811d6_Traceguids, a1, MiniportHandle);
  ndisReferenceMiniportNoCheck(MiniportHandle, 0x31u);
  ProtocolHandle = a1->ProtocolHandle;
  if ( ProtocolHandle->MajorNdisVersion < 6u )
    ProtocolHandle->CloseAdapterCompleteHandler(a1->ProtocolBindingContext, 0);
  else
    ndisInvokeCloseAdapterComplete(a1);
  ndisDereferenceMiniport(MiniportHandle, 0x31u);
  if ( (a1->OpenFlags & 0x10000) == 0 )
    ndisNotifyWmiBindUnbind(MiniportHandle, a1->ProtocolHandle, 0LL);
  ndisDereferenceProtocol(a1->ProtocolHandle, v4, 9u);
  CloseCompleteEvent = a1->CloseCompleteEvent;
  if ( CloseCompleteEvent )
    KeSetEvent(CloseCompleteEvent, 0, 0);
  UnsolicitedUnbindEvent = a1->UnsolicitedUnbindEvent;
  if ( UnsolicitedUnbindEvent )
    KeSetEvent(UnsolicitedUnbindEvent, 0, 0);
  ndisRemoveOpenFromGlobalList(a1);
  ndisFreeOpenBlock(a1);
  ndisDereferenceMiniport(MiniportHandle, 0x2Cu);
  ndisDereferencePackage((__int64)&ndisPkgs);
  if ( (unsigned __int8)byte_1C008530D >= 4u )
    WPP_SF_qq(0x10u, &WPP_11d423e8e1961e492b47e90eefd811d6_Traceguids, a1, MiniportHandle);
}
