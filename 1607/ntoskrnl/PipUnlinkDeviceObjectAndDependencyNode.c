/*
 * XREFs of PipUnlinkDeviceObjectAndDependencyNode @ 0x14062B6E8
 * Callers:
 *     IoResolveDependency @ 0x140142E54 (IoResolveDependency.c)
 *     PipDeleteAllDependencyRelations @ 0x14062B12C (PipDeleteAllDependencyRelations.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PipUnlinkDeviceObjectAndDependencyNode(__int64 a1, __int64 a2)
{
  *(_QWORD *)(*(_QWORD *)(a1 + 312) + 80LL) = 0LL;
  *(_QWORD *)(a2 + 48) = 0LL;
  return PipDereferenceDependencyNode(a2);
}
