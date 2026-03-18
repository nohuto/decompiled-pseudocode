/*
 * XREFs of RtlEnumerateGenericTableAvl @ 0x1400ED970
 * Callers:
 *     PiDmObjectManagerPopulate @ 0x14051B15C (PiDmObjectManagerPopulate.c)
 *     VfAvlEnumerateNodes @ 0x1406C7F3C (VfAvlEnumerateNodes.c)
 * Callees:
 *     <none>
 */

PVOID __stdcall RtlEnumerateGenericTableAvl(PRTL_AVL_TABLE Table, BOOLEAN Restart)
{
  if ( Restart )
    Table->RestartKey = 0LL;
  return RtlEnumerateGenericTableWithoutSplayingAvl(Table, (PVOID *)&Table->RestartKey);
}
