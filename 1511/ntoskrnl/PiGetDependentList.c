/*
 * XREFs of PiGetDependentList @ 0x14049F368
 * Callers:
 *     PnpProcessDependencyRelations @ 0x14049EFE4 (PnpProcessDependencyRelations.c)
 *     PnpRequestDeviceRemovalWorker @ 0x14049F150 (PnpRequestDeviceRemovalWorker.c)
 *     PipVisitDeviceObjectListEntry @ 0x14049F294 (PipVisitDeviceObjectListEntry.c)
 *     PipAttemptDependentsStart @ 0x1404EA64C (PipAttemptDependentsStart.c)
 *     PipNotifyDeviceDependencyList @ 0x1404EEF84 (PipNotifyDeviceDependencyList.c)
 *     PipAddDependentsToRebuildPowerRelationsQueue @ 0x140534D14 (PipAddDependentsToRebuildPowerRelationsQueue.c)
 *     IoDuplicateDependency @ 0x140600ACC (IoDuplicateDependency.c)
 *     PnpGetDeviceDependencyList @ 0x140601604 (PnpGetDeviceDependencyList.c)
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
