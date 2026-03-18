/*
 * XREFs of ExInitializeResourceLite @ 0x1400155B0
 * Callers:
 *     SepCreateTokenEx @ 0x14002EC40 (SepCreateTokenEx.c)
 *     CcAllocateInitializeBcb @ 0x1400F1B2C (CcAllocateInitializeBcb.c)
 *     SepFilterToken @ 0x140411C6C (SepFilterToken.c)
 *     SepDuplicateToken @ 0x140435D60 (SepDuplicateToken.c)
 *     CmpInitializeHive @ 0x1404ACE6C (CmpInitializeHive.c)
 *     CmpInitCmRM @ 0x1404EABF8 (CmpInitCmRM.c)
 *     NtCreateJobObject @ 0x1404EB86C (NtCreateJobObject.c)
 *     MUIInitializeResourceLock @ 0x14053B410 (MUIInitializeResourceLock.c)
 *     PnpInitializeNotifyEntry @ 0x1405619FC (PnpInitializeNotifyEntry.c)
 *     RtlCreateHeap @ 0x14057F114 (RtlCreateHeap.c)
 *     AdtpObjsInitialize @ 0x140592B28 (AdtpObjsInitialize.c)
 *     PiPnpRtlInit @ 0x1405953A4 (PiPnpRtlInit.c)
 *     PiDrvDbCreateNode @ 0x1405956B0 (PiDrvDbCreateNode.c)
 *     PiDmObjectManagerInit @ 0x1405AC380 (PiDmObjectManagerInit.c)
 *     PfSnPrefetchCacheCtxInitialize @ 0x1405B7224 (PfSnPrefetchCacheCtxInitialize.c)
 *     FsRtlInitializeTieringHeat @ 0x1405B9438 (FsRtlInitializeTieringHeat.c)
 *     DrvDbOpenContext @ 0x1405BAEA0 (DrvDbOpenContext.c)
 *     DrvDbCreateDatabaseNode @ 0x1405BB0F0 (DrvDbCreateDatabaseNode.c)
 *     PiDqObjectManagerInit @ 0x1405BF790 (PiDqObjectManagerInit.c)
 *     IopInitializeBootLogging @ 0x140671954 (IopInitializeBootLogging.c)
 *     PspCreateSilo @ 0x1406C18E8 (PspCreateSilo.c)
 *     VerifierExInitializeResourceLite @ 0x14074C228 (VerifierExInitializeResourceLite.c)
 *     SepInitializeWorkList @ 0x1407BD79C (SepInitializeWorkList.c)
 *     IopInitializePlugPlayServices @ 0x1407BF6F0 (IopInitializePlugPlayServices.c)
 *     PpInitializeBootDDB @ 0x1407C03F8 (PpInitializeBootDDB.c)
 *     IoInitSystemPreDrivers @ 0x1407C116C (IoInitSystemPreDrivers.c)
 *     PopInitializeAdpm @ 0x1407D0518 (PopInitializeAdpm.c)
 *     PoInitSystem @ 0x1407D2D24 (PoInitSystem.c)
 *     CmInitSystem1 @ 0x1407D6D64 (CmInitSystem1.c)
 *     ExInitializeTimeRefresh @ 0x1407D8EFC (ExInitializeTimeRefresh.c)
 *     MiInitializeLoadedModuleList @ 0x1407D9810 (MiInitializeLoadedModuleList.c)
 *     ExpInitSystemPhase0 @ 0x1407DF914 (ExpInitSystemPhase0.c)
 *     FsRtlInitSystem @ 0x1407E124C (FsRtlInitSystem.c)
 *     SepRmDbInitialization @ 0x1407E38EC (SepRmDbInitialization.c)
 *     PnpInitPhase0 @ 0x1407E7914 (PnpInitPhase0.c)
 *     PiSwInit @ 0x1407E84D8 (PiSwInit.c)
 *     PiDeviceDependencyInit @ 0x1407E8898 (PiDeviceDependencyInit.c)
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     memset @ 0x140195A80 (memset.c)
 *     RtlStdLogStackTrace @ 0x140245C34 (RtlStdLogStackTrace.c)
 *     RtlStdReleaseStackTrace @ 0x140245C88 (RtlStdReleaseStackTrace.c)
 *     RtlpStdGetRecordedStackTraceIndex @ 0x140246024 (RtlpStdGetRecordedStackTraceIndex.c)
 *     PerfLogExecutiveResourceInitialize @ 0x14025F6BC (PerfLogExecutiveResourceInitialize.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140264210 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

NTSTATUS __stdcall ExInitializeResourceLite(PERESOURCE Resource)
{
  unsigned __int8 CurrentIrql; // si
  unsigned int v3; // ebp
  struct _LIST_ENTRY *v4; // rax
  __int64 v6; // rsi
  unsigned __int16 v7; // bp
  __int64 v8; // rax
  __int64 v9; // r14
  int RecordedStackTraceIndex; // eax
  void *retaddr; // [rsp+28h] [rbp+0h]

  memset(Resource, 0, sizeof(struct _ERESOURCE));
  if ( (NtGlobalFlag & 0x2000) != 0 )
  {
    v6 = RtlpStackTraceDatabase;
    if ( RtlpStackTraceDatabase )
    {
      v8 = RtlStdLogStackTrace(RtlpStackTraceDatabase);
      v9 = v8;
      if ( v8 )
      {
        RecordedStackTraceIndex = RtlpStdGetRecordedStackTraceIndex(v6, v8);
        v7 = RecordedStackTraceIndex;
        if ( !RecordedStackTraceIndex )
          RtlStdReleaseStackTrace(v6, v9);
      }
      else
      {
        v7 = 0;
      }
    }
    else
    {
      v7 = 0;
    }
    Resource->CreatorBackTraceIndex = v7;
  }
  else
  {
    Resource->CreatorBackTraceIndex = 0LL;
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(&ExpResourceSpinLock);
  }
  else
  {
    v3 = 0;
    if ( _interlockedbittestandset(&ExpResourceSpinLock, 0x1Fu) )
      v3 = ExpWaitForSpinLockExclusiveAndAcquire(&ExpResourceSpinLock);
    while ( (ExpResourceSpinLock & 0xBFFFFFFF) != 0x80000000 )
    {
      if ( (ExpResourceSpinLock & 0x40000000) == 0 )
        _InterlockedCompareExchange(&ExpResourceSpinLock, ExpResourceSpinLock | 0x40000000, ExpResourceSpinLock);
      if ( (++v3 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v3);
    }
  }
  v4 = (struct _LIST_ENTRY *)qword_1403252D8;
  Resource->SystemResourcesList.Flink = (struct _LIST_ENTRY *)&ExpSystemResourcesList;
  Resource->SystemResourcesList.Blink = v4;
  if ( (__int64 *)v4->Flink != &ExpSystemResourcesList )
    __fastfail(3u);
  v4->Flink = &Resource->SystemResourcesList;
  qword_1403252D8 = (__int64)Resource;
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
