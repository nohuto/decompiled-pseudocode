/*
 * XREFs of KiDeliverApc @ 0x140048670
 * Callers:
 *     KiCheckForThreadDispatch @ 0x14000DCB4 (KiCheckForThreadDispatch.c)
 *     KiSchedulerApc @ 0x14000EB14 (KiSchedulerApc.c)
 *     KiContinueEx @ 0x140020234 (KiContinueEx.c)
 *     ExTryQueueWorkItem @ 0x1400292FC (ExTryQueueWorkItem.c)
 *     KeRemovePriQueue @ 0x1400319E0 (KeRemovePriQueue.c)
 *     MiDeleteValidSystemPte @ 0x140038C20 (MiDeleteValidSystemPte.c)
 *     KeSetLegacyAffinityThread @ 0x140043120 (KeSetLegacyAffinityThread.c)
 *     KiExitDispatcher @ 0x14004C6B0 (KiExitDispatcher.c)
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     KiProcessDeferredReadyList @ 0x14009BE20 (KiProcessDeferredReadyList.c)
 *     ExpWaitForResource @ 0x14009C5E0 (ExpWaitForResource.c)
 *     KeRemoveQueueEx @ 0x14009E640 (KeRemoveQueueEx.c)
 *     KeWaitForMultipleObjects @ 0x14009F320 (KeWaitForMultipleObjects.c)
 *     KiSwapThread @ 0x1400A0810 (KiSwapThread.c)
 *     KiExitThreadWait @ 0x1400A23E0 (KiExitThreadWait.c)
 *     CcMapAndCopyInToCache @ 0x1400B2720 (CcMapAndCopyInToCache.c)
 *     KeBoostPriorityThread @ 0x1400DBC80 (KeBoostPriorityThread.c)
 *     KeDelayExecutionThread @ 0x1400E73A0 (KeDelayExecutionThread.c)
 *     PpmCheckRun @ 0x1400E7D30 (PpmCheckRun.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     KeWaitForAlertByThreadId @ 0x14010BF10 (KeWaitForAlertByThreadId.c)
 *     KiReadyOutSwappedThreads @ 0x1401106FC (KiReadyOutSwappedThreads.c)
 *     KiWaitForAllObjects @ 0x14011ECE8 (KiWaitForAllObjects.c)
 *     KeWaitForGate @ 0x140126304 (KeWaitForGate.c)
 *     KeCpuSetReportParkedProcessors @ 0x140132C60 (KeCpuSetReportParkedProcessors.c)
 *     KiApcInterrupt @ 0x140186D60 (KiApcInterrupt.c)
 *     KiInitiateUserApc @ 0x1401872F0 (KiInitiateUserApc.c)
 *     KeRemovePriorityBoost @ 0x1401FEDB4 (KeRemovePriorityBoost.c)
 *     KiParkUmsThread @ 0x14020B7B4 (KiParkUmsThread.c)
 * Callees:
 *     KeTestAlertThread @ 0x140020390 (KeTestAlertThread.c)
 *     KiCheckForSListAddress @ 0x1401020C0 (KiCheckForSListAddress.c)
 *     KiInitializeUserApc @ 0x14011E7C8 (KiInitializeUserApc.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 */

