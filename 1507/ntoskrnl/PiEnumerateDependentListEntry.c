/*
 * XREFs of PiEnumerateDependentListEntry @ 0x14067B8E0
 * Callers:
 *     PipAttemptDependentsStart @ 0x14046142C (PipAttemptDependentsStart.c)
 *     PnpRequestDeviceRemovalWorker @ 0x140534A94 (PnpRequestDeviceRemovalWorker.c)
 *     PipVisitDeviceObjectListEntry @ 0x140535864 (PipVisitDeviceObjectListEntry.c)
 *     PnpProcessDependencyRelations @ 0x140535B08 (PnpProcessDependencyRelations.c)
 *     PipAddDependentsToRebuildPowerRelationsQueue @ 0x1405B19A4 (PipAddDependentsToRebuildPowerRelationsQueue.c)
 * Callees:
 *     PiListEntryToDependencyEdge @ 0x1401FA3A8 (PiListEntryToDependencyEdge.c)
 */

__int64 __fastcall PiEnumerateDependentListEntry(__int64 a1)
{
  __int64 result; // rax
  _DWORD *v2; // r8
  _QWORD *v3; // r10

  result = PiListEntryToDependencyEdge(a1, 1);
  *v3 = *(_QWORD *)(*(_QWORD *)(result + 40) + 48LL);
  if ( v2 )
  {
    result = *(unsigned int *)(result + 48);
    *v2 = result;
  }
  return result;
}
