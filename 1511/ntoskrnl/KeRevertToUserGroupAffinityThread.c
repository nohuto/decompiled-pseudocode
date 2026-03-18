/*
 * XREFs of KeRevertToUserGroupAffinityThread @ 0x1400FF1C8
 * Callers:
 *     PnpSendIrp @ 0x14001ACF4 (PnpSendIrp.c)
 *     ExpWorkerThread @ 0x14006F990 (ExpWorkerThread.c)
 *     KeRevertToUserAffinityThread @ 0x1400F285C (KeRevertToUserAffinityThread.c)
 *     KeGenericProcessorCallback @ 0x1400FF2DC (KeGenericProcessorCallback.c)
 *     ExAllocateCacheAwarePushLock @ 0x14010603C (ExAllocateCacheAwarePushLock.c)
 *     KiReleaseInterruptConnectLock @ 0x140122A6C (KiReleaseInterruptConnectLock.c)
 *     MiCombineAllPhysicalMemory @ 0x140129C30 (MiCombineAllPhysicalMemory.c)
 *     ExpSaPageGroupDescriptorAllocate @ 0x14012D1DC (ExpSaPageGroupDescriptorAllocate.c)
 *     KiInitMachineDependent @ 0x1401336B4 (KiInitMachineDependent.c)
 *     PpmInstallFeedbackCounters @ 0x140138C60 (PpmInstallFeedbackCounters.c)
 *     ExpSaInitialize @ 0x14013F47C (ExpSaInitialize.c)
 *     IopPassiveInterruptWorker @ 0x1401BF60C (IopPassiveInterruptWorker.c)
 *     KeRevertToUserAffinityThreadEx @ 0x1401C3108 (KeRevertToUserAffinityThreadEx.c)
 *     KeDeregisterNmiCallback @ 0x1401C3C7C (KeDeregisterNmiCallback.c)
 *     KiInterruptDispatchCommon @ 0x1401C9E9C (KiInterruptDispatchCommon.c)
 *     PpmClearSimulatedIdle @ 0x1401E6E94 (PpmClearSimulatedIdle.c)
 *     PpmSetSimulatedIdle @ 0x1401E8678 (PpmSetSimulatedIdle.c)
 *     PpmClearSimulatedLoad @ 0x1401EC478 (PpmClearSimulatedLoad.c)
 *     PpmSetSimulatedLoad @ 0x1401EC6C0 (PpmSetSimulatedLoad.c)
 *     IopLiveDumpUncorralProcessors @ 0x1403AF83C (IopLiveDumpUncorralProcessors.c)
 *     PnpCallAddDevice @ 0x14050A224 (PnpCallAddDevice.c)
 *     PpmIdleInitializeConcurrency @ 0x140537030 (PpmIdleInitializeConcurrency.c)
 *     CmInitializeProcessor @ 0x1405E474C (CmInitializeProcessor.c)
 *     PnpReplacePartitionUnit @ 0x14060ECC8 (PnpReplacePartitionUnit.c)
 *     ViIsBTSSupported @ 0x1406C2EDC (ViIsBTSSupported.c)
 *     ViSetupBTSPerProcNoEnable @ 0x1406C3000 (ViSetupBTSPerProcNoEnable.c)
 *     CmpInitializeMachineDependentConfiguration @ 0x140743C5C (CmpInitializeMachineDependentConfiguration.c)
 *     KiComputeNumaCosts @ 0x14074ED1C (KiComputeNumaCosts.c)
 * Callees:
 *     KiSetSystemAffinityThread @ 0x14002A7B4 (KiSetSystemAffinityThread.c)
 *     KeYieldProcessorEx @ 0x14007CAC0 (KeYieldProcessorEx.c)
 *     KiProcessDeferredReadyList @ 0x14007DC70 (KiProcessDeferredReadyList.c)
 *     EtwTraceThreadAffinity @ 0x14020E374 (EtwTraceThreadAffinity.c)
 */

void __stdcall KeRevertToUserGroupAffinityThread(PGROUP_AFFINITY PreviousAffinity)
{
  __int64 v1; // r8
  struct _KTHREAD *CurrentThread; // rdi
  PGROUP_AFFINITY p_UserAffinity; // rbx
  __int64 v4; // rdx
  unsigned __int16 Group; // cx
  __int64 v6; // rax
  bool v7; // zf
  unsigned __int8 CurrentIrql; // bp
  __int64 *CurrentPrcb; // rsi
  unsigned int UserIdealProcessor; // r8d
  int v11; // [rsp+48h] [rbp+10h] BYREF
  __int64 v12; // [rsp+50h] [rbp+18h] BYREF

  CurrentThread = KeGetCurrentThread();
  p_UserAffinity = PreviousAffinity;
  if ( (CurrentThread->MiscFlags & 8) != 0 )
  {
    v4 = PreviousAffinity->Reserved[2];
    LOWORD(v4) = PreviousAffinity->Reserved[0] | PreviousAffinity->Reserved[1] | v4;
    if ( !(_WORD)v4 )
    {
      if ( !PreviousAffinity->Mask
        || (Group = PreviousAffinity->Group, Group < LOWORD(KeActiveProcessors[0]))
        && (v6 = qword_1403825B8[Group], v7 = (v6 & p_UserAffinity->Mask) == 0, p_UserAffinity->Mask &= v6, !v7) )
      {
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        CurrentPrcb = (__int64 *)KeGetCurrentPrcb();
        v11 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
        {
          do
            KeYieldProcessorEx(&v11, v4, v1);
          while ( CurrentThread->ThreadLock );
        }
        if ( p_UserAffinity->Mask )
        {
          UserIdealProcessor = 640;
        }
        else
        {
          UserIdealProcessor = CurrentThread->UserIdealProcessor;
          p_UserAffinity = &CurrentThread->UserAffinity;
          CurrentThread->MiscFlags &= ~8u;
        }
        v12 = 0LL;
        KiSetSystemAffinityThread(CurrentPrcb, (__int64)p_UserAffinity, UserIdealProcessor, (__int64)&v12);
        CurrentThread->ThreadLock = 0LL;
        if ( (WORD2(PerfGlobalGroupMask) & 0x1000) != 0 )
          EtwTraceThreadAffinity(CurrentThread, p_UserAffinity);
        KiProcessDeferredReadyList((__int64)CurrentPrcb, (__int64)&v12, CurrentIrql);
      }
    }
  }
}
