/*
 * XREFs of ExTryQueueWorkItem @ 0x1400292FC
 * Callers:
 *     PopFxQueueWorkOrder @ 0x140029174 (PopFxQueueWorkOrder.c)
 *     IoTryQueueWorkItem @ 0x140132764 (IoTryQueueWorkItem.c)
 * Callees:
 *     KeInsertPriQueue @ 0x140029C68 (KeInsertPriQueue.c)
 *     KiWakeQueueWaiter @ 0x140043EC0 (KiWakeQueueWaiter.c)
 *     KiDeliverApc @ 0x140048670 (KiDeliverApc.c)
 *     KiTryUnwaitThread @ 0x14004DFB0 (KiTryUnwaitThread.c)
 *     KiAbProcessContextSwitch @ 0x1400A1D30 (KiAbProcessContextSwitch.c)
 *     MmGetNextNode @ 0x1400E70A8 (MmGetNextNode.c)
 *     KiQueueReadyThread @ 0x1400EAD80 (KiQueueReadyThread.c)
 *     KiReadyThread @ 0x1401109F0 (KiReadyThread.c)
 *     PoGetFrequencyBucket @ 0x140170614 (PoGetFrequencyBucket.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     KiSwapContext @ 0x14018A310 (KiSwapContext.c)
 *     KiEndCounterAccumulation @ 0x140205058 (KiEndCounterAccumulation.c)
 *     EtwTraceEnqueueWork @ 0x14025CFD4 (EtwTraceEnqueueWork.c)
 *     EtwTraceReadyThread @ 0x14025D4F0 (EtwTraceReadyThread.c)
 */

