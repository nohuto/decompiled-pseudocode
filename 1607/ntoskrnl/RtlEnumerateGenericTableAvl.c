/*
 * XREFs of RtlEnumerateGenericTableAvl @ 0x1400C4680
 * Callers:
 *     PiDmObjectManagerPopulate @ 0x1405640A8 (PiDmObjectManagerPopulate.c)
 *     VfAvlEnumerateNodes @ 0x1407168E0 (VfAvlEnumerateNodes.c)
 * Callees:
 *     <none>
 */

PVOID __stdcall RtlEnumerateGenericTableAvl(PRTL_AVL_TABLE Table, BOOLEAN Restart)
{
  if ( Restart )
    Table->RestartKey = 0LL;
  return RtlEnumerateGenericTableWithoutSplayingAvl(Table, (PVOID *)&Table->RestartKey);
}
