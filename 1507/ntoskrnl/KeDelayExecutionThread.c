/*
 * XREFs of KeDelayExecutionThread @ 0x1400E73A0
 * Callers:
 *     MiCreateForkWsle @ 0x140001B8C (MiCreateForkWsle.c)
 *     MiHandleForkTransitionPte @ 0x140004220 (MiHandleForkTransitionPte.c)
 *     FsRtlCreateSectionForDataScan @ 0x14002F658 (FsRtlCreateSectionForDataScan.c)
 *     IopCancelIrpsInFileObjectList @ 0x140074834 (IopCancelIrpsInFileObjectList.c)
 *     MiAllocatePagesForMdl @ 0x140076E38 (MiAllocatePagesForMdl.c)
 *     CcPurgeCacheSection @ 0x14008322C (CcPurgeCacheSection.c)
 *     MmFlushSection @ 0x140085220 (MmFlushSection.c)
 *     MiFlushSectionInternal @ 0x14008D1E0 (MiFlushSectionInternal.c)
 *     CcMapAndCopyInToCache @ 0x1400B2720 (CcMapAndCopyInToCache.c)
 *     MiValidateImagePages @ 0x1400B57B0 (MiValidateImagePages.c)
 *     MmAccessFault @ 0x1400BF8A0 (MmAccessFault.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400C8A30 (ExAcquireResourceExclusiveLite.c)
 *     ExpExpandResourceOwnerTable @ 0x1400D6868 (ExpExpandResourceOwnerTable.c)
 *     ?SmStCleanup@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x1400DA708 (-SmStCleanup@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x1400DB094 (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     MiGatherMappedPages @ 0x1400E37E8 (MiGatherMappedPages.c)
 *     PopAllocateIrp @ 0x140137024 (PopAllocateIrp.c)
 *     MiGatherPagefilePages @ 0x14013D12C (MiGatherPagefilePages.c)
 *     ?StDmPageRemove@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x1401413D0 (-StDmPageRemove@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StDmpSinglePageAdd@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAK@Z @ 0x140141B00 (-StDmpSinglePageAdd@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAK@Z.c)
 *     ?SmStHelperSendCommand@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SMKM_STORE_HELPER_COMMAND@@PEAU_SMKM_STORE_HELPER_PARAMS@@K@Z @ 0x140147898 (-SmStHelperSendCommand@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SMKM_STORE_HELPER_COMMAND@@PEAU_SM.c)
 *     MiFlushAllPages @ 0x14014D6A0 (MiFlushAllPages.c)
 *     MmCreateSystemSection @ 0x140153B60 (MmCreateSystemSection.c)
 *     PnpBootDeviceWait @ 0x14015DD04 (PnpBootDeviceWait.c)
 *     MiZeroPageThread @ 0x14015FE90 (MiZeroPageThread.c)
 *     MiMappedPageWriter @ 0x140165698 (MiMappedPageWriter.c)
 *     MiRemoveUnusedSegments @ 0x140167F4C (MiRemoveUnusedSegments.c)
 *     InbvRotateGuiBootDisplay @ 0x1401F0C90 (InbvRotateGuiBootDisplay.c)
 *     IopKeepAliveWorker @ 0x1401F76B8 (IopKeepAliveWorker.c)
 *     MiMakeOutswappedPageResident @ 0x14020F4C4 (MiMakeOutswappedPageResident.c)
 *     MmFlushAllFilesystemPages @ 0x140217008 (MmFlushAllFilesystemPages.c)
 *     MiCheckSystemTrimEndCriteria @ 0x14021A3F8 (MiCheckSystemTrimEndCriteria.c)
 *     MiFlushAllHintedStorePages @ 0x14022179C (MiFlushAllHintedStorePages.c)
 *     ?StNpLeafPageIn@?$ST_STORE@USM_TRAITS@@@@SAJPEAUNP_CTX@NP_CONTEXT@@PEAX_K@Z @ 0x140256020 (-StNpLeafPageIn@-$ST_STORE@USM_TRAITS@@@@SAJPEAUNP_CTX@NP_CONTEXT@@PEAX_K@Z.c)
 *     MdlInvariantPostProcessing1 @ 0x14025AA6C (MdlInvariantPostProcessing1.c)
 *     sub_1402685C8 @ 0x1402685C8 (sub_1402685C8.c)
 *     PoBroadcastSystemState @ 0x1403EE2D4 (PoBroadcastSystemState.c)
 *     MiShutdownSystem @ 0x140402C68 (MiShutdownSystem.c)
 *     NtSetInformationProcess @ 0x14041CF90 (NtSetInformationProcess.c)
 *     IoCancelThreadIo @ 0x140420E38 (IoCancelThreadIo.c)
 *     PspExitThread @ 0x140422830 (PspExitThread.c)
 *     PfpOpenHandleCreate @ 0x14042D8E8 (PfpOpenHandleCreate.c)
 *     PnpCompleteDeviceEvent @ 0x140460174 (PnpCompleteDeviceEvent.c)
 *     EtwpWaitForBufferReferenceCount @ 0x1404A210C (EtwpWaitForBufferReferenceCount.c)
 *     NtCancelIoFile @ 0x1404A81DC (NtCancelIoFile.c)
 *     NtCreateSection @ 0x1404B3660 (NtCreateSection.c)
 *     PopPolicyWorkerNotify @ 0x1404E50D4 (PopPolicyWorkerNotify.c)
 *     CmpUuidCreate @ 0x1404EB848 (CmpUuidCreate.c)
 *     NtCreateJobObject @ 0x1404EB86C (NtCreateJobObject.c)
 *     sub_1404F4090 @ 0x1404F4090 (sub_1404F4090.c)
 *     NtDelayExecution @ 0x1404FD770 (NtDelayExecution.c)
 *     MmCreateSpecialImageSection @ 0x140508F84 (MmCreateSpecialImageSection.c)
 *     sub_140511D20 @ 0x140511D20 (sub_140511D20.c)
 *     MmFlushVirtualMemory @ 0x140531D6C (MmFlushVirtualMemory.c)
 *     PnpProcessQueryRemoveAndEject @ 0x1405361F8 (PnpProcessQueryRemoveAndEject.c)
 *     PnpAllocateCriticalMemory @ 0x140536EA0 (PnpAllocateCriticalMemory.c)
 *     MmGetSystemRoutineAddress @ 0x140541B4C (MmGetSystemRoutineAddress.c)
 *     PerfDiagpRestartCKCL @ 0x140558A0C (PerfDiagpRestartCKCL.c)
 *     NtNotifyChangeSession @ 0x140559524 (NtNotifyChangeSession.c)
 *     PopAcquireAdaptiveLock @ 0x14055DCE8 (PopAcquireAdaptiveLock.c)
 *     PoBlockConsoleSwitch @ 0x14055E220 (PoBlockConsoleSwitch.c)
 *     IopCancelAlertedRequest @ 0x14058EC70 (IopCancelAlertedRequest.c)
 *     PfTLoggingWorker @ 0x1405C2D20 (PfTLoggingWorker.c)
 *     CmpRollbackTransactionArray @ 0x14065CCEC (CmpRollbackTransactionArray.c)
 *     IopFreeBandwidthContract @ 0x140679EEC (IopFreeBandwidthContract.c)
 *     MiGetReadyInPageBlock @ 0x1406A2FF8 (MiGetReadyInPageBlock.c)
 *     PoShutdownBugCheck @ 0x1406B5E1C (PoShutdownBugCheck.c)
 *     PsTerminateAllProcessesInSilo @ 0x1406C1334 (PsTerminateAllProcessesInSilo.c)
 *     ViThunkAdjustExportAddressIfHooked @ 0x140744E2C (ViThunkAdjustExportAddressIfHooked.c)
 *     VerifierKeDelayExecutionThread @ 0x1407480E4 (VerifierKeDelayExecutionThread.c)
 *     HdlspPutMore @ 0x14075ADD4 (HdlspPutMore.c)
 *     StartFirstUserProcess @ 0x1407BC5B4 (StartFirstUserProcess.c)
 * Callees:
 *     KiCheckForThreadDispatch @ 0x14000DCB4 (KiCheckForThreadDispatch.c)
 *     KiDeliverApc @ 0x140048670 (KiDeliverApc.c)
 *     KiCommitThreadWait @ 0x1400A0220 (KiCommitThreadWait.c)
 *     KiAbProcessContextSwitch @ 0x1400A1D30 (KiAbProcessContextSwitch.c)
 *     KiExitThreadWait @ 0x1400A23E0 (KiExitThreadWait.c)
 *     KiSelectReadyThreadEx @ 0x1400A24B0 (KiSelectReadyThreadEx.c)
 *     KiAbQueueAutoBoostDpc @ 0x1400D6414 (KiAbQueueAutoBoostDpc.c)
 *     RtlGetInterruptTimePrecise @ 0x1400EA820 (RtlGetInterruptTimePrecise.c)
 *     KiQueueReadyThread @ 0x1400EAD80 (KiQueueReadyThread.c)
 *     NtYieldExecution @ 0x1400EB420 (NtYieldExecution.c)
 *     KiGetThreadEffectiveRankNonZero @ 0x1400EC740 (KiGetThreadEffectiveRankNonZero.c)
 *     PpmPerfGetCurrentFrequency @ 0x14017063C (PpmPerfGetCurrentFrequency.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     KiSwapContext @ 0x14018A310 (KiSwapContext.c)
 *     KiBeginCounterAccumulation @ 0x140204F4C (KiBeginCounterAccumulation.c)
 *     KiEndCounterAccumulation @ 0x140205058 (KiEndCounterAccumulation.c)
 */

