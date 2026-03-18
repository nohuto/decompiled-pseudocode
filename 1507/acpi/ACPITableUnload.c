/*
 * XREFs of ACPITableUnload @ 0x1C0040C70
 * Callers:
 *     <none>
 * Callees:
 *     ACPIGpeClearEventMasks @ 0x1C0006CFC (ACPIGpeClearEventMasks.c)
 *     ACPIGpeBuildEventMasks @ 0x1C0008D18 (ACPIGpeBuildEventMasks.c)
 *     ACPIDevicePowerFlushQueue @ 0x1C000A38C (ACPIDevicePowerFlushQueue.c)
 *     ACPIBuildScheduleDpc @ 0x1C000D64C (ACPIBuildScheduleDpc.c)
 *     ACPIBuildSpecialSynchronizationRequest @ 0x1C0018584 (ACPIBuildSpecialSynchronizationRequest.c)
 *     ACPIFlushQueuesUnload @ 0x1C0035A38 (ACPIFlushQueuesUnload.c)
 *     ACPIBuildFlushQueue @ 0x1C006A9B0 (ACPIBuildFlushQueue.c)
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
