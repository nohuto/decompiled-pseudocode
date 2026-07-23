/*
 * XREFs of KeReleaseMutant @ 0x1400F4C40
 * Callers:
 *     ExpDeleteMutant @ 0x1400F4C30 (ExpDeleteMutant.c)
 *     NtSignalAndWaitForSingleObject @ 0x1401FE888 (NtSignalAndWaitForSingleObject.c)
 *     MmReleaseLoadLock @ 0x140482154 (MmReleaseLoadLock.c)
 *     NtReleaseMutant @ 0x1404FD590 (NtReleaseMutant.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002E830 (KeYieldProcessorEx.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     KiExitDispatcher @ 0x140056280 (KiExitDispatcher.c)
 *     KiTryUnwaitThread @ 0x140057920 (KiTryUnwaitThread.c)
 *     KiAcquireKobjectLockSafe @ 0x1400EC640 (KiAcquireKobjectLockSafe.c)
 *     KiWakeQueueWaiter @ 0x1400EC680 (KiWakeQueueWaiter.c)
 *     RtlRaiseStatus @ 0x1400F4588 (RtlRaiseStatus.c)
 *     KiAcquireReleaseObjectRundownLockExclusive @ 0x1400F4EDC (KiAcquireReleaseObjectRundownLockExclusive.c)
 *     KiWakeOtherQueueWaiters @ 0x1400F7B48 (KiWakeOtherQueueWaiters.c)
 *     KeIsThreadRunning @ 0x1401D2AA4 (KeIsThreadRunning.c)
 *     EtwTraceEnqueueWork @ 0x140225A4C (EtwTraceEnqueueWork.c)
 */

