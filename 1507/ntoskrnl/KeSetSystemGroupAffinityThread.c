/*
 * XREFs of KeSetSystemGroupAffinityThread @ 0x1400D4F5C
 * Callers:
 *     PnpGetRelatedTargetDevice @ 0x1400080C4 (PnpGetRelatedTargetDevice.c)
 *     PnpStartDevice @ 0x140026678 (PnpStartDevice.c)
 *     KeGenericProcessorCallback @ 0x1400D4D9C (KeGenericProcessorCallback.c)
 *     KeRemoveQueueDpcEx @ 0x14010C9A0 (KeRemoveQueueDpcEx.c)
 *     ExAllocateCacheAwarePushLock @ 0x140138820 (ExAllocateCacheAwarePushLock.c)
 *     KiAcquireInterruptConnectLock @ 0x140155830 (KiAcquireInterruptConnectLock.c)
 *     ExpSaPageGroupDescriptorAllocate @ 0x14015BCDC (ExpSaPageGroupDescriptorAllocate.c)
 *     KiSetSystemAffinityThreadToProcessor @ 0x14016320C (KiSetSystemAffinityThreadToProcessor.c)
 *     PpmInstallFeedbackCounters @ 0x140167770 (PpmInstallFeedbackCounters.c)
 *     ExpSaInitialize @ 0x14016CC14 (ExpSaInitialize.c)
 *     IopPassiveInterruptWorker @ 0x1401FB130 (IopPassiveInterruptWorker.c)
 *     KeSetSystemAffinityThreadEx @ 0x1401FF168 (KeSetSystemAffinityThreadEx.c)
 *     KiInterruptDispatchCommon @ 0x1402077A8 (KiInterruptDispatchCommon.c)
 *     MiCombineAllPhysicalMemory @ 0x1402273C8 (MiCombineAllPhysicalMemory.c)
 *     PpmClearSimulatedIdle @ 0x140234140 (PpmClearSimulatedIdle.c)
 *     PpmSetSimulatedIdle @ 0x1402358FC (PpmSetSimulatedIdle.c)
 *     PpmClearSimulatedLoad @ 0x14023A680 (PpmClearSimulatedLoad.c)
 *     PpmSetSimulatedLoad @ 0x14023A99C (PpmSetSimulatedLoad.c)
 *     PopEndMirroring @ 0x1403F1294 (PopEndMirroring.c)
 *     PopInvokeSystemStateHandler @ 0x1403F2FAC (PopInvokeSystemStateHandler.c)
 *     IopLiveDumpCorralProcessors @ 0x1403FEDD4 (IopLiveDumpCorralProcessors.c)
 *     PnpQueryDeviceRelations @ 0x140461830 (PnpQueryDeviceRelations.c)
 *     PnpCallAddDevice @ 0x140580178 (PnpCallAddDevice.c)
 *     PpmIdleInitializeConcurrency @ 0x1405B0720 (PpmIdleInitializeConcurrency.c)
 *     CmInitializeProcessor @ 0x14065B694 (CmInitializeProcessor.c)
 *     PnpReplacePartitionUnit @ 0x14068E9D4 (PnpReplacePartitionUnit.c)
 *     VerifierKeSetSystemGroupAffinityThread @ 0x1407422D0 (VerifierKeSetSystemGroupAffinityThread.c)
 *     ViIsBTSSupported @ 0x14074477C (ViIsBTSSupported.c)
 *     ViSetupBTSPerProcNoEnable @ 0x1407448A0 (ViSetupBTSPerProcNoEnable.c)
 *     CmpInitializeMachineDependentConfiguration @ 0x1407D7FF8 (CmpInitializeMachineDependentConfiguration.c)
 *     KiComputeNumaCosts @ 0x1407DBBB8 (KiComputeNumaCosts.c)
 * Callees:
 *     KiProcessDeferredReadyList @ 0x14009BE20 (KiProcessDeferredReadyList.c)
 *     KiSetSystemAffinityThread @ 0x1400D50B8 (KiSetSystemAffinityThread.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     EtwTraceThreadAffinity @ 0x14025D654 (EtwTraceThreadAffinity.c)
 */

void __stdcall KeSetSystemGroupAffinityThread(PGROUP_AFFINITY Affinity, PGROUP_AFFINITY PreviousAffinity)
{
  unsigned __int16 Group; // cx
  char v5; // bp
  unsigned __int8 CurrentIrql; // r12
  struct _KPRCB *CurrentPrcb; // r15
  unsigned int v8; // esi
  _KTHREAD *CurrentThread; // rdi
  int MiscFlags; // eax
  struct _GROUP_AFFINITY v11; // [rsp+20h] [rbp-38h]
  _QWORD *v12; // [rsp+60h] [rbp+8h] BYREF

  v11 = (struct _GROUP_AFFINITY)0LL;
  Group = Affinity->Group;
  if ( Group >= LOWORD(KeActiveProcessors[0])
    || (*(_QWORD *)&KeActiveProcessors[2 * Group + 2] & Affinity->Mask) == 0
    || Affinity->Reserved[0] | (unsigned __int16)(Affinity->Reserved[1] | Affinity->Reserved[2]) )
  {
    v5 = 0;
  }
  else
  {
    v5 = 1;
    Affinity->Mask &= *(_QWORD *)&KeActiveProcessors[2 * Affinity->Group + 2];
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  CurrentPrcb = KeGetCurrentPrcb();
  v8 = 0;
  CurrentThread = CurrentPrcb->CurrentThread;
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
  v12 = 0LL;
  if ( v5 )
    KiSetSystemAffinityThread(CurrentPrcb, Affinity, 640LL, &v12);
  CurrentThread->ThreadLock = 0LL;
  if ( (WORD2(PerfGlobalGroupMask) & 0x1000) != 0 )
    EtwTraceThreadAffinity(CurrentThread, Affinity);
  KiProcessDeferredReadyList((__int64)CurrentPrcb, &v12, CurrentIrql);
  if ( PreviousAffinity )
    *PreviousAffinity = v11;
}
