/*
 * XREFs of WheaInitializeServices @ 0x1407E2F10
 * Callers:
 *     InitBootProcessor @ 0x1407D089C (InitBootProcessor.c)
 * Callees:
 *     <none>
 */

__int64 *WheaInitializeServices()
{
  __int64 *v0; // rax
  __int64 v1; // rcx
  signed __int32 v3[10]; // [rsp+0h] [rbp-28h] BYREF

  v0 = qword_14036C968;
  v1 = 12LL;
  do
  {
    *(v0 - 3) = 0LL;
    *(v0 - 1) = (__int64)xHalTimerWatchdogStop;
    *v0 = (__int64)xHalPciEarlyRestore;
    v0[1] = (__int64)WheapDefaultErrSrcCreateRecord;
    v0[2] = (__int64)xHalTimerWatchdogStop;
    v0 += 6;
    --v1;
  }
  while ( v1 );
  *(_QWORD *)&WheapDispatchPtr.ActiveThreadCount = 0LL;
  qword_14036CB98 = (__int64)&WheapPfaList;
  WheapPfaList = &WheapPfaList;
  WheapPfaLock = 0LL;
  _InterlockedOr(v3, 0);
  WheapPfaInitialized = 1;
  WheapDispatchPtr.Queue.Wcb.CurrentIrp = &WheapDispatchPtr.Queue.Wcb.DeviceObject;
  WheapDispatchPtr.Queue.Wcb.DeviceObject = &WheapDispatchPtr.Queue.Wcb.DeviceObject;
  WheapDispatchPtr.DeviceQueue.Lock = (KSPIN_LOCK)WheapDeferredRecoveryServiceDpcRoutine;
  WheapDispatchPtr.Dpc.SystemArgument1 = WheapDeferredRecoveryServiceWorker;
  WheapDispatchPtr.Queue.Wcb.WaitQueueEntry.SortKey = 1;
  WheapDispatchPtr.Queue.Wcb.DeviceRoutine = 0LL;
  LODWORD(WheapDispatchPtr.Queue.Wcb.DeviceContext) = 0;
  LOWORD(WheapDispatchPtr.Queue.Wcb.NumberOfMapRegisters) = 1;
  BYTE2(WheapDispatchPtr.Queue.Wcb.NumberOfMapRegisters) = 6;
  *(&WheapDispatchPtr.Queue.Wcb.NumberOfMapRegisters + 1) = 0;
  WheapDispatchPtr.Dpc.DpcData = 0LL;
  *(_DWORD *)&WheapDispatchPtr.DeviceQueue.Type = 275;
  WheapDispatchPtr.DeviceQueue.1 = 0LL;
  WheapDispatchPtr.Dpc.ProcessorHistory = 0LL;
  WheapDispatchPtr.DeviceQueue.DeviceListHead.Blink = 0LL;
  WheapDispatchPtr.Dpc.SystemArgument2 = 0LL;
  WheapDispatchPtr.Dpc.DeferredRoutine = 0LL;
  _InterlockedOr(v3, 0);
  WheaDrsInitialized = 1;
  return WheapInitializeInUsePageOfflineNotifications();
}
