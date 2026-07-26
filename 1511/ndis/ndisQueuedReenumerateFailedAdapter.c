/*
 * XREFs of ndisQueuedReenumerateFailedAdapter @ 0x1C00CE6E0
 * Callers:
 *     <none>
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C000B190 (ndisDereferenceMiniport.c)
 *     ndisMDereferenceIfBlock @ 0x1C001DC98 (ndisMDereferenceIfBlock.c)
 *     ndisMReenumerateFailedAdapterInternal @ 0x1C005EBEC (ndisMReenumerateFailedAdapterInternal.c)
 */

void __fastcall ndisQueuedReenumerateFailedAdapter(void *a1, __int64 a2)
{
  ndisMReenumerateFailedAdapterInternal(a2);
  ndisMDereferenceIfBlock(a2, MPIFREF_FATAL_ERROR);
  ndisDereferenceMiniport(a2, 9u);
  ExFreePoolWithTag(a1, 0);
}
