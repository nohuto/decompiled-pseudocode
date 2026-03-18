/*
 * XREFs of KiDeliverApc @ 0x140083D40
 * Callers:
 *     KiCheckForKernelApcDelivery @ 0x140020550 (KiCheckForKernelApcDelivery.c)
 *     KiSchedulerApc @ 0x140029304 (KiSchedulerApc.c)
 *     KiBeginThreadWait @ 0x140029950 (KiBeginThreadWait.c)
 *     KeDelayExecutionThread @ 0x140029A90 (KeDelayExecutionThread.c)
 *     KiExitThreadWait @ 0x14002AC60 (KiExitThreadWait.c)
 *     KiCheckForThreadDispatch @ 0x14002AD14 (KiCheckForThreadDispatch.c)
 *     KiContinueEx @ 0x14002AEF0 (KiContinueEx.c)
 *     KiReadyOutSwappedThreads @ 0x14003307C (KiReadyOutSwappedThreads.c)
 *     KeRemovePriQueue @ 0x14006FC60 (KeRemovePriQueue.c)
 *     KiProcessDeferredReadyList @ 0x14007DC70 (KiProcessDeferredReadyList.c)
 *     KeRemoveQueueEx @ 0x1400807E0 (KeRemoveQueueEx.c)
 *     KeWaitForMultipleObjects @ 0x1400810B0 (KeWaitForMultipleObjects.c)
 *     KeWaitForSingleObject @ 0x140081870 (KeWaitForSingleObject.c)
 *     KiSwapThread @ 0x140082450 (KiSwapThread.c)
 *     IopfCompleteRequest @ 0x140084CF0 (IopfCompleteRequest.c)
 *     IopCompleteRequest @ 0x140086090 (IopCompleteRequest.c)
 *     KiExitDispatcher @ 0x1400879A0 (KiExitDispatcher.c)
 *     KeBoostPriorityThread @ 0x1400F6440 (KeBoostPriorityThread.c)
 *     KeCpuSetReportParkedProcessors @ 0x1401069B4 (KeCpuSetReportParkedProcessors.c)
 *     KiApcInterrupt @ 0x1401575F0 (KiApcInterrupt.c)
 *     KiInitiateUserApc @ 0x140157B20 (KiInitiateUserApc.c)
 *     KeRemovePriorityBoost @ 0x1401C2FDC (KeRemovePriorityBoost.c)
 *     KiParkUmsThread @ 0x1401CC5D8 (KiParkUmsThread.c)
 * Callees:
 *     KiInitializeUserApc @ 0x140022898 (KiInitializeUserApc.c)
 *     KeTestAlertThread @ 0x14002B04C (KeTestAlertThread.c)
 *     KeYieldProcessorEx @ 0x14007CAC0 (KeYieldProcessorEx.c)
 *     KiCheckForSListAddress @ 0x1400C83B0 (KiCheckForSListAddress.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 */

