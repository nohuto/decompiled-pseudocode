/*
 * XREFs of KeDelayExecutionThread @ 0x1400CE420
 * Callers:
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x1400037A8 (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ?SmStAcquireStoreLockExclusive@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x1400039F0 (-SmStAcquireStoreLockExclusive@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     MiGatherMappedPages @ 0x14001FD70 (MiGatherMappedPages.c)
 *     MmFlushSection @ 0x1400220D8 (MmFlushSection.c)
 *     MiFlushSectionInternal @ 0x140029930 (MiFlushSectionInternal.c)
 *     CcMapAndCopyInToCache @ 0x140034AE0 (CcMapAndCopyInToCache.c)
 *     MmAccessFault @ 0x14003E320 (MmAccessFault.c)
 *     MiWalkEntireImage @ 0x14004C0F0 (MiWalkEntireImage.c)
 *     ExAcquireResourceExclusiveLite @ 0x140067CE0 (ExAcquireResourceExclusiveLite.c)
 *     CcPurgeCacheSection @ 0x1400724A0 (CcPurgeCacheSection.c)
 *     FsRtlCreateSectionForDataScan @ 0x14007DBE0 (FsRtlCreateSectionForDataScan.c)
 *     MmCreateSystemSection @ 0x140082E5C (MmCreateSystemSection.c)
 *     ExpExpandResourceOwnerTable @ 0x1400969CC (ExpExpandResourceOwnerTable.c)
 *     IopCancelIrpsInFileObjectList @ 0x1400A0620 (IopCancelIrpsInFileObjectList.c)
 *     MiAllocatePagesForMdl @ 0x140101FA4 (MiAllocatePagesForMdl.c)
 *     MiCreateForkWsle @ 0x14010A5FC (MiCreateForkWsle.c)
 *     MiFlushAllPages @ 0x1401136F8 (MiFlushAllPages.c)
 *     MiGatherPagefilePages @ 0x1401199B4 (MiGatherPagefilePages.c)
 *     PopAllocateIrp @ 0x14012B2F0 (PopAllocateIrp.c)
 *     MiZeroPageThread @ 0x14013A1B0 (MiZeroPageThread.c)
 *     PnpBootDeviceWait @ 0x14013C3F0 (PnpBootDeviceWait.c)
 *     MiMappedPageWriter @ 0x14013DAC4 (MiMappedPageWriter.c)
 *     MiDereferenceSegmentThread @ 0x140141AC4 (MiDereferenceSegmentThread.c)
 *     MiRemoveUnusedSegments @ 0x140141D38 (MiRemoveUnusedSegments.c)
 *     InbvRotateGuiBootDisplay @ 0x1401C3748 (InbvRotateGuiBootDisplay.c)
 *     IopKeepAliveWorker @ 0x1401C9DB8 (IopKeepAliveWorker.c)
 *     MiMakeOutswappedPageResident @ 0x1401DFC0C (MiMakeOutswappedPageResident.c)
 *     MmFlushAllFilesystemPages @ 0x1401E5C00 (MmFlushAllFilesystemPages.c)
 *     MiCheckSystemTrimEndCriteria @ 0x1401E9150 (MiCheckSystemTrimEndCriteria.c)
 *     MiFlushAllHintedStorePages @ 0x1401EE540 (MiFlushAllHintedStorePages.c)
 *     MiHandleForkTransitionPte @ 0x1401F701C (MiHandleForkTransitionPte.c)
 *     ?StNpLeafPageIn@?$ST_STORE@USM_TRAITS@@@@SAJPEAUNP_CTX@NP_CONTEXT@@PEAX_K@Z @ 0x14021F6F8 (-StNpLeafPageIn@-$ST_STORE@USM_TRAITS@@@@SAJPEAUNP_CTX@NP_CONTEXT@@PEAX_K@Z.c)
 *     MdlInvariantPostProcessing1 @ 0x140222DAC (MdlInvariantPostProcessing1.c)
 *     sub_140231EA8 @ 0x140231EA8 (sub_140231EA8.c)
 *     PoBroadcastSystemState @ 0x1403CEBF8 (PoBroadcastSystemState.c)
 *     PopPolicyWorkerNotify @ 0x1403F23C4 (PopPolicyWorkerNotify.c)
 *     MmGetSystemRoutineAddress @ 0x1403F4D64 (MmGetSystemRoutineAddress.c)
 *     NtSetInformationProcess @ 0x1404248E0 (NtSetInformationProcess.c)
 *     NtCreateSection @ 0x14042B860 (NtCreateSection.c)
 *     MmCreateSpecialImageSection @ 0x14045CE40 (MmCreateSpecialImageSection.c)
 *     PnpAllocateCriticalMemory @ 0x140485EEC (PnpAllocateCriticalMemory.c)
 *     PnpCompleteDeviceEvent @ 0x14048D49C (PnpCompleteDeviceEvent.c)
 *     IoCancelThreadIo @ 0x1404B1F50 (IoCancelThreadIo.c)
 *     NtCancelIoFile @ 0x1404B1FE8 (NtCancelIoFile.c)
 *     MmFlushVirtualMemory @ 0x1404B5438 (MmFlushVirtualMemory.c)
 *     EtwpWaitForBufferReferenceCount @ 0x1404B9890 (EtwpWaitForBufferReferenceCount.c)
 *     CmpTransMgrCommit @ 0x1404BDDA4 (CmpTransMgrCommit.c)
 *     PerfDiagpRestartCKCL @ 0x1404C346C (PerfDiagpRestartCKCL.c)
 *     ExpWatchProductTypeWork @ 0x1404CA880 (ExpWatchProductTypeWork.c)
 *     NtNotifyChangeSession @ 0x1404D04B0 (NtNotifyChangeSession.c)
 *     PopAcquireAdaptiveLock @ 0x1404D1254 (PopAcquireAdaptiveLock.c)
 *     PoBlockConsoleSwitch @ 0x1404D1324 (PoBlockConsoleSwitch.c)
 *     IopCancelAlertedRequest @ 0x1404D2CCC (IopCancelAlertedRequest.c)
 *     PfpOpenHandleCreate @ 0x1404ED318 (PfpOpenHandleCreate.c)
 *     NtDelayExecution @ 0x1404EF820 (NtDelayExecution.c)
 *     PspExitThread @ 0x1404F950C (PspExitThread.c)
 *     CmpUuidCreate @ 0x1405179A4 (CmpUuidCreate.c)
 *     NtCreateJobObject @ 0x14051A4B8 (NtCreateJobObject.c)
 *     sub_14051F200 @ 0x14051F200 (sub_14051F200.c)
 *     PfTLoggingWorker @ 0x14055B69C (PfTLoggingWorker.c)
 *     CmpRollbackTransactionArray @ 0x1406051FC (CmpRollbackTransactionArray.c)
 *     IopFreeBandwidthContract @ 0x140629438 (IopFreeBandwidthContract.c)
 *     PiEventRemovalCheckOpenHandles @ 0x14064D450 (PiEventRemovalCheckOpenHandles.c)
 *     MiGetReadyInPageBlock @ 0x140659D50 (MiGetReadyInPageBlock.c)
 *     PoShutdownBugCheck @ 0x14066E998 (PoShutdownBugCheck.c)
 *     ViThunkAdjustExportAddressIfHooked @ 0x14070F64C (ViThunkAdjustExportAddressIfHooked.c)
 *     HdlspPutMore @ 0x140723BF0 (HdlspPutMore.c)
 *     StartFirstUserProcess @ 0x1407A263C (StartFirstUserProcess.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002E830 (KeYieldProcessorEx.c)
 *     KiCommitThreadWait @ 0x14005A850 (KiCommitThreadWait.c)
 *     KiSelectReadyThread @ 0x14005BD40 (KiSelectReadyThread.c)
 *     KiAbProcessContextSwitch @ 0x14005C010 (KiAbProcessContextSwitch.c)
 *     KiAbQueueAutoBoostDpc @ 0x14006C1E8 (KiAbQueueAutoBoostDpc.c)
 *     NtYieldExecution @ 0x140091250 (NtYieldExecution.c)
 *     KiSelectLowestRankedThread @ 0x1400C856C (KiSelectLowestRankedThread.c)
 *     KiQueryEffectivePriorityThread @ 0x1400CE00C (KiQueryEffectivePriorityThread.c)
 *     KiBeginThreadWait @ 0x1400CE820 (KiBeginThreadWait.c)
 *     KiCheckDueTimeExpired @ 0x1400CE988 (KiCheckDueTimeExpired.c)
 *     KiCheckWaitNext @ 0x1400CE9E0 (KiCheckWaitNext.c)
 *     KiCaptureTotalCyclesCurrentThread @ 0x1400CEAA0 (KiCaptureTotalCyclesCurrentThread.c)
 *     KiQueueReadyThread @ 0x1400CEB10 (KiQueueReadyThread.c)
 *     KiComputeNewPriority @ 0x1400D02B0 (KiComputeNewPriority.c)
 *     KiEndThreadCycleAccumulation @ 0x1400D0560 (KiEndThreadCycleAccumulation.c)
 *     KiStartThreadCycleAccumulation @ 0x1400D1640 (KiStartThreadCycleAccumulation.c)
 *     KiFastExitThreadWait @ 0x1400F0678 (KiFastExitThreadWait.c)
 *     KiSwapContext @ 0x140166240 (KiSwapContext.c)
 */

