/*
 * XREFs of DxgkMiracastStopAllMiracastSessions @ 0x1C00C6070
 * Callers:
 *     DxgkSessionDisconnected @ 0x1C00C6100 (DxgkSessionDisconnected.c)
 *     ?DodTerminateIndirectOutput@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C0147B60 (-DodTerminateIndirectOutput@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     DpiMiracastConnectedStandbyDelayWork @ 0x1C0196E00 (DpiMiracastConnectedStandbyDelayWork.c)
 *     DpiMiracastHandlePowerCallback @ 0x1C01974C0 (DpiMiracastHandlePowerCallback.c)
 * Callees:
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x1C000BB0C (-AcquireMiniportListMutex@@YAXXZ.c)
 *     DpiMiracastAddRefMiracastDeviceContext @ 0x1C0012900 (DpiMiracastAddRefMiracastDeviceContext.c)
 *     DpiMiracastReleaseMiracastDeviceContext @ 0x1C002BF28 (DpiMiracastReleaseMiracastDeviceContext.c)
 *     DpiMiracastStopMiracastSessionSync @ 0x1C002C100 (DpiMiracastStopMiracastSessionSync.c)
 */

LONG __fastcall DxgkMiracastStopAllMiracastSessions(char a1, union _LARGE_INTEGER *a2, unsigned int a3)
{
  __int64 v6; // rbx
  char *v7; // rdi
  LONG result; // eax

  while ( 1 )
  {
    AcquireMiniportListMutex();
    v6 = qword_1C00571D0;
    if ( (__int64 *)qword_1C00571D0 == &qword_1C00571D0 )
      goto LABEL_2;
    while ( 1 )
    {
      v7 = (char *)v6;
      ExEnterCriticalRegionAndAcquireFastMutexUnsafe(v6 + 32);
      *(_QWORD *)(v6 + 88) = KeGetCurrentThread();
      if ( (unsigned int)(*(_DWORD *)(v6 + 416) - 1) <= 1 )
        break;
      *(_QWORD *)(v6 + 88) = 0LL;
      ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(v6 + 32);
      v6 = *(_QWORD *)v6;
      if ( (__int64 *)v6 == &qword_1C00571D0 )
        goto LABEL_9;
    }
    DpiMiracastAddRefMiracastDeviceContext(v6, (unsigned int)&DxgkMiracastStopAllMiracastSessions);
    *(_QWORD *)(v6 + 88) = 0LL;
    ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(v6 + 32);
LABEL_9:
    if ( (__int64 *)v6 == &qword_1C00571D0 )
LABEL_2:
      v7 = 0LL;
    _InterlockedExchange64(&qword_1C0056EC8, 0LL);
    result = KeReleaseMutex(Mutex, 0);
    if ( !v7 )
      return result;
    DpiMiracastStopMiracastSessionSync(v7, a1, a2, 0LL, a3, 0);
    DpiMiracastReleaseMiracastDeviceContext((int *)v7, (unsigned int)&DxgkMiracastStopAllMiracastSessions);
  }
}
