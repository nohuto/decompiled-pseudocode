/*
 * XREFs of ndisQueuedResetMiniport @ 0x1C005AF50
 * Callers:
 *     <none>
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C0003280 (ndisDereferenceMiniport.c)
 *     ndisMResetMiniportInternal @ 0x1C005AC38 (ndisMResetMiniportInternal.c)
 */

void __fastcall ndisQueuedResetMiniport(void *a1, unsigned __int16 *a2)
{
  ndisMResetMiniportInternal(a2, 3);
  ndisDereferenceMiniport((__int64)a2, 8u);
  ExFreePoolWithTag(a1, 0);
}
