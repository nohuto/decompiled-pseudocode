/*
 * XREFs of DxgkMiracastEnforceInactiveMonitorPolicy @ 0x1C000B700
 * Callers:
 *     DxgkCompleteTopologyTransition @ 0x1C00B90F0 (DxgkCompleteTopologyTransition.c)
 * Callees:
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x1C000B77C (-AcquireMiniportListMutex@@YAXXZ.c)
 *     DpiMiracastReleaseMiracastDeviceContext @ 0x1C0024AE0 (DpiMiracastReleaseMiracastDeviceContext.c)
 *     DpiMiracastStopMiracastSessionSync @ 0x1C0024CF0 (DpiMiracastStopMiracastSessionSync.c)
 *     DpiMiracastPerfResetPerfTrack @ 0x1C0029CC0 (DpiMiracastPerfResetPerfTrack.c)
 */

LONG __fastcall DxgkMiracastEnforceInactiveMonitorPolicy(_DWORD *a1)
{
  __int64 v2; // rbx
  void *v3; // rdi
  LONG result; // eax
  __int64 v5; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-38h] BYREF

  AcquireMiniportListMutex();
  v2 = qword_1C0047010;
  if ( (__int64 *)qword_1C0047010 == &qword_1C0047010 )
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
    if ( (__int64 *)v2 == &qword_1C0047010 )
      goto LABEL_10;
  }
  v5 = *(_QWORD *)(*(_QWORD *)(v2 + 312) + 64LL);
  if ( *(_DWORD *)(v5 + 1456) == *a1 && *(_DWORD *)(v5 + 1460) == a1[1] )
  {
    *(_BYTE *)(v2 + 470) = 1;
    KeAcquireInStackQueuedSpinLock(&qword_1C0047008, &LockHandle);
    DpiMiracastPerfResetPerfTrack(v2);
    *(_QWORD *)(v2 + 952) = 0LL;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    goto LABEL_9;
  }
  if ( !*(_BYTE *)(v2 + 470) )
    goto LABEL_9;
  _InterlockedIncrement((volatile signed __int32 *)(v2 + 24));
  _InterlockedXor((volatile signed __int32 *)(v2 + 28), (unsigned int)DxgkMiracastEnforceInactiveMonitorPolicy);
  *(_QWORD *)(v2 + 88) = 0LL;
  ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(v2 + 32);
LABEL_10:
  if ( (__int64 *)v2 == &qword_1C0047010 )
LABEL_2:
    v3 = 0LL;
  _InterlockedExchange64(&qword_1C0046D08, 0LL);
  result = KeReleaseMutex(Mutex, 0);
  if ( v3 )
  {
    DpiMiracastStopMiracastSessionSync(v3, 134, 0);
    return DpiMiracastReleaseMiracastDeviceContext(v3);
  }
  return result;
}
