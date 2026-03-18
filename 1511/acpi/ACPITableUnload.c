/*
 * XREFs of ACPITableUnload @ 0x1C0040720
 * Callers:
 *     <none>
 * Callees:
 *     ACPIGpeClearEventMasks @ 0x1C0007184 (ACPIGpeClearEventMasks.c)
 *     ACPIGpeBuildEventMasks @ 0x1C00089F4 (ACPIGpeBuildEventMasks.c)
 *     ACPIDevicePowerFlushQueue @ 0x1C000A32C (ACPIDevicePowerFlushQueue.c)
 *     ACPIBuildSpecialSynchronizationRequest @ 0x1C000A528 (ACPIBuildSpecialSynchronizationRequest.c)
 *     ACPIBuildScheduleDpc @ 0x1C000DBD0 (ACPIBuildScheduleDpc.c)
 *     ACPIFlushQueuesUnload @ 0x1C00366F8 (ACPIFlushQueuesUnload.c)
 *     ACPIBuildFlushQueue @ 0x1C006725C (ACPIBuildFlushQueue.c)
 */

__int64 __fastcall ACPITableUnload(__int64 a1, int a2, __int64 a3)
{
  unsigned int v3; // esi
  KIRQL v5; // al
  int v6; // ebx
  __int64 v7; // r9
  KIRQL v8; // al
  int v9; // ebx
  __int64 v10; // r9
  KIRQL v11; // bl

  v3 = 0;
  if ( a2 == 1 )
  {
    v5 = KeAcquireSpinLockRaiseToDpc(&AcpiBuildQueueLock);
    v6 = ++AcpiTableUnloadDelta;
    KeReleaseSpinLock(&AcpiBuildQueueLock, v5);
    if ( v6 == 1 )
    {
      if ( !*((_BYTE *)AcpiInformation + 133) )
        ACPIGpeClearEventMasks();
      if ( a3 )
      {
        return (unsigned int)ACPIFlushQueuesUnload(RootDeviceExtension, a3, 1, v7);
      }
      else
      {
        ACPIBuildFlushQueue(RootDeviceExtension);
        ACPIDevicePowerFlushQueue(RootDeviceExtension);
      }
    }
  }
  else
  {
    v8 = KeAcquireSpinLockRaiseToDpc(&AcpiBuildQueueLock);
    v9 = --AcpiTableUnloadDelta;
    KeReleaseSpinLock(&AcpiBuildQueueLock, v8);
    if ( !v9 )
    {
      if ( !*((_BYTE *)AcpiInformation + 133) )
        ACPIGpeBuildEventMasks();
      v3 = ACPIBuildSpecialSynchronizationRequest(RootDeviceExtension, (__int64)ACPITableUnloadCallBack, a3, v10, 0);
      v11 = KeAcquireSpinLockRaiseToDpc(&AcpiBuildQueueLock);
      ACPIBuildScheduleDpc();
      KeReleaseSpinLock(&AcpiBuildQueueLock, v11);
    }
  }
  return v3;
}
