/*
 * XREFs of PiEnumerateDependentListEntry @ 0x14062AD1C
 * Callers:
 *     PnpProcessDependencyRelations @ 0x1404C4960 (PnpProcessDependencyRelations.c)
 *     PnpRequestDeviceRemovalWorker @ 0x1404C4ACC (PnpRequestDeviceRemovalWorker.c)
 *     PipVisitDeviceObjectListEntry @ 0x1404C4C10 (PipVisitDeviceObjectListEntry.c)
 *     PipAttemptDependentsStart @ 0x1404C4D08 (PipAttemptDependentsStart.c)
 *     PipAddDependentsToRebuildPowerRelationsQueue @ 0x140567D8C (PipAddDependentsToRebuildPowerRelationsQueue.c)
 * Callees:
 *     PiListEntryToDependencyEdge @ 0x1401CD0D8 (PiListEntryToDependencyEdge.c)
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