NTSTATUS __stdcall KeDelayExecutionThread(KPROCESSOR_MODE WaitMode, BOOLEAN Alertable, PLARGE_INTEGER Interval)
{
  __int64 v3; // r9
  struct _KTHREAD *CurrentThread; // rbx
  PLARGE_INTEGER v5; // rbp
  NTSTATUS v7; // ebx
  NTSTATUS result; // eax
  unsigned __int8 v9; // al
  unsigned int v10; // r15d
  __int64 v11; // r12
  NTSTATUS v12; // r13d
  __int64 v13; // rcx
  __int64 v14; // r9
  struct _KTHREAD *v15; // rsi
  unsigned __int8 CurrentIrql; // r15
  struct _KPRCB *CurrentPrcb; // rbp
  __int64 v18; // rdx
  unsigned __int64 *v19; // r8
  __int64 NextThread; // r14
  __int64 CycleTime; // rbx
  unsigned __int64 v22; // rcx
  char v23; // al
  struct _KPRCB *v24; // rcx
  char v25; // bl
  char EffectivePriorityThread; // cl
  __int64 v27; // r8
  _SINGLE_LIST_ENTRY *p_PropagateBoostsEntry; // r8
  _SINGLE_LIST_ENTRY *p_AbPropagateBoostsList; // rdx
  unsigned __int8 v30; // al
  int v31; // [rsp+30h] [rbp-48h] BYREF
  unsigned int v32; // [rsp+34h] [rbp-44h] BYREF
  __int64 v33; // [rsp+38h] [rbp-40h] BYREF
  unsigned __int8 v34; // [rsp+90h] [rbp+18h]
  int v35; // [rsp+98h] [rbp+20h] BYREF

  CurrentThread = KeGetCurrentThread();
  v5 = Interval;
  if ( !Interval->QuadPart && WaitMode && !Alertable && !CurrentThread->ApcState.UserApcPending )
  {
    if ( !KeGetPcr()->Prcb.ReadySummary && !KeGetPcr()->Prcb.SharedReadyQueue->ReadySummary )
      return 1073741860;
    v7 = 1073741860;
    v15 = KeGetCurrentThread();
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    CurrentPrcb = KeGetCurrentPrcb();
    if ( CurrentPrcb->ReadySummary || CurrentPrcb->SharedReadyQueue->ReadySummary )
    {
      KiAbProcessContextSwitch((__int64)v15, 0, (__int64)Interval, v3);
      v35 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)&v15->ThreadLock, 0LL) )
      {
        do
          KeYieldProcessorEx(&v35);
        while ( v15->ThreadLock );
      }
      v31 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
      {
        do
          KeYieldProcessorEx(&v31);
        while ( CurrentPrcb->PrcbLock );
      }
      NextThread = (__int64)CurrentPrcb->NextThread;
      if ( !NextThread )
      {
        NextThread = (__int64)KiSelectReadyThread(1, (__int64)CurrentPrcb, v19);
        if ( !NextThread )
          NextThread = KiSelectLowestRankedThread((__int64)CurrentPrcb);
        if ( !NextThread )
        {
          _InterlockedAnd64((volatile signed __int64 *)&CurrentPrcb->PrcbLock, 0LL);
          v15->ThreadLock = 0LL;
          __writecr8(CurrentIrql);
          return v7;
        }
      }
      if ( CurrentPrcb->NestingLevel )
      {
        CycleTime = v15->CycleTime;
      }
      else
      {
        _disable();
        CycleTime = KiEndThreadCycleAccumulation(CurrentPrcb, v15, 0LL);
        KiStartThreadCycleAccumulation(CurrentPrcb, v15, 0LL);
        _enable();
      }
      v22 = CycleTime + KiCyclesPerClockQuantum * (unsigned int)v15->SchedulerApc.SpareByte1;
      if ( (*((_DWORD *)&v15->0 + 1) & 0x10) != 0 )
        _interlockedbittestandreset((volatile signed __int32 *)&v15->116 + 1, 4u);
      v15->QuantumTarget = v22;
      LOBYTE(v18) = 1;
      v23 = KiComputeNewPriority(v15, v18);
      v24 = KeGetCurrentPrcb();
      v25 = v23;
      if ( v23 > v15->Priority )
      {
        if ( v15->AbWaitEntryCount )
        {
          p_PropagateBoostsEntry = &v15->PropagateBoostsEntry;
          if ( v15->PropagateBoostsEntry.Next == (struct _SINGLE_LIST_ENTRY *)1 )
          {
            p_AbPropagateBoostsList = &v24->AbPropagateBoostsList;
            if ( v24 != (struct _KPRCB *)-25784LL )
            {
              p_PropagateBoostsEntry->Next = p_AbPropagateBoostsList->Next;
              p_AbPropagateBoostsList->Next = p_PropagateBoostsEntry;
              _InterlockedIncrement16(&v15->KeReferenceCount);
              KiAbQueueAutoBoostDpc((__int64)v24);
            }
          }
        }
      }
      v15->Priority = v25;
      v15->ThreadLock = 0LL;
      CurrentPrcb->NextThread = 0LL;
      KiCaptureTotalCyclesCurrentThread(CurrentPrcb, v15);
      if ( (*(_BYTE *)(NextThread + 2) & 4) != 0 )
        EffectivePriorityThread = KiQueryEffectivePriorityThread(NextThread, (__int64)CurrentPrcb);
      else
        EffectivePriorityThread = *(_BYTE *)(NextThread + 195);
      *CurrentPrcb->PriorityState = EffectivePriorityThread;
      CurrentPrcb->CurrentThread = (_KTHREAD *)NextThread;
      if ( *(_BYTE *)(NextThread + 388) == 1 )
        *(_DWORD *)(NextThread + 2008) = *(_DWORD *)(NextThread + 2008)
                                       - *(_DWORD *)(NextThread + 436)
                                       + MEMORY[0xFFFFF78000000320];
      *(_BYTE *)(NextThread + 388) = 2;
      v15->WaitReason = 33;
      v15->WaitIrql = CurrentIrql;
      KiQueueReadyThread(CurrentPrcb, v15);
      LOBYTE(v27) = 1;
      KiSwapContext(v15, NextThread, v27);
      v7 = 0;
    }
    __writecr8(CurrentIrql);
    return v7;
  }
  LOBYTE(Interval) = 1;
  v9 = KiCheckWaitNext((_DWORD)CurrentThread, (_DWORD)v5, (_DWORD)Interval, (unsigned int)&v33, (__int64)&v32);
  v10 = v32;
  v11 = v33;
  v34 = v9;
  while ( 1 )
  {
    result = KiBeginThreadWait(CurrentThread, (unsigned __int8)WaitMode, 4LL);
    v12 = result;
    if ( result )
      break;
    if ( (unsigned int)KiCheckDueTimeExpired(CurrentThread, v10, v11) )
    {
      KiFastExitThreadWait(KeGetCurrentPrcb(), CurrentThread, v34, v14);
      if ( !v5->QuadPart )
        return NtYieldExecution();
      return v12;
    }
    CurrentThread->WaitBlock[0].Object = (PVOID)-1LL;
    CurrentThread->WaitBlockFill4[17] = 5;
    CurrentThread->WaitBlockCount = 1;
    result = KiCommitThreadWait(v13, (__int64 *)&CurrentThread->320, v10, v11);
    if ( result != 256 )
    {
      if ( result == 258 )
        return 0;
      return result;
    }
    v34 = 0;
    v30 = KeGetCurrentIrql();
    __writecr8(2uLL);
    CurrentThread->WaitIrql = v30;
  }
  return result;
}
