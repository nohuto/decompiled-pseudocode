/*
 * XREFs of KiDeliverApc @ 0x14005D750
 * Callers:
 *     CmpSetKeySecurity @ 0x14000A1E0 (CmpSetKeySecurity.c)
 *     IopfCompleteRequest @ 0x1400530F0 (IopfCompleteRequest.c)
 *     KiExitDispatcher @ 0x140056280 (KiExitDispatcher.c)
 *     KeWaitForMultipleObjects @ 0x140059E60 (KeWaitForMultipleObjects.c)
 *     KiSwapThread @ 0x14005AD80 (KiSwapThread.c)
 *     KeWaitForSingleObject @ 0x14005C400 (KeWaitForSingleObject.c)
 *     ExpWaitForResource @ 0x14005C9B0 (ExpWaitForResource.c)
 *     KeInsertPriQueue @ 0x14005F280 (KeInsertPriQueue.c)
 *     KeRemoveQueueEx @ 0x140069F30 (KeRemoveQueueEx.c)
 *     KiReadyOutSwappedThreads @ 0x1400908A0 (KiReadyOutSwappedThreads.c)
 *     IopCreateSecurityCheck @ 0x1400A9158 (IopCreateSecurityCheck.c)
 *     KiCheckForKernelApcDelivery @ 0x1400C5C80 (KiCheckForKernelApcDelivery.c)
 *     KiSchedulerApc @ 0x1400C95C0 (KiSchedulerApc.c)
 *     KiContinueEx @ 0x1400CA74C (KiContinueEx.c)
 *     KiBeginThreadWait @ 0x1400CE820 (KiBeginThreadWait.c)
 *     KiProcessDeferredReadyList @ 0x1400D12F0 (KiProcessDeferredReadyList.c)
 *     KeRemovePriQueue @ 0x1400E5870 (KeRemovePriQueue.c)
 *     KiExitThreadWait @ 0x1400F06F0 (KiExitThreadWait.c)
 *     KiCheckForThreadDispatch @ 0x1400F07B0 (KiCheckForThreadDispatch.c)
 *     LdrpKrnGetDataTableEntry @ 0x1400F80A8 (LdrpKrnGetDataTableEntry.c)
 *     KiApcInterrupt @ 0x140162530 (KiApcInterrupt.c)
 *     KiInitiateUserApc @ 0x140162AD0 (KiInitiateUserApc.c)
 *     FsRtlRemovePerFileContext @ 0x1401BA318 (FsRtlRemovePerFileContext.c)
 *     KeRemovePriorityBoost @ 0x1401D2B3C (KeRemovePriorityBoost.c)
 *     KiParkUmsThread @ 0x1401DC090 (KiParkUmsThread.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002E830 (KeYieldProcessorEx.c)
 *     KiCheckForSListAddress @ 0x14008B8E0 (KiCheckForSListAddress.c)
 *     KiInitializeUserApc @ 0x1400A6214 (KiInitializeUserApc.c)
 *     KeTestAlertThread @ 0x1400CAF2C (KeTestAlertThread.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 */