NTSTATUS __stdcall KeDelayExecutionThread(KPROCESSOR_MODE WaitMode, BOOLEAN Alertable, PLARGE_INTEGER Interval)
{
  struct _KTHREAD *CurrentThread; // rdi
  NTSTATUS result; // eax
  NTSTATUS v7; // ebp
  struct _KTHREAD *v8; // rdi
  unsigned __int8 v9; // r15
  struct _KPRCB *v10; // rsi
  __int64 v11; // r8
  unsigned int v12; // ebx
  unsigned int v13; // ebx
  __int64 NextThread; // rbx
  __int64 v15; // r14
  unsigned __int64 SchedulingGroup; // rcx
  unsigned __int64 v17; // r10
  volatile unsigned __int64 CycleTime; // rbp
  unsigned __int64 v19; // rax
  UCHAR Size; // r9
  unsigned int CurrentFrequency; // eax
  __int64 v22; // r11
  __int64 v23; // rcx
  unsigned __int64 *v24; // rdx
  unsigned __int64 v25; // r9
  unsigned int v26; // eax
  __int64 v27; // r10
  __int64 v28; // rcx
  unsigned __int64 *v29; // rdx
  unsigned __int64 v30; // rcx
  char Priority; // r8
  unsigned __int8 PriorityDecrement; // dl
  char BasePriority; // al
  unsigned int PriorityFloorSummary; // eax
  int v35; // edx
  char v36; // bp
  struct _KPRCB *v37; // rcx
  _SINGLE_LIST_ENTRY *p_PropagateBoostsEntry; // rdx
  _SINGLE_LIST_ENTRY *p_AbPropagateBoostsList; // r8
  unsigned __int64 v40; // rdx
  unsigned __int64 v41; // r10
  unsigned __int64 v42; // rax
  UCHAR v43; // r9
  unsigned int v44; // edx
  __int64 v45; // r11
  _KSCHEDULING_GROUP *volatile v46; // rcx
  _QWORD *i; // rcx
  char v48; // r13
  __int64 v49; // rdx
  __int64 v50; // rdx
  char v51; // r8
  __int64 v52; // r8
  unsigned __int8 CurrentIrql; // al
  NTSTATUS v54; // r12d
  unsigned __int8 WaitIrql; // si
  unsigned int v56; // ebx
  NTSTATUS v57; // ebx
  __int64 v58; // r8
  unsigned __int64 v59; // rdx
  unsigned __int64 v60; // rcx
  unsigned __int8 v61; // al
  struct _KPRCB *CurrentPrcb; // rsi
  unsigned int v63; // ebx
  signed __int32 v64[8]; // [rsp+0h] [rbp-78h] BYREF
  unsigned int v65; // [rsp+20h] [rbp-58h]
  int v66; // [rsp+24h] [rbp-54h]
  LONGLONG QuadPart; // [rsp+28h] [rbp-50h]
  LARGE_INTEGER PerformanceCounter; // [rsp+30h] [rbp-48h] BYREF
  char v70; // [rsp+98h] [rbp+20h]

  CurrentThread = KeGetCurrentThread();
  if ( Interval->QuadPart || !WaitMode || Alertable || CurrentThread->ApcState.UserApcPending )
  {
    v70 = _bittestandreset((signed __int32 *)&CurrentThread->116, 2u);
    if ( !v70 )
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      CurrentThread->WaitIrql = CurrentIrql;
    }
    if ( Interval->HighPart >= 0 )
    {
      QuadPart = Interval->QuadPart;
      v65 = 1;
    }
    else
    {
      v65 = 2;
      QuadPart = *(_QWORD *)&RtlGetInterruptTimePrecise(&PerformanceCounter)
               - MEMORY[0xFFFFF780000003B0]
               - (Interval->QuadPart
                + CurrentThread->RelativeTimerBias);
    }
    v54 = 0;
    while ( 1 )
    {
      WaitIrql = CurrentThread->WaitIrql;
      while ( 1 )
      {
        CurrentThread->MiscFlags &= ~0x10u;
        CurrentThread->WaitRegister.Flags = 0;
        CurrentThread->WaitMode = WaitMode;
        if ( Alertable )
          CurrentThread->MiscFlags |= 0x10u;
        v56 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
        {
          do
          {
            if ( (++v56 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
              _mm_pause();
            else
              HvlNotifyLongSpinWait(v56);
          }
          while ( CurrentThread->ThreadLock );
        }
        if ( !CurrentThread->ApcState.KernelApcPending || CurrentThread->SpecialApcDisable || WaitIrql )
          break;
        CurrentThread->ThreadLock = 0LL;
        __writecr8(1uLL);
        KiDeliverApc(0, 0, 0LL);
        __writecr8(2uLL);
        CurrentThread->WaitIrql = 0;
      }
      if ( Alertable )
      {
        if ( CurrentThread->Alerted[WaitMode] )
        {
          CurrentThread->Alerted[WaitMode] = 0;
          v57 = 257;
          goto LABEL_152;
        }
        if ( WaitMode
          && (unsigned __int8 *)CurrentThread->ApcState.ApcListHead[1].Flink != &CurrentThread->ApcStateFill[16] )
        {
          CurrentThread->ApcState.UserApcPending = 1;
LABEL_151:
          v57 = 192;
LABEL_152:
          CurrentThread->ThreadLock = 0LL;
          KiCheckForThreadDispatch((__int64)KeGetCurrentPrcb(), WaitIrql);
          return v57;
        }
        if ( CurrentThread->Alerted[0] )
        {
          CurrentThread->Alerted[0] = 0;
          v57 = 257;
          goto LABEL_152;
        }
      }
      else if ( ((unsigned __int8)WaitMode & CurrentThread->ApcState.UserApcPending) != 0 )
      {
        goto LABEL_151;
      }
      v58 = v65;
      CurrentThread->WaitBlockFill6[68] = 5;
      CurrentThread->WaitReason = 4;
      CurrentThread->ThreadLock = 0LL;
      CurrentThread->WaitBlock[2].SpareLong = MEMORY[0xFFFFF78000000320];
      if ( (_DWORD)v58 == 2 )
      {
        v59 = QuadPart;
        v60 = MEMORY[0xFFFFF78000000008] - CurrentThread->RelativeTimerBias - MEMORY[0xFFFFF780000003B0];
      }
      else
      {
        v59 = QuadPart;
        if ( !(_DWORD)v58 )
          goto LABEL_148;
        if ( !QuadPart )
          goto LABEL_154;
        v60 = MEMORY[0xFFFFF78000000014];
      }
      if ( v60 > v59 )
      {
LABEL_154:
        CurrentPrcb = KeGetCurrentPrcb();
        CurrentThread->WaitBlockFill6[68] = 2;
        _InterlockedOr(v64, 0);
        if ( CurrentThread->ThreadLock )
        {
          v63 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
          {
            do
            {
              if ( (++v63 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
                _mm_pause();
              else
                HvlNotifyLongSpinWait(v63);
            }
            while ( CurrentThread->ThreadLock );
          }
          CurrentThread->ThreadLock = 0LL;
        }
        KiExitThreadWait((__int64)CurrentPrcb, (__int64)CurrentThread, v70);
        if ( !Interval->QuadPart )
          return NtYieldExecution();
        return v54;
      }
LABEL_148:
      CurrentThread->WaitBlock[0].Object = (PVOID)-1LL;
      CurrentThread->WaitBlockFill4[17] = 5;
      CurrentThread->WaitBlockCount = 1;
      result = KiCommitThreadWait((__int64)CurrentThread, (__int64 *)&CurrentThread->320, v58, v59);
      if ( result != 256 )
      {
        if ( result == 258 )
          return 0;
        return result;
      }
      v70 = 0;
      v61 = KeGetCurrentIrql();
      __writecr8(2uLL);
      CurrentThread->WaitIrql = v61;
    }
  }
  if ( !KeGetPcr()->Prcb.ReadySummary && !KeGetPcr()->Prcb.SharedReadyQueue->ReadySummary )
    return 1073741860;
  v7 = 1073741860;
  v8 = KeGetCurrentThread();
  v9 = KeGetCurrentIrql();
  __writecr8(2uLL);
  v10 = KeGetCurrentPrcb();
  if ( v10->ReadySummary || v10->SharedReadyQueue->ReadySummary )
  {
    KiAbProcessContextSwitch((__int64)v8, 0);
    v12 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)&v8->ThreadLock, 0LL) )
    {
      do
      {
        if ( (++v12 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v12);
      }
      while ( v8->ThreadLock );
    }
    v13 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)&v10->PrcbLock, 0LL) )
    {
      do
      {
        if ( (++v13 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v13);
      }
      while ( v10->PrcbLock );
    }
    NextThread = (__int64)v10->NextThread;
    if ( !NextThread )
    {
      LOBYTE(v11) = 1;
      NextThread = KiSelectReadyThreadEx(v10, 0LL, v11);
      if ( !NextThread )
      {
        _InterlockedAnd64((volatile signed __int64 *)&v10->PrcbLock, 0LL);
        v8->ThreadLock = 0LL;
        __writecr8(v9);
        return 1073741860;
      }
    }
    v15 = 3LL;
    if ( v10->NestingLevel )
    {
      CycleTime = v8->CycleTime;
    }
    else
    {
      _disable();
      v10->NestingLevel = 1;
      SchedulingGroup = __rdtsc();
      v17 = SchedulingGroup - v10->StartCycles;
      CycleTime = v17 + v8->CycleTime;
      v19 = v17 + v8->CurrentRunTime;
      v8->CycleTime = CycleTime;
      v10->StartCycles = SchedulingGroup;
      Size = v8->Header.Size;
      if ( v19 > 0xFFFFFFFF )
        LODWORD(v19) = -1;
      v8->CurrentRunTime = v19;
      if ( (Size & 0x3E) != 0 )
      {
        if ( (Size & 0x10) != 0 )
        {
          v10->TaggedCycles[v8->Tag] += v10->StartCycles - v10->TaggedCyclesStart;
          Size &= ~0x10u;
          v10->TaggedCyclesStart = 0LL;
        }
        if ( (Size & 0x3E) != 0 )
        {
          if ( (Size & 0x20) != 0 )
          {
            if ( v8[1].WaitBlock[2].SparePtr )
            {
              CurrentFrequency = PpmPerfGetCurrentFrequency(v10);
              v23 = 3LL;
              if ( CurrentFrequency / 0x19 < 3 )
                v23 = CurrentFrequency / 0x19;
              v24 = (unsigned __int64 *)(v22 + 8 * (v10->PowerState.Class + 2 * v23));
              SchedulingGroup = v17 + *v24;
              *v24 = SchedulingGroup;
            }
            Size &= ~0x20u;
          }
          if ( (Size & 0x3E) != 0 )
          {
            SchedulingGroup = (unsigned __int64)v8->SchedulingGroup;
            if ( SchedulingGroup )
            {
              for ( SchedulingGroup += v10->ScbOffset; SchedulingGroup; SchedulingGroup = *(_QWORD *)(SchedulingGroup + 392) )
                *(_QWORD *)SchedulingGroup += v17;
            }
            if ( (v8->Header.Size & 8) != 0 )
            {
              SchedulingGroup = v8->Affinity.Mask;
              if ( (SchedulingGroup & v10->ParentNode->Affinity.Mask) != v10->ParentNode->Affinity.Mask )
                v10->AffinitizedCycles += v17;
            }
            if ( v8->WaitBlock[0].SparePtr )
              KiEndCounterAccumulation(v8);
          }
        }
      }
      v25 = __rdtsc();
      v10->CycleTime += v25 - v10->StartCycles;
      if ( (v8->Header.Size & 0x20) != 0 )
      {
        v26 = PpmPerfGetCurrentFrequency(v10);
        v28 = 3LL;
        if ( v26 / 0x19 < 3 )
          v28 = v26 / 0x19;
        v29 = &v10->Cycles[v28][v10->PowerState.Class];
        SchedulingGroup = v27 + *v29;
        *v29 = SchedulingGroup;
      }
      v10->StartCycles = v25;
      if ( (v8->Header.Size & 0x10) != 0 )
        v10->TaggedCyclesStart = v25;
      if ( (v8->Header.Size & 2) != 0 )
        KiBeginCounterAccumulation(v8, 0LL);
      v10->NestingLevel = 0;
      if ( v10->InterruptRequest )
      {
        LOBYTE(SchedulingGroup) = 2;
        v10->InterruptRequest = 0;
        HalRequestSoftwareInterrupt(SchedulingGroup);
      }
      _enable();
    }
    v30 = CycleTime + KiCyclesPerClockQuantum * (unsigned int)v8->SchedulerApc.SpareByte1;
    if ( (*((_DWORD *)&v8->0 + 1) & 0x10) != 0 )
      _interlockedbittestandreset((volatile signed __int32 *)&v8->116 + 1, 4u);
    Priority = v8->Priority;
    v8->QuantumTarget = v30;
    if ( Priority < 16 )
    {
      PriorityDecrement = v8->PriorityDecrement;
      BasePriority = -1 - (PriorityDecrement >> 4) - (PriorityDecrement & 0xF) + Priority;
      if ( BasePriority < v8->BasePriority )
        BasePriority = v8->BasePriority;
      Priority = BasePriority;
      if ( PriorityDecrement )
      {
        if ( (PriorityDecrement & 0xF) != 0 )
          v8->ForegroundLossTime = MEMORY[0xFFFFF78000000320];
        v8->PriorityDecrement = 0;
      }
      PriorityFloorSummary = v8->PriorityFloorSummary;
      if ( PriorityFloorSummary )
      {
        _BitScanReverse((unsigned int *)&v35, PriorityFloorSummary);
        if ( Priority < v35 )
          Priority = v35;
        v66 = v35;
      }
    }
    v36 = Priority;
    if ( KiAbEnabled )
    {
      v37 = KeGetCurrentPrcb();
      if ( Priority > v8->Priority )
      {
        if ( v8->AbWaitEntryCount )
        {
          p_PropagateBoostsEntry = &v8->PropagateBoostsEntry;
          if ( v8->PropagateBoostsEntry.Next == (struct _SINGLE_LIST_ENTRY *)1 )
          {
            p_AbPropagateBoostsList = &v37->AbPropagateBoostsList;
            if ( v37 != (struct _KPRCB *)-25656LL )
            {
              p_PropagateBoostsEntry->Next = p_AbPropagateBoostsList->Next;
              p_AbPropagateBoostsList->Next = p_PropagateBoostsEntry;
              _InterlockedIncrement16(&v8->KeReferenceCount);
              KiAbQueueAutoBoostDpc((__int64)v37);
            }
          }
        }
      }
    }
    v8->Priority = v36;
    v8->ThreadLock = 0LL;
    v10->NextThread = 0LL;
    _disable();
    v10->NestingLevel = 1;
    v40 = __rdtsc();
    v41 = v40 - v10->StartCycles;
    v42 = v41 + v8->CurrentRunTime;
    v8->CycleTime += v41;
    v10->StartCycles = v40;
    v43 = v8->Header.Size;
    if ( v42 > 0xFFFFFFFF )
      LODWORD(v42) = -1;
    v8->CurrentRunTime = v42;
    if ( (v43 & 0x3E) != 0 )
    {
      if ( (v43 & 0x10) != 0 )
      {
        v10->TaggedCycles[v8->Tag] += v10->StartCycles - v10->TaggedCyclesStart;
        v43 &= ~0x10u;
        v10->TaggedCyclesStart = 0LL;
      }
      if ( (v43 & 0x3E) != 0 )
      {
        if ( (v43 & 0x20) != 0 )
        {
          if ( v8[1].WaitBlock[2].SparePtr )
          {
            v44 = (unsigned int)PpmPerfGetCurrentFrequency(v10) / 0x19;
            if ( v44 < 3 )
              v15 = v44;
            *(_QWORD *)(v45 + 8 * (v10->PowerState.Class + 2 * v15)) += v41;
          }
          v43 &= ~0x20u;
        }
        if ( (v43 & 0x3E) != 0 )
        {
          v46 = v8->SchedulingGroup;
          if ( v46 )
          {
            for ( i = (_QWORD *)((char *)&v46->Policy + v10->ScbOffset); i; i = (_QWORD *)i[49] )
              *i += v41;
          }
          if ( (v8->Header.Size & 8) != 0
            && (v8->Affinity.Mask & v10->ParentNode->Affinity.Mask) != v10->ParentNode->Affinity.Mask )
          {
            v10->AffinitizedCycles += v41;
          }
          if ( v8->WaitBlock[0].SparePtr )
            KiEndCounterAccumulation(v8);
        }
      }
    }
    _enable();
    if ( (*(_BYTE *)(NextThread + 2) & 4) != 0 )
    {
      if ( *(char *)(NextThread + 195) < 16
        && *(_QWORD *)(NextThread + 104)
        && (v49 = *(_QWORD *)(NextThread + 104)) != 0
        && (v50 = v10->ScbOffset + v49) != 0
        && (unsigned int)KiGetThreadEffectiveRankNonZero(NextThread, v50, 0LL) )
      {
        v48 = v51 + 1;
      }
      else
      {
        v48 = *(_BYTE *)(NextThread + 195);
      }
    }
    else
    {
      v48 = *(_BYTE *)(NextThread + 195);
    }
    *v10->PriorityState = v48;
    v10->CurrentThread = (_KTHREAD *)NextThread;
    *(_BYTE *)(NextThread + 388) = 2;
    v8->WaitReason = 33;
    v8->WaitIrql = v9;
    KiQueueReadyThread(v10, v8);
    LOBYTE(v52) = 1;
    KiSwapContext(v8, NextThread, v52);
    v7 = 0;
  }
  __writecr8(v9);
  return v7;
}
