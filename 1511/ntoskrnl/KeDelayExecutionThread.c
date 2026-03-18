/*
 * XREFs of KeDelayExecutionThread @ 0x140029A90
 * Callers:
 *     CcPurgeCacheSection @ 0x14000EA84 (CcPurgeCacheSection.c)
 *     MmCreateSystemSection @ 0x140019F4C (MmCreateSystemSection.c)
 *     MiGatherMappedPages @ 0x14002EDB4 (MiGatherMappedPages.c)
 *     ExAcquireResourceExclusiveLite @ 0x14003F890 (ExAcquireResourceExclusiveLite.c)
 *     MmAccessFault @ 0x14004BD30 (MmAccessFault.c)
 *     MiFlushSectionInternal @ 0x140063C80 (MiFlushSectionInternal.c)
 *     MiValidateImagePages @ 0x140064AE0 (MiValidateImagePages.c)
 *     CcMapAndCopyInToCache @ 0x140068870 (CcMapAndCopyInToCache.c)
 *     FsRtlCreateSectionForDataScan @ 0x140093000 (FsRtlCreateSectionForDataScan.c)
 *     MiCreateForkWsle @ 0x14009A798 (MiCreateForkWsle.c)
 *     MmFlushSection @ 0x1400A8E90 (MmFlushSection.c)
 *     MiAllocatePagesForMdl @ 0x1400BC760 (MiAllocatePagesForMdl.c)
 *     IopCancelIrpsInFileObjectList @ 0x1400CC5B4 (IopCancelIrpsInFileObjectList.c)
 *     ExpExpandResourceOwnerTable @ 0x1400CF8AC (ExpExpandResourceOwnerTable.c)
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x1400F7568 (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ?SmStCleanup@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x1400F7B0C (-SmStCleanup@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     MiGatherPagefilePages @ 0x14010AF5C (MiGatherPagefilePages.c)
 *     ?StDmpSinglePageAdd@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAK@Z @ 0x14010C40C (-StDmpSinglePageAdd@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAK@Z.c)
 *     ?StDmPageRemove@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14010EB74 (-StDmPageRemove@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?SmStHelperSendCommand@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SMKM_STORE_HELPER_COMMAND@@PEAU_SMKM_STORE_HELPER_PARAMS@@K@Z @ 0x140110D84 (-SmStHelperSendCommand@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SMKM_STORE_HELPER_COMMAND@@PEAU_SM.c)
 *     MiFlushAllPages @ 0x140118BC4 (MiFlushAllPages.c)
 *     PopAllocateIrp @ 0x140121CF4 (PopAllocateIrp.c)
 *     MiZeroPageThread @ 0x1401307A0 (MiZeroPageThread.c)
 *     PnpBootDeviceWait @ 0x140133EA8 (PnpBootDeviceWait.c)
 *     MiMappedPageWriter @ 0x1401364A8 (MiMappedPageWriter.c)
 *     MiRemoveUnusedSegments @ 0x140138B1C (MiRemoveUnusedSegments.c)
 *     InbvRotateGuiBootDisplay @ 0x1401B5D7C (InbvRotateGuiBootDisplay.c)
 *     IopKeepAliveWorker @ 0x1401BC0E0 (IopKeepAliveWorker.c)
 *     MiMakeOutswappedPageResident @ 0x1401CFB54 (MiMakeOutswappedPageResident.c)
 *     MmFlushAllFilesystemPages @ 0x1401D5180 (MmFlushAllFilesystemPages.c)
 *     MiCheckSystemTrimEndCriteria @ 0x1401D7674 (MiCheckSystemTrimEndCriteria.c)
 *     MiFlushAllHintedStorePages @ 0x1401DCA38 (MiFlushAllHintedStorePages.c)
 *     MiHandleForkTransitionPte @ 0x1401E4E64 (MiHandleForkTransitionPte.c)
 *     ?StNpLeafPageIn@?$ST_STORE@USM_TRAITS@@@@SAJPEAUNP_CTX@NP_CONTEXT@@PEAX_K@Z @ 0x140206DC4 (-StNpLeafPageIn@-$ST_STORE@USM_TRAITS@@@@SAJPEAUNP_CTX@NP_CONTEXT@@PEAX_K@Z.c)
 *     MdlInvariantPostProcessing1 @ 0x14020B4C4 (MdlInvariantPostProcessing1.c)
 *     sub_140217EA0 @ 0x140217EA0 (sub_140217EA0.c)
 *     PoBroadcastSystemState @ 0x1403A49B4 (PoBroadcastSystemState.c)
 *     MiShutdownSystem @ 0x1403B1B80 (MiShutdownSystem.c)
 *     MmGetSystemRoutineAddress @ 0x1403B7E3C (MmGetSystemRoutineAddress.c)
 *     NtDelayExecution @ 0x1403EFB60 (NtDelayExecution.c)
 *     PspExitThread @ 0x1403F0588 (PspExitThread.c)
 *     IoCancelThreadIo @ 0x1403F1DC4 (IoCancelThreadIo.c)
 *     NtCreateSection @ 0x1403F7DD0 (NtCreateSection.c)
 *     MmCreateSpecialImageSection @ 0x14044FAE0 (MmCreateSpecialImageSection.c)
 *     NtSetInformationProcess @ 0x1404507B0 (NtSetInformationProcess.c)
 *     MmFlushVirtualMemory @ 0x140455438 (MmFlushVirtualMemory.c)
 *     PopPolicyWorkerNotify @ 0x140456CA4 (PopPolicyWorkerNotify.c)
 *     sub_1404667A0 @ 0x1404667A0 (sub_1404667A0.c)
 *     CmpUuidCreate @ 0x14048548C (CmpUuidCreate.c)
 *     NtCreateJobObject @ 0x140487354 (NtCreateJobObject.c)
 *     NtCancelIoFile @ 0x140490800 (NtCancelIoFile.c)
 *     sub_140498054 @ 0x140498054 (sub_140498054.c)
 *     PnpProcessQueryRemoveAndEject @ 0x14049F874 (PnpProcessQueryRemoveAndEject.c)
 *     PnpAllocateCriticalMemory @ 0x1404A0618 (PnpAllocateCriticalMemory.c)
 *     EtwpWaitForBufferReferenceCount @ 0x1404B25D0 (EtwpWaitForBufferReferenceCount.c)
 *     NtNotifyChangeSession @ 0x1404C2F6C (NtNotifyChangeSession.c)
 *     PopAcquireAdaptiveLock @ 0x1404C4150 (PopAcquireAdaptiveLock.c)
 *     PoBlockConsoleSwitch @ 0x1404C4220 (PoBlockConsoleSwitch.c)
 *     IopCancelAlertedRequest @ 0x1404C5FBC (IopCancelAlertedRequest.c)
 *     PfpOpenHandleCreate @ 0x1404D944C (PfpOpenHandleCreate.c)
 *     PnpCompleteDeviceEvent @ 0x1404E08EC (PnpCompleteDeviceEvent.c)
 *     PerfDiagpRestartCKCL @ 0x1405086B0 (PerfDiagpRestartCKCL.c)
 *     PfTLoggingWorker @ 0x14054BCF4 (PfTLoggingWorker.c)
 *     CmpRollbackTransactionArray @ 0x1405E5C08 (CmpRollbackTransactionArray.c)
 *     IopFreeBandwidthContract @ 0x1405FF3C8 (IopFreeBandwidthContract.c)
 *     MiGetReadyInPageBlock @ 0x140623DE4 (MiGetReadyInPageBlock.c)
 *     PoShutdownBugCheck @ 0x14063650C (PoShutdownBugCheck.c)
 *     ViThunkAdjustExportAddressIfHooked @ 0x1406C358C (ViThunkAdjustExportAddressIfHooked.c)
 *     VerifierKeDelayExecutionThread @ 0x1406C5EB0 (VerifierKeDelayExecutionThread.c)
 *     HdlspPutMore @ 0x1406D7BF0 (HdlspPutMore.c)
 *     StartFirstUserProcess @ 0x14075BB50 (StartFirstUserProcess.c)
 * Callees:
 *     KiQueryEffectivePriorityThread @ 0x140014D6C (KiQueryEffectivePriorityThread.c)
 *     NtYieldExecution @ 0x1400290C0 (NtYieldExecution.c)
 *     KiTestForAlertPending @ 0x14002A034 (KiTestForAlertPending.c)
 *     KiQueueReadyThread @ 0x14002A180 (KiQueueReadyThread.c)
 *     KiCaptureTotalCyclesCurrentThread @ 0x14002A5E0 (KiCaptureTotalCyclesCurrentThread.c)
 *     KiComputeNewPriority @ 0x14002A650 (KiComputeNewPriority.c)
 *     KiSelectLowestRankedThread @ 0x14002AA38 (KiSelectLowestRankedThread.c)
 *     KiFastExitThreadWait @ 0x14002ABE8 (KiFastExitThreadWait.c)
 *     KiCheckForThreadDispatch @ 0x14002AD14 (KiCheckForThreadDispatch.c)
 *     KiEndThreadCycleAccumulation @ 0x14007BC90 (KiEndThreadCycleAccumulation.c)
 *     KeYieldProcessorEx @ 0x14007CAC0 (KeYieldProcessorEx.c)
 *     KiStartThreadCycleAccumulation @ 0x14007CDE0 (KiStartThreadCycleAccumulation.c)
 *     KiCommitThreadWait @ 0x140081ED0 (KiCommitThreadWait.c)
 *     KiSelectReadyThread @ 0x1400832A0 (KiSelectReadyThread.c)
 *     KiAbProcessContextSwitch @ 0x140083550 (KiAbProcessContextSwitch.c)
 *     KiDeliverApc @ 0x140083D40 (KiDeliverApc.c)
 *     KiAbQueueAutoBoostDpc @ 0x14010287C (KiAbQueueAutoBoostDpc.c)
 *     KiSwapContext @ 0x14015A8A0 (KiSwapContext.c)
 */

