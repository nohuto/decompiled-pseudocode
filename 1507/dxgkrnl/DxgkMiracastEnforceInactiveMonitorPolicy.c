/*
 * XREFs of DxgkMiracastEnforceInactiveMonitorPolicy @ 0x1C000A590
 * Callers:
 *     DxgkCompleteTopologyTransition @ 0x1C00AE130 (DxgkCompleteTopologyTransition.c)
 * Callees:
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x1C0005A48 (-AcquireMiniportListMutex@@YAXXZ.c)
 *     DpiMiracastReleaseMiracastDeviceContext @ 0x1C0024FA0 (DpiMiracastReleaseMiracastDeviceContext.c)
 *     DpiMiracastStopMiracastSessionSync @ 0x1C00251B0 (DpiMiracastStopMiracastSessionSync.c)
 *     DpiMiracastPerfResetPerfTrack @ 0x1C002A058 (DpiMiracastPerfResetPerfTrack.c)
 */

LONG __fastcall DxgkMiracastEnforceInactiveMonitorPolicy(_DWORD *a1)
{
  __int64 v2; // rbx
  void *v3; // rdi
  LONG result; // eax
  __int64 v5; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-38h] BYREF

  AcquireMiniportListMutex();
  v2 = qword_1C0046F90;
  if ( (__int64 *)qword_1C0046F90 == &qword_1C0046F90 )
    goto LABEL_2;
  while ( 1 )
  {
    v3 = (void *)v2;
    ExEnterCriticalRegionAndAcquireFastMutexUnsafe(v2 + 32);
    *(_QWORD *)(v2 + 88) = KeGetCurrentThread();
    if ( (unsigned int)(*(_DWORD *)(v2 + 288) - 1) <= 1 )
      break;
LABEL_9:
    *(_QWORD *)(v2 + 88) = 0LL;
    ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(v2 + 32);
    v2 = *(_QWORD *)v2;
    if ( (__int64 *)v2 == &qword_1C0046F90 )
      goto LABEL_10;
  }
  v5 = *(_QWORD *)(*(_QWORD *)(v2 + 304) + 64LL);
  if ( *(_DWORD *)(v5 + 1416) == *a1 && *(_DWORD *)(v5 + 1420) == a1[1] )
  {
    *(_BYTE *)(v2 + 461) = 1;
    KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
    DpiMiracastPerfResetPerfTrack(v2);
    *(_QWORD *)(v2 + 944) = 0LL;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    goto LABEL_9;
  }
  if ( !*(_BYTE *)(v2 + 461) )
    goto LABEL_9;
  _InterlockedIncrement((volatile signed __int32 *)(v2 + 24));
  _InterlockedXor((volatile signed __int32 *)(v2 + 28), (unsigned int)DxgkMiracastEnforceInactiveMonitorPolicy);
  *(_QWORD *)(v2 + 88) = 0LL;
  ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(v2 + 32);
LABEL_10:
  if ( (__int64 *)v2 == &qword_1C0046F90 )
LABEL_2:
    v3 = 0LL;
  _InterlockedExchange64(&qword_1C0046C88, 0LL);
  result = KeReleaseMutex((PRKMUTEX)Mutex, 0);
  if ( v3 )
  {
    DpiMiracastStopMiracastSessionSync(v3, 134, 0);
    return DpiMiracastReleaseMiracastDeviceContext(v3);
  }
  return result;
}