void __fastcall KiDeliverApc(char a1, struct _LIST_ENTRY *Flink, __int64 a3)
{
  struct _LIST_ENTRY *v4; // r13
  struct _KTHREAD *CurrentThread; // rbx
  bool v7; // zf
  _KTRAP_FRAME *TrapFrame; // r12
  ULONG_PTR Process; // r15
  $E81C3296F15336D9BF9B2D43BB137B25 *v10; // rdi
  __int64 v11; // r8
  struct _LIST_ENTRY *v12; // r10
  struct _LIST_ENTRY *v13; // r11
  struct _LIST_ENTRY *v14; // rcx
  struct _LIST_ENTRY *v15; // rax
  struct _LIST_ENTRY *v16; // rcx
  struct _LIST_ENTRY *v17; // rax
  _LIST_ENTRY *v18; // rdi
  struct _LIST_ENTRY *v19; // rcx
  ULONG_PTR v20; // r8
  struct _LIST_ENTRY *v21; // r11
  struct _LIST_ENTRY *v22; // rdx
  struct _LIST_ENTRY *v23; // rax
  signed __int32 v24[8]; // [rsp+0h] [rbp-50h] BYREF
  struct _LIST_ENTRY *v25; // [rsp+30h] [rbp-20h] BYREF
  struct _LIST_ENTRY *v26; // [rsp+38h] [rbp-18h] BYREF
  struct _LIST_ENTRY *v27; // [rsp+40h] [rbp-10h] BYREF
  struct _LIST_ENTRY *Blink; // [rsp+48h] [rbp-8h] BYREF
  int v29; // [rsp+A0h] [rbp+50h] BYREF
  int v30; // [rsp+A8h] [rbp+58h] BYREF

  v4 = Flink;
  if ( a3 )
    KiCheckForSListAddress(a3);
  CurrentThread = KeGetCurrentThread();
  v7 = CurrentThread->SpecialApcDisable == 0;
  TrapFrame = CurrentThread->TrapFrame;
  Process = (ULONG_PTR)CurrentThread->ApcState.Process;
  CurrentThread->TrapFrame = (_KTRAP_FRAME *)a3;
  CurrentThread->ApcState.KernelApcPending = 0;
  if ( v7 )
  {
    _InterlockedOr(v24, 0);
    v10 = &CurrentThread->152;
    while ( 1 )
    {
      v11 = 0LL;
      if ( ($E81C3296F15336D9BF9B2D43BB137B25 *)v10->ApcState.ApcListHead[0].Flink == v10 )
        break;
      __writecr8(2uLL);
      v29 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
      {
        do
          KeYieldProcessorEx(&v29, (__int64)Flink, v11);
        while ( CurrentThread->ThreadLock );
      }
      Flink = v10->ApcState.ApcListHead[0].Flink;
      if ( ($E81C3296F15336D9BF9B2D43BB137B25 *)v10->ApcState.ApcListHead[0].Flink == v10 )
      {
        v11 = 0LL;
        CurrentThread->ThreadLock = 0LL;
        __writecr8(1uLL);
        break;
      }
      CurrentThread->ApcState.KernelApcPending = 0;
      v12 = Flink - 1;
      _m_prefetchw(&Flink[-1]);
      v13 = Flink[1].Flink;
      v25 = Flink[2].Flink;
      Blink = Flink[2].Blink;
      v27 = Flink[3].Flink;
      v26 = Flink[3].Blink;
      if ( v25 )
      {
        if ( CurrentThread->ApcState.InProgressFlags || CurrentThread->KernelApcDisable )
          goto LABEL_33;
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
          &v25,
          &Blink,
          &v27,
          &v26);
        if ( v25 )
        {
          __writecr8(0LL);
          ((void (__fastcall *)(struct _LIST_ENTRY *, struct _LIST_ENTRY *, struct _LIST_ENTRY *))v25)(Blink, v27, v26);
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
          &v25,
          &Blink,
          &v27,
          &v26);
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
          v30 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
          {
            do
              KeYieldProcessorEx(&v30, (__int64)Flink, v11);
            while ( CurrentThread->ThreadLock );
          }
          CurrentThread->ApcState.UserApcPending = 0;
          v19 = v18->Flink;
          if ( v18->Flink == v18 )
          {
LABEL_33:
            CurrentThread->ThreadLock = 0LL;
            __writecr8(1uLL);
            goto LABEL_34;
          }
          _m_prefetchw(&v19[-1]);
          v21 = v19[1].Flink;
          v25 = v19[2].Flink;
          Blink = v19[2].Blink;
          v27 = v19[3].Flink;
          v26 = v19[3].Blink;
          v22 = v19->Flink;
          v23 = v19->Blink;
          if ( v19->Flink->Blink != v19 || v23->Flink != v19 )
            __fastfail(3u);
          v23->Flink = v22;
          v22->Blink = v23;
          BYTE2(v19[4].Flink) = 0;
          CurrentThread->ThreadLock = 0LL;
          __writecr8(1uLL);
          ((void (__fastcall *)(struct _LIST_ENTRY *, struct _LIST_ENTRY **, struct _LIST_ENTRY **, struct _LIST_ENTRY **, struct _LIST_ENTRY **))v21)(
            &v19[-1],
            &v25,
            &Blink,
            &v27,
            &v26);
          if ( v25 )
            KiInitializeUserApc(v4, a3, (__int64)v25, (__int64)Blink, (__int64)v27, (__int64)v26);
          else
            KeTestAlertThread(1);
        }
      }
    }
  }
LABEL_34:
  v20 = (ULONG_PTR)CurrentThread->ApcState.Process;
  if ( v20 != Process )
    KeBugCheckEx(5u, Process, v20, CurrentThread->ApcStateIndex, KeGetPcr()->Prcb.DpcRequestSummary & 0x10001);
  CurrentThread->TrapFrame = TrapFrame;
}
