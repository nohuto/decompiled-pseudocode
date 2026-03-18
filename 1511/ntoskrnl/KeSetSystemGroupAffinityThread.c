/*
 * XREFs of KeSetSystemGroupAffinityThread @ 0x1400FF490
 * Callers:
 *     PnpSetDeviceAffinityThread @ 0x14001AD94 (PnpSetDeviceAffinityThread.c)
 *     KeGenericProcessorCallback @ 0x1400FF2DC (KeGenericProcessorCallback.c)
 *     ExAllocateCacheAwarePushLock @ 0x14010603C (ExAllocateCacheAwarePushLock.c)
 *     KiAcquireInterruptConnectLock @ 0x140122A7C (KiAcquireInterruptConnectLock.c)
 *     MiCombineAllPhysicalMemory @ 0x140129C30 (MiCombineAllPhysicalMemory.c)
 *     ExpSaPageGroupDescriptorAllocate @ 0x14012D1DC (ExpSaPageGroupDescriptorAllocate.c)
 *     KiSetSystemAffinityThreadToProcessor @ 0x140133974 (KiSetSystemAffinityThreadToProcessor.c)
 *     PpmInstallFeedbackCounters @ 0x140138C60 (PpmInstallFeedbackCounters.c)
 *     ExpSaInitialize @ 0x14013F47C (ExpSaInitialize.c)
 *     IopPassiveInterruptWorker @ 0x1401BF60C (IopPassiveInterruptWorker.c)
 *     KeSetSystemAffinityThreadEx @ 0x1401C31AC (KeSetSystemAffinityThreadEx.c)
 *     KiInterruptDispatchCommon @ 0x1401C9E9C (KiInterruptDispatchCommon.c)
 *     PpmClearSimulatedIdle @ 0x1401E6E94 (PpmClearSimulatedIdle.c)
 *     PpmSetSimulatedIdle @ 0x1401E8678 (PpmSetSimulatedIdle.c)
 *     PpmClearSimulatedLoad @ 0x1401EC478 (PpmClearSimulatedLoad.c)
 *     PpmSetSimulatedLoad @ 0x1401EC6C0 (PpmSetSimulatedLoad.c)
 *     PopEndMirroring @ 0x14039EAC4 (PopEndMirroring.c)
 *     PopInvokeSystemStateHandler @ 0x1403A0370 (PopInvokeSystemStateHandler.c)
 *     IopLiveDumpCorralProcessors @ 0x1403AEA00 (IopLiveDumpCorralProcessors.c)
 *     PpmIdleInitializeConcurrency @ 0x140537030 (PpmIdleInitializeConcurrency.c)
 *     CmInitializeProcessor @ 0x1405E474C (CmInitializeProcessor.c)
 *     PnpReplacePartitionUnit @ 0x14060ECC8 (PnpReplacePartitionUnit.c)
 *     VerifierKeSetSystemGroupAffinityThread @ 0x1406C0A90 (VerifierKeSetSystemGroupAffinityThread.c)
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

void __stdcall KeSetSystemGroupAffinityThread(PGROUP_AFFINITY Affinity, PGROUP_AFFINITY PreviousAffinity)
{
  __int64 v2; // r8
  PGROUP_AFFINITY v4; // r14
  unsigned __int16 Group; // cx
  char v6; // si
  unsigned __int8 CurrentIrql; // r15
  __int64 *CurrentPrcb; // rbp
  __int64 v9; // rdi
  int v10; // eax
  struct _GROUP_AFFINITY v11; // [rsp+20h] [rbp-38h]
  int v12; // [rsp+60h] [rbp+8h] BYREF
  __int64 v13; // [rsp+68h] [rbp+10h] BYREF

  v11 = (struct _GROUP_AFFINITY)0LL;
  v4 = PreviousAffinity;
  Group = Affinity->Group;
  if ( Group >= LOWORD(KeActiveProcessors[0])
    || (PreviousAffinity = (PGROUP_AFFINITY)KeActiveProcessors,
        (*(_QWORD *)&KeActiveProcessors[2 * Group + 2] & Affinity->Mask) == 0)
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
  CurrentPrcb = (__int64 *)KeGetCurrentPrcb();
  v12 = 0;
  v9 = CurrentPrcb[1];
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v9 + 64), 0LL) )
  {
    do
      KeYieldProcessorEx(&v12, (__int64)PreviousAffinity, v2);
    while ( *(_QWORD *)(v9 + 64) );
  }
  v10 = *(_DWORD *)(v9 + 116);
  if ( (v10 & 8) != 0 )
  {
    v11.Group = *(_WORD *)(v9 + 584);
    v11.Mask = *(_QWORD *)(v9 + 576);
  }
  else
  {
    *(_DWORD *)(v9 + 116) = v10 | 8;
  }
  v13 = 0LL;
  if ( v6 )
    KiSetSystemAffinityThread(CurrentPrcb, (__int64)Affinity, 0x280u, (__int64)&v13);
  *(_QWORD *)(v9 + 64) = 0LL;
  if ( (WORD2(PerfGlobalGroupMask) & 0x1000) != 0 )
    EtwTraceThreadAffinity(v9, Affinity);
  KiProcessDeferredReadyList((__int64)CurrentPrcb, (__int64)&v13, CurrentIrql);
  if ( v4 )
    *v4 = v11;
}
