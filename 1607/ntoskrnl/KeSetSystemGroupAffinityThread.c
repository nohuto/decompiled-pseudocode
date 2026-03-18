/*
 * XREFs of KeSetSystemGroupAffinityThread @ 0x1400CB014
 * Callers:
 *     PnpSetDeviceAffinityThread @ 0x14000836C (PnpSetDeviceAffinityThread.c)
 *     KeGenericProcessorCallback @ 0x1400CA714 (KeGenericProcessorCallback.c)
 *     ExAllocateCacheAwarePushLock @ 0x140111204 (ExAllocateCacheAwarePushLock.c)
 *     KiAcquireInterruptConnectLock @ 0x14012D2BC (KiAcquireInterruptConnectLock.c)
 *     ExpSaPageGroupDescriptorAllocate @ 0x1401338C8 (ExpSaPageGroupDescriptorAllocate.c)
 *     KiSetSystemAffinityThreadToProcessor @ 0x1401392E4 (KiSetSystemAffinityThreadToProcessor.c)
 *     PpmInstallFeedbackCounters @ 0x14014367C (PpmInstallFeedbackCounters.c)
 *     ExpSaInitialize @ 0x140148E68 (ExpSaInitialize.c)
 *     IopPassiveInterruptWorker @ 0x1401CDB94 (IopPassiveInterruptWorker.c)
 *     KiDynamicProcessorInitialization @ 0x1401D1F44 (KiDynamicProcessorInitialization.c)
 *     KeSetSystemAffinityThreadEx @ 0x1401D2F1C (KeSetSystemAffinityThreadEx.c)
 *     KiInterruptDispatchCommon @ 0x1401D8668 (KiInterruptDispatchCommon.c)
 *     PpmClearSimulatedIdle @ 0x1401FF83C (PpmClearSimulatedIdle.c)
 *     PpmSetSimulatedIdle @ 0x140201088 (PpmSetSimulatedIdle.c)
 *     PpmClearSimulatedLoad @ 0x140204E3C (PpmClearSimulatedLoad.c)
 *     PpmSetSimulatedLoad @ 0x14020523C (PpmSetSimulatedLoad.c)
 *     PopEndMirroring @ 0x1403CA628 (PopEndMirroring.c)
 *     PopInvokeSystemStateHandler @ 0x1403CC110 (PopInvokeSystemStateHandler.c)
 *     IopLiveDumpCorralProcessors @ 0x1403DAA8C (IopLiveDumpCorralProcessors.c)
 *     PpmIdleInitializeConcurrency @ 0x14056A4B0 (PpmIdleInitializeConcurrency.c)
 *     CmInitializeProcessor @ 0x1406038C8 (CmInitializeProcessor.c)
 *     PnpReplacePartitionUnit @ 0x1406430D4 (PnpReplacePartitionUnit.c)
 *     MiCombineAllPhysicalMemory @ 0x140663718 (MiCombineAllPhysicalMemory.c)
 *     ViIsBTSSupported @ 0x14070EF6C (ViIsBTSSupported.c)
 *     ViSetupBTSPerProcNoEnable @ 0x14070F090 (ViSetupBTSPerProcNoEnable.c)
 *     KiComputeNumaCosts @ 0x1407927E0 (KiComputeNumaCosts.c)
 *     CmpInitializeMachineDependentConfiguration @ 0x1407AC8B4 (CmpInitializeMachineDependentConfiguration.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002ECB0 (KeYieldProcessorEx.c)
 *     KiSetSystemAffinityThread @ 0x1400CCBB4 (KiSetSystemAffinityThread.c)
 *     KiProcessDeferredReadyList @ 0x1400D3450 (KiProcessDeferredReadyList.c)
 *     EtwTraceThreadAffinity @ 0x140226228 (EtwTraceThreadAffinity.c)
 */

void __stdcall KeSetSystemGroupAffinityThread(PGROUP_AFFINITY Affinity, PGROUP_AFFINITY PreviousAffinity)
{
  __int64 v2; // r8
  unsigned __int16 Group; // cx
  char v6; // si
  unsigned __int8 CurrentIrql; // r15
  struct _KPRCB *CurrentPrcb; // rbp
  _KTHREAD *CurrentThread; // rdi
  int MiscFlags; // eax
  struct _GROUP_AFFINITY v11; // [rsp+20h] [rbp-38h]
  int v12; // [rsp+60h] [rbp+8h] BYREF
  __int64 v13; // [rsp+68h] [rbp+10h] BYREF

  v11 = (struct _GROUP_AFFINITY)0LL;
  Group = Affinity->Group;
  if ( Group >= LOWORD(KeActiveProcessors[0])
    || (*(_QWORD *)&KeActiveProcessors[2 * Group + 2] & Affinity->Mask) == 0
    || Affinity->Reserved[0] | (unsigned __int16)(Affinity->Reserved[1] | Affinity->Reserved[2]) )
  {
    v6 = 0;
  }
  else
  {
    v6 = 1;
    Affinity->Mask &= *(_QWORD *)&KeActiveProcessors[2 * Affinity->Group + 2];
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  CurrentPrcb = KeGetCurrentPrcb();
  v12 = 0;
  CurrentThread = CurrentPrcb->CurrentThread;
  while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
  {
    do
      KeYieldProcessorEx(&v12);
    while ( CurrentThread->ThreadLock );
  }
  MiscFlags = CurrentThread->MiscFlags;
  if ( (MiscFlags & 8) != 0 )
  {
    v11.Group = CurrentThread->Affinity.Group;
    v11.Mask = CurrentThread->Affinity.Mask;
  }
  else
  {
    CurrentThread->MiscFlags = MiscFlags | 8;
  }
  v13 = 0LL;
  if ( v6 )
    KiSetSystemAffinityThread(CurrentPrcb, Affinity, 640LL, &v13);
  CurrentThread->ThreadLock = 0LL;
  if ( (WORD2(PerfGlobalGroupMask) & 0x1000) != 0 )
    EtwTraceThreadAffinity(CurrentThread, Affinity);
  LOBYTE(v2) = CurrentIrql;
  KiProcessDeferredReadyList(CurrentPrcb, &v13, v2);
  if ( PreviousAffinity )
    *PreviousAffinity = v11;
}
