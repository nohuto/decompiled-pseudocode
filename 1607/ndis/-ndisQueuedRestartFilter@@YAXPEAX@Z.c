/*
 * XREFs of ?ndisQueuedRestartFilter@@YAXPEAX@Z @ 0x1C00CDDC0
 * Callers:
 *     <none>
 * Callees:
 *     ndisDereferenceRef @ 0x1C001612C (ndisDereferenceRef.c)
 *     ?ndisQueueFilterRestart@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C00CDCE4 (-ndisQueueFilterRestart@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 */

void __fastcall ndisQueuedRestartFilter(struct _NDIS_FILTER_BLOCK **a1)
{
  ndisQueueFilterRestart(a1[4]);
  ndisDereferenceRef(&a1[4]->PnPRef.SpinLock, 0x16u);
  ExFreePoolWithTag(a1, 0);
}
