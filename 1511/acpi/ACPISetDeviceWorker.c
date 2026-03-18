/*
 * XREFs of ACPISetDeviceWorker @ 0x1C001A624
 * Callers:
 *     ACPIThermalLoopEx @ 0x1C001A03C (ACPIThermalLoopEx.c)
 *     ACPICMButtonStartWorker @ 0x1C001AE80 (ACPICMButtonStartWorker.c)
 *     sub_1C0033602 @ 0x1C0033602 (sub_1C0033602.c)
 *     ACPICMButtonNotify @ 0x1C00371D4 (ACPICMButtonNotify.c)
 * Callees:
 *     <none>
 */

void __fastcall ACPISetDeviceWorker(__int64 a1, int a2)
{
  KIRQL v4; // al
  bool v5; // si
  __int64 *v6; // rdi
  __int64 **v7; // rcx
  bool v8; // zf

  v4 = KeAcquireSpinLockRaiseToDpc(&ACPIWorkerQueueSpinLock);
  *(_DWORD *)(a1 + 152) |= a2;
  v5 = 0;
  v6 = (__int64 *)(a1 + 160);
  if ( !*v6 )
  {
    v7 = (__int64 **)qword_1C0059408;
    *v6 = (__int64)&ACPIDeviceWorkQueue;
    v6[1] = (__int64)v7;
    if ( *v7 != &ACPIDeviceWorkQueue )
      __fastfail(3u);
    v8 = ACPIWorkerBusy == 0;
    *v7 = v6;
    v5 = v8;
    qword_1C0059408 = (__int64)v6;
    ACPIWorkerBusy = 1;
  }
  KeReleaseSpinLock(&ACPIWorkerQueueSpinLock, v4);
  if ( v5 )
    ExQueueWorkItem(&ACPIWorkItem, DelayedWorkQueue);
}
