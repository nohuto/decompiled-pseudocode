/*
 * XREFs of KeRevertToUserGroupAffinityThread @ 0x1400D4C6C
 * Callers:
 *     PnpGetRelatedTargetDevice @ 0x1400080C4 (PnpGetRelatedTargetDevice.c)
 *     PnpStartDevice @ 0x140026678 (PnpStartDevice.c)
 *     ExpWorkerThread @ 0x1400316D0 (ExpWorkerThread.c)
 *     KeRevertToUserAffinityThread @ 0x1400D3950 (KeRevertToUserAffinityThread.c)
 *     KeGenericProcessorCallback @ 0x1400D4D9C (KeGenericProcessorCallback.c)
 *     KeRemoveQueueDpcEx @ 0x14010C9A0 (KeRemoveQueueDpcEx.c)
 *     ExAllocateCacheAwarePushLock @ 0x140138820 (ExAllocateCacheAwarePushLock.c)
 *     KiReleaseInterruptConnectLock @ 0x140155820 (KiReleaseInterruptConnectLock.c)
 *     ExpSaPageGroupDescriptorAllocate @ 0x14015BCDC (ExpSaPageGroupDescriptorAllocate.c)
 *     PpmInstallFeedbackCounters @ 0x140167770 (PpmInstallFeedbackCounters.c)
 *     ExpSaInitialize @ 0x14016CC14 (ExpSaInitialize.c)
 *     IopPassiveInterruptWorker @ 0x1401FB130 (IopPassiveInterruptWorker.c)
 *     KeRevertToUserAffinityThreadEx @ 0x1401FF0C4 (KeRevertToUserAffinityThreadEx.c)
 *     KeDeregisterNmiCallback @ 0x1401FFD34 (KeDeregisterNmiCallback.c)
 *     KiInterruptDispatchCommon @ 0x1402077A8 (KiInterruptDispatchCommon.c)
 *     MiCombineAllPhysicalMemory @ 0x1402273C8 (MiCombineAllPhysicalMemory.c)
 *     PpmClearSimulatedIdle @ 0x140234140 (PpmClearSimulatedIdle.c)
 *     PpmSetSimulatedIdle @ 0x1402358FC (PpmSetSimulatedIdle.c)
 *     PpmClearSimulatedLoad @ 0x14023A680 (PpmClearSimulatedLoad.c)
 *     PpmSetSimulatedLoad @ 0x14023A99C (PpmSetSimulatedLoad.c)
 *     IopLiveDumpUncorralProcessors @ 0x1403FFE28 (IopLiveDumpUncorralProcessors.c)
 *     PnpQueryDeviceRelations @ 0x140461830 (PnpQueryDeviceRelations.c)
 *     PnpCallAddDevice @ 0x140580178 (PnpCallAddDevice.c)
 *     PpmIdleInitializeConcurrency @ 0x1405B0720 (PpmIdleInitializeConcurrency.c)
 *     CmInitializeProcessor @ 0x14065B694 (CmInitializeProcessor.c)
 *     PnpReplacePartitionUnit @ 0x14068E9D4 (PnpReplacePartitionUnit.c)
 *     ViIsBTSSupported @ 0x14074477C (ViIsBTSSupported.c)
 *     ViSetupBTSPerProcNoEnable @ 0x1407448A0 (ViSetupBTSPerProcNoEnable.c)
 *     Phase1InitializationDiscard @ 0x1407D146C (Phase1InitializationDiscard.c)
 *     CmpInitializeMachineDependentConfiguration @ 0x1407D7FF8 (CmpInitializeMachineDependentConfiguration.c)
 *     KiComputeNumaCosts @ 0x1407DBBB8 (KiComputeNumaCosts.c)
 * Callees:
 *     KiProcessDeferredReadyList @ 0x14009BE20 (KiProcessDeferredReadyList.c)
 *     KiSetSystemAffinityThread @ 0x1400D50B8 (KiSetSystemAffinityThread.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     EtwTraceThreadAffinity @ 0x14025D654 (EtwTraceThreadAffinity.c)
 */

void __stdcall KeRevertToUserGroupAffinityThread(PGROUP_AFFINITY PreviousAffinity)
{
  struct _KTHREAD *CurrentThread; // rdi
  PGROUP_AFFINITY p_UserAffinity; // rbx
  unsigned __int16 Group; // cx
  __int64 v4; // rax
  bool v5; // zf
  unsigned __int8 CurrentIrql; // r14
  struct _KPRCB *CurrentPrcb; // rbp
  unsigned int v8; // esi
  __int64 UserIdealProcessor; // r8
  _QWORD *v10; // [rsp+48h] [rbp+10h] BYREF

  CurrentThread = KeGetCurrentThread();
  p_UserAffinity = PreviousAffinity;
  if ( (CurrentThread->MiscFlags & 8) != 0
    && !(PreviousAffinity->Reserved[0] | (unsigned __int16)(PreviousAffinity->Reserved[1] | PreviousAffinity->Reserved[2])) )
  {
    if ( !PreviousAffinity->Mask
      || (Group = PreviousAffinity->Group, Group < LOWORD(KeActiveProcessors[0]))
      && (v4 = qword_1403D15E8[Group], v5 = (v4 & p_UserAffinity->Mask) == 0, p_UserAffinity->Mask &= v4, !v5) )
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      CurrentPrcb = KeGetCurrentPrcb();
      v8 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
      {
        do
        {
          if ( (++v8 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
            _mm_pause();
          else
            HvlNotifyLongSpinWait(v8);
        }
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
      v10 = 0LL;
      KiSetSystemAffinityThread(CurrentPrcb, p_UserAffinity, UserIdealProcessor, &v10);
      CurrentThread->ThreadLock = 0LL;
      if ( (WORD2(PerfGlobalGroupMask) & 0x1000) != 0 )
        EtwTraceThreadAffinity(CurrentThread, p_UserAffinity);
      KiProcessDeferredReadyList((__int64)CurrentPrcb, &v10, CurrentIrql);
    }
  }
}
