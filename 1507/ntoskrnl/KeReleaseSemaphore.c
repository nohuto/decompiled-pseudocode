/*
 * XREFs of KeReleaseSemaphore @ 0x140048A40
 * Callers:
 *     AlpcpSignalAndWait @ 0x140044130 (AlpcpSignalAndWait.c)
 *     AlpcpSignal @ 0x1400444B0 (AlpcpSignal.c)
 *     HvlpEnterIumSecureMode @ 0x1401289D4 (HvlpEnterIumSecureMode.c)
 *     IoRaiseInformationalHardError @ 0x1401F6358 (IoRaiseInformationalHardError.c)
 *     PnpProcessRebalance @ 0x1401FBA84 (PnpProcessRebalance.c)
 *     NtSignalAndWaitForSingleObject @ 0x1402331B0 (NtSignalAndWaitForSingleObject.c)
 *     PopSystemIrpCompletion @ 0x1403EF484 (PopSystemIrpCompletion.c)
 *     PnpAllocateResources @ 0x14045C42C (PnpAllocateResources.c)
 *     IopUncacheInterfaceInformation @ 0x14045E660 (IopUncacheInterfaceInformation.c)
 *     AlpcpDoPortCleanup @ 0x1404A34DC (AlpcpDoPortCleanup.c)
 *     NtReleaseSemaphore @ 0x140522810 (NtReleaseSemaphore.c)
 *     NtWaitForKeyedEvent @ 0x1405534A0 (NtWaitForKeyedEvent.c)
 *     NtReleaseKeyedEvent @ 0x140553680 (NtReleaseKeyedEvent.c)
 *     IopAllocateBootResources @ 0x14059C808 (IopAllocateBootResources.c)
 *     IopInsertLegacyBusDeviceNode @ 0x1405B8508 (IopInsertLegacyBusDeviceNode.c)
 *     FsRtlpRegisterUncProvider @ 0x1405BB718 (FsRtlpRegisterUncProvider.c)
 *     FsRtlDeregisterUncProvider @ 0x14066D010 (FsRtlDeregisterUncProvider.c)
 *     IopLegacyResourceAllocation @ 0x14067F1F4 (IopLegacyResourceAllocation.c)
 *     PpProfileCancelHardwareProfileTransition @ 0x14068D9AC (PpProfileCancelHardwareProfileTransition.c)
 *     PpProfileCancelTransitioningDock @ 0x14068DAC4 (PpProfileCancelTransitioningDock.c)
 *     PpProfileCommitTransitioningDock @ 0x14068DC08 (PpProfileCommitTransitioningDock.c)
 *     PnpReallocateResources @ 0x140695AF8 (PnpReallocateResources.c)
 *     IopQueryConflictList @ 0x1406979A0 (IopQueryConflictList.c)
 *     VerifierKeReleaseSemaphore @ 0x1407489F4 (VerifierKeReleaseSemaphore.c)
 * Callees:
 *     RtlRaiseStatus @ 0x14001BB3C (RtlRaiseStatus.c)
 *     KiWakeQueueWaiter @ 0x140043EC0 (KiWakeQueueWaiter.c)
 *     KiExitDispatcher @ 0x14004C6B0 (KiExitDispatcher.c)
 *     KiTryUnwaitThread @ 0x14004DFB0 (KiTryUnwaitThread.c)
 *     KiRemoveBoostThread @ 0x14009AE80 (KiRemoveBoostThread.c)
 *     PpmPerfGetCurrentFrequency @ 0x14017063C (PpmPerfGetCurrentFrequency.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     KiBeginCounterAccumulation @ 0x140204F4C (KiBeginCounterAccumulation.c)
 *     KiEndCounterAccumulation @ 0x140205058 (KiEndCounterAccumulation.c)
 *     EtwTraceEnqueueWork @ 0x14025CFD4 (EtwTraceEnqueueWork.c)
 */

