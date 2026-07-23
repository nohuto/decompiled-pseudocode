/*
 * XREFs of PipAddDependentsToRebuildPowerRelationsQueue @ 0x1405682CC
 * Callers:
 *     IoResolveDependency @ 0x140142E54 (IoResolveDependency.c)
 *     IoDeleteAllDependencyRelations @ 0x1403F1C9C (IoDeleteAllDependencyRelations.c)
 *     IoDuplicateDependency @ 0x14062ABCC (IoDuplicateDependency.c)
 * Callees:
 *     PiGetDependentList @ 0x14048893C (PiGetDependentList.c)
 *     PipAddtoRebuildPowerRelationsQueue @ 0x1404CD828 (PipAddtoRebuildPowerRelationsQueue.c)
 *     PiEnumerateDependentListEntry @ 0x14062ADD0 (PiEnumerateDependentListEntry.c)
 */

__int64 *__fastcall PipAddDependentsToRebuildPowerRelationsQueue(__int64 a1)
{
  __int64 *result; // rax
  __int64 *v2; // rdi
  __int64 *v3; // rbx
  __int64 v4; // [rsp+38h] [rbp+10h] BYREF

  result = PiGetDependentList(a1);
  v2 = result;
  v3 = (__int64 *)*result;
  while ( v3 != v2 )
  {
    result = (__int64 *)PiEnumerateDependentListEntry(v3, &v4, 0LL);
    v3 = (__int64 *)*v3;
    if ( v4 )
      result = PipAddtoRebuildPowerRelationsQueue(v4);
  }
  return result;
}
