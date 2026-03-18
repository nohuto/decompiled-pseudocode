/*
 * XREFs of IoDeleteAllDependencyRelations @ 0x140534DB0
 * Callers:
 *     PnpRemoveLockedDeviceNode @ 0x14011BB6C (PnpRemoveLockedDeviceNode.c)
 *     IopDeleteDevice @ 0x140534BEC (IopDeleteDevice.c)
 * Callees:
 *     PnpAcquireDependencyRelationsLock @ 0x1404E1670 (PnpAcquireDependencyRelationsLock.c)
 *     PnpReleaseDependencyRelationsLock @ 0x1404E16A0 (PnpReleaseDependencyRelationsLock.c)
 *     PipProcessRebuildPowerRelationsQueue @ 0x1404E4488 (PipProcessRebuildPowerRelationsQueue.c)
 *     PipAddDependentsToRebuildPowerRelationsQueue @ 0x1405B19A4 (PipAddDependentsToRebuildPowerRelationsQueue.c)
 *     PipDeleteAllDependencyRelations @ 0x14067BC3C (PipDeleteAllDependencyRelations.c)
 */

__int64 __fastcall IoDeleteAllDependencyRelations(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 v3; // rsi

  v1 = 0;
  if ( a1 )
  {
    PnpAcquireDependencyRelationsLock(1);
    v3 = *(_QWORD *)(*(_QWORD *)(a1 + 312) + 80LL);
    if ( v3 )
    {
      PipAddDependentsToRebuildPowerRelationsQueue(a1);
      PipDeleteAllDependencyRelations(a1);
    }
    PnpReleaseDependencyRelationsLock();
    if ( v3 )
      PipProcessRebuildPowerRelationsQueue();
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v1;
}