LONG __stdcall KeReleaseSemaphore(PRKSEMAPHORE Semaphore, KPRIORITY Increment, LONG Adjustment, BOOLEAN Wait)
{
  unsigned __int8 CurrentIrql; // r13
  struct _KPRCB *CurrentPrcb; // r15
  unsigned int v8; // ebx
  LONG SignalState; // r12d
  LONG v10; // eax
  struct _KSEMAPHORE *Flink; // r13
  __int64 v12; // rsi
  __int64 v13; // rcx
  _QWORD *v14; // rax
  char v15; // al
  bool v16; // zf
  unsigned __int8 v17; // bp
  __int64 v18; // rdi
  _KTHREAD *CurrentThread; // rbp
  bool v20; // al
  unsigned int v21; // ebx
  __int64 *v22; // rcx
  _KTHREAD *v23; // rbx
  unsigned __int64 v24; // rax
  __int64 v25; // rdi
  __int64 v26; // r10
  unsigned __int64 v27; // rsi
  unsigned __int64 SchedulingGroup; // rcx
  UCHAR Size; // r9
  unsigned int CurrentFrequency; // eax
  __int64 v31; // r11
  __int64 v32; // rcx
  unsigned __int64 *v33; // rdx
  unsigned __int64 v34; // r9
  unsigned int v35; // edx
  __int64 v36; // r10
  unsigned __int64 *v37; // rdx
  struct _SINGLE_LIST_ENTRY *Next; // r9
  unsigned __int64 QuantumTarget; // rax
  struct _KPRCB *v41; // [rsp+30h] [rbp-58h]
  unsigned __int8 v42; // [rsp+90h] [rbp+8h]
  bool v44; // [rsp+A0h] [rbp+18h]

  v44 = Wait != 0;
  CurrentIrql = KeGetCurrentIrql();
  v42 = CurrentIrql;
  __writecr8(2uLL);
  CurrentPrcb = KeGetCurrentPrcb();
  v8 = 0;
  if ( _interlockedbittestandset(&Semaphore->Header.Lock, 7u) )
  {
    do
    {
      if ( (++v8 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v8);
    }
    while ( (Semaphore->Header.LockNV & 0x80u) != 0 || _interlockedbittestandset(&Semaphore->Header.Lock, 7u) );
  }
  SignalState = Semaphore->Header.SignalState;
  v10 = SignalState + Adjustment;
  if ( SignalState + Adjustment > Semaphore->Limit || v10 < SignalState )
  {
    _InterlockedAnd(&Semaphore->Header.Lock, 0xFFFFFF7F);
    __writecr8(CurrentIrql);
    RtlRaiseStatus(-1073741753);
  }
  Semaphore->Header.SignalState = v10;
  if ( !SignalState )
  {
    Flink = (struct _KSEMAPHORE *)Semaphore->Header.WaitListHead.Flink;
    while ( Flink != (struct _KSEMAPHORE *)&Semaphore->Header.WaitListHead )
    {
      v12 = (__int64)Flink;
      Flink = *(struct _KSEMAPHORE **)&Flink->Header.Lock;
      v13 = *(_QWORD *)v12;
      v14 = *(_QWORD **)(v12 + 8);
      if ( *(_QWORD *)(*(_QWORD *)v12 + 8LL) != v12 || *v14 != v12 )
        __fastfail(3u);
      *v14 = v13;
      *(_QWORD *)(v13 + 8) = v14;
      v15 = *(_BYTE *)(v12 + 16);
      if ( v15 == 1 )
      {
        if ( (unsigned __int8)KiTryUnwaitThread(CurrentPrcb, v12, *(unsigned __int16 *)(v12 + 18), 0LL) )
        {
          v16 = Semaphore->Header.SignalState-- == 1;
          if ( v16 )
            break;
        }
      }
      else if ( v15 == 2 )
      {
        *(_BYTE *)(v12 + 17) = 5;
        v18 = *(_QWORD *)(v12 + 24);
        *(_QWORD *)v12 = 0LL;
        __writecr8(2uLL);
        v41 = KeGetCurrentPrcb();
        CurrentThread = v41->CurrentThread;
        if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
        {
          v20 = CurrentThread->WaitBlockFill6[68] == 2 && CurrentThread->NextProcessor == KeGetPcr()->Prcb.Number;
          EtwTraceEnqueueWork(CurrentThread, v12, v20);
        }
        v21 = 0;
        if ( _interlockedbittestandset((volatile signed __int32 *)v18, 7u) )
        {
          do
          {
            if ( (++v21 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
              _mm_pause();
            else
              HvlNotifyLongSpinWait(v21);
          }
          while ( (*(_DWORD *)v18 & 0x80u) != 0 || _interlockedbittestandset((volatile signed __int32 *)v18, 7u) );
        }
        if ( *(_QWORD *)(v18 + 16) == v18 + 8
          || *(_DWORD *)(v18 + 40) >= *(_DWORD *)(v18 + 44)
          || CurrentThread->Queue == (_DISPATCHER_HEADER *volatile)v18 && CurrentThread->WaitReason == 15
          || !KiWakeQueueWaiter((__int64)v41, v18, v12) )
        {
          ++*(_DWORD *)(v18 + 4);
          v22 = *(__int64 **)(v18 + 32);
          *(_QWORD *)v12 = v18 + 24;
          *(_QWORD *)(v12 + 8) = v22;
          if ( *v22 != v18 + 24 )
            __fastfail(3u);
          *v22 = v12;
          *(_QWORD *)(v18 + 32) = v12;
        }
        _InterlockedAnd((volatile signed __int32 *)v18, 0xFFFFFF7F);
        v16 = Semaphore->Header.SignalState-- == 1;
        if ( v16 )
          break;
      }
      else
      {
        KiTryUnwaitThread(CurrentPrcb, v12, 256LL, 0LL);
      }
    }
    CurrentIrql = v42;
  }
  _InterlockedAnd(&Semaphore->Header.Lock, 0xFFFFFF7F);
  if ( v44 )
  {
    v17 = 1;
  }
  else
  {
    v17 = 0;
    if ( (v44 & 2) != 0 )
    {
      v23 = CurrentPrcb->CurrentThread;
      if ( (*((_DWORD *)&v23->0 + 1) & 0x10) != 0 )
      {
        _interlockedbittestandreset((volatile signed __int32 *)&v23->116 + 1, 4u);
        _disable();
        CurrentPrcb->NestingLevel = 1;
        v24 = __rdtsc();
        v25 = 3LL;
        v26 = v24 - CurrentPrcb->StartCycles;
        v27 = v26 + v23->CycleTime;
        SchedulingGroup = v26 + v23->CurrentRunTime;
        v23->CycleTime = v27;
        CurrentPrcb->StartCycles = v24;
        Size = v23->Header.Size;
        if ( SchedulingGroup > 0xFFFFFFFF )
          SchedulingGroup = 0xFFFFFFFFLL;
        v23->CurrentRunTime = SchedulingGroup;
        if ( (Size & 0x3E) != 0 )
        {
          if ( (Size & 0x10) != 0 )
          {
            CurrentPrcb->TaggedCycles[v23->Tag] += CurrentPrcb->StartCycles - CurrentPrcb->TaggedCyclesStart;
            Size &= ~0x10u;
            CurrentPrcb->TaggedCyclesStart = 0LL;
          }
          if ( (Size & 0x3E) != 0 )
          {
            if ( (Size & 0x20) != 0 )
            {
              if ( v23[1].WaitBlock[2].SparePtr )
              {
                CurrentFrequency = PpmPerfGetCurrentFrequency(CurrentPrcb);
                v32 = 3LL;
                if ( CurrentFrequency / 0x19 < 3 )
                  v32 = CurrentFrequency / 0x19;
                v33 = (unsigned __int64 *)(v31 + 8 * (CurrentPrcb->PowerState.Class + 2 * v32));
                SchedulingGroup = v26 + *v33;
                *v33 = SchedulingGroup;
              }
              Size &= ~0x20u;
            }
            if ( (Size & 0x3E) != 0 )
            {
              SchedulingGroup = (unsigned __int64)v23->SchedulingGroup;
              if ( SchedulingGroup )
              {
                for ( SchedulingGroup += CurrentPrcb->ScbOffset;
                      SchedulingGroup;
                      SchedulingGroup = *(_QWORD *)(SchedulingGroup + 392) )
                {
                  *(_QWORD *)SchedulingGroup += v26;
                }
              }
              if ( (v23->Header.Size & 8) != 0 )
              {
                SchedulingGroup = CurrentPrcb->ParentNode->Affinity.Mask;
                if ( (SchedulingGroup & v23->Affinity.Mask) != SchedulingGroup )
                  CurrentPrcb->AffinitizedCycles += v26;
              }
              if ( v23->WaitBlock[0].SparePtr )
                KiEndCounterAccumulation(v23);
            }
          }
        }
        v34 = __rdtsc();
        CurrentPrcb->CycleTime += v34 - CurrentPrcb->StartCycles;
        if ( (v23->Header.Size & 0x20) != 0 )
        {
          v35 = (unsigned int)PpmPerfGetCurrentFrequency(CurrentPrcb) / 0x19;
          if ( v35 < 3 )
            v25 = v35;
          v37 = &CurrentPrcb->Cycles[v25][CurrentPrcb->PowerState.Class];
          SchedulingGroup = v36 + *v37;
          *v37 = SchedulingGroup;
        }
        CurrentPrcb->StartCycles = v34;
        if ( (v23->Header.Size & 0x10) != 0 )
          CurrentPrcb->TaggedCyclesStart = v34;
        if ( (v23->Header.Size & 2) != 0 )
          KiBeginCounterAccumulation(v23, 0LL);
        v16 = CurrentPrcb->InterruptRequest == 0;
        CurrentPrcb->NestingLevel = 0;
        if ( !v16 )
        {
          LOBYTE(SchedulingGroup) = 2;
          CurrentPrcb->InterruptRequest = 0;
          HalRequestSoftwareInterrupt(SchedulingGroup);
        }
        _enable();
        Next = CurrentPrcb->DeferredReadyListHead.Next;
        if ( Next )
        {
          QuantumTarget = v23->QuantumTarget;
          if ( QuantumTarget > v27 )
            Next[-23].Next = (struct _SINGLE_LIST_ENTRY *)((char *)Next[-23].Next + QuantumTarget - v27);
        }
        KiRemoveBoostThread(CurrentPrcb, v23);
        v23->QuantumTarget = v27;
      }
    }
  }
  KiExitDispatcher((_DWORD)CurrentPrcb, v17, 1, Increment, CurrentIrql);
  return SignalState;
}
