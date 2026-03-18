/*
 * XREFs of PipAddDependentsToRebuildPowerRelationsQueue @ 0x1405B19A4
 * Callers:
 *     IoResolveDependency @ 0x1401681EC (IoResolveDependency.c)
 *     IoDeleteAllDependencyRelations @ 0x140534DB0 (IoDeleteAllDependencyRelations.c)
 *     IoDuplicateDependency @ 0x14067B6DC (IoDuplicateDependency.c)
 * Callees:
 *     PiGetDependentList @ 0x14046145C (PiGetDependentList.c)
 *     PipAddtoRebuildPowerRelationsQueue @ 0x140554ED8 (PipAddtoRebuildPowerRelationsQueue.c)
 *     PiEnumerateDependentListEntry @ 0x14067B8E0 (PiEnumerateDependentListEntry.c)
 */

_QWORD **__fastcall PipAddDependentsToRebuildPowerRelationsQueue(__int64 a1)
{
  _QWORD **result; // rax
  _QWORD *v2; // rdi
  _QWORD *v3; // rbx
  __int64 v4; // [rsp+38h] [rbp+10h] BYREF

  result = (_QWORD **)PiGetDependentList(a1);
  v2 = result;
  v3 = *result;
  while ( v3 != v2 )
  {
    result = (_QWORD **)PiEnumerateDependentListEntry(v3, &v4, 0LL);
    v3 = (_QWORD *)*v3;
    if ( v4 )
      result = (_QWORD **)PipAddtoRebuildPowerRelationsQueue(v4);
  }
  return result;
}
