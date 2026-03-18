/*
 * XREFs of ACPIBuildProcessDelayedDependencyExternalTriggerFilterPowerCheck @ 0x1C0020D6C
 * Callers:
 *     ACPIDispatchIrp @ 0x1C0001000 (ACPIDispatchIrp.c)
 * Callees:
 *     ACPIDevicePowerFlushQueue @ 0x1C000A38C (ACPIDevicePowerFlushQueue.c)
 *     ACPIBuildScheduleDpc @ 0x1C000D64C (ACPIBuildScheduleDpc.c)
 *     ACPIBuildProcessDelayedDependencyShouldDelayRequest @ 0x1C001FA44 (ACPIBuildProcessDelayedDependencyShouldDelayRequest.c)
 *     ACPIBuildFlushQueue @ 0x1C006A9B0 (ACPIBuildFlushQueue.c)
 */

void __fastcall ACPIBuildProcessDelayedDependencyExternalTriggerFilterPowerCheck(__int64 a1)
{
  char v2; // di
  KIRQL v3; // al
  __int64 *v4; // rbx
  KIRQL v5; // r14
  __int64 *v6; // rbp
  __int64 v7; // rcx

  v2 = 0;
  v3 = KeAcquireSpinLockRaiseToDpc(&AcpiBuildQueueLock);
  v4 = (__int64 *)AcpiBuildDelayedDependencyList;
  v5 = v3;
  if ( (__int64 *)AcpiBuildDelayedDependencyList != &AcpiBuildDelayedDependencyList )
  {
    do
    {
      v6 = v4;
      v4 = (__int64 *)*v4;
      v7 = v6[10];
      if ( v7 && !ACPIBuildProcessDelayedDependencyShouldDelayRequest(v7) )
      {
        _InterlockedCompareExchange((volatile signed __int32 *)v6 + 6, 4, 1);
        v2 = 1;
      }
    }
    while ( v4 != &AcpiBuildDelayedDependencyList );
    if ( v2 )
      ACPIBuildScheduleDpc();
  }
  KeReleaseSpinLock(&AcpiBuildQueueLock, v5);
  if ( v2 )
  {
    ACPIBuildFlushQueue(a1);
    ACPIDevicePowerFlushQueue(a1);
  }
}
