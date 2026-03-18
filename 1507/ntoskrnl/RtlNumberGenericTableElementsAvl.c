/*
 * XREFs of RtlNumberGenericTableElementsAvl @ 0x1401206AC
 * Callers:
 *     PiUpdateDriverDBCache @ 0x1405AA750 (PiUpdateDriverDBCache.c)
 *     PiDmGetObjectCount @ 0x1406804BC (PiDmGetObjectCount.c)
 * Callees:
 *     <none>
 */

ULONG __stdcall RtlNumberGenericTableElementsAvl(PRTL_AVL_TABLE Table)
{
  return Table->NumberGenericTableElements;
}
