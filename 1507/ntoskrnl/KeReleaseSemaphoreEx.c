/*
 * XREFs of KeReleaseSemaphoreEx @ 0x140044830
 * Callers:
 *     AlpcpSignalAndWait @ 0x140044130 (AlpcpSignalAndWait.c)
 *     AlpcpSignal @ 0x1400444B0 (AlpcpSignal.c)
 *     PnpDeviceCompletionQueueDispatchedEntryCompleted @ 0x1400CFF8C (PnpDeviceCompletionQueueDispatchedEntryCompleted.c)
 *     MiCheckForControlAreaDeletion @ 0x1400E6854 (MiCheckForControlAreaDeletion.c)
 *     MiContractPagingFiles @ 0x1400EE56C (MiContractPagingFiles.c)
 *     PopDispatchQuerySetIrp @ 0x140137BD8 (PopDispatchQuerySetIrp.c)
 *     PopIrpWorker @ 0x140156584 (PopIrpWorker.c)
 *     MiQueuePageFileExtension @ 0x140221F24 (MiQueuePageFileExtension.c)
 *     MiContractWsSwapPageFileWorker @ 0x14022C9F8 (MiContractWsSwapPageFileWorker.c)
 *     AlpcpDispatchReplyToWaitingThread @ 0x140480E50 (AlpcpDispatchReplyToWaitingThread.c)
 *     AlpcpCompleteDispatchMessage @ 0x14049B070 (AlpcpCompleteDispatchMessage.c)
 *     AlpcpDoPortCleanup @ 0x1404A34DC (AlpcpDoPortCleanup.c)
 *     AlpcpDisconnectPort @ 0x1404A3D10 (AlpcpDisconnectPort.c)
 *     AlpcpCancelMessagesByRequestor @ 0x1404A41F0 (AlpcpCancelMessagesByRequestor.c)
 *     AlpcpCancelMessage @ 0x14052BBC4 (AlpcpCancelMessage.c)
 *     AlpcpReplyLegacySynchronousRequest @ 0x14052EE8C (AlpcpReplyLegacySynchronousRequest.c)
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

__int64 __fastcall KeReleaseSemaphoreEx(__int64 a1, int a2, int a3, __int64 a4, char a5)
{
  unsigned __int8 CurrentIrql; // r13
  struct _KPRCB *CurrentPrcb; // r15
  unsigned int v9; // ebx
  unsigned int v10; // r12d
  int v11; // eax
  _QWORD *v12; // r12
  __int64 v13; // rsi
  __int64 v14; // rcx
  _QWORD *v15; // rax
  char v16; // al
  bool v17; // zf
  unsigned __int8 v18; // bp
  __int64 v19; // rdi
  _KTHREAD *CurrentThread; // rbp
  bool v21; // al
  unsigned int v22; // ebx
  __int64 *v23; // rcx
  _KTHREAD *v24; // rbx
  unsigned __int64 v25; // rax
  __int64 v26; // rdi
  __int64 v27; // r10
  unsigned __int64 v28; // rsi
  unsigned __int64 SchedulingGroup; // rcx
  UCHAR Size; // r9
  unsigned int CurrentFrequency; // eax
  __int64 v32; // r11
  __int64 v33; // rcx
  unsigned __int64 *v34; // rdx
  unsigned __int64 v35; // r9
  unsigned int v36; // edx
  __int64 v37; // r10
  unsigned __int64 *v38; // rdx
  struct _SINGLE_LIST_ENTRY *Next; // r9
  unsigned __int64 QuantumTarget; // rax
  struct _KPRCB *v42; // [rsp+80h] [rbp+8h]
  unsigned int v44; // [rsp+90h] [rbp+18h]

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  CurrentPrcb = KeGetCurrentPrcb();
  v9 = 0;
  if ( _interlockedbittestandset((volatile signed __int32 *)a1, 7u) )
  {
    do
    {
      if ( (++v9 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v9);
    }
    while ( (*(_DWORD *)a1 & 0x80u) != 0 || _interlockedbittestandset((volatile signed __int32 *)a1, 7u) );
  }
  v10 = *(_DWORD *)(a1 + 4);
  v44 = v10;
  v11 = v10 + a3;
  if ( (signed int)(v10 + a3) > *(_DWORD *)(a1 + 24) || v11 < (int)v10 )
  {
    _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
    __writecr8(CurrentIrql);
    RtlRaiseStatus(-1073741753);
  }
  *(_DWORD *)(a1 + 4) = v11;
  if ( !v10 )
  {
    v12 = *(_QWORD **)(a1 + 8);
    while ( v12 != (_QWORD *)(a1 + 8) )
    {
      v13 = (__int64)v12;
      v12 = (_QWORD *)*v12;
      v14 = *(_QWORD *)v13;
      v15 = *(_QWORD **)(v13 + 8);
      if ( *(_QWORD *)(*(_QWORD *)v13 + 8LL) != v13 || *v15 != v13 )
        __fastfail(3u);
      *v15 = v14;
      *(_QWORD *)(v14 + 8) = v15;
      v16 = *(_BYTE *)(v13 + 16);
      if ( v16 == 1 )
      {
        if ( (unsigned __int8)KiTryUnwaitThread(CurrentPrcb, v13, *(unsigned __int16 *)(v13 + 18), 0LL) )
        {
          v17 = (*(_DWORD *)(a1 + 4))-- == 1;
          if ( v17 )
            break;
        }
      }
      else if ( v16 == 2 )
      {
        *(_BYTE *)(v13 + 17) = 5;
        v19 = *(_QWORD *)(v13 + 24);
        *(_QWORD *)v13 = 0LL;
        __writecr8(2uLL);
        v42 = KeGetCurrentPrcb();
        CurrentThread = v42->CurrentThread;
        if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
        {
          v21 = CurrentThread->WaitBlockFill6[68] == 2 && CurrentThread->NextProcessor == KeGetPcr()->Prcb.Number;
          EtwTraceEnqueueWork(CurrentThread, v13, v21);
        }
        v22 = 0;
        if ( _interlockedbittestandset((volatile signed __int32 *)v19, 7u) )
        {
          do
          {
            if ( (++v22 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
              _mm_pause();
            else
              HvlNotifyLongSpinWait(v22);
          }
          while ( (*(_DWORD *)v19 & 0x80u) != 0 || _interlockedbittestandset((volatile signed __int32 *)v19, 7u) );
        }
        if ( *(_QWORD *)(v19 + 16) == v19 + 8
          || *(_DWORD *)(v19 + 40) >= *(_DWORD *)(v19 + 44)
          || CurrentThread->Queue == (_DISPATCHER_HEADER *volatile)v19 && CurrentThread->WaitReason == 15
          || !KiWakeQueueWaiter((__int64)v42, v19, v13) )
        {
          ++*(_DWORD *)(v19 + 4);
          v23 = *(__int64 **)(v19 + 32);
          *(_QWORD *)v13 = v19 + 24;
          *(_QWORD *)(v13 + 8) = v23;
          if ( *v23 != v19 + 24 )
            __fastfail(3u);
          *v23 = v13;
          *(_QWORD *)(v19 + 32) = v13;
        }
        _InterlockedAnd((volatile signed __int32 *)v19, 0xFFFFFF7F);
        v17 = (*(_DWORD *)(a1 + 4))-- == 1;
        if ( v17 )
          break;
      }
      else
      {
        KiTryUnwaitThread(CurrentPrcb, v13, 256LL, 0LL);
      }
    }
    v10 = v44;
  }
  _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
  if ( (a5 & 1) != 0 )
  {
    v18 = 1;
  }
  else
  {
    v18 = 0;
    if ( (a5 & 2) != 0 )
    {
      v24 = CurrentPrcb->CurrentThread;
      if ( (*((_DWORD *)&v24->0 + 1) & 0x10) != 0 )
      {
        _interlockedbittestandreset((volatile signed __int32 *)&v24->116 + 1, 4u);
        _disable();
        CurrentPrcb->NestingLevel = 1;
        v25 = __rdtsc();
        v26 = 3LL;
        v27 = v25 - CurrentPrcb->StartCycles;
        v28 = v27 + v24->CycleTime;
        SchedulingGroup = v27 + v24->CurrentRunTime;
        v24->CycleTime = v28;
        CurrentPrcb->StartCycles = v25;
        Size = v24->Header.Size;
        if ( SchedulingGroup > 0xFFFFFFFF )
          SchedulingGroup = 0xFFFFFFFFLL;
        v24->CurrentRunTime = SchedulingGroup;
        if ( (Size & 0x3E) != 0 )
        {
          if ( (Size & 0x10) != 0 )
          {
            CurrentPrcb->TaggedCycles[v24->Tag] += CurrentPrcb->StartCycles - CurrentPrcb->TaggedCyclesStart;
            Size &= ~0x10u;
            CurrentPrcb->TaggedCyclesStart = 0LL;
          }
          if ( (Size & 0x3E) != 0 )
          {
            if ( (Size & 0x20) != 0 )
            {
              if ( v24[1].WaitBlock[2].SparePtr )
              {
                CurrentFrequency = PpmPerfGetCurrentFrequency(CurrentPrcb);
                v33 = 3LL;
                if ( CurrentFrequency / 0x19 < 3 )
                  v33 = CurrentFrequency / 0x19;
                v34 = (unsigned __int64 *)(v32 + 8 * (CurrentPrcb->PowerState.Class + 2 * v33));
                SchedulingGroup = v27 + *v34;
                *v34 = SchedulingGroup;
              }
              Size &= ~0x20u;
            }
            if ( (Size & 0x3E) != 0 )
            {
              SchedulingGroup = (unsigned __int64)v24->SchedulingGroup;
              if ( SchedulingGroup )
              {
                for ( SchedulingGroup += CurrentPrcb->ScbOffset;
                      SchedulingGroup;
                      SchedulingGroup = *(_QWORD *)(SchedulingGroup + 392) )
                {
                  *(_QWORD *)SchedulingGroup += v27;
                }
              }
              if ( (v24->Header.Size & 8) != 0 )
              {
                SchedulingGroup = CurrentPrcb->ParentNode->Affinity.Mask;
                if ( (SchedulingGroup & v24->Affinity.Mask) != SchedulingGroup )
                  CurrentPrcb->AffinitizedCycles += v27;
              }
              if ( v24->WaitBlock[0].SparePtr )
                KiEndCounterAccumulation(v24);
            }
          }
        }
        v35 = __rdtsc();
        CurrentPrcb->CycleTime += v35 - CurrentPrcb->StartCycles;
        if ( (v24->Header.Size & 0x20) != 0 )
        {
          v36 = (unsigned int)PpmPerfGetCurrentFrequency(CurrentPrcb) / 0x19;
          if ( v36 < 3 )
            v26 = v36;
          v38 = &CurrentPrcb->Cycles[v26][CurrentPrcb->PowerState.Class];
          SchedulingGroup = v37 + *v38;
          *v38 = SchedulingGroup;
        }
        CurrentPrcb->StartCycles = v35;
        if ( (v24->Header.Size & 0x10) != 0 )
          CurrentPrcb->TaggedCyclesStart = v35;
        if ( (v24->Header.Size & 2) != 0 )
          KiBeginCounterAccumulation(v24, 0LL);
        v17 = CurrentPrcb->InterruptRequest == 0;
        CurrentPrcb->NestingLevel = 0;
        if ( !v17 )
        {
          LOBYTE(SchedulingGroup) = 2;
          CurrentPrcb->InterruptRequest = 0;
          HalRequestSoftwareInterrupt(SchedulingGroup);
        }
        _enable();
        Next = CurrentPrcb->DeferredReadyListHead.Next;
        if ( Next )
        {
          QuantumTarget = v24->QuantumTarget;
          if ( QuantumTarget > v28 )
            Next[-23].Next = (struct _SINGLE_LIST_ENTRY *)((char *)Next[-23].Next + QuantumTarget - v28);
        }
        KiRemoveBoostThread(CurrentPrcb, v24);
        v24->QuantumTarget = v28;
      }
    }
  }
  KiExitDispatcher((_DWORD)CurrentPrcb, v18, 1, a2, CurrentIrql);
  return v10;
}
