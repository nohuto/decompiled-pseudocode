/*
 * XREFs of CcInitializeCacheManager @ 0x14079FAB0
 * Callers:
 *     Phase1InitializationDiscard @ 0x140794438 (Phase1InitializationDiscard.c)
 * Callees:
 *     ExGenRandom @ 0x1400EE314 (ExGenRandom.c)
 *     ExInitializeNPagedLookasideList @ 0x140111160 (ExInitializeNPagedLookasideList.c)
 *     CcInitializeAsyncRead @ 0x1401466A8 (CcInitializeAsyncRead.c)
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     ExInitializeSystemLookasideList @ 0x1403D5368 (ExInitializeSystemLookasideList.c)
 *     PsCreateSystemThread @ 0x1403E5D3C (PsCreateSystemThread.c)
 *     MmGetNumberOfPhysicalPages @ 0x140413488 (MmGetNumberOfPhysicalPages.c)
 *     FsRtlIsMobileOS @ 0x14052E5B0 (FsRtlIsMobileOS.c)
 *     CcInitializeProcessor @ 0x140552DC0 (CcInitializeProcessor.c)
 *     PoRegisterCoalescingCallback @ 0x14056F8D0 (PoRegisterCoalescingCallback.c)
 *     CcInitializeBcbProfiler @ 0x140777304 (CcInitializeBcbProfiler.c)
 *     CcInitializeVacbs @ 0x1407B499C (CcInitializeVacbs.c)
 */