void __fastcall KiDeliverApc(char a1, int a2, _KTRAP_FRAME *a3)
{
  struct _KTHREAD *CurrentThread; // rbx
  bool v7; // zf
  _KTRAP_FRAME *TrapFrame; // r14
  ULONG_PTR Process; // r15
  $2B8565053CDC740D4E4887693DD8AC9E *v10; // rdi
  struct _LIST_ENTRY *Flink; // rdx
  struct _LIST_ENTRY *v12; // r10
  struct _LIST_ENTRY *v13; // r11
  struct _LIST_ENTRY *v14; // rcx
  struct _LIST_ENTRY *v15; // rax
  ULONG_PTR v16; // r8
  struct _LIST_ENTRY *v17; // rcx
  struct _LIST_ENTRY *v18; // rax
  _LIST_ENTRY *v19; // rdi
  struct _LIST_ENTRY *v20; // rcx
  struct _LIST_ENTRY *v21; // r11
  struct _LIST_ENTRY *v22; // rdx
  struct _LIST_ENTRY *v23; // rax
  __int64 v24; // rcx
  signed __int32 v25[8]; // [rsp+0h] [rbp-50h] BYREF
  struct _LIST_ENTRY *v26; // [rsp+30h] [rbp-20h] BYREF
  struct _LIST_ENTRY *v27; // [rsp+38h] [rbp-18h] BYREF
  struct _LIST_ENTRY *v28; // [rsp+40h] [rbp-10h] BYREF
  struct _LIST_ENTRY *Blink; // [rsp+48h] [rbp-8h] BYREF
  int v30; // [rsp+A0h] [rbp+50h] BYREF
  int v31; // [rsp+A8h] [rbp+58h] BYREF

  if ( a3 )
    KiCheckForSListAddress(a3);
  CurrentThread = KeGetCurrentThread();
  v7 = CurrentThread->SpecialApcDisable == 0;
  TrapFrame = CurrentThread->TrapFrame;
  Process = (ULONG_PTR)CurrentThread->ApcState.Process;
  CurrentThread->TrapFrame = a3;
  CurrentThread->ApcState.KernelApcPending = 0;
  if ( v7 )
  {
    _InterlockedOr(v25, 0);
    v10 = &CurrentThread->152;
    while ( ($2B8565053CDC740D4E4887693DD8AC9E *)v10->ApcState.ApcListHead[0].Flink != v10 )
    {
      __writecr8(2uLL);
      v30 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
      {
        do
          KeYieldProcessorEx(&v30);
        while ( CurrentThread->ThreadLock );
      }
      Flink = v10->ApcState.ApcListHead[0].Flink;
      if ( ($2B8565053CDC740D4E4887693DD8AC9E *)v10->ApcState.ApcListHead[0].Flink == v10 )
      {
        CurrentThread->ThreadLock = 0LL;
        __writecr8(1uLL);
        break;
      }
      CurrentThread->ApcState.KernelApcPending = 0;
      v12 = Flink - 1;
      _m_prefetchw(&Flink[-1]);
      v13 = Flink[1].Flink;
      v26 = Flink[2].Flink;
      Blink = Flink[2].Blink;
      v28 = Flink[3].Flink;
      v27 = Flink[3].Blink;
      if ( v26 )
      {
        if ( CurrentThread->ApcState.InProgressFlags || CurrentThread->KernelApcDisable )
          goto LABEL_18;
        v17 = Flink->Flink;
        v18 = Flink->Blink;
        if ( Flink->Flink->Blink != Flink || v18->Flink != Flink )
          __fastfail(3u);
        v18->Flink = v17;
        v17->Blink = v18;
        BYTE2(v12[5].Flink) = 0;
        CurrentThread->ThreadLock = 0LL;
        __writecr8(1uLL);
        CurrentThread->ApcState.InProgressFlags = 1;
        ((void (__fastcall *)(struct _LIST_ENTRY *, struct _LIST_ENTRY **, struct _LIST_ENTRY **, struct _LIST_ENTRY **, struct _LIST_ENTRY **))v13)(
          &Flink[-1],
          &v26,
          &Blink,
          &v28,
          &v27);
        if ( v26 )
        {
          __writecr8(0LL);
          ((void (__fastcall *)(struct _LIST_ENTRY *, struct _LIST_ENTRY *, struct _LIST_ENTRY *))v26)(Blink, v28, v27);
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
          &v26,
          &Blink,
          &v28,
          &v27);
        CurrentThread->ApcState.InProgressFlags &= ~2u;
      }
    }
    if ( a1 == 1 )
    {
      v19 = &CurrentThread->ApcState.ApcListHead[1];
      if ( v19->Flink != v19 )
      {
        if ( CurrentThread->ApcState.UserApcPending )
        {
          __writecr8(2uLL);
          v31 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
          {
            do
              KeYieldProcessorEx(&v31);
            while ( CurrentThread->ThreadLock );
          }
          CurrentThread->ApcState.UserApcPending = 0;
          v20 = v19->Flink;
          if ( v19->Flink == v19 )
          {
LABEL_18:
            CurrentThread->ThreadLock = 0LL;
            __writecr8(1uLL);
            goto LABEL_14;
          }
          _m_prefetchw(&v20[-1]);
          v21 = v20[1].Flink;
          v26 = v20[2].Flink;
          Blink = v20[2].Blink;
          v28 = v20[3].Flink;
          v27 = v20[3].Blink;
          v22 = v20->Flink;
          v23 = v20->Blink;
          if ( v20->Flink->Blink != v20 || v23->Flink != v20 )
            __fastfail(3u);
          v23->Flink = v22;
          v22->Blink = v23;
          BYTE2(v20[4].Flink) = 0;
          CurrentThread->ThreadLock = 0LL;
          __writecr8(1uLL);
          ((void (__fastcall *)(struct _LIST_ENTRY *, struct _LIST_ENTRY **, struct _LIST_ENTRY **, struct _LIST_ENTRY **, struct _LIST_ENTRY **))v21)(
            &v20[-1],
            &v26,
            &Blink,
            &v28,
            &v27);
          if ( v26 )
          {
            KiInitializeUserApc(a2, (_DWORD)a3, (_DWORD)v26, (_DWORD)Blink, (__int64)v28, (__int64)v27);
          }
          else
          {
            LOBYTE(v24) = 1;
            KeTestAlertThread(v24);
          }
        }
      }
    }
  }
LABEL_14:
  v16 = (ULONG_PTR)CurrentThread->ApcState.Process;
  if ( v16 != Process )
    KeBugCheckEx(5u, Process, v16, CurrentThread->ApcStateIndex, KeGetPcr()->Prcb.DpcRequestSummary & 0x10001);
  CurrentThread->TrapFrame = TrapFrame;
}
