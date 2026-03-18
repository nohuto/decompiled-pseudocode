/*
 * XREFs of ACPITableLoad @ 0x1C0006510
 * Callers:
 *     ACPIInitializeDDBs @ 0x1C0085FB4 (ACPIInitializeDDBs.c)
 * Callees:
 *     ACPIEcInitOpRegionHandler @ 0x1C0006480 (ACPIEcInitOpRegionHandler.c)
 *     ACPIQueryDeviceLockMutexSupport @ 0x1C00064E0 (ACPIQueryDeviceLockMutexSupport.c)
 *     ACPIBuildRunMethodRequest @ 0x1C0006710 (ACPIBuildRunMethodRequest.c)
 *     ACPIGpeClearEventMasks @ 0x1C0006CFC (ACPIGpeClearEventMasks.c)
 *     EnableDisableCMOSRegions @ 0x1C0006F70 (EnableDisableCMOSRegions.c)
 *     ACPIGpeBuildEventMasks @ 0x1C0008D18 (ACPIGpeBuildEventMasks.c)
 *     ACPIBuildScheduleDpc @ 0x1C000D64C (ACPIBuildScheduleDpc.c)
 *     ACPIBuildSpecialSynchronizationRequest @ 0x1C0018584 (ACPIBuildSpecialSynchronizationRequest.c)
 *     ACPIRootInitialize @ 0x1C006640C (ACPIRootInitialize.c)
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
  int v13; // r9d
  KIRQL v14; // bl
  __int64 i; // rcx
  int v16; // [rsp+48h] [rbp+10h] BYREF

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
      if ( !*(_QWORD *)(RootDeviceExtension + 704) )
        ACPIRootInitialize();
      v10 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
      v11 = ACPIBuildRunMethodRequest(RootDeviceExtension, 0, 0, 1229867359, 7, 0);
      ACPIQueryDeviceLockMutexSupport(&v16);
      if ( v16 )
        v11 = ACPIBuildRunMethodRequest(RootDeviceExtension, 0, 0, 1296843871, 388, 0);
      KeReleaseSpinLock(&AcpiDeviceTreeLock, v10);
      if ( v11 < 0
        || (LOBYTE(v12) = 1,
            EnableDisableCMOSRegions(*(_QWORD *)(RootDeviceExtension + 704), v12),
            (int)ACPIBuildSpecialSynchronizationRequest(
                   RootDeviceExtension,
                   (unsigned int)ACPITableLoadCallBack,
                   a3 == 0,
                   v13,
                   0) < 0) )
      {
        KeBugCheckEx(0xA3u, 1uLL, 0x110299uLL, 0LL, 0LL);
      }
      v14 = KeAcquireSpinLockRaiseToDpc(&AcpiBuildQueueLock);
      ACPIBuildScheduleDpc();
      KeReleaseSpinLock(&AcpiBuildQueueLock, v14);
    }
  }
  return 0LL;
}
