/*
 * XREFs of PiEnumerateDependentListEntry @ 0x140600CD0
 * Callers:
 *     PnpProcessDependencyRelations @ 0x14049EFE4 (PnpProcessDependencyRelations.c)
 *     PnpRequestDeviceRemovalWorker @ 0x14049F150 (PnpRequestDeviceRemovalWorker.c)
 *     PipVisitDeviceObjectListEntry @ 0x14049F294 (PipVisitDeviceObjectListEntry.c)
 *     PipAttemptDependentsStart @ 0x1404EA64C (PipAttemptDependentsStart.c)
 *     PipAddDependentsToRebuildPowerRelationsQueue @ 0x140534D14 (PipAddDependentsToRebuildPowerRelationsQueue.c)
 * Callees:
 *     PiListEntryToDependencyEdge @ 0x1401BEB40 (PiListEntryToDependencyEdge.c)
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
