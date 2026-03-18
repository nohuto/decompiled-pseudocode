/*
 * XREFs of PpmCheckRun @ 0x1400E7D30
 * Callers:
 *     <none>
 * Callees:
 *     KiWakeQueueWaiter @ 0x140043EC0 (KiWakeQueueWaiter.c)
 *     KiDeliverApc @ 0x140048670 (KiDeliverApc.c)
 *     KiTryUnwaitThread @ 0x14004DFB0 (KiTryUnwaitThread.c)
 *     KiAbProcessContextSwitch @ 0x1400A1D30 (KiAbProcessContextSwitch.c)
 *     PpmEventTracePerfCheckStop @ 0x1400E8490 (PpmEventTracePerfCheckStop.c)
 *     KiQueueReadyThread @ 0x1400EAD80 (KiQueueReadyThread.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     KiProcessThreadWaitList @ 0x1400F7350 (KiProcessThreadWaitList.c)
 *     PoGetFrequencyBucket @ 0x140170614 (PoGetFrequencyBucket.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     KiSwapContext @ 0x14018A310 (KiSwapContext.c)
 *     KiEndCounterAccumulation @ 0x140205058 (KiEndCounterAccumulation.c)
 *     EtwTraceEnqueueWork @ 0x14025CFD4 (EtwTraceEnqueueWork.c)
 */