void __fastcall KiDeliverApc(char a1, int a2, _KTRAP_FRAME *a3)
{
  struct _KTHREAD *CurrentThread; // rdi
  bool v6; // zf
  _KTRAP_FRAME *TrapFrame; // r13
  ULONG_PTR Process; // r12
  $CD287064E7C9F7953DE243E927CFCB99 *v9; // rsi
  unsigned int v10; // ebx
  struct _LIST_ENTRY *Flink; // rdx
  struct _LIST_ENTRY *v12; // r10
  struct _LIST_ENTRY *v13; // r11
  struct _LIST_ENTRY *v14; // rcx
  struct _LIST_ENTRY *v15; // rax
  struct _LIST_ENTRY *v16; // rcx
  struct _LIST_ENTRY *v17; // rax
  _LIST_ENTRY *v18; // rsi
  unsigned int v19; // ebx
  struct _LIST_ENTRY *v20; // rcx
  ULONG_PTR v21; // r8
  struct _LIST_ENTRY *v22; // r11
  struct _LIST_ENTRY *v23; // rdx
  struct _LIST_ENTRY *v24; // rax
  signed __int32 v25[8]; // [rsp+0h] [rbp-48h] BYREF
  struct _LIST_ENTRY *v26; // [rsp+30h] [rbp-18h] BYREF
  struct _LIST_ENTRY *Blink; // [rsp+38h] [rbp-10h] BYREF
  struct _LIST_ENTRY *v29; // [rsp+90h] [rbp+48h] BYREF
  struct _LIST_ENTRY *v30; // [rsp+98h] [rbp+50h] BYREF

  if ( a3 )
    KiCheckForSListAddress(a3);
  CurrentThread = KeGetCurrentThread();
  v6 = CurrentThread->SpecialApcDisable == 0;
  TrapFrame = CurrentThread->TrapFrame;
  Process = (ULONG_PTR)CurrentThread->ApcState.Process;
  CurrentThread->TrapFrame = a3;
  CurrentThread->ApcState.KernelApcPending = 0;
  if ( v6 )
  {
    _InterlockedOr(v25, 0);
    v9 = &CurrentThread->152;
    while ( ($CD287064E7C9F7953DE243E927CFCB99 *)v9->ApcState.ApcListHead[0].Flink != v9 )
    {
      __writecr8(2uLL);
      v10 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
      {
        do
        {
          if ( (++v10 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
            _mm_pause();
          else
            HvlNotifyLongSpinWait(v10);
        }
        while ( CurrentThread->ThreadLock );
      }
      Flink = v9->ApcState.ApcListHead[0].Flink;
      if ( ($CD287064E7C9F7953DE243E927CFCB99 *)v9->ApcState.ApcListHead[0].Flink == v9 )
      {
        CurrentThread->ThreadLock = 0LL;
        __writecr8(1uLL);
        break;
      }
      CurrentThread->ApcState.KernelApcPending = 0;
      v12 = Flink - 1;
      _m_prefetchw(&Flink[-1]);
      v13 = Flink[1].Flink;
      v29 = Flink[2].Flink;
      Blink = Flink[2].Blink;
      v26 = Flink[3].Flink;
      v30 = Flink[3].Blink;
      if ( v29 )
      {
        if ( CurrentThread->ApcState.InProgressFlags || CurrentThread->KernelApcDisable )
          goto LABEL_41;
        v16 = Flink->Flink;
        v17 = Flink->Blink;
        if ( Flink->Flink->Blink != Flink || v17->Flink != Flink )
          __fastfail(3u);
        v17->Flink = v16;
        v16->Blink = v17;
        BYTE2(v12[5].Flink) = 0;
        CurrentThread->ThreadLock = 0LL;
        __writecr8(1uLL);
        CurrentThread->ApcState.InProgressFlags = 1;
        ((void (__fastcall *)(struct _LIST_ENTRY *, struct _LIST_ENTRY **, struct _LIST_ENTRY **, struct _LIST_ENTRY **, struct _LIST_ENTRY **))v13)(
          &Flink[-1],
          &v29,
          &Blink,
          &v26,
          &v30);
        if ( v29 )
        {
          __writecr8(0LL);
          ((void (__fastcall *)(struct _LIST_ENTRY *, struct _LIST_ENTRY *, struct _LIST_ENTRY *))v29)(Blink, v26, v30);
          __writecr8(1uLL);
        }
        CurrentThread->ApcState.InProgressFlags = 0;
      }
      else
      {
        v14 = Flink->Flink;
        v15 = Flink->Blink;
        if ( Flink->Flink->Blink != Flink || v15->Flink != Flink )
          __fastfail(3u);
        v15->Flink = v14;
        v14->Blink = v15;
        BYTE2(v12[5].Flink) = 0;
        CurrentThread->ThreadLock = 0LL;
        __writecr8(1uLL);
        CurrentThread->ApcState.InProgressFlags |= 2u;
        ((void (__fastcall *)(struct _LIST_ENTRY *, struct _LIST_ENTRY **, struct _LIST_ENTRY **, struct _LIST_ENTRY **, struct _LIST_ENTRY **))v13)(
          &Flink[-1],
          &v29,
          &Blink,
          &v26,
          &v30);
        CurrentThread->ApcState.InProgressFlags &= ~2u;
      }
    }
    if ( a1 == 1 )
    {
      v18 = &CurrentThread->ApcState.ApcListHead[1];
      if ( v18->Flink != v18 )
      {
        if ( CurrentThread->ApcState.UserApcPending )
        {
          __writecr8(2uLL);
          v19 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
          {
            do
            {
              if ( (++v19 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
                _mm_pause();
              else
                HvlNotifyLongSpinWait(v19);
            }
            while ( CurrentThread->ThreadLock );
          }
          CurrentThread->ApcState.UserApcPending = 0;
          v20 = v18->Flink;
          if ( v18->Flink == v18 )
          {
LABEL_41:
            CurrentThread->ThreadLock = 0LL;
            __writecr8(1uLL);
            goto LABEL_42;
          }
          _m_prefetchw(&v20[-1]);
          v22 = v20[1].Flink;
          v29 = v20[2].Flink;
          Blink = v20[2].Blink;
          v26 = v20[3].Flink;
          v30 = v20[3].Blink;
          v23 = v20->Flink;
          v24 = v20->Blink;
          if ( v20->Flink->Blink != v20 || v24->Flink != v20 )
            __fastfail(3u);
          v24->Flink = v23;
          v23->Blink = v24;
          BYTE2(v20[4].Flink) = 0;
          CurrentThread->ThreadLock = 0LL;
          __writecr8(1uLL);
          ((void (__fastcall *)(struct _LIST_ENTRY *, struct _LIST_ENTRY **, struct _LIST_ENTRY **, struct _LIST_ENTRY **, struct _LIST_ENTRY **))v22)(
            &v20[-1],
            &v29,
            &Blink,
            &v26,
            &v30);
          if ( v29 )
            KiInitializeUserApc(a2, (_DWORD)a3, (_DWORD)v29, (_DWORD)Blink, (__int64)v26, (__int64)v30);
          else
            KeTestAlertThread(1);
        }
      }
    }
  }
LABEL_42:
  v21 = (ULONG_PTR)CurrentThread->ApcState.Process;
  if ( v21 != Process )
    KeBugCheckEx(5u, Process, v21, CurrentThread->ApcStateIndex, KeGetPcr()->Prcb.DpcRequestSummary & 0x10001);
  CurrentThread->TrapFrame = TrapFrame;
}
