/*
 * XREFs of ACPIBuildProcessDelayedDependencyExternalTrigger @ 0x1C0007828
 * Callers:
 *     ACPIDispatchIrpDepPdoQueryID @ 0x1C0007880 (ACPIDispatchIrpDepPdoQueryID.c)
 *     ACPIDispatchIrpDepFilterQueryID @ 0x1C001ADD0 (ACPIDispatchIrpDepFilterQueryID.c)
 *     ACPICleanDeviceDependenciesWithTreeLock @ 0x1C0036678 (ACPICleanDeviceDependenciesWithTreeLock.c)
 *     ACPITableNotifyFreeObject @ 0x1C0040570 (ACPITableNotifyFreeObject.c)
 * Callees:
 *     ACPIBuildScheduleDpc @ 0x1C000DBD0 (ACPIBuildScheduleDpc.c)
 */

void __fastcall ACPIBuildProcessDelayedDependencyExternalTrigger(__int64 a1)
{
  char v2; // bl
  __int64 *v3; // rdx
  __int64 *v4; // rcx

  v2 = 0;
  KeAcquireSpinLockAtDpcLevel(&AcpiBuildQueueLock);
  v3 = (__int64 *)AcpiBuildDelayedDependencyList;
  if ( (__int64 *)AcpiBuildDelayedDependencyList != &AcpiBuildDelayedDependencyList )
  {
    do
    {
      v4 = v3;
      v3 = (__int64 *)*v3;
      if ( v4[5] == a1 )
      {
        _InterlockedCompareExchange((volatile signed __int32 *)v4 + 6, 4, 1);
        v2 = 1;
      }
    }
    while ( v3 != &AcpiBuildDelayedDependencyList );
    if ( v2 )
      ACPIBuildScheduleDpc();
  }
  KeReleaseSpinLockFromDpcLevel(&AcpiBuildQueueLock);
}