__int64 __fastcall PpmCheckRun(__int64 *CurrentThread)
{
  __int64 v1; // rdx
  __int64 (*v2)(void); // r8
  __int64 result; // rax
  __int64 v4; // r8
  int v5; // edi
  unsigned __int8 CurrentIrql; // r14
  struct _KPRCB *CurrentPrcb; // r12
  unsigned int v8; // ebx
  int v9; // eax
  __int64 *v10; // r14
  __int64 v11; // rsi
  __int64 v12; // rcx
  _QWORD *v13; // rax
  char v14; // al
  __int64 v15; // rdi
  struct _KPRCB *v16; // r13
  _KTHREAD *v17; // rbp
  bool v18; // al
  unsigned int v19; // ebx
  __int64 v20; // rsi
  char v21; // al
  __int64 v22; // r8
  __int64 v23; // rdi
  struct _KPRCB *v24; // r13
  _KTHREAD *v25; // rbp
  bool v26; // al
  unsigned int v27; // ebx
  __int64 *v28; // rcx
  _KTHREAD *v29; // rdi
  unsigned int v30; // ebx
  _KTHREAD *NextThread; // rbp
  unsigned __int64 v32; // rax
  __int64 v33; // rsi
  unsigned __int64 v34; // rcx
  UCHAR Size; // bl
  char *SparePtr; // r14
  char *v37; // rdx
  _KSCHEDULING_GROUP *volatile SchedulingGroup; // rcx
  _QWORD *i; // rcx
  bool v40; // zf
  __int16 v41; // ax
  unsigned __int8 v42; // [rsp+20h] [rbp-38h]
  __int64 v43; // [rsp+28h] [rbp-30h]

  v1 = (unsigned int)PpmCheckPipelineIndex;
  v2 = *(__int64 (**)(void))(PpmCheckPipeline + 8LL * (unsigned int)PpmCheckPipelineIndex);
  if ( !v2 )
  {
LABEL_4:
    v4 = 1LL;
    v43 = PpmPerfPolicyLock;
    PpmPerfPolicyLock = 0LL;
    if ( (dword_14032E2A8 & 0x7F) != 0 )
    {
      v5 = 0;
    }
    else
    {
      if ( dword_14032E2AC == 1 )
      {
LABEL_126:
        if ( v43 )
        {
          CurrentThread = (__int64 *)KeGetCurrentThread();
          v41 = *((_WORD *)CurrentThread + 243) + 1;
          *((_WORD *)CurrentThread + 243) = v41;
          if ( !v41 && (__int64 *)CurrentThread[19] != CurrentThread + 19 )
            KiCheckForKernelApcDelivery(CurrentThread);
        }
        return PpmEventTracePerfCheckStop(CurrentThread, v1, v4);
      }
      v5 = 1;
    }
    CurrentIrql = KeGetCurrentIrql();
    v42 = CurrentIrql;
    v1 = 2LL;
    __writecr8(2uLL);
    CurrentPrcb = KeGetCurrentPrcb();
    v8 = 0;
    if ( _interlockedbittestandset(&dword_14032E2A8, 7u) )
    {
      do
      {
        if ( (++v8 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v8);
      }
      while ( (dword_14032E2A8 & 0x80u) != 0 || _interlockedbittestandset(&dword_14032E2A8, 7u) );
      v1 = 2LL;
      v4 = 1LL;
    }
    v9 = dword_14032E2AC;
    dword_14032E2AC = 1;
    if ( v9 )
    {
LABEL_85:
      _InterlockedAnd(&dword_14032E2A8, 0xFFFFFF7F);
      if ( CurrentPrcb->DeferredReadyListHead.Next )
        KiProcessThreadWaitList(CurrentPrcb, 1LL, 0LL, 0LL);
      if ( CurrentIrql >= 2u )
      {
        if ( CurrentPrcb->NextThread && !CurrentPrcb->DpcRoutineActive )
        {
          if ( CurrentPrcb->NestingLevel )
          {
            CurrentPrcb->InterruptRequest = 1;
          }
          else
          {
            LOBYTE(CurrentThread) = 2;
            HalRequestSoftwareInterrupt(CurrentThread);
          }
        }
      }
      else
      {
        v29 = CurrentPrcb->CurrentThread;
        if ( CurrentPrcb->NextThread )
        {
          KiAbProcessContextSwitch((__int64)CurrentPrcb->CurrentThread, 0);
          v30 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
          {
            do
            {
              if ( (++v30 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
                _mm_pause();
              else
                HvlNotifyLongSpinWait(v30);
            }
            while ( CurrentPrcb->PrcbLock );
          }
          NextThread = CurrentPrcb->NextThread;
          CurrentPrcb->NextThread = 0LL;
          _disable();
          CurrentPrcb->NestingLevel = 1;
          v32 = __rdtsc();
          v33 = v32 - CurrentPrcb->StartCycles;
          v34 = v33 + v29->CurrentRunTime;
          v29->CycleTime += v33;
          CurrentPrcb->StartCycles = v32;
          Size = v29->Header.Size;
          if ( v34 > 0xFFFFFFFF )
            LODWORD(v34) = -1;
          v29->CurrentRunTime = v34;
          if ( (Size & 0x3E) != 0 )
          {
            if ( (Size & 0x10) != 0 )
            {
              CurrentPrcb->TaggedCycles[v29->Tag] += CurrentPrcb->StartCycles - CurrentPrcb->TaggedCyclesStart;
              Size &= ~0x10u;
              CurrentPrcb->TaggedCyclesStart = 0LL;
            }
            if ( (Size & 0x3E) != 0 )
            {
              if ( (Size & 0x20) != 0 )
              {
                SparePtr = (char *)v29[1].WaitBlock[2].SparePtr;
                if ( SparePtr )
                {
                  v37 = &SparePtr[16 * (unsigned int)PoGetFrequencyBucket(CurrentPrcb)
                                + 8 * CurrentPrcb->PowerState.Class];
                  *(_QWORD *)v37 += v33;
                }
                CurrentIrql = v42;
                Size &= ~0x20u;
              }
              if ( (Size & 0x3E) != 0 )
              {
                SchedulingGroup = v29->SchedulingGroup;
                if ( SchedulingGroup )
                {
                  for ( i = (_QWORD *)((char *)&SchedulingGroup->Policy + CurrentPrcb->ScbOffset); i; i = (_QWORD *)i[49] )
                    *i += v33;
                }
                if ( (v29->Header.Size & 8) != 0
                  && (v29->Affinity.Mask & CurrentPrcb->ParentNode->Affinity.Mask) != CurrentPrcb->ParentNode->Affinity.Mask )
                {
                  CurrentPrcb->AffinitizedCycles += v33;
                }
                if ( v29->WaitBlock[0].SparePtr )
                  KiEndCounterAccumulation(v29);
              }
            }
          }
          _enable();
          CurrentPrcb->CurrentThread = NextThread;
          NextThread->WaitBlockFill6[68] = 2;
          v29->WaitReason = 32;
          v29->WaitIrql = CurrentIrql;
          KiQueueReadyThread(CurrentPrcb, v29);
          v40 = (unsigned __int8)KiSwapContext(v29, NextThread, CurrentIrql) == 0;
        }
        else
        {
          v40 = (v29->MiscFlags & 0x40) == 0;
        }
        if ( !v40 )
        {
          __writecr8(1uLL);
          v29->MiscFlags &= ~0x40u;
          KiDeliverApc(0, 0, 0LL);
        }
        __writecr8(CurrentIrql);
      }
      goto LABEL_126;
    }
    v10 = (__int64 *)qword_14032E2B0;
    if ( !v5 )
    {
      if ( (__int64 *)qword_14032E2B0 != &qword_14032E2B0 )
      {
        while ( 1 )
        {
          v11 = (__int64)v10;
          v10 = (__int64 *)*v10;
          v12 = *(_QWORD *)v11;
          v13 = *(_QWORD **)(v11 + 8);
          if ( *(_QWORD *)(*(_QWORD *)v11 + 8LL) != v11 || *v13 != v11 )
            __fastfail(3u);
          *v13 = v12;
          *(_QWORD *)(v12 + 8) = v13;
          v14 = *(_BYTE *)(v11 + 16);
          if ( v14 == 1 )
          {
            if ( (unsigned __int8)KiTryUnwaitThread((__int64)CurrentPrcb, v11, *(unsigned __int16 *)(v11 + 18), 0LL) )
            {
              if ( !--dword_14032E2AC )
                goto LABEL_84;
            }
          }
          else if ( v14 == 2 )
          {
            *(_BYTE *)(v11 + 17) = 5;
            v15 = *(_QWORD *)(v11 + 24);
            *(_QWORD *)v11 = 0LL;
            __writecr8(2uLL);
            v16 = KeGetCurrentPrcb();
            v17 = v16->CurrentThread;
            if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
            {
              v18 = v17->WaitBlockFill6[68] == 2 && v17->NextProcessor == KeGetPcr()->Prcb.Number;
              EtwTraceEnqueueWork(v16->CurrentThread, v11, v18);
            }
            v19 = 0;
            if ( _interlockedbittestandset((volatile signed __int32 *)v15, 7u) )
            {
              do
              {
                if ( (++v19 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
                  _mm_pause();
                else
                  HvlNotifyLongSpinWait(v19);
              }
              while ( (*(_DWORD *)v15 & 0x80u) != 0 || _interlockedbittestandset((volatile signed __int32 *)v15, 7u) );
            }
            if ( *(_QWORD *)(v15 + 16) == v15 + 8
              || *(_DWORD *)(v15 + 40) >= *(_DWORD *)(v15 + 44)
              || v17->Queue == (_DISPATCHER_HEADER *volatile)v15 && v17->WaitReason == 15
              || !KiWakeQueueWaiter((__int64)v16, v15, v11) )
            {
              ++*(_DWORD *)(v15 + 4);
              CurrentThread = *(__int64 **)(v15 + 32);
              *(_QWORD *)v11 = v15 + 24;
              *(_QWORD *)(v11 + 8) = CurrentThread;
              if ( *CurrentThread != v15 + 24 )
                __fastfail(3u);
              *CurrentThread = v11;
              *(_QWORD *)(v15 + 32) = v11;
            }
            _InterlockedAnd((volatile signed __int32 *)v15, 0xFFFFFF7F);
            if ( !--dword_14032E2AC )
              goto LABEL_84;
          }
          else
          {
            KiTryUnwaitThread((__int64)CurrentPrcb, v11, 256LL, 0LL);
          }
          if ( v10 == &qword_14032E2B0 )
            goto LABEL_84;
          v1 = 2LL;
          v4 = 1LL;
        }
      }
      goto LABEL_84;
    }
    CurrentThread = &qword_14032E2B0;
    if ( (__int64 *)qword_14032E2B0 == &qword_14032E2B0 )
    {
LABEL_83:
      qword_14032E2B8 = (__int64)&qword_14032E2B0;
      qword_14032E2B0 = (__int64)&qword_14032E2B0;
LABEL_84:
      CurrentIrql = v42;
      goto LABEL_85;
    }
    while ( 1 )
    {
      v20 = (__int64)v10;
      v10 = (__int64 *)*v10;
      v21 = *(_BYTE *)(v20 + 16);
      if ( v21 == 1 )
        break;
      if ( v21 != 2 )
      {
        v22 = 256LL;
        goto LABEL_79;
      }
      *(_BYTE *)(v20 + 17) = 5;
      v23 = *(_QWORD *)(v20 + 24);
      *(_QWORD *)v20 = 0LL;
      __writecr8(2uLL);
      v24 = KeGetCurrentPrcb();
      v25 = v24->CurrentThread;
      if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
      {
        v26 = v25->WaitBlockFill6[68] == 2 && v25->NextProcessor == KeGetPcr()->Prcb.Number;
        EtwTraceEnqueueWork(v24->CurrentThread, v20, v26);
      }
      v27 = 0;
      if ( _interlockedbittestandset((volatile signed __int32 *)v23, 7u) )
      {
        do
        {
          if ( (++v27 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
            _mm_pause();
          else
            HvlNotifyLongSpinWait(v27);
        }
        while ( (*(_DWORD *)v23 & 0x80u) != 0 || _interlockedbittestandset((volatile signed __int32 *)v23, 7u) );
      }
      if ( *(_QWORD *)(v23 + 16) == v23 + 8
        || *(_DWORD *)(v23 + 40) >= *(_DWORD *)(v23 + 44)
        || v25->Queue == (_DISPATCHER_HEADER *volatile)v23 && v25->WaitReason == 15
        || !KiWakeQueueWaiter((__int64)v24, v23, v20) )
      {
        ++*(_DWORD *)(v23 + 4);
        v28 = *(__int64 **)(v23 + 32);
        *(_QWORD *)v20 = v23 + 24;
        *(_QWORD *)(v20 + 8) = v28;
        if ( *v28 != v23 + 24 )
          __fastfail(3u);
        *v28 = v20;
        *(_QWORD *)(v23 + 32) = v20;
      }
      _InterlockedAnd((volatile signed __int32 *)v23, 0xFFFFFF7F);
LABEL_80:
      CurrentThread = &qword_14032E2B0;
      if ( v10 == &qword_14032E2B0 )
        goto LABEL_83;
      v1 = 2LL;
      v4 = 1LL;
    }
    v22 = *(unsigned __int16 *)(v20 + 18);
LABEL_79:
    KiTryUnwaitThread((__int64)CurrentPrcb, v20, v22, 0LL);
    goto LABEL_80;
  }
  while ( 1 )
  {
    PpmCheckPipelineIndex = v1 + 1;
    result = v2();
    if ( !(_BYTE)result )
      return result;
    v1 = (unsigned int)PpmCheckPipelineIndex;
    v2 = *(__int64 (**)(void))(PpmCheckPipeline + 8LL * (unsigned int)PpmCheckPipelineIndex);
    if ( !v2 )
      goto LABEL_4;
  }
}
