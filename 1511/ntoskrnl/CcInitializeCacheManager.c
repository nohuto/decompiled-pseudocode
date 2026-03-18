/*
 * XREFs of CcInitializeCacheManager @ 0x140758600
 * Callers:
 *     Phase1InitializationDiscard @ 0x1407645E8 (Phase1InitializationDiscard.c)
 * Callees:
 *     ExGenRandom @ 0x14002D854 (ExGenRandom.c)
 *     ExInitializeNPagedLookasideList @ 0x140105A8C (ExInitializeNPagedLookasideList.c)
 *     CcInitializeAsyncRead @ 0x14013CC90 (CcInitializeAsyncRead.c)
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     ExInitializeSystemLookasideList @ 0x1403A7B7C (ExInitializeSystemLookasideList.c)
 *     PsCreateSystemThread @ 0x1404D20DC (PsCreateSystemThread.c)
 *     FsRtlIsMobileOS @ 0x1404EC300 (FsRtlIsMobileOS.c)
 *     CcInitializeProcessor @ 0x140525728 (CcInitializeProcessor.c)
 *     PoRegisterCoalescingCallback @ 0x140530628 (PoRegisterCoalescingCallback.c)
 *     CcInitializeBcbProfiler @ 0x14072D2C4 (CcInitializeBcbProfiler.c)
 *     CcInitializeVacbs @ 0x1407677BC (CcInitializeVacbs.c)
 */