LONG __stdcall KeReleaseMutant(PRKMUTANT Mutant, KPRIORITY Increment, BOOLEAN Abandoned, BOOLEAN Wait)
{
  _KTHREAD *CurrentThread; // rax
  unsigned int v5; // edi
  int ApcDisable; // r12d
  BOOLEAN v7; // r15
  unsigned __int8 CurrentIrql; // r13
  struct _KPRCB *CurrentPrcb; // r14
  int SignalState; // esi
  _KTHREAD *OwnerThread; // r15
  struct _LIST_ENTRY *Flink; // rdx
  struct _LIST_ENTRY *Blink; // rcx
  struct _LIST_ENTRY *v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  NTSTATUS v21; // ecx
  struct _LIST_ENTRY *v22; // r8
  struct _LIST_ENTRY *v23; // rax
  char v24; // al
  bool v25; // zf
  unsigned __int8 IsThreadRunning; // al
  __int64 v27; // rdx
  __int64 v28; // r9
  _QWORD *v29; // r8
  __int64 v30; // rcx
  char v31; // al
  int v32; // r10d
  struct _LIST_ENTRY *v33; // r9
  __int64 v34; // [rsp+30h] [rbp-A8h]
  _KTHREAD *v35; // [rsp+38h] [rbp-A0h]
  struct _KPRCB *v36; // [rsp+38h] [rbp-A0h]
  struct _LIST_ENTRY *v37; // [rsp+48h] [rbp-90h]
  __int64 v38; // [rsp+50h] [rbp-88h]
  _KTHREAD *v39; // [rsp+58h] [rbp-80h]
  struct _KMUTANT *v40; // [rsp+60h] [rbp-78h]
  __int64 v41; // [rsp+68h] [rbp-70h] BYREF
  LONG LockNV; // [rsp+70h] [rbp-68h]
  int v43; // [rsp+E0h] [rbp+8h] BYREF
  unsigned int v44; // [rsp+E8h] [rbp+10h]
  int v45; // [rsp+F0h] [rbp+18h] BYREF
  BOOLEAN v46; // [rsp+F8h] [rbp+20h]

  v46 = Wait;
  v44 = Increment;
  CurrentThread = KeGetCurrentThread();
  v5 = 0;
  ApcDisable = 0;
  v38 = (__int64)CurrentThread;
  v7 = Wait;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  CurrentPrcb = KeGetCurrentPrcb();
  v45 = 0;
  if ( _interlockedbittestandset(&Mutant->Header.Lock, 7u) )
  {
    do
    {
      do
        KeYieldProcessorEx(&v45);
      while ( (Mutant->Header.LockNV & 0x80u) != 0 );
    }
    while ( _interlockedbittestandset(&Mutant->Header.Lock, 7u) );
    CurrentThread = (_KTHREAD *)v38;
  }
  SignalState = Mutant->Header.SignalState;
  if ( Abandoned )
  {
    Mutant->Header.SignalState = 1;
    Mutant->Abandoned = 1;
  }
  else
  {
    if ( Mutant->OwnerThread != CurrentThread || Mutant->Header.Size != CurrentPrcb->DpcRoutineActive )
    {
      _InterlockedAnd(&Mutant->Header.Lock, 0xFFFFFF7F);
      __writecr8(CurrentIrql);
      if ( Mutant->Abandoned )
        v21 = 128;
      else
        v21 = -1073741754;
      RtlRaiseStatus(v21);
    }
    ++Mutant->Header.SignalState;
  }
  if ( Mutant->Header.SignalState != 1 || SignalState > 0 )
  {
    _InterlockedAnd(&Mutant->Header.Lock, 0xFFFFFF7F);
    goto LABEL_15;
  }
  LockNV = Mutant->Header.LockNV;
  BYTE2(LockNV) = 0;
  Mutant->Header.LockNV = LockNV;
  OwnerThread = Mutant->OwnerThread;
  ApcDisable = Mutant->ApcDisable;
  v35 = OwnerThread;
  v43 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)&OwnerThread->ThreadLock, 0LL) )
  {
    do
      KeYieldProcessorEx(&v43);
    while ( OwnerThread->ThreadLock );
  }
  Flink = Mutant->MutantListEntry.Flink;
  Blink = Mutant->MutantListEntry.Blink;
  v7 = v46;
  if ( Flink->Blink != &Mutant->MutantListEntry || Blink->Flink != &Mutant->MutantListEntry )
    __fastfail(3u);
  Blink->Flink = Flink;
  Flink->Blink = Blink;
  v35->ThreadLock = 0LL;
  v16 = Mutant->Header.WaitListHead.Flink;
  Mutant->OwnerThread = 0LL;
  if ( v16 != &Mutant->Header.WaitListHead )
  {
    while ( 1 )
    {
      v37 = v16;
      v40 = (struct _KMUTANT *)v16->Flink;
      v22 = v16->Flink;
      v23 = v16->Blink;
      if ( v16->Flink->Blink != v16 || v23->Flink != v16 )
        __fastfail(3u);
      v23->Flink = v22;
      v22->Blink = v23;
      v24 = (char)v16[1].Flink;
      if ( v24 != 1 )
        break;
      if ( (unsigned __int8)KiTryUnwaitThread((__int64)CurrentPrcb, (__int64)v16, WORD1(v16[1].Flink), &v41) )
      {
        v25 = Mutant->Header.SignalState-- == 1;
        if ( v25 )
          goto LABEL_13;
      }
LABEL_33:
      v16 = (struct _LIST_ENTRY *)v40;
      if ( v40 == (struct _KMUTANT *)&Mutant->Header.WaitListHead )
        goto LABEL_13;
    }
    if ( v24 != 2 )
    {
      KiTryUnwaitThread((__int64)CurrentPrcb, (__int64)v16, 256LL, 0LL);
      goto LABEL_33;
    }
    BYTE1(v16[1].Flink) = 5;
    v34 = (__int64)v16[1].Blink;
    v16->Flink = 0LL;
    __writecr8(2uLL);
    v36 = KeGetCurrentPrcb();
    v39 = v36->CurrentThread;
    if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
    {
      IsThreadRunning = KeIsThreadRunning(v36->CurrentThread);
      EtwTraceEnqueueWork(v28, v27, IsThreadRunning);
    }
    KiAcquireKobjectLockSafe((volatile signed __int32 *)v34);
    v29 = (_QWORD *)(v34 + 8);
    v30 = v34;
    if ( (_QWORD *)*v29 != v29
      && *(_DWORD *)(v34 + 40) < *(_DWORD *)(v34 + 44)
      && (v39->Queue != (_DISPATCHER_HEADER *volatile)v34 || v39->WaitReason != 15) )
    {
      v31 = KiWakeQueueWaiter((__int64)v36, v34, (__int64)v37);
      v30 = v34;
      if ( v31 )
        goto LABEL_52;
      v29 = (_QWORD *)(v34 + 8);
    }
    v32 = *(_DWORD *)(v30 + 4);
    *(_DWORD *)(v30 + 4) = v32 + 1;
    v33 = *(struct _LIST_ENTRY **)(v30 + 32);
    if ( v33->Flink != (struct _LIST_ENTRY *)(v30 + 24) )
      __fastfail(3u);
    v37->Flink = (struct _LIST_ENTRY *)(v30 + 24);
    v37->Blink = v33;
    v33->Flink = v37;
    *(_QWORD *)(v30 + 32) = v37;
    if ( !v32 && (_QWORD *)*v29 != v29 )
    {
      KiWakeOtherQueueWaiters(v36, v30);
      v30 = v34;
    }
LABEL_52:
    _InterlockedAnd((volatile signed __int32 *)v30, 0xFFFFFF7F);
    v25 = Mutant->Header.SignalState-- == 1;
    if ( v25 )
      goto LABEL_13;
    goto LABEL_33;
  }
LABEL_13:
  _InterlockedAnd(&Mutant->Header.Lock, 0xFFFFFF7F);
  if ( Abandoned )
    KiAcquireReleaseObjectRundownLockExclusive(Mutant);
LABEL_15:
  if ( v7 )
    v5 = 3;
  KiExitDispatcher((__int64)CurrentPrcb, v5, 1LL, v44, CurrentIrql);
  if ( ApcDisable )
    KiLeaveCriticalRegionUnsafe(v38, v17, v18, v19);
  return SignalState;
}
