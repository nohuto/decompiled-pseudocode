/*
 * XREFs of ACPIBuildSpecialSynchronizationRequest @ 0x1C0018584
 * Callers:
 *     ACPITableLoad @ 0x1C0006510 (ACPITableLoad.c)
 *     ACPITableLoadNotifyPnp @ 0x1C0023490 (ACPITableLoadNotifyPnp.c)
 *     ACPIFlushQueuesUnload @ 0x1C0035A38 (ACPIFlushQueuesUnload.c)
 *     ACPITableUnload @ 0x1C0040C70 (ACPITableUnload.c)
 *     ACPIBuildFlushQueue @ 0x1C006A9B0 (ACPIBuildFlushQueue.c)
 *     ACPIInitStartACPI @ 0x1C0086F88 (ACPIInitStartACPI.c)
 * Callees:
 *     ACPIBuildScheduleDpc @ 0x1C000D64C (ACPIBuildScheduleDpc.c)
 *     ExAllocateFromNPagedLookasideList @ 0x1C001720C (ExAllocateFromNPagedLookasideList.c)
 *     ExFreeToNPagedLookasideList @ 0x1C0021420 (ExFreeToNPagedLookasideList.c)
 *     memset @ 0x1C0023B40 (memset.c)
 */

__int64 __fastcall ACPIBuildSpecialSynchronizationRequest(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5)
{
  _QWORD *v8; // rbx
  KIRQL v9; // si
  KIRQL v10; // al
  __int64 v11; // rdx
  KIRQL v12; // di

  v8 = ExAllocateFromNPagedLookasideList(&BuildRequestLookAsideList);
  if ( !v8 )
    return 3221225626LL;
  v9 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
  if ( *(_DWORD *)(a1 + 676) )
  {
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 676));
    memset(v8, 0, 0x88uLL);
    *((_DWORD *)v8 + 8) = 0;
    *((_DWORD *)v8 + 12) = 0;
    v8[16] = &AcpiBuildSpecialSynchronizationList;
    *((_DWORD *)v8 + 4) = 1599293264;
    *((_DWORD *)v8 + 6) = 3;
    v8[8] = a2;
    v8[9] = a3;
    v8[5] = a1;
    *((_DWORD *)v8 + 20) = 127;
    *((_DWORD *)v8 + 5) = 4120;
    KeReleaseSpinLock(&AcpiDeviceTreeLock, v9);
    v10 = KeAcquireSpinLockRaiseToDpc(&AcpiBuildQueueLock);
    v11 = AcpiBuildQueueList;
    v12 = v10;
    *v8 = AcpiBuildQueueList;
    v8[1] = &AcpiBuildQueueList;
    if ( *(__int64 **)(v11 + 8) != &AcpiBuildQueueList )
      __fastfail(3u);
    *(_QWORD *)(v11 + 8) = v8;
    AcpiBuildQueueList = (__int64)v8;
    if ( a5 )
      ACPIBuildScheduleDpc();
    KeReleaseSpinLock(&AcpiBuildQueueLock, v12);
    return 259LL;
  }
  else
  {
    ExFreeToNPagedLookasideList(&BuildRequestLookAsideList, v8);
    KeReleaseSpinLock(&AcpiDeviceTreeLock, v9);
    return 3221226166LL;
  }
}
