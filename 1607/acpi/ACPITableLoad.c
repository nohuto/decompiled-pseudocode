/*
 * XREFs of ACPITableLoad @ 0x1C00064E0
 * Callers:
 *     ACPIInitializeDDBs @ 0x1C00A67F0 (ACPIInitializeDDBs.c)
 * Callees:
 *     ACPIBuildRunMethodRequest @ 0x1C00067C0 (ACPIBuildRunMethodRequest.c)
 *     ACPIGpeClearEventMasks @ 0x1C00068FC (ACPIGpeClearEventMasks.c)
 *     EnableDisableCMOSRegions @ 0x1C0006EB0 (EnableDisableCMOSRegions.c)
 *     ACPIQueryDeviceLockMutexSupport @ 0x1C0007310 (ACPIQueryDeviceLockMutexSupport.c)
 *     ACPIEcInitOpRegionHandler @ 0x1C0007414 (ACPIEcInitOpRegionHandler.c)
 *     ACPIBuildSpecialSynchronizationRequest @ 0x1C000C6F0 (ACPIBuildSpecialSynchronizationRequest.c)
 *     ACPIGpeBuildEventMasks @ 0x1C000DA68 (ACPIGpeBuildEventMasks.c)
 *     ACPIBuildScheduleDpc @ 0x1C0013240 (ACPIBuildScheduleDpc.c)
 *     ACPIRootInitialize @ 0x1C0081114 (ACPIRootInitialize.c)
 */

__int64 __fastcall ACPITableLoad(__int64 a1, int a2, __int64 a3)
{
  KIRQL v4; // al
  int v5; // ebx
  KIRQL v7; // al
  bool v8; // zf
  int v9; // esi
  KIRQL v10; // bp
  int v11; // esi
  __int64 v12; // rdx
  KIRQL v13; // bl
  __int64 i; // rcx
  int v15; // [rsp+48h] [rbp+10h] BYREF

  if ( a2 == 1 )
  {
    v4 = KeAcquireSpinLockRaiseToDpc(&AcpiBuildQueueLock);
    v5 = ++AcpiTableLoadDelta;
    KeReleaseSpinLock(&AcpiBuildQueueLock, v4);
    if ( v5 == 1 && !*((_BYTE *)AcpiInformation + 133) )
      ACPIGpeClearEventMasks();
  }
  else
  {
    v7 = KeAcquireSpinLockRaiseToDpc(&AcpiBuildQueueLock);
    v8 = AcpiTableLoadDelta-- == 1;
    v9 = AcpiTableLoadDelta;
    if ( v8 )
    {
      for ( i = AcpiBuildQueueList; (__int64 *)i != &AcpiBuildQueueList; i = *(_QWORD *)i )
        *(_DWORD *)(i + 20) &= ~0x40u;
    }
    KeReleaseSpinLock(&AcpiBuildQueueLock, v7);
    if ( !v9 )
    {
      if ( !*((_BYTE *)AcpiInformation + 133) )
        ACPIGpeBuildEventMasks();
      if ( (gOverrideFlags & 2) == 0 )
        ACPIEcInitOpRegionHandler();
      if ( !*(_QWORD *)(RootDeviceExtension + 712) )
        ACPIRootInitialize();
      v10 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
      v11 = ACPIBuildRunMethodRequest(RootDeviceExtension, 0, 0, 1229867359, 7, 0);
      ACPIQueryDeviceLockMutexSupport(&v15);
      if ( v15 )
        v11 = ACPIBuildRunMethodRequest(RootDeviceExtension, 0, 0, 1296843871, 388, 0);
      KeReleaseSpinLock(&AcpiDeviceTreeLock, v10);
      if ( v11 < 0
        || (LOBYTE(v12) = 1,
            EnableDisableCMOSRegions(*(_QWORD *)(RootDeviceExtension + 712), v12),
            (int)ACPIBuildSpecialSynchronizationRequest(
                   RootDeviceExtension,
                   (unsigned int)ACPITableLoadCallBack,
                   a3 == 0,
                   127,
                   0) < 0) )
      {
        KeBugCheckEx(0xA3u, 1uLL, 0x11028FuLL, 0LL, 0LL);
      }
      v13 = KeAcquireSpinLockRaiseToDpc(&AcpiBuildQueueLock);
      ACPIBuildScheduleDpc();
      KeReleaseSpinLock(&AcpiBuildQueueLock, v13);
    }
  }
  return 0LL;
}
