/*
 * XREFs of ndisDeinitializeZeroBasedRef @ 0x1C00D6388
 * Callers:
 *     ndisDereferenceFilter @ 0x1C00536C0 (ndisDereferenceFilter.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisDeinitializeZeroBasedRef(__int64 a1)
{
  ndisFreeRefCount(*(struct _NDIS_REFCOUNT_BLOCK **)(a1 + 16));
}