char __fastcall ExTryQueueWorkItem(_QWORD *BugCheckParameter2, int a2)
{
  unsigned int v2; // r12d
  int v3; // r10d
  char inserted; // r11
  ULONG64 v5; // r9
  unsigned __int64 v6; // r9
  int v7; // r8d
  unsigned __int16 NextNode; // ax
  __int64 v9; // rsi
  __int64 v10; // rdx
  int v11; // ecx
  __int64 v12; // rbx
  __int64 v13; // r8
  __int64 v14; // rdx
  unsigned __int64 v15; // rcx
  int v16; // edi
  struct _KPRCB *CurrentPrcb; // rbp
  unsigned int v18; // ebx
  int v19; // eax
  _QWORD *v20; // rax
  _QWORD *v21; // r12
  _QWORD *v22; // rbx
  __int64 v23; // rcx
  _QWORD *v24; // rax
  char v25; // al
  bool v26; // zf
  struct _SINGLE_LIST_ENTRY *Next; // r13
  struct _SINGLE_LIST_ENTRY *v28; // rsi
  struct _SINGLE_LIST_ENTRY *v29; // rbx
  struct _SINGLE_LIST_ENTRY *v30; // r12
  volatile signed __int32 *v31; // rdi
  unsigned int v32; // r14d
  __int64 v33; // rdi
  _KTHREAD *v34; // r13
  bool v35; // al
  unsigned int v36; // r14d
  __int64 *v37; // r14
  __int64 *j; // rax
  __int64 *v39; // rdi
  char v40; // al
  __int64 v41; // r8
  __int64 v42; // rbx
  _KTHREAD *v43; // r13
  char v44; // al
  struct _SINGLE_LIST_ENTRY *v45; // rcx
  struct _SINGLE_LIST_ENTRY *v46; // rax
  unsigned __int8 v47; // si
  _KTHREAD *CurrentThread; // rbx
  unsigned int v49; // edi
  _KTHREAD *NextThread; // r13
  unsigned __int64 v51; // rax
  __int64 v52; // r14
  unsigned __int64 v53; // rcx
  UCHAR Size; // di
  _QWORD *SparePtr; // rsi
  __int64 v56; // r8
  _KSCHEDULING_GROUP *volatile SchedulingGroup; // rcx
  _QWORD *i; // rcx
  __int64 v59; // r8
  int v61; // [rsp+30h] [rbp-68h]
  int v62; // [rsp+34h] [rbp-64h] BYREF
  __int64 v63; // [rsp+38h] [rbp-60h]
  struct _KPRCB *v64; // [rsp+40h] [rbp-58h]
  __int64 *v65; // [rsp+48h] [rbp-50h]
  __int64 CurrentIrql; // [rsp+50h] [rbp-48h]
  unsigned __int16 v67; // [rsp+B8h] [rbp+20h]

  v2 = 0;
  v3 = (int)BugCheckParameter2;
  inserted = 0;
  v62 = 0;
  if ( *BugCheckParameter2 )
    KeBugCheckEx(0xE4u, 1uLL, (ULONG_PTR)BugCheckParameter2, a2, 0LL);
  if ( (unsigned int)(a2 - 7) <= 0x18 || a2 >= 64 )
    KeBugCheckEx(0xE4u, 6uLL, (ULONG_PTR)BugCheckParameter2, a2, 0LL);
  v5 = BugCheckParameter2[2];
  if ( v5 <= MmUserProbeAddress )
    KeBugCheckEx(0xE4u, 7uLL, (ULONG_PTR)BugCheckParameter2, v5, 0LL);
  v6 = 0x140000000uLL;
  if ( (unsigned int)a2 >= 7 )
    v7 = a2 - 32;
  else
    v7 = ExpBuiltinPriorities[a2];
  v61 = v7;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  NextNode = KeGetCurrentPrcb()->ParentNode->Affinity.Reserved[0];
  v67 = NextNode;
  if ( NextNode < (unsigned __int16)KeNumberNodes )
  {
    while ( 1 )
    {
      v9 = *(_QWORD *)(v6 + 8LL * NextNode + 4080704);
      if ( (_UNKNOWN *)v9 == (_UNKNOWN *)((char *)&KiNodeInit + 256 * (unsigned __int64)NextNode) )
        goto LABEL_162;
      if ( !v9 )
        goto LABEL_162;
      if ( (*(_DWORD *)(v9 + 1308) & 1) == 0 )
        goto LABEL_162;
      v10 = *(_QWORD *)(v9 + 256);
      if ( (v10 & 1) != 0 || !v10 )
        goto LABEL_162;
      v11 = *(_DWORD *)(v10 + 704) & 0x3FFF;
      if ( (*(_DWORD *)(v10 + 704) & 0x4000) != 0 )
        --v11;
      if ( v11 < (2 * *(_DWORD *)(v10 + 708)) >> 1 )
        goto LABEL_162;
      v12 = *(_QWORD *)(v9 + 256);
      if ( (v12 & 1) != 0 )
        v12 = 0LL;
      inserted = KeInsertPriQueue(v12, v3, v7, v6, 2);
      if ( inserted )
        goto LABEL_169;
      *(_DWORD *)(v12 + 708) |= 0x80000000;
      v14 = *(unsigned int *)(v12 + 704);
      v15 = (unsigned int)((2 * *(_DWORD *)(v12 + 708)) >> 1);
      if ( (int)v14 >= (int)v15
        && ((int)v14 >= *(_DWORD *)(v12 + 712)
         || *(_QWORD *)(v12 + 8) != v12 + 8
         || !*(_DWORD *)(v12 + 4) && *(int *)(v12 + 708) >= 0) )
      {
        goto LABEL_162;
      }
      if ( (*(_BYTE *)(v9 + 1040) & 0x7F) != 0 )
      {
        v16 = 0;
      }
      else
      {
        if ( *(_DWORD *)(v9 + 1044) == 1 )
          goto LABEL_162;
        v16 = 1;
      }
      v63 = KeGetCurrentIrql();
      __writecr8(2uLL);
      CurrentPrcb = KeGetCurrentPrcb();
      v18 = 0;
      while ( _interlockedbittestandset((volatile signed __int32 *)(v9 + 1040), 7u) )
      {
        do
        {
          if ( (++v18 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
            _mm_pause();
          else
            HvlNotifyLongSpinWait(v18);
        }
        while ( (*(_DWORD *)(v9 + 1040) & 0x80u) != 0 );
      }
      v19 = *(_DWORD *)(v9 + 1044);
      *(_DWORD *)(v9 + 1044) = 1;
      if ( !v19 )
        break;
LABEL_45:
      _InterlockedAnd((volatile signed __int32 *)(v9 + 1040), 0xFFFFFF7F);
      Next = CurrentPrcb->DeferredReadyListHead.Next;
      if ( Next )
      {
        CurrentPrcb->DeferredReadyListHead.Next = 0LL;
        do
        {
          v28 = Next - 27;
          Next = Next->Next;
          v29 = v28[26].Next;
          v30 = &v29[6 * BYTE3(v28[73].Next)];
          do
          {
            if ( BYTE1(v29[2].Next) < 5u )
            {
              v31 = (volatile signed __int32 *)v29[4].Next;
              v32 = 0;
              while ( _interlockedbittestandset(v31, 7u) )
              {
                do
                {
                  if ( (++v32 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
                    _mm_pause();
                  else
                    HvlNotifyLongSpinWait(v32);
                }
                while ( (*v31 & 0x80u) != 0 );
              }
              if ( BYTE1(v29[2].Next) == 4 )
              {
                v45 = v29->Next;
                v46 = v29[1].Next;
                if ( v29->Next[1].Next != v29 || v46->Next != v29 )
                  __fastfail(3u);
                v46->Next = v45;
                v45[1].Next = v46;
              }
              _InterlockedAnd(v31, 0xFFFFFF7F);
            }
            v29 += 6;
          }
          while ( v29 != v30 );
          v2 = 0;
          HIWORD(v28[70].Next) = 1;
          if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
          {
            LOBYTE(v14) = 1;
            EtwTraceReadyThread(v28, v14, 0LL, 0LL);
          }
          KiReadyThread(CurrentPrcb, v28);
        }
        while ( Next );
      }
      v47 = v63;
      if ( (unsigned __int8)v63 < 2u )
      {
        CurrentThread = CurrentPrcb->CurrentThread;
        if ( CurrentPrcb->NextThread )
        {
          KiAbProcessContextSwitch(CurrentPrcb->CurrentThread, 0LL);
          v49 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
          {
            do
            {
              if ( (++v49 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
                _mm_pause();
              else
                HvlNotifyLongSpinWait(v49);
            }
            while ( CurrentPrcb->PrcbLock );
          }
          NextThread = CurrentPrcb->NextThread;
          CurrentPrcb->NextThread = 0LL;
          _disable();
          CurrentPrcb->NestingLevel = 1;
          v51 = __rdtsc();
          v52 = v51 - CurrentPrcb->StartCycles;
          v53 = v52 + CurrentThread->CurrentRunTime;
          CurrentThread->CycleTime += v52;
          CurrentPrcb->StartCycles = v51;
          Size = CurrentThread->Header.Size;
          if ( v53 > 0xFFFFFFFF )
            LODWORD(v53) = -1;
          CurrentThread->CurrentRunTime = v53;
          if ( (Size & 0x3E) != 0 )
          {
            if ( (Size & 0x10) != 0 )
            {
              CurrentPrcb->TaggedCycles[CurrentThread->Tag] += CurrentPrcb->StartCycles - CurrentPrcb->TaggedCyclesStart;
              Size &= ~0x10u;
              CurrentPrcb->TaggedCyclesStart = 0LL;
            }
            if ( (Size & 0x3E) != 0 )
            {
              if ( (Size & 0x20) != 0 )
              {
                SparePtr = CurrentThread[1].WaitBlock[2].SparePtr;
                if ( SparePtr )
                {
                  v56 = CurrentPrcb->PowerState.Class + 2LL * (unsigned int)PoGetFrequencyBucket(CurrentPrcb);
                  SparePtr[v56] += v52;
                }
                v47 = v63;
                Size &= ~0x20u;
              }
              if ( (Size & 0x3E) != 0 )
              {
                SchedulingGroup = CurrentThread->SchedulingGroup;
                if ( SchedulingGroup )
                {
                  for ( i = (_QWORD *)((char *)&SchedulingGroup->Policy + CurrentPrcb->ScbOffset); i; i = (_QWORD *)i[49] )
                    *i += v52;
                }
                if ( (CurrentThread->Header.Size & 8) != 0
                  && (CurrentThread->Affinity.Mask & CurrentPrcb->ParentNode->Affinity.Mask) != CurrentPrcb->ParentNode->Affinity.Mask )
                {
                  CurrentPrcb->AffinitizedCycles += v52;
                }
                if ( CurrentThread->WaitBlock[0].SparePtr )
                  KiEndCounterAccumulation(CurrentThread);
              }
            }
          }
          _enable();
          CurrentPrcb->CurrentThread = NextThread;
          NextThread->WaitBlockFill6[68] = 2;
          CurrentThread->WaitReason = 32;
          CurrentThread->WaitIrql = v47;
          KiQueueReadyThread(CurrentPrcb, CurrentThread);
          LOBYTE(v59) = v47;
          if ( (unsigned __int8)KiSwapContext(CurrentThread, NextThread, v59) )
          {
LABEL_153:
            __writecr8(1uLL);
            CurrentThread->MiscFlags &= ~0x40u;
            KiDeliverApc(0LL, 0LL, 0LL);
          }
        }
        else if ( (CurrentThread->MiscFlags & 0x40) != 0 )
        {
          goto LABEL_153;
        }
        __writecr8(v47);
        goto LABEL_162;
      }
      if ( CurrentPrcb->NextThread && !CurrentPrcb->DpcRoutineActive )
      {
        if ( CurrentPrcb->NestingLevel )
        {
          CurrentPrcb->InterruptRequest = 1;
        }
        else
        {
          LOBYTE(v15) = 2;
          HalRequestSoftwareInterrupt(v15);
        }
      }
LABEL_162:
      NextNode = MmGetNextNode(v67, &v62);
      if ( NextNode >= (unsigned __int16)KeNumberNodes )
      {
        inserted = 0;
        goto LABEL_169;
      }
      v7 = v61;
    }
    if ( !v16 )
    {
      v20 = (_QWORD *)(v9 + 1048);
      v21 = *(_QWORD **)(v9 + 1048);
      while ( v21 != v20 )
      {
        v22 = v21;
        v21 = (_QWORD *)*v21;
        v23 = *v22;
        v24 = (_QWORD *)v22[1];
        if ( *(_QWORD **)(*v22 + 8LL) != v22 || (_QWORD *)*v24 != v22 )
          __fastfail(3u);
        *v24 = v23;
        *(_QWORD *)(v23 + 8) = v24;
        v25 = *((_BYTE *)v22 + 16);
        if ( v25 == 1 )
        {
          if ( (unsigned __int8)KiTryUnwaitThread(CurrentPrcb, v22, *((unsigned __int16 *)v22 + 9), 0LL) )
          {
            v26 = (*(_DWORD *)(v9 + 1044))-- == 1;
            if ( v26 )
              break;
          }
        }
        else if ( v25 == 2 )
        {
          *((_BYTE *)v22 + 17) = 5;
          v33 = v22[3];
          *v22 = 0LL;
          __writecr8(2uLL);
          v64 = KeGetCurrentPrcb();
          v34 = v64->CurrentThread;
          if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
          {
            v35 = v34->WaitBlockFill6[68] == 2 && v34->NextProcessor == KeGetPcr()->Prcb.Number;
            LOBYTE(v13) = v35;
            EtwTraceEnqueueWork(v34, v22, v13);
          }
          v36 = 0;
          while ( _interlockedbittestandset((volatile signed __int32 *)v33, 7u) )
          {
            do
            {
              if ( (++v36 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
                _mm_pause();
              else
                HvlNotifyLongSpinWait(v36);
            }
            while ( (*(_DWORD *)v33 & 0x80u) != 0 );
          }
          if ( *(_QWORD *)(v33 + 16) == v33 + 8
            || *(_DWORD *)(v33 + 40) >= *(_DWORD *)(v33 + 44)
            || v34->Queue == (_DISPATCHER_HEADER *volatile)v33 && v34->WaitReason == 15
            || !(unsigned __int8)KiWakeQueueWaiter(v64, v33, v22) )
          {
            ++*(_DWORD *)(v33 + 4);
            v15 = *(_QWORD *)(v33 + 32);
            *v22 = v33 + 24;
            v22[1] = v15;
            if ( *(_QWORD *)v15 != v33 + 24 )
              __fastfail(3u);
            *(_QWORD *)v15 = v22;
            *(_QWORD *)(v33 + 32) = v22;
          }
          _InterlockedAnd((volatile signed __int32 *)v33, 0xFFFFFF7F);
          v26 = (*(_DWORD *)(v9 + 1044))-- == 1;
          if ( v26 )
            break;
        }
        else
        {
          KiTryUnwaitThread(CurrentPrcb, v22, 256LL, 0LL);
        }
        v20 = (_QWORD *)(v9 + 1048);
      }
      v2 = 0;
      goto LABEL_45;
    }
    v37 = (__int64 *)(v9 + 1048);
    for ( j = *(__int64 **)(v9 + 1048); ; j = v65 )
    {
      if ( j == v37 )
      {
        *(_QWORD *)(v9 + 1056) = v9 + 1048;
        *v37 = (__int64)v37;
        goto LABEL_45;
      }
      v39 = j;
      v65 = (__int64 *)*j;
      v40 = *((_BYTE *)j + 16);
      if ( v40 == 1 )
      {
        v41 = *((unsigned __int16 *)v39 + 9);
      }
      else
      {
        if ( v40 == 2 )
        {
          *((_BYTE *)v39 + 17) = 5;
          v42 = v39[3];
          *v39 = 0LL;
          __writecr8(2uLL);
          v64 = KeGetCurrentPrcb();
          v43 = v64->CurrentThread;
          if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
          {
            if ( v43->WaitBlockFill6[68] != 2 || (v44 = 1, v43->NextProcessor != KeGetPcr()->Prcb.Number) )
              v44 = 0;
            LOBYTE(v13) = v44;
            EtwTraceEnqueueWork(v43, v39, v13);
          }
          while ( _interlockedbittestandset((volatile signed __int32 *)v42, 7u) )
          {
            do
            {
              if ( (++v2 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
                _mm_pause();
              else
                HvlNotifyLongSpinWait(v2);
            }
            while ( (*(_DWORD *)v42 & 0x80u) != 0 );
          }
          if ( *(_QWORD *)(v42 + 16) != v42 + 8
            && *(_DWORD *)(v42 + 40) < *(_DWORD *)(v42 + 44)
            && (v43->Queue != (_DISPATCHER_HEADER *volatile)v42 || v43->WaitReason != 15) )
          {
            v2 = 0;
            if ( !(unsigned __int8)KiWakeQueueWaiter(v64, v42, v39) )
            {
LABEL_99:
              ++*(_DWORD *)(v42 + 4);
              v15 = *(_QWORD *)(v42 + 32);
              *v39 = v42 + 24;
              v39[1] = v15;
              if ( *(_QWORD *)v15 != v42 + 24 )
                __fastfail(3u);
              *(_QWORD *)v15 = v39;
              *(_QWORD *)(v42 + 32) = v39;
            }
            _InterlockedAnd((volatile signed __int32 *)v42, 0xFFFFFF7F);
            continue;
          }
          v2 = 0;
          goto LABEL_99;
        }
        v41 = 256LL;
      }
      KiTryUnwaitThread(CurrentPrcb, v39, v41, 0LL);
    }
  }
LABEL_169:
  __writecr8((unsigned __int8)CurrentIrql);
  return inserted;
}
