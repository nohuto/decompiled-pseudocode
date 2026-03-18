/*
 * XREFs of RtlEnumerateGenericTableAvl @ 0x140019F34
 * Callers:
 *     PiDmObjectManagerPopulate @ 0x1405ABFB4 (PiDmObjectManagerPopulate.c)
 *     VfAvlEnumerateNodes @ 0x14074A940 (VfAvlEnumerateNodes.c)
 * Callees:
 *     <none>
 */

PVOID __stdcall RtlEnumerateGenericTableAvl(PRTL_AVL_TABLE Table, BOOLEAN Restart)
{
  if ( Restart )
    Table->RestartKey = 0LL;
  return RtlEnumerateGenericTableWithoutSplayingAvl(Table, (PVOID *)&Table->RestartKey);
}
