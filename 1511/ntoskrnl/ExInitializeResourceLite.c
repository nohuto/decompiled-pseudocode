/*
 * XREFs of ExInitializeResourceLite @ 0x14009E260
 * Callers:
 *     SepCreateTokenEx @ 0x140004180 (SepCreateTokenEx.c)
 *     CcAllocateInitializeBcb @ 0x1400A0330 (CcAllocateInitializeBcb.c)
 *     CmpInitCmRM @ 0x1403BA424 (CmpInitCmRM.c)
 *     SepFilterToken @ 0x1403C11C8 (SepFilterToken.c)
 *     CmpInitializeHive @ 0x1403D071C (CmpInitializeHive.c)
 *     SepDuplicateToken @ 0x140477C00 (SepDuplicateToken.c)
 *     NtCreateJobObject @ 0x140487354 (NtCreateJobObject.c)
 *     MUIInitializeResourceLock @ 0x1404ABA74 (MUIInitializeResourceLock.c)
 *     PnpInitializeNotifyEntry @ 0x1404E9528 (PnpInitializeNotifyEntry.c)
 *     RtlCreateHeap @ 0x1405093C8 (RtlCreateHeap.c)
 *     PiDmObjectManagerInit @ 0x14051B110 (PiDmObjectManagerInit.c)
 *     DrvDbOpenContext @ 0x1405242D0 (DrvDbOpenContext.c)
 *     DrvDbCreateDatabaseNode @ 0x140524640 (DrvDbCreateDatabaseNode.c)
 *     PiPnpRtlInit @ 0x140524F8C (PiPnpRtlInit.c)
 *     PiDrvDbCreateNode @ 0x140525298 (PiDrvDbCreateNode.c)
 *     AdtpObjsInitialize @ 0x14052EF6C (AdtpObjsInitialize.c)
 *     PfSnPrefetchCacheCtxInitialize @ 0x140541460 (PfSnPrefetchCacheCtxInitialize.c)
 *     FsRtlInitializeTieringHeat @ 0x140542F60 (FsRtlInitializeTieringHeat.c)
 *     PiDqObjectManagerInit @ 0x140548260 (PiDqObjectManagerInit.c)
 *     IopInitializeBootLogging @ 0x1405F7ACC (IopInitializeBootLogging.c)
 *     PspCreateSilo @ 0x140640174 (PspCreateSilo.c)
 *     VerifierExInitializeResourceLite @ 0x1406C9608 (VerifierExInitializeResourceLite.c)
 *     CmInitSystem1 @ 0x1407450EC (CmInitSystem1.c)
 *     MiInitializeLoadedModuleList @ 0x14074BAF4 (MiInitializeLoadedModuleList.c)
 *     PiSwInit @ 0x140755538 (PiSwInit.c)
 *     IopInitializePlugPlayServices @ 0x1407561E8 (IopInitializePlugPlayServices.c)
 *     PpInitializeBootDDB @ 0x140756EE4 (PpInitializeBootDDB.c)
 *     IoInitSystemPreDrivers @ 0x140757B24 (IoInitSystemPreDrivers.c)
 *     SepInitializeWorkList @ 0x14075CD38 (SepInitializeWorkList.c)
 *     PoInitSystem @ 0x1407655F0 (PoInitSystem.c)
 *     PopInitializeAdpm @ 0x140766084 (PopInitializeAdpm.c)
 *     ExInitializeTimeRefresh @ 0x140768010 (ExInitializeTimeRefresh.c)
 *     ExpInitSystemPhase0 @ 0x14076ADE4 (ExpInitSystemPhase0.c)
 *     FsRtlInitSystem @ 0x14076C038 (FsRtlInitSystem.c)
 *     SepRmDbInitialization @ 0x14076E6F0 (SepRmDbInitialization.c)
 *     PnpInitPhase0 @ 0x140771408 (PnpInitPhase0.c)
 *     PiDeviceDependencyInit @ 0x140771DFC (PiDeviceDependencyInit.c)
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14000A380 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     KeYieldProcessorEx @ 0x14007CAC0 (KeYieldProcessorEx.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     RtlStdLogStackTrace @ 0x1401F6FF4 (RtlStdLogStackTrace.c)
 *     RtlStdReleaseStackTrace @ 0x1401F7048 (RtlStdReleaseStackTrace.c)
 *     RtlpStdGetRecordedStackTraceIndex @ 0x1401F7300 (RtlpStdGetRecordedStackTraceIndex.c)
 *     PerfLogExecutiveResourceInitialize @ 0x14021034C (PerfLogExecutiveResourceInitialize.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1402140C0 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14021422C (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

NTSTATUS __stdcall ExInitializeResourceLite(PERESOURCE Resource)
{
  __int64 v2; // r8
  unsigned __int8 CurrentIrql; // si
  __int64 v4; // rdx
  struct _LIST_ENTRY *v5; // rax
  KSPIN_LOCK *v7; // rsi
  unsigned __int16 v8; // bp
  __int64 v9; // r14
  int RecordedStackTraceIndex; // eax
  bool v11; // zf
  unsigned __int32 v12; // eax
  void *retaddr; // [rsp+38h] [rbp+0h]
  int v14; // [rsp+40h] [rbp+8h] BYREF

  memset(Resource, 0, sizeof(struct _ERESOURCE));
  if ( (NtGlobalFlag & 0x2000) != 0 )
  {
    v7 = RtlpStackTraceDatabase;
    if ( RtlpStackTraceDatabase )
    {
      v9 = RtlStdLogStackTrace(RtlpStackTraceDatabase);
      if ( v9 )
      {
        RecordedStackTraceIndex = RtlpStdGetRecordedStackTraceIndex(v7);
        v8 = RecordedStackTraceIndex;
        if ( !RecordedStackTraceIndex )
          RtlStdReleaseStackTrace(v7, v9);
      }
      else
      {
        v8 = 0;
      }
    }
    else
    {
      v8 = 0;
    }
    Resource->CreatorBackTraceIndex = v8;
  }
  else
  {
    Resource->CreatorBackTraceIndex = 0LL;
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(&ExpResourceSpinLock, CurrentIrql);
  }
  else
  {
    v14 = 0;
    if ( _interlockedbittestandset(&ExpResourceSpinLock, 0x1Fu) )
      v14 = ExpWaitForSpinLockExclusiveAndAcquire(&ExpResourceSpinLock, CurrentIrql, v2);
    v4 = (unsigned int)ExpResourceSpinLock;
    if ( (ExpResourceSpinLock & 0xBFFFFFFF) != 0x80000000 )
    {
      do
      {
        if ( (v4 & 0x40000000) == 0 )
        {
          v12 = _InterlockedCompareExchange(&ExpResourceSpinLock, v4 | 0x40000000, v4);
          v11 = (_DWORD)v4 == v12;
          v4 = v12;
          if ( !v11 )
            continue;
        }
        KeYieldProcessorEx(&v14, v4, v2);
        v4 = (unsigned int)ExpResourceSpinLock;
      }
      while ( (v4 & 0xBFFFFFFF) != 0x80000000 );
    }
  }
  v5 = (struct _LIST_ENTRY *)qword_1402D61A8;
  Resource->SystemResourcesList.Flink = (struct _LIST_ENTRY *)&ExpSystemResourcesList;
  Resource->SystemResourcesList.Blink = v5;
  if ( (__int64 *)v5->Flink != &ExpSystemResourcesList )
    __fastfail(3u);
  v5->Flink = &Resource->SystemResourcesList;
  qword_1402D61A8 = (__int64)Resource;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&ExpResourceSpinLock, retaddr);
  else
    ExpResourceSpinLock = 0;
  __writecr8(CurrentIrql);
  __incgsdword(0x6318u);
  if ( (DWORD1(PerfGlobalGroupMask) & 0x20000) != 0 )
    PerfLogExecutiveResourceInitialize(65544LL, Resource, 0LL, 0LL);
  return 0;
}
