/*
 * XREFs of RtlIsGenericTableEmptyAvl @ 0x140090418
 * Callers:
 *     PiLookupInDDBCache @ 0x1403B90C8 (PiLookupInDDBCache.c)
 *     PiPnpRtlEndOperation @ 0x140440BC0 (PiPnpRtlEndOperation.c)
 *     PiDqQueryFreeActiveData @ 0x14045F3C8 (PiDqQueryFreeActiveData.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall RtlIsGenericTableEmptyAvl(PRTL_AVL_TABLE Table)
{
  return Table->NumberGenericTableElements == 0;
}
