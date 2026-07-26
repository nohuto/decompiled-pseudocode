/*
 * XREFs of ?ndisMBindRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEBU_NET_PNP_EVENT_NOTIFICATION@@@Z @ 0x1C005E544
 * Callers:
 *     NdisMNetPnPEvent @ 0x1C00CDE10 (NdisMNetPnPEvent.c)
 * Callees:
 *     ndisBindRequest @ 0x1C005E910 (ndisBindRequest.c)
 */

__int64 __fastcall ndisMBindRequest(struct _NDIS_MINIPORT_BLOCK *a1, const struct _NET_PNP_EVENT_NOTIFICATION *a2)
{
  unsigned __int8 MajorNdisVersion; // al

  MajorNdisVersion = a1->MajorNdisVersion;
  if ( MajorNdisVersion > 6u || MajorNdisVersion == 6 && a1->MinorNdisVersion >= 0x32u )
    ndisBindRequest((ULONG_PTR)a1, &a1->BindEngine, &a1->Bindings.Miniport, (ULONG_PTR)a2);
  return 0LL;
}
