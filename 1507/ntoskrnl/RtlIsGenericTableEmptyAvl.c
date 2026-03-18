/*
 * XREFs of RtlIsGenericTableEmptyAvl @ 0x140019610
 * Callers:
 *     PiPnpRtlEndOperation @ 0x14043BCB0 (PiPnpRtlEndOperation.c)
 *     PiDqQueryFreeActiveData @ 0x14053D550 (PiDqQueryFreeActiveData.c)
 *     PiLookupInDDBCache @ 0x140572BDC (PiLookupInDDBCache.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall RtlIsGenericTableEmptyAvl(PRTL_AVL_TABLE Table)
{
  return Table->NumberGenericTableElements == 0;
}
