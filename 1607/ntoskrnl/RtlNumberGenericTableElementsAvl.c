/*
 * XREFs of RtlNumberGenericTableElementsAvl @ 0x140087424
 * Callers:
 *     PiUpdateDriverDBCache @ 0x14049D278 (PiUpdateDriverDBCache.c)
 *     PiDmGetObjectCount @ 0x14062F8D8 (PiDmGetObjectCount.c)
 * Callees:
 *     <none>
 */

ULONG __stdcall RtlNumberGenericTableElementsAvl(PRTL_AVL_TABLE Table)
{
  return Table->NumberGenericTableElements;
}
