/*
 * XREFs of ndisQueuedReenumerateFailedAdapter @ 0x1C00D46A0
 * Callers:
 *     <none>
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C000CD90 (ndisDereferenceMiniport.c)
 *     ndisMDereferenceIfBlock @ 0x1C0017D0C (ndisMDereferenceIfBlock.c)
 *     ndisMReenumerateFailedAdapterInternal @ 0x1C0062BCC (ndisMReenumerateFailedAdapterInternal.c)
 */

void __fastcall ndisQueuedReenumerateFailedAdapter(void *a1, struct _NDIS_MINIPORT_BLOCK *a2)
{
  ndisMReenumerateFailedAdapterInternal(a2);
  ndisMDereferenceIfBlock((__int64)a2, MPIFREF_FATAL_ERROR);
  ndisDereferenceMiniport((__int64)a2);
  ExFreePoolWithTag(a1, 0);
}
