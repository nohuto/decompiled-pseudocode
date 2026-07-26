/*
 * XREFs of ndisDeinitializeZeroBasedRef @ 0x1C00DCA38
 * Callers:
 *     ndisDereferenceFilter @ 0x1C00532D0 (ndisDereferenceFilter.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisDeinitializeZeroBasedRef(__int64 a1)
{
  ndisFreeRefCount(*(struct _NDIS_REFCOUNT_BLOCK **)(a1 + 16));
}
