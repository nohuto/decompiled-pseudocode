/*
 * XREFs of WheaInitializeServices @ 0x1407B7BF0
 * Callers:
 *     InitBootProcessor @ 0x1407937C4 (InitBootProcessor.c)
 * Callees:
 *     <none>
 */

__int64 *WheaInitializeServices()
{
  __int64 (**v0)(); // rax
  __int64 v1; // rcx
  signed __int32 v3[10]; // [rsp+0h] [rbp-28h] BYREF

  v0 = (__int64 (**)())&unk_140341638;
  v1 = 14LL;
  do
  {
    *(v0 - 3) = 0LL;
    *(v0 - 1) = xHalTimerWatchdogStop;
    *v0 = xHalPciEarlyRestore;
    v0[1] = (__int64 (*)())WheapDefaultErrSrcCreateRecord;
    v0[2] = xHalTimerWatchdogStop;
    v0 += 6;
    --v1;
  }
  while ( v1 );
  WheapDispatchPtr.DeviceLock.Header.WaitListHead.Flink = 0LL;
  qword_1403418D8 = (__int64)&WheapPfaList;
  WheapPfaList = &WheapPfaList;
  WheapPfaLock = 0LL;
  _InterlockedOr(v3, 0);
  WheapPfaInitialized = 1;
  WheapDispatchPtr.Queue.Wcb.CurrentIrp = &WheapDispatchPtr.Queue.Wcb.DeviceObject;
  WheapDispatchPtr.Queue.Wcb.DeviceObject = &WheapDispatchPtr.Queue.Wcb.DeviceObject;
  WheapDispatchPtr.Dpc.SystemArgument2 = WheapDeferredRecoveryServiceDpcRoutine;
  WheapDispatchPtr.DeviceQueue.DeviceListHead.Blink = (struct _LIST_ENTRY *)WheapDeferredRecoveryServiceWorker;
  WheapDispatchPtr.Queue.Wcb.WaitQueueEntry.SortKey = 1;
  WheapDispatchPtr.Queue.Wcb.DeviceRoutine = 0LL;
  LODWORD(WheapDispatchPtr.Queue.Wcb.DeviceContext) = 0;
  LOWORD(WheapDispatchPtr.Queue.Wcb.NumberOfMapRegisters) = 1;
  BYTE2(WheapDispatchPtr.Queue.Wcb.NumberOfMapRegisters) = 6;
  *(&WheapDispatchPtr.Queue.Wcb.NumberOfMapRegisters + 1) = 0;
  WheapDispatchPtr.DeviceQueue.1 = 0LL;
  LODWORD(WheapDispatchPtr.Dpc.DeferredRoutine) = 275;
  WheapDispatchPtr.Dpc.DpcData = 0LL;
  *(_QWORD *)&WheapDispatchPtr.DeviceLock.Header.Lock = 0LL;
  WheapDispatchPtr.Dpc.SystemArgument1 = 0LL;
  WheapDispatchPtr.DeviceQueue.Lock = 0LL;
  *(_QWORD *)&WheapDispatchPtr.DeviceQueue.Type = 0LL;
  _InterlockedOr(v3, 0);
  WheaDrsInitialized = 1;
  return WheapInitializeInUsePageOfflineNotifications();
}
