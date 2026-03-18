/*
 * XREFs of KeRevertToUserGroupAffinityThread @ 0x1400C9044
 * Callers:
 *     PnpSendIrp @ 0x1400082D8 (PnpSendIrp.c)
 *     KeGenericProcessorCallback @ 0x1400CA714 (KeGenericProcessorCallback.c)
 *     ExpWorkerThread @ 0x1400E7700 (ExpWorkerThread.c)
 *     ExAllocateCacheAwarePushLock @ 0x140111204 (ExAllocateCacheAwarePushLock.c)
 *     KiReleaseInterruptConnectLock @ 0x14012D2AC (KiReleaseInterruptConnectLock.c)
 *     ExpSaPageGroupDescriptorAllocate @ 0x1401338C8 (ExpSaPageGroupDescriptorAllocate.c)
 *     KiInitMachineDependent @ 0x14013907C (KiInitMachineDependent.c)
 *     PpmInstallFeedbackCounters @ 0x14014367C (PpmInstallFeedbackCounters.c)
 *     ExpSaInitialize @ 0x140148E68 (ExpSaInitialize.c)
 *     IopPassiveInterruptWorker @ 0x1401CDB94 (IopPassiveInterruptWorker.c)
 *     KiDynamicProcessorInitialization @ 0x1401D1F44 (KiDynamicProcessorInitialization.c)
 *     KeDeregisterNmiCallback @ 0x1401D2818 (KeDeregisterNmiCallback.c)
 *     KeRevertToUserAffinityThread @ 0x1401D2E3C (KeRevertToUserAffinityThread.c)
 *     KeRevertToUserAffinityThreadEx @ 0x1401D2E78 (KeRevertToUserAffinityThreadEx.c)
 *     KiInterruptDispatchCommon @ 0x1401D8668 (KiInterruptDispatchCommon.c)
 *     PpmClearSimulatedIdle @ 0x1401FF83C (PpmClearSimulatedIdle.c)
 *     PpmSetSimulatedIdle @ 0x140201088 (PpmSetSimulatedIdle.c)
 *     PpmClearSimulatedLoad @ 0x140204E3C (PpmClearSimulatedLoad.c)
 *     PpmSetSimulatedLoad @ 0x14020523C (PpmSetSimulatedLoad.c)
 *     IopLiveDumpUncorralProcessors @ 0x1403DB958 (IopLiveDumpUncorralProcessors.c)
 *     PnpCallAddDevice @ 0x140543674 (PnpCallAddDevice.c)
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

void __stdcall KeRevertToUserGroupAffinityThread(PGROUP_AFFINITY PreviousAffinity)
{
  struct _KTHREAD *CurrentThread; // rdi
  PGROUP_AFFINITY p_UserAffinity; // rbx
  unsigned __int8 CurrentIrql; // bp
  struct _KPRCB *CurrentPrcb; // rsi
  __int64 UserIdealProcessor; // r8
  __int64 v6; // r8
  unsigned __int16 Group; // cx
  __int64 v8; // rax
  bool v9; // zf
  int v10; // [rsp+48h] [rbp+10h] BYREF
  __int64 v11; // [rsp+50h] [rbp+18h] BYREF

  CurrentThread = KeGetCurrentThread();
  p_UserAffinity = PreviousAffinity;
  if ( (CurrentThread->MiscFlags & 8) != 0
    && !(PreviousAffinity->Reserved[0] | (unsigned __int16)(PreviousAffinity->Reserved[1] | PreviousAffinity->Reserved[2])) )
  {
    if ( !PreviousAffinity->Mask
      || (Group = PreviousAffinity->Group, Group < (unsigned __int16)KeActiveProcessors)
      && (v8 = qword_1403AA618[Group], v9 = (v8 & p_UserAffinity->Mask) == 0, p_UserAffinity->Mask &= v8, !v9) )
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      CurrentPrcb = KeGetCurrentPrcb();
      v10 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
      {
        do
          KeYieldProcessorEx(&v10);
        while ( CurrentThread->ThreadLock );
      }
      if ( p_UserAffinity->Mask )
      {
        UserIdealProcessor = 640LL;
      }
      else
      {
        UserIdealProcessor = CurrentThread->UserIdealProcessor;
        p_UserAffinity = &CurrentThread->UserAffinity;
        CurrentThread->MiscFlags &= ~8u;
      }
      v11 = 0LL;
      KiSetSystemAffinityThread(CurrentPrcb, p_UserAffinity, UserIdealProcessor, &v11);
      CurrentThread->ThreadLock = 0LL;
      if ( (WORD2(PerfGlobalGroupMask) & 0x1000) != 0 )
        EtwTraceThreadAffinity(CurrentThread, p_UserAffinity);
      LOBYTE(v6) = CurrentIrql;
      KiProcessDeferredReadyList(CurrentPrcb, &v11, v6);
    }
  }
}
