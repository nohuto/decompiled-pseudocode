/*
 * XREFs of RtlIsGenericTableEmptyAvl @ 0x1400C3E40
 * Callers:
 *     PiDqQueryFreeActiveData @ 0x14048CA74 (PiDqQueryFreeActiveData.c)
 *     PiLookupInDDBCache @ 0x14049D88C (PiLookupInDDBCache.c)
 *     PiPnpRtlEndOperation @ 0x14050147C (PiPnpRtlEndOperation.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall RtlIsGenericTableEmptyAvl(PRTL_AVL_TABLE Table)
{
  return Table->NumberGenericTableElements == 0;
}
