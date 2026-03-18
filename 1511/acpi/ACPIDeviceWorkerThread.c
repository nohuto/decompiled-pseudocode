/*
 * XREFs of ACPIDeviceWorkerThread @ 0x1C00216F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0024E60 (_guard_dispatch_icall_nop.c)
 */

void ACPIDeviceWorkerThread()
{
  KIRQL v0; // al
  _QWORD *v1; // rdi
  __int64 v2; // rdx
  _QWORD *v3; // rcx
  unsigned int v4; // ebx

  v0 = KeAcquireSpinLockRaiseToDpc(&ACPIWorkerQueueSpinLock);
  ACPIWorkerBusy = 1;
  while ( 1 )
  {
    v1 = (_QWORD *)ACPIDeviceWorkQueue;
    if ( (__int64 *)ACPIDeviceWorkQueue == &ACPIDeviceWorkQueue )
      break;
    v2 = *(_QWORD *)ACPIDeviceWorkQueue;
    v3 = *(_QWORD **)(ACPIDeviceWorkQueue + 8);
    if ( *(_QWORD *)(*(_QWORD *)ACPIDeviceWorkQueue + 8LL) != ACPIDeviceWorkQueue || *v3 != ACPIDeviceWorkQueue )
      __fastfail(3u);
    *v3 = v2;
    *(_QWORD *)(v2 + 8) = v3;
    *v1 = 0LL;
    v4 = *((_DWORD *)v1 - 2);
    *((_DWORD *)v1 - 2) = 0;
    KeReleaseSpinLock(&ACPIWorkerQueueSpinLock, v0);
    (*(void (__fastcall **)(_QWORD *, _QWORD))(*(v1 - 18) + 56LL))(v1 - 20, v4);
    v0 = KeAcquireSpinLockRaiseToDpc(&ACPIWorkerQueueSpinLock);
  }
  ACPIWorkerBusy = 0;
  KeReleaseSpinLock(&ACPIWorkerQueueSpinLock, v0);
}
