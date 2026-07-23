/*
 * XREFs of KeRevertToUserGroupAffinityThread @ 0x1400C6EE4
 * Callers:
 *     PnpSendIrp @ 0x140007E4C (PnpSendIrp.c)
 *     KeGenericProcessorCallback @ 0x1400C85B4 (KeGenericProcessorCallback.c)
 *     ExpWorkerThread @ 0x1400E55A0 (ExpWorkerThread.c)
 *     ExAllocateCacheAwarePushLock @ 0x140111768 (ExAllocateCacheAwarePushLock.c)
 *     KiReleaseInterruptConnectLock @ 0x14012D81C (KiReleaseInterruptConnectLock.c)
 *     ExpSaPageGroupDescriptorAllocate @ 0x140133E38 (ExpSaPageGroupDescriptorAllocate.c)
 *     KiInitMachineDependent @ 0x1401395EC (KiInitMachineDependent.c)
 *     PpmInstallFeedbackCounters @ 0x140143BEC (PpmInstallFeedbackCounters.c)
 *     ExpSaInitialize @ 0x1401493D8 (ExpSaInitialize.c)
 *     IopPassiveInterruptWorker @ 0x1401CD9E0 (IopPassiveInterruptWorker.c)
 *     KiDynamicProcessorInitialization @ 0x1401D1D70 (KiDynamicProcessorInitialization.c)
 *     KeDeregisterNmiCallback @ 0x1401D2644 (KeDeregisterNmiCallback.c)
 *     KeRevertToUserAffinityThread @ 0x1401D2C68 (KeRevertToUserAffinityThread.c)
 *     KeRevertToUserAffinityThreadEx @ 0x1401D2CA4 (KeRevertToUserAffinityThreadEx.c)
 *     KiInterruptDispatchCommon @ 0x1401D8494 (KiInterruptDispatchCommon.c)
 *     PpmClearSimulatedIdle @ 0x1401FF668 (PpmClearSimulatedIdle.c)
 *     PpmSetSimulatedIdle @ 0x140200EB4 (PpmSetSimulatedIdle.c)
 *     PpmClearSimulatedLoad @ 0x140204C68 (PpmClearSimulatedLoad.c)
 *     PpmSetSimulatedLoad @ 0x140205068 (PpmSetSimulatedLoad.c)
 *     IopLiveDumpUncorralProcessors @ 0x1403DB958 (IopLiveDumpUncorralProcessors.c)
 *     PnpCallAddDevice @ 0x140543BB4 (PnpCallAddDevice.c)
 *     PpmIdleInitializeConcurrency @ 0x14056A9F0 (PpmIdleInitializeConcurrency.c)
 *     CmInitializeProcessor @ 0x14060397C (CmInitializeProcessor.c)
 *     PnpReplacePartitionUnit @ 0x1406431B8 (PnpReplacePartitionUnit.c)
 *     MiCombineAllPhysicalMemory @ 0x1406637FC (MiCombineAllPhysicalMemory.c)
 *     ViIsBTSSupported @ 0x14070EF9C (ViIsBTSSupported.c)
 *     ViSetupBTSPerProcNoEnable @ 0x14070F0C0 (ViSetupBTSPerProcNoEnable.c)
 *     KiComputeNumaCosts @ 0x1407927E0 (KiComputeNumaCosts.c)
 *     CmpInitializeMachineDependentConfiguration @ 0x1407AC8B4 (CmpInitializeMachineDependentConfiguration.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002E830 (KeYieldProcessorEx.c)
 *     KiSetSystemAffinityThread @ 0x1400CAA54 (KiSetSystemAffinityThread.c)
 *     KiProcessDeferredReadyList @ 0x1400D12F0 (KiProcessDeferredReadyList.c)
 *     EtwTraceThreadAffinity @ 0x140226054 (EtwTraceThreadAffinity.c)
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
