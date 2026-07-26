/*
 * XREFs of ?ndisMUpdateInterfaceWorker@@YAXPEAX@Z @ 0x1C00D0930
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisMFlushInterfaceChanges@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C005C290 (-ndisMFlushInterfaceChanges@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

void __fastcall ndisMUpdateInterfaceWorker(struct _NDIS_MINIPORT_BLOCK *a1)
{
  ndisMFlushInterfaceChanges(a1);
  ndisDereferenceMiniport((__int64)a1);
}
