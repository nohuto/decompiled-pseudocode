/*
 * XREFs of RtlNumberGenericTableElementsAvl @ 0x14000265C
 * Callers:
 *     PiUpdateDriverDBCache @ 0x1403B6B8C (PiUpdateDriverDBCache.c)
 *     PiDmGetObjectCount @ 0x1406058EC (PiDmGetObjectCount.c)
 * Callees:
 *     <none>
 */

ULONG __stdcall RtlNumberGenericTableElementsAvl(PRTL_AVL_TABLE Table)
{
  return Table->NumberGenericTableElements;
}
