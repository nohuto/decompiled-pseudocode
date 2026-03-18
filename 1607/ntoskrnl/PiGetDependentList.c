/*
 * XREFs of PiGetDependentList @ 0x1404C4D38
 * Callers:
 *     PipNotifyDeviceDependencyList @ 0x1403F2428 (PipNotifyDeviceDependencyList.c)
 *     PnpProcessDependencyRelations @ 0x1404C4960 (PnpProcessDependencyRelations.c)
 *     PnpRequestDeviceRemovalWorker @ 0x1404C4ACC (PnpRequestDeviceRemovalWorker.c)
 *     PipVisitDeviceObjectListEntry @ 0x1404C4C10 (PipVisitDeviceObjectListEntry.c)
 *     PipAttemptDependentsStart @ 0x1404C4D08 (PipAttemptDependentsStart.c)
 *     PipAddDependentsToRebuildPowerRelationsQueue @ 0x140567D8C (PipAddDependentsToRebuildPowerRelationsQueue.c)
 *     IoDuplicateDependency @ 0x14062AB18 (IoDuplicateDependency.c)
 *     PnpGetDeviceDependencyList @ 0x14062B650 (PnpGetDeviceDependencyList.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall PiGetDependentList(__int64 a1)
{
  __int64 v1; // rax

  if ( a1 )
    v1 = *(_QWORD *)(*(_QWORD *)(a1 + 312) + 80LL);
  else
    v1 = 0LL;
  if ( v1 )
    return (__int64 *)(v1 + 32);
  else
    return &PiDependencyNodeEmptyList;
}