char CcInitializeCacheManager()
{
  int v0; // esi
  int v1; // ecx
  unsigned __int64 v2; // rdx
  unsigned __int64 v3; // rdx
  __int64 v4; // rax
  __int64 v5; // rax
  unsigned __int64 v6; // rax
  unsigned int v7; // ebx
  _QWORD *PoolWithTag; // rax
  PWORK_QUEUE_ITEM **v9; // rcx
  unsigned int i; // ebx
  _QWORD *v11; // rax
  PWORK_QUEUE_ITEM **v12; // rcx
  PVOID v13; // rax
  unsigned __int64 v14; // rbp
  void *v20; // rdx
  __int16 v21; // ax
  unsigned int v22; // ebx
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-58h] BYREF
  HANDLE ThreadHandle; // [rsp+B0h] [rbp+8h] BYREF

  v0 = (unsigned __int8)dword_140381118;
  CcBcbTrimNotificationListLock.Event.Header.Size = 6;
  CcBcbTrimNotificationListLock.Owner = 0LL;
  CcBcbTrimNotificationListLock.Contention = 0;
  CcBcbTrimNotificationListLock.Event.Header.SignalState = 0;
  CcIdleDelayTick = 0x989680 / KeMaximumIncrement;
  qword_1402FD978 = (__int64)&CcCleanSharedCacheMapWithLogHandleList;
  CcCleanSharedCacheMapWithLogHandleList = (__int64)&CcCleanSharedCacheMapWithLogHandleList;
  qword_1402FD988 = (__int64)&CcCleanSharedCacheMapList;
  CcCleanSharedCacheMapList = (__int64)&CcCleanSharedCacheMapList;
  qword_1402FD998 = (__int64)&CcDirtySharedCacheMapWithLogHandleList;
  CcDirtySharedCacheMapWithLogHandleList = (__int64)&CcDirtySharedCacheMapWithLogHandleList;
  CcLazyWriterCursor = (__int64)&CcDirtySharedCacheMapList;
  qword_1402FD9C8 = (__int64)&CcDirtySharedCacheMapList;
  CcDirtySharedCacheMapList = (__int64)&CcLazyWriterCursor;
  qword_1402FD9A8 = (__int64)&CcLazyWriterCursor;
  qword_1402FD9E8 = (__int64)&CcVolumeCacheMapList;
  CcVolumeCacheMapList = (__int64)&CcVolumeCacheMapList;
  CcBcbTrimNotificationListLock.Event.Header.WaitListHead.Blink = &CcBcbTrimNotificationListLock.Event.Header.WaitListHead;
  CcBcbTrimNotificationListLock.Event.Header.WaitListHead.Flink = &CcBcbTrimNotificationListLock.Event.Header.WaitListHead;
  qword_1402FDA48 = (__int64)&CcBcbTrimNotificationList;
  CcBcbTrimNotificationList = (__int64)&CcBcbTrimNotificationList;
  dword_1402FD9B0 = 2048;
  dword_1402FD9D0 = 2048;
  CcBcbTrimNotificationListLock.Count = 1;
  LOWORD(CcBcbTrimNotificationListLock.Event.Header.Lock) = 1;
  CcMaxAsyncReadWorkerThreads = 100;
  CcMaxNestingLevel = 2;
  if ( !(_BYTE)dword_140381118 )
  {
    CcMaxAsyncReadWorkerThreads = 50;
    if ( FsRtlIsMobileOS() )
      CcMaxAsyncReadWorkerThreads = 10;
  }
  qword_1402FDA68 = (__int64)&CcFastTeardownWorkQueue;
  CcFastTeardownWorkQueue = (__int64)&CcFastTeardownWorkQueue;
  qword_1402FDA58 = (__int64)&CcIdleWorkerThreadList;
  qword_1402FDA78 = (__int64)&CcExpressWorkQueue;
  CcExpressWorkQueue = (__int64)&CcExpressWorkQueue;
  qword_1402FDA88 = (__int64)&CcRegularWorkQueue;
  CcRegularWorkQueue = (__int64)&CcRegularWorkQueue;
  qword_1402FDA98 = (__int64)&CcPostTickWorkQueue;
  CcPostTickWorkQueue = (__int64)&CcPostTickWorkQueue;
  CcIdleWorkerThreadList = (PWORK_QUEUE_ITEM)&CcIdleWorkerThreadList;
  qword_1402FDCB8 = (__int64)&CcIdleExtraWriteBehindThreadList;
  CcIdleExtraWriteBehindThreadList = (PWORK_QUEUE_ITEM)&CcIdleExtraWriteBehindThreadList;
  CcGlobalDirtyPageStatistics = 0LL;
  qword_1402FD948 = 0LL;
  qword_1402FD950 = 0LL;
  memset(&CcGlobalDirtyPageThresholds, 0, 0x38uLL);
  v1 = CcNumberWorkerThreads;
  CcLowPriWorkerThread = 0LL;
  CcLowPriSharedCacheMap = 0LL;
  CcLowPriOldCpuPriority = 32;
  CcLowPriOldIoPriority = 5;
  CcLowPriorityWorkerThreadLock = 0LL;
  if ( !CcNumberWorkerThreads )
  {
    v2 = *(_QWORD *)(*(_QWORD *)qword_1402FEC28 + 5712LL);
    if ( v0 )
    {
      v3 = v2 >> 1;
      qword_1402FDAA8 = v3;
      v4 = *(_QWORD *)qword_1402FEC28;
      CcMaxLazyWritePages = 0x2000;
      CcExtraWBThreadDelay = 5000000;
      qword_1402FDAB0 = *(_QWORD *)(v4 + 5712) >> 3;
      CcMaxExtraWriteBehindThreads = ExCriticalWorkerThreads - 1;
    }
    else
    {
      v3 = v2 >> 3;
      qword_1402FDAB0 = v3;
      qword_1402FDAA8 = v3;
      CcMaxLazyWritePages = 256;
      CcMaxExtraWriteBehindThreads = 1;
      CcExtraWBThreadDelay = 10000000;
    }
    CcGlobalDirtyPageThresholds = v3;
    dword_1402FDAD0 = 10;
    qword_1402FDAC8 = 0LL;
    v5 = *(_QWORD *)qword_1402FEC28;
    CcAggressiveZeroThreshold = 4;
    v1 = ExCriticalWorkerThreads - 1;
    qword_1402FDAC0 = 10LL * *(_QWORD *)(v5 + 5712);
    v6 = (v3 >> 1) + (v3 >> 2);
    CcNumberWorkerThreads = ExCriticalWorkerThreads - 1;
    if ( v6 > 0xFFFFFFFF )
      LODWORD(v6) = -1;
    dword_1402FDAB8 = v6;
  }
  CcAggressiveZeroCount = 0;
  v7 = 0;
  if ( v1 )
  {
    do
    {
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x38uLL, 0x71576343u);
      if ( !PoolWithTag )
        KeBugCheckEx(0x34u, 0x4029BuLL, 0LL, 0LL, 0LL);
      PoolWithTag[3] = PoolWithTag;
      PoolWithTag[2] = CcWorkerThread;
      *PoolWithTag = 0LL;
      *((_DWORD *)PoolWithTag + 8) = 1;
      v9 = (PWORK_QUEUE_ITEM **)qword_1402FDA58;
      *PoolWithTag = &CcIdleWorkerThreadList;
      PoolWithTag[1] = v9;
      if ( *v9 != &CcIdleWorkerThreadList )
        __fastfail(3u);
      ++v7;
      *v9 = (PWORK_QUEUE_ITEM *)PoolWithTag;
      qword_1402FDA58 = (__int64)PoolWithTag;
    }
    while ( v7 < CcNumberWorkerThreads );
  }
  for ( i = 0; i < CcMaxExtraWriteBehindThreads; qword_1402FDCB8 = (__int64)v11 )
  {
    v11 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x38uLL, 0x71576343u);
    if ( !v11 )
      KeBugCheckEx(0x34u, 0x402B4uLL, 0LL, 0LL, 0LL);
    v11[3] = v11;
    v11[2] = CcWorkerThread;
    *v11 = 0LL;
    *((_DWORD *)v11 + 8) = 2;
    *((_DWORD *)v11 + 10) = i;
    v12 = (PWORK_QUEUE_ITEM **)qword_1402FDCB8;
    *v11 = &CcIdleExtraWriteBehindThreadList;
    v11[1] = v12;
    if ( *v12 != &CcIdleExtraWriteBehindThreadList )
      __fastfail(3u);
    ++i;
    *v12 = (PWORK_QUEUE_ITEM *)v11;
  }
  CcAsyncReadWorkQueueLock = 0LL;
  if ( v0 )
  {
    CcMaxNumberCompleteAsyncReadExWorkItems = 500;
  }
  else
  {
    CcMaxNumberCompleteAsyncReadExWorkItems = 50;
    if ( FsRtlIsMobileOS() )
      CcMaxNumberCompleteAsyncReadExWorkItems = 9;
  }
  CcThroughputStats = ExAllocatePoolWithTag(
                        NonPagedPoolNx,
                        8LL * (unsigned int)(CcMaxExtraWriteBehindThreads + 1),
                        0x70546343u);
  if ( !CcThroughputStats )
    KeBugCheckEx(0x34u, 0x402E8uLL, 0LL, 0LL, 0LL);
  memset(CcThroughputStats, 0, 8LL * (unsigned int)(CcMaxExtraWriteBehindThreads + 1));
  memset(&LazyWriter, 0, 0x88uLL);
  LOWORD(CcLowMemoryEvent.Header.Lock) = 1;
  CcLowMemoryEvent.Header.WaitListHead.Blink = &CcLowMemoryEvent.Header.WaitListHead;
  CcLowMemoryEvent.Header.WaitListHead.Flink = &CcLowMemoryEvent.Header.WaitListHead;
  CcPowerEvent.Header.WaitListHead.Blink = &CcPowerEvent.Header.WaitListHead;
  CcPowerEvent.Header.WaitListHead.Flink = &CcPowerEvent.Header.WaitListHead;
  CcPeriodicEvent.Header.WaitListHead.Blink = &CcPeriodicEvent.Header.WaitListHead;
  CcPeriodicEvent.Header.WaitListHead.Flink = &CcPeriodicEvent.Header.WaitListHead;
  CcWaitingForTeardownEvent.Header.WaitListHead.Blink = &CcWaitingForTeardownEvent.Header.WaitListHead;
  CcWaitingForTeardownEvent.Header.WaitListHead.Flink = &CcWaitingForTeardownEvent.Header.WaitListHead;
  CcCoalescingFlushEvent.Header.WaitListHead.Blink = &CcCoalescingFlushEvent.Header.WaitListHead;
  CcCoalescingFlushEvent.Header.WaitListHead.Flink = &CcCoalescingFlushEvent.Header.WaitListHead;
  CcLowMemoryEvent.Header.Size = 6;
  CcLowMemoryEvent.Header.SignalState = 0;
  LOWORD(CcPowerEvent.Header.Lock) = 1;
  CcPowerEvent.Header.Size = 6;
  CcPowerEvent.Header.SignalState = 0;
  LOWORD(CcPeriodicEvent.Header.Lock) = 1;
  CcPeriodicEvent.Header.Size = 6;
  CcPeriodicEvent.Header.SignalState = 0;
  LOWORD(CcWaitingForTeardownEvent.Header.Lock) = 1;
  CcWaitingForTeardownEvent.Header.Size = 6;
  CcWaitingForTeardownEvent.Header.SignalState = 0;
  LOWORD(CcCoalescingFlushEvent.Header.Lock) = 1;
  CcCoalescingFlushEvent.Header.Size = 6;
  CcCoalescingFlushEvent.Header.SignalState = 0;
  CcInitializeBcbProfiler();
  v13 = ExAllocatePoolWithTag(NonPagedPoolNx, 8uLL, 0x58637044u);
  v14 = (unsigned __int64)v13;
  if ( v13 )
  {
    ExFreePoolWithTag(v13, 0);
    _RAX = 2147483656LL;
    __asm { cpuid }
    v20 = (void *)(v14 ^ ((unsigned __int64)(unsigned int)ExGenRandom(0) << SBYTE1(_RAX)));
  }
  else
  {
    v20 = 0LL;
  }
  *(_QWORD *)&Timer.Header.Lock = 8LL;
  LazyWriter.DeferredRoutine = (PKDEFERRED_ROUTINE)CcScanDpc;
  Timer.Header.WaitListHead.Blink = &Timer.Header.WaitListHead;
  Timer.Header.WaitListHead.Flink = &Timer.Header.WaitListHead;
  v21 = 128;
  LazyWriter.TargetInfoAsUlong = 275;
  LazyWriter.DeferredContext = v20;
  LazyWriter.DpcData = 0LL;
  LazyWriter.ProcessorHistory = 0LL;
  Timer.DueTime.QuadPart = 0LL;
  *(_QWORD *)&Timer.Processor = 0LL;
  CcConsecutiveWorklessLazyScanCount = 0;
  CcMaxWorklessLazywriteScans = 1;
  CcForcedDisableLazywriteScan = 0;
  if ( v0 )
    v21 = 256;
  ExInitializeSystemLookasideList(
    (__int64)&CcTwilightLookasideList,
    512,
    112,
    1800889155,
    v21,
    (__int64)&ExSystemLookasideListHead);
  v22 = 0;
  for ( CcMaxZeroTransferSize = v0 != 0 ? 0x2000000 : 0x100000; v22 < (unsigned int)KeNumberProcessors_0; ++v22 )
    CcInitializeProcessor(KiProcessorBlock[v22]);
  CcDbgNumberOfFailedWorkQueueEntryAllocations = 0;
  ExInitializeNPagedLookasideList(&CcBitmapLookasideList, 0LL, 0LL, 0x200u, 0x400uLL, 0x6D426343u, 0);
  CcDbgNumberOfFailedBitmapAllocations = 0;
  ExInitializeNPagedLookasideList(&CcVacbLevelLookasideList, 0LL, 0LL, 0x200u, 0x408uLL, 0x6C566343u, 0);
  ExInitializeNPagedLookasideList(&CcVacbLevelWithBcbListHeadsLookasideList, 0LL, 0LL, 0x200u, 0x808uLL, 0x6C566343u, 0);
  CcDeferredWriteSpinLock = 0LL;
  CcDeferredWrites.Blink = &CcDeferredWrites;
  CcDeferredWrites.Flink = &CcDeferredWrites;
  qword_1402FDC98 = (__int64)&CcExternalCacheList;
  CcExternalCacheList = (__int64)&CcExternalCacheList;
  CcExternalCacheListLock = 0LL;
  CcInitializeVacbs();
  ObjectAttributes.Length = 48;
  memset(&ObjectAttributes.RootDirectory, 0, 20);
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( PsCreateSystemThread(
         &ThreadHandle,
         0x1FFFFFu,
         &ObjectAttributes,
         0LL,
         0LL,
         (PKSTART_ROUTINE)CcQueueLazyWriteScanThread,
         0LL) < 0 )
    return 0;
  ZwClose(ThreadHandle);
  if ( !CcInitializeAsyncRead() )
    return 0;
  if ( CcRemoteFileDPInlineFlushThreshold != -1
    && ((unsigned int)CcRemoteFileDPInlineFlushThreshold < 0x8000
     || (unsigned __int64)(unsigned int)CcRemoteFileDPInlineFlushThreshold > *(_QWORD *)(*(_QWORD *)qword_1402FEC28
                                                                                       + 5712LL)) )
  {
    CcRemoteFileDPInlineFlushThreshold = 1310720;
  }
  CcTestControlData = 0LL;
  qword_1402FD8A8 = 0LL;
  qword_1402FD8B0 = 0LL;
  if ( (int)PoRegisterCoalescingCallback(
              (unsigned __int64)CcCoalescingCallBack,
              1,
              (struct _EX_RUNDOWN_REF **)&CcCoalescingRegistration,
              0LL) < 0 )
    KeBugCheckEx(0x34u, 0x3BAuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  CcInitializationComplete = 1;
  return 1;
}
