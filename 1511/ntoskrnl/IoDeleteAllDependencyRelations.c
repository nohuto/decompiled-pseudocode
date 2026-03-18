/*
 * XREFs of IoDeleteAllDependencyRelations @ 0x140455F30
 * Callers:
 *     PnpRemoveLockedDeviceNode @ 0x1400DA4F4 (PnpRemoveLockedDeviceNode.c)
 *     IopDeleteDevice @ 0x140455DE4 (IopDeleteDevice.c)
 * Callees:
 *     PipProcessRebuildPowerRelationsQueue @ 0x140455F90 (PipProcessRebuildPowerRelationsQueue.c)
 *     PnpAcquireDependencyRelationsLock @ 0x14045837C (PnpAcquireDependencyRelationsLock.c)
 *     PnpReleaseDependencyRelationsLock @ 0x1404583AC (PnpReleaseDependencyRelationsLock.c)
 *     PipAddDependentsToRebuildPowerRelationsQueue @ 0x140534D14 (PipAddDependentsToRebuildPowerRelationsQueue.c)
 *     PipDeleteAllDependencyRelations @ 0x14060102C (PipDeleteAllDependencyRelations.c)
 */

__int64 __fastcall IoDeleteAllDependencyRelations(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 v2; // rdi
  __int64 v3; // rsi

  v1 = 0;
  v2 = a1;
  if ( a1 )
  {
    LOBYTE(a1) = 1;
    PnpAcquireDependencyRelationsLock(a1);
    v3 = *(_QWORD *)(*(_QWORD *)(v2 + 312) + 80LL);
    if ( v3 )
    {
      PipAddDependentsToRebuildPowerRelationsQueue(v2);
      PipDeleteAllDependencyRelations(v2);
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
