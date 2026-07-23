/*
 * XREFs of RtlNumberGenericTableElementsAvl @ 0x14010B6FC
 * Callers:
 *     PiUpdateDriverDBCache @ 0x140515734 (PiUpdateDriverDBCache.c)
 *     PiDmGetObjectCount @ 0x14062F98C (PiDmGetObjectCount.c)
 * Callees:
 *     <none>
 */

ULONG __stdcall RtlNumberGenericTableElementsAvl(PRTL_AVL_TABLE Table)
{
  return Table->NumberGenericTableElements;
}