NTSTATUS __stdcall KeDelayExecutionThread(KPROCESSOR_MODE WaitMode, BOOLEAN Alertable, PLARGE_INTEGER Interval)
{
  struct _KTHREAD *CurrentThread; // rdi
  BOOLEAN v4; // r13
  NTSTATUS result; // eax
  NTSTATUS v6; // ebp
  struct _KTHREAD *v7; // rbx
  unsigned __int8 v8; // r14
  struct _KPRCB *CurrentPrcb; // rdi
  __int64 v10; // rdx
  _KTHREAD *NextThread; // rsi
  __int64 CycleTime; // rbp
  unsigned __int64 v13; // rcx
  char v14; // bp
  struct _KPRCB *v15; // rcx
  _SINGLE_LIST_ENTRY *p_PropagateBoostsEntry; // rdx
  _SINGLE_LIST_ENTRY *p_AbPropagateBoostsList; // r8
  char EffectivePriorityThread; // cl
  __int64 v19; // r8
  unsigned __int8 CurrentIrql; // al
  NTSTATUS v21; // r15d
  __int64 v22; // rbp
  __int64 i; // rbx
  LARGE_INTEGER v24; // rsi
  __int64 v25; // r14
  LARGE_INTEGER PerformanceCounter; // rdx
  __int64 v27; // rdx
  LONGLONG QuadPart; // r14
  unsigned __int8 WaitIrql; // si
  NTSTATUS v30; // eax
  unsigned __int8 v31; // r9
  unsigned __int64 v32; // r14
  NTSTATUS v33; // ebx
  unsigned __int64 v34; // rcx
  unsigned __int8 v35; // al
  unsigned int v36; // [rsp+20h] [rbp-68h]
  int v37; // [rsp+24h] [rbp-64h] BYREF
  int v38; // [rsp+28h] [rbp-60h] BYREF
  int v39; // [rsp+2Ch] [rbp-5Ch] BYREF
  LONGLONG v40; // [rsp+30h] [rbp-58h]
  __int64 v41; // [rsp+38h] [rbp-50h]
  unsigned __int8 v45; // [rsp+A8h] [rbp+20h]

  CurrentThread = KeGetCurrentThread();
  v4 = Alertable;
  if ( Interval->QuadPart || !WaitMode || Alertable || CurrentThread->ApcState.UserApcPending )
  {
    v45 = _bittestandreset((signed __int32 *)&CurrentThread->116, 2u);
    if ( !v45 )
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      CurrentThread->WaitIrql = CurrentIrql;
    }
    v21 = 0;
    if ( Interval->HighPart >= 0 )
    {
      QuadPart = Interval->QuadPart;
      v36 = 1;
    }
    else
    {
      v22 = 0LL;
      while ( 1 )
      {
        for ( i = MEMORY[0xFFFFF78000000340]; (MEMORY[0xFFFFF78000000340] & 1) != 0; i = MEMORY[0xFFFFF78000000340] )
          _mm_pause();
        v24.QuadPart = MEMORY[0xFFFFF78000000350];
        v25 = MEMORY[0xFFFFF78000000008];
        PerformanceCounter = KeQueryPerformanceCounter(0LL);
        if ( MEMORY[0xFFFFF78000000340] == i )
          break;
        _mm_pause();
      }
      v4 = Alertable;
      v21 = 0;
      if ( PerformanceCounter.QuadPart > (unsigned __int64)v24.QuadPart )
      {
        v27 = -1 - v24.QuadPart + PerformanceCounter.QuadPart;
        if ( MEMORY[0xFFFFF78000000369] )
          v27 <<= MEMORY[0xFFFFF78000000369];
        v22 = ((unsigned __int64)v27 * (unsigned __int128)MEMORY[0xFFFFF78000000360]) >> 64;
        v41 = v22;
      }
      v36 = 2;
      QuadPart = v22 + v25 - MEMORY[0xFFFFF780000003B0] - (Interval->QuadPart + CurrentThread->RelativeTimerBias);
    }
    v40 = QuadPart;
    while ( 1 )
    {
      WaitIrql = CurrentThread->WaitIrql;
      while ( 1 )
      {
        CurrentThread->MiscFlags &= ~0x10u;
        CurrentThread->WaitRegister.Flags = 0;
        CurrentThread->WaitMode = WaitMode;
        if ( v4 )
          CurrentThread->MiscFlags |= 0x10u;
        v39 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
        {
          do
            KeYieldProcessorEx(&v39);
          while ( CurrentThread->ThreadLock );
        }
        if ( !CurrentThread->ApcState.KernelApcPending || CurrentThread->SpecialApcDisable || WaitIrql )
          break;
        CurrentThread->ThreadLock = 0LL;
        __writecr8(1uLL);
        KiDeliverApc(0LL, 0LL, 0LL);
        __writecr8(2uLL);
        CurrentThread->WaitIrql = 0;
      }
      v30 = KiTestForAlertPending(CurrentThread, v4, (unsigned __int8)WaitMode, 1LL);
      v32 = v40;
      v33 = v30;
      if ( v30 )
      {
        CurrentThread->ThreadLock = 0LL;
        KiCheckForThreadDispatch(KeGetCurrentPrcb(), WaitIrql);
        return v33;
      }
      CurrentThread->WaitBlockFill6[68] = 5;
      CurrentThread->WaitReason = 4;
      CurrentThread->ThreadLock = 0LL;
      CurrentThread->WaitBlock[2].SpareLong = MEMORY[0xFFFFF78000000320];
      if ( v36 == 2 )
      {
        v34 = MEMORY[0xFFFFF78000000008] - CurrentThread->RelativeTimerBias - MEMORY[0xFFFFF780000003B0];
      }
      else
      {
        if ( !v32 )
          break;
        v34 = MEMORY[0xFFFFF78000000014];
      }
      if ( v34 > v32 )
        break;
      CurrentThread->WaitBlock[0].Object = (PVOID)-1LL;
      CurrentThread->WaitBlockFill4[17] = 5;
      CurrentThread->WaitBlockCount = v31;
      result = KiCommitThreadWait(CurrentThread, &CurrentThread->320, v36, v32);
      if ( result != 256 )
      {
        if ( result == 258 )
          return 0;
        return result;
      }
      v45 = 0;
      v35 = KeGetCurrentIrql();
      __writecr8(2uLL);
      CurrentThread->WaitIrql = v35;
    }
    KiFastExitThreadWait(KeGetCurrentPrcb(), CurrentThread, v45);
    if ( !Interval->QuadPart )
      return NtYieldExecution();
    return v21;
  }
  else
  {
    if ( !KeGetPcr()->Prcb.ReadySummary && !KeGetPcr()->Prcb.SharedReadyQueue->ReadySummary )
      return 1073741860;
    v6 = 1073741860;
    v7 = KeGetCurrentThread();
    v8 = KeGetCurrentIrql();
    __writecr8(2uLL);
    CurrentPrcb = KeGetCurrentPrcb();
    if ( CurrentPrcb->ReadySummary || CurrentPrcb->SharedReadyQueue->ReadySummary )
    {
      KiAbProcessContextSwitch(v7, 0LL);
      v37 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)&v7->ThreadLock, 0LL) )
      {
        do
          KeYieldProcessorEx(&v37);
        while ( v7->ThreadLock );
      }
      v38 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
      {
        do
          KeYieldProcessorEx(&v38);
        while ( CurrentPrcb->PrcbLock );
      }
      NextThread = CurrentPrcb->NextThread;
      if ( !NextThread )
      {
        NextThread = (_KTHREAD *)KiSelectReadyThread(1LL, CurrentPrcb);
        if ( !NextThread )
          NextThread = (_KTHREAD *)KiSelectLowestRankedThread(CurrentPrcb);
        if ( !NextThread )
        {
          _InterlockedAnd64((volatile signed __int64 *)&CurrentPrcb->PrcbLock, 0LL);
          v7->ThreadLock = 0LL;
          __writecr8(v8);
          return 1073741860;
        }
      }
      if ( CurrentPrcb->NestingLevel )
      {
        CycleTime = v7->CycleTime;
      }
      else
      {
        _disable();
        CycleTime = KiEndThreadCycleAccumulation(CurrentPrcb, v7, 0LL);
        KiStartThreadCycleAccumulation(CurrentPrcb, v7, 0LL);
        _enable();
      }
      v13 = CycleTime + KiCyclesPerClockQuantum * (unsigned int)v7->SchedulerApc.SpareByte1;
      if ( (*((_DWORD *)&v7->0 + 1) & 0x10) != 0 )
        _interlockedbittestandreset((volatile signed __int32 *)&v7->116 + 1, 4u);
      v7->QuantumTarget = v13;
      LOBYTE(v10) = 1;
      v14 = KiComputeNewPriority(v7, v10);
      if ( KiAbEnabled )
      {
        v15 = KeGetCurrentPrcb();
        if ( v14 > v7->Priority )
        {
          if ( v7->AbWaitEntryCount )
          {
            p_PropagateBoostsEntry = &v7->PropagateBoostsEntry;
            if ( v7->PropagateBoostsEntry.Next == (struct _SINGLE_LIST_ENTRY *)1 )
            {
              p_AbPropagateBoostsList = &v15->AbPropagateBoostsList;
              if ( v15 != (struct _KPRCB *)-25656LL )
              {
                p_PropagateBoostsEntry->Next = p_AbPropagateBoostsList->Next;
                p_AbPropagateBoostsList->Next = p_PropagateBoostsEntry;
                _InterlockedIncrement16(&v7->KeReferenceCount);
                KiAbQueueAutoBoostDpc();
              }
            }
          }
        }
      }
      v7->Priority = v14;
      v7->ThreadLock = 0LL;
      CurrentPrcb->NextThread = 0LL;
      KiCaptureTotalCyclesCurrentThread(CurrentPrcb, v7);
      if ( (NextThread->Header.Size & 4) != 0 )
        EffectivePriorityThread = KiQueryEffectivePriorityThread((__int64)NextThread, (__int64)CurrentPrcb);
      else
        EffectivePriorityThread = NextThread->Priority;
      *CurrentPrcb->PriorityState = EffectivePriorityThread;
      CurrentPrcb->CurrentThread = NextThread;
      NextThread->WaitBlockFill6[68] = 2;
      v7->WaitReason = 33;
      v7->WaitIrql = v8;
      KiQueueReadyThread(CurrentPrcb, v7);
      LOBYTE(v19) = 1;
      KiSwapContext(v7, NextThread, v19);
      v6 = 0;
    }
    __writecr8(v8);
    return v6;
  }
}
