/*
 * XREFs of ExInitializeResourceLite @ 0x14000E840
 * Callers:
 *     CcAllocateInitializeBcb @ 0x14006C544 (CcAllocateInitializeBcb.c)
 *     SepCreateTokenEx @ 0x14007FC48 (SepCreateTokenEx.c)
 *     SepDuplicateToken @ 0x140411A90 (SepDuplicateToken.c)
 *     SepFilterToken @ 0x140479EC4 (SepFilterToken.c)
 *     CmpInitializeHive @ 0x14047DED8 (CmpInitializeHive.c)
 *     MUIInitializeResourceLock @ 0x1404B42FC (MUIInitializeResourceLock.c)
 *     CmpInitCmRM @ 0x140516F64 (CmpInitCmRM.c)
 *     NtCreateJobObject @ 0x14051A4B8 (NtCreateJobObject.c)
 *     PnpInitializeNotifyEntry @ 0x14052AE60 (PnpInitializeNotifyEntry.c)
 *     RtlCreateHeap @ 0x140540768 (RtlCreateHeap.c)
 *     PiPnpRtlInit @ 0x140551E10 (PiPnpRtlInit.c)
 *     PiDrvDbCreateNode @ 0x14055211C (PiDrvDbCreateNode.c)
 *     PiDmObjectManagerInit @ 0x140564B38 (PiDmObjectManagerInit.c)
 *     AdtpObjsInitialize @ 0x140570130 (AdtpObjsInitialize.c)
 *     PfSnPrefetchCacheCtxInitialize @ 0x140572D64 (PfSnPrefetchCacheCtxInitialize.c)
 *     FsRtlInitializeTieringHeat @ 0x140577358 (FsRtlInitializeTieringHeat.c)
 *     DrvDbOpenContext @ 0x140578EA0 (DrvDbOpenContext.c)
 *     DrvDbCreateDatabaseNode @ 0x1405790F0 (DrvDbCreateDatabaseNode.c)
 *     _PnpCtxOpenMachine @ 0x140579A88 (_PnpCtxOpenMachine.c)
 *     PiDqObjectManagerInit @ 0x14057CBD0 (PiDqObjectManagerInit.c)
 *     TtmInit @ 0x1405801D4 (TtmInit.c)
 *     IopInitializeBootLogging @ 0x140621940 (IopInitializeBootLogging.c)
 *     TtmiCreateEventQueue @ 0x140679F80 (TtmiCreateEventQueue.c)
 *     PoInitSystem @ 0x140795530 (PoInitSystem.c)
 *     IopInitializePlugPlayServices @ 0x14079CCD4 (IopInitializePlugPlayServices.c)
 *     PpInitializeBootDDB @ 0x14079DA0C (PpInitializeBootDDB.c)
 *     IoInitSystemPreDrivers @ 0x14079EDEC (IoInitSystemPreDrivers.c)
 *     SepInitializeWorkList @ 0x1407A3924 (SepInitializeWorkList.c)
 *     CmInitSystem1 @ 0x1407ADA6C (CmInitSystem1.c)
 *     ExInitializeTimeRefresh @ 0x1407AE678 (ExInitializeTimeRefresh.c)
 *     MiInitializeLoadedModuleList @ 0x1407B1234 (MiInitializeLoadedModuleList.c)
 *     ExpInitSystemPhase0 @ 0x1407B58A0 (ExpInitSystemPhase0.c)
 *     FsRtlInitSystem @ 0x1407B6884 (FsRtlInitSystem.c)
 *     SepRmDbInitialization @ 0x1407B868C (SepRmDbInitialization.c)
 *     PopInitializeAdpm @ 0x1407BBC1C (PopInitializeAdpm.c)
 *     PnpInitPhase0 @ 0x1407BC144 (PnpInitPhase0.c)
 *     PiSwInit @ 0x1407BC880 (PiSwInit.c)
 *     PiDeviceDependencyInit @ 0x1407BCCAC (PiDeviceDependencyInit.c)
 *     WmipGetSMBiosFromLoaderBlock @ 0x1407BCF54 (WmipGetSMBiosFromLoaderBlock.c)
 * Callees:
 *     ExpAcquireSpinLockExclusive @ 0x14002E7B0 (ExpAcquireSpinLockExclusive.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     RtlStdLogStackTrace @ 0x140211584 (RtlStdLogStackTrace.c)
 *     RtlStdReleaseStackTrace @ 0x1402115D8 (RtlStdReleaseStackTrace.c)
 *     RtlpStdGetRecordedStackTraceIndex @ 0x140211894 (RtlpStdGetRecordedStackTraceIndex.c)
 *     PerfLogExecutiveResourceInitialize @ 0x140227F84 (PerfLogExecutiveResourceInitialize.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14022DB5C (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14022DCC8 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

NTSTATUS __stdcall ExInitializeResourceLite(PERESOURCE Resource)
{
  unsigned __int8 CurrentIrql; // si
  struct _LIST_ENTRY *v3; // rax
  KSPIN_LOCK *v5; // rsi
  unsigned __int16 v6; // bp
  __int64 v7; // r14
  int RecordedStackTraceIndex; // eax
  void *retaddr; // [rsp+28h] [rbp+0h]

  memset(Resource, 0, sizeof(struct _ERESOURCE));
  if ( (NtGlobalFlag & 0x2000) != 0 )
  {
    v5 = RtlpStackTraceDatabase;
    if ( RtlpStackTraceDatabase )
    {
      v7 = RtlStdLogStackTrace(RtlpStackTraceDatabase);
      if ( v7 )
      {
        RecordedStackTraceIndex = RtlpStdGetRecordedStackTraceIndex(v5);
        v6 = RecordedStackTraceIndex;
        if ( !RecordedStackTraceIndex )
          RtlStdReleaseStackTrace(v5, v7);
      }
      else
      {
        v6 = 0;
      }
    }
    else
    {
      v6 = 0;
    }
    Resource->CreatorBackTraceIndex = v6;
  }
  else
  {
    Resource->CreatorBackTraceIndex = 0LL;
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(&ExpResourceSpinLock, CurrentIrql);
  else
    ExpAcquireSpinLockExclusive(&ExpResourceSpinLock, CurrentIrql);
  v3 = (struct _LIST_ENTRY *)qword_1402FB5E8;
  if ( *(__int64 **)qword_1402FB5E8 != &ExpSystemResourcesList )
    __fastfail(3u);
  Resource->SystemResourcesList.Flink = (struct _LIST_ENTRY *)&ExpSystemResourcesList;
  Resource->SystemResourcesList.Blink = v3;
  v3->Flink = &Resource->SystemResourcesList;
  qword_1402FB5E8 = (__int64)Resource;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&ExpResourceSpinLock, retaddr);
  else
    ExpResourceSpinLock = 0;
  __writecr8(CurrentIrql);
  __incgsdword(0x6398u);
  if ( (DWORD1(PerfGlobalGroupMask) & 0x20000) != 0 )
    PerfLogExecutiveResourceInitialize(65544LL, Resource, 0LL, 0LL);
  return 0;
}