char CcInitializeCacheManager()
{
  int v0; // esi
  int v1; // ecx
  int v2; // ebx
  unsigned __int64 NumberOfPhysicalPages; // rax
  __int64 v4; // rdx
  __int64 v5; // rax
  unsigned __int64 v6; // r8
  __int64 v7; // rcx
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rax
  int v10; // ebx
  _QWORD *PoolWithTag; // rax
  _QWORD *v12; // rcx
  bool v13; // cf
  int v14; // ebx
  _QWORD *v15; // rax
  _QWORD *v16; // rcx
  PVOID v17; // rax
  unsigned __int64 v18; // rbp
  void *v19; // rdx
  __int16 v25; // ax
  unsigned int v26; // ebx
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // rcx
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-58h] BYREF
  HANDLE ThreadHandle; // [rsp+B0h] [rbp+8h] BYREF

  v0 = (unsigned __int8)dword_1403A9160;
  CcBcbTrimNotificationListLock.Event.Header.Size = 6;
  CcBcbTrimNotificationListLock.Owner = 0LL;
  CcBcbTrimNotificationListLock.Contention = 0;
  CcBcbTrimNotificationListLock.Event.Header.SignalState = 0;
  CcIdleDelayTick = 0x989680 / KeMaximumIncrement;
  qword_140322FB8 = (__int64)&CcCleanSharedCacheMapWithLogHandleList;
  CcCleanSharedCacheMapWithLogHandleList = (__int64)&CcCleanSharedCacheMapWithLogHandleList;
  qword_140322FC8 = (__int64)&CcCleanSharedCacheMapList;
  CcCleanSharedCacheMapList = (__int64)&CcCleanSharedCacheMapList;
  qword_140322FD8 = (__int64)&CcDirtySharedCacheMapWithLogHandleList;
  CcDirtySharedCacheMapWithLogHandleList = (__int64)&CcDirtySharedCacheMapWithLogHandleList;
  CcLazyWriterCursor = (__int64)&CcDirtySharedCacheMapList;
  qword_140323008 = (__int64)&CcDirtySharedCacheMapList;
  CcDirtySharedCacheMapList = (__int64)&CcLazyWriterCursor;
  qword_140322FE8 = (__int64)&CcLazyWriterCursor;
  qword_140323028 = (__int64)&CcVolumeCacheMapList;
  CcVolumeCacheMapList = (__int64)&CcVolumeCacheMapList;
  CcBcbTrimNotificationListLock.Event.Header.WaitListHead.Blink = &CcBcbTrimNotificationListLock.Event.Header.WaitListHead;
  CcBcbTrimNotificationListLock.Event.Header.WaitListHead.Flink = &CcBcbTrimNotificationListLock.Event.Header.WaitListHead;
  qword_140323088 = (__int64)&CcBcbTrimNotificationList;
  CcBcbTrimNotificationList = (__int64)&CcBcbTrimNotificationList;
  dword_140322FF0 = 2048;
  dword_140323010 = 2048;
  CcBcbTrimNotificationListLock.Count = 1;
  LOWORD(CcBcbTrimNotificationListLock.Event.Header.Lock) = 1;
  CcMaxAsyncReadWorkerThreads = 100;
  CcMaxNestingLevel = 2;
  if ( !(_BYTE)dword_1403A9160 )
  {
    CcMaxAsyncReadWorkerThreads = 50;
    if ( FsRtlIsMobileOS() )
      CcMaxAsyncReadWorkerThreads = 10;
  }
  qword_1403230A8 = (__int64)&CcFastTeardownWorkQueue;
  CcFastTeardownWorkQueue = (__int64)&CcFastTeardownWorkQueue;
  qword_140323098 = (__int64)&CcIdleWorkerThreadList;
  qword_1403230B8 = (__int64)&CcExpressWorkQueue;
  CcExpressWorkQueue = (__int64)&CcExpressWorkQueue;
  qword_1403230C8 = (__int64)&CcRegularWorkQueue;
  CcRegularWorkQueue = (__int64)&CcRegularWorkQueue;
  qword_1403230D8 = (__int64)&CcPostTickWorkQueue;
  CcPostTickWorkQueue = (__int64)&CcPostTickWorkQueue;
  CcIdleWorkerThreadList = (PWORK_QUEUE_ITEM)&CcIdleWorkerThreadList;
  qword_1403232F8 = (__int64)&CcIdleExtraWriteBehindThreadList;
  CcIdleExtraWriteBehindThreadList = (PWORK_QUEUE_ITEM)&CcIdleExtraWriteBehindThreadList;
  CcGlobalDirtyPageStatistics = 0LL;
  qword_140322F88 = 0LL;
  qword_140322F90 = 0LL;
  memset(&CcGlobalDirtyPageThresholds, 0, 0x38uLL);
  v1 = CcNumberWorkerThreads;
  CcLowPriWorkerThread = 0LL;
  CcLowPriSharedCacheMap = 0LL;
  CcLowPriOldCpuPriority = 32;
  CcLowPriOldIoPriority = 5;
  CcLowPriorityWorkerThreadLock = 0LL;
  if ( !CcNumberWorkerThreads )
  {
    v2 = ExCriticalWorkerThreads;
    NumberOfPhysicalPages = MmGetNumberOfPhysicalPages();
    if ( v0 )
    {
      qword_1403230E8 = NumberOfPhysicalPages >> 1;
      qword_1403230F0 = (unsigned __int64)MmGetNumberOfPhysicalPages() >> 3;
      CcMaxLazyWritePages = 0x2000;
      CcMaxExtraWriteBehindThreads = v2 - 1;
      CcExtraWBThreadDelay = 5000000;
    }
    else
    {
      v4 = NumberOfPhysicalPages >> 3;
      qword_1403230F0 = NumberOfPhysicalPages >> 3;
      qword_1403230E8 = NumberOfPhysicalPages >> 3;
      CcMaxLazyWritePages = 256;
      CcMaxExtraWriteBehindThreads = 1;
      CcExtraWBThreadDelay = 10000000;
    }
    CcGlobalDirtyPageThresholds = v4;
    dword_140323110 = 10;
    qword_140323108 = 0LL;
    v5 = MmGetNumberOfPhysicalPages();
    CcAggressiveZeroThreshold = 4;
    v7 = 5 * v5;
    v9 = (v8 >> 1) + (v8 >> 2);
    qword_140323100 = 2 * v7;
    v1 = v2 - 1;
    CcNumberWorkerThreads = v2 - 1;
    if ( v9 > v6 )
      LODWORD(v9) = v6;
    dword_1403230F8 = v9;
  }
  CcAggressiveZeroCount = 0;
  v10 = 0;
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
      v12 = (_QWORD *)qword_140323098;
      if ( *(PWORK_QUEUE_ITEM **)qword_140323098 != &CcIdleWorkerThreadList )
        __fastfail(3u);
      *PoolWithTag = &CcIdleWorkerThreadList;
      v13 = ++v10 < (unsigned int)CcNumberWorkerThreads;
      PoolWithTag[1] = v12;
      *v12 = PoolWithTag;
      qword_140323098 = (__int64)PoolWithTag;
    }
    while ( v13 );
  }
  v14 = 0;
  if ( CcMaxExtraWriteBehindThreads )
  {
    do
    {
      v15 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x38uLL, 0x71576343u);
      if ( !v15 )
        KeBugCheckEx(0x34u, 0x402B4uLL, 0LL, 0LL, 0LL);
      v15[3] = v15;
      v15[2] = CcWorkerThread;
      *v15 = 0LL;
      *((_DWORD *)v15 + 8) = 2;
      *((_DWORD *)v15 + 10) = v14;
      v16 = (_QWORD *)qword_1403232F8;
      if ( *(PWORK_QUEUE_ITEM **)qword_1403232F8 != &CcIdleExtraWriteBehindThreadList )
        __fastfail(3u);
      *v15 = &CcIdleExtraWriteBehindThreadList;
      v13 = ++v14 < (unsigned int)CcMaxExtraWriteBehindThreads;
      v15[1] = v16;
      *v16 = v15;
      qword_1403232F8 = (__int64)v15;
    }
    while ( v13 );
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
  v17 = ExAllocatePoolWithTag(NonPagedPoolNx, 8uLL, 0x58637044u);
  v18 = (unsigned __int64)v17;
  if ( v17 )
  {
    ExFreePoolWithTag(v17, 0);
    _RAX = 2147483656LL;
    __asm { cpuid }
    v19 = (void *)(v18 ^ ((unsigned __int64)(unsigned int)ExGenRandom(0) << SBYTE1(_RAX)));
  }
  else
  {
    v19 = 0LL;
  }
  *(_QWORD *)&Timer.Header.Lock = 8LL;
  LazyWriter.DeferredRoutine = (PKDEFERRED_ROUTINE)CcScanDpc;
  Timer.Header.WaitListHead.Blink = &Timer.Header.WaitListHead;
  Timer.Header.WaitListHead.Flink = &Timer.Header.WaitListHead;
  v25 = 128;
  LazyWriter.TargetInfoAsUlong = 275;
  LazyWriter.DeferredContext = v19;
  LazyWriter.DpcData = 0LL;
  LazyWriter.ProcessorHistory = 0LL;
  Timer.DueTime.QuadPart = 0LL;
  *(_QWORD *)&Timer.Processor = 0LL;
  CcConsecutiveWorklessLazyScanCount = 0;
  CcMaxWorklessLazywriteScans = 1;
  CcForcedDisableLazywriteScan = 0;
  if ( v0 )
    v25 = 256;
  ExInitializeSystemLookasideList(
    (__int64)&CcTwilightLookasideList,
    512,
    128,
    1800889155,
    v25,
    (__int64)&ExSystemLookasideListHead);
  v26 = 0;
  for ( CcMaxZeroTransferSize = v0 != 0 ? 0x2000000 : 0x100000; v26 < (unsigned int)KeNumberProcessors_0; ++v26 )
    CcInitializeProcessor(KiProcessorBlock[v26]);
  CcDbgNumberOfFailedWorkQueueEntryAllocations = 0;
  ExInitializeNPagedLookasideList(&CcBitmapLookasideList, 0LL, 0LL, 0x200u, 0x400uLL, 0x6D426343u, 0);
  CcDbgNumberOfFailedBitmapAllocations = 0;
  ExInitializeNPagedLookasideList(&CcVacbLevelLookasideList, 0LL, 0LL, 0x200u, 0x408uLL, 0x6C566343u, 0);
  ExInitializeNPagedLookasideList(&CcVacbLevelWithBcbListHeadsLookasideList, 0LL, 0LL, 0x200u, 0x808uLL, 0x6C566343u, 0);
  CcDeferredWriteSpinLock = 0LL;
  CcDeferredWrites.Blink = &CcDeferredWrites;
  CcDeferredWrites.Flink = &CcDeferredWrites;
  qword_1403232D8 = (__int64)&CcExternalCacheList;
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
  if ( CcRemoteFileDPInlineFlushThreshold != -1 )
  {
    if ( (unsigned int)CcRemoteFileDPInlineFlushThreshold < 0x8000 || (v28 = MmGetNumberOfPhysicalPages(), v29 > v28) )
      CcRemoteFileDPInlineFlushThreshold = 1310720;
  }
  CcTestControlData = 0LL;
  qword_140322EE8 = 0LL;
  qword_140322EF0 = 0LL;
  if ( (int)PoRegisterCoalescingCallback(
              (unsigned __int64)CcCoalescingCallBack,
              1,
              (struct _EX_RUNDOWN_REF **)&CcCoalescingRegistration,
              0LL) < 0 )
    KeBugCheckEx(0x34u, 0x3BAuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  CcInitializationComplete = 1;
  return 1;
}
