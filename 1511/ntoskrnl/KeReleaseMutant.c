/*
 * XREFs of KeReleaseMutant @ 0x140087250
 * Callers:
 *     KeReleaseMutex @ 0x140087240 (KeReleaseMutex.c)
 *     ExpDeleteMutant @ 0x1400E5F80 (ExpDeleteMutant.c)
 *     NtSignalAndWaitForSingleObject @ 0x1401E61A0 (NtSignalAndWaitForSingleObject.c)
 *     MmReleaseLoadLock @ 0x1403CF8C4 (MmReleaseLoadLock.c)
 *     NtReleaseMutant @ 0x14049CBE0 (NtReleaseMutant.c)
 *     VerifierKeReleaseMutant @ 0x1406C6368 (VerifierKeReleaseMutant.c)
 *     VerifierKeReleaseMutantNoReboot @ 0x1406C63D8 (VerifierKeReleaseMutantNoReboot.c)
 * Callees:
 *     RtlRaiseStatus @ 0x140023A24 (RtlRaiseStatus.c)
 *     KiAcquireKobjectLockSafe @ 0x140034400 (KiAcquireKobjectLockSafe.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14003AA70 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14004CC40 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeYieldProcessorEx @ 0x14007CAC0 (KeYieldProcessorEx.c)
 *     KiWakeQueueWaiter @ 0x14007E740 (KiWakeQueueWaiter.c)
 *     KiExitDispatcher @ 0x1400879A0 (KiExitDispatcher.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     KiTryUnwaitThread @ 0x140088FA0 (KiTryUnwaitThread.c)
 *     KeIsThreadRunning @ 0x1401C2F44 (KeIsThreadRunning.c)
 *     EtwTraceEnqueueWork @ 0x14020DD68 (EtwTraceEnqueueWork.c)
 */

// local variable allocation has failed, the output may be wrong!
LONG __stdcall KeReleaseMutant(PRKMUTANT Mutant, KPRIORITY Increment, BOOLEAN Abandoned, BOOLEAN Wait)
{
  _KTHREAD *CurrentThread; // rsi
  int v5; // ebp
  int v6; // r15d
  unsigned __int8 CurrentIrql; // r14
  __int64 v10; // r8
  struct _KPRCB *CurrentPrcb; // r10
  int SignalState; // edi
  _KTHREAD *OwnerThread; // rdi
  struct _LIST_ENTRY *Flink; // rdx
  struct _LIST_ENTRY *Blink; // rcx
  struct _KMUTANT *v16; // r12
  __int64 v17; // rdi
  __int64 v18; // rcx
  _QWORD *v19; // rax
  char v20; // al
  bool v21; // zf
  volatile LONG *v22; // rbx
  __int64 v24; // rsi
  struct _KPRCB *v25; // r15
  _KTHREAD *v26; // rbp
  unsigned __int8 IsThreadRunning; // al
  __int64 *v28; // rcx
  NTSTATUS v29; // ecx
  int ApcDisable; // [rsp+30h] [rbp-98h]
  struct _KPRCB *v31; // [rsp+38h] [rbp-90h]
  _KTHREAD *v32; // [rsp+40h] [rbp-88h]
  int v33; // [rsp+50h] [rbp-78h] BYREF
  int v34; // [rsp+54h] [rbp-74h] BYREF
  _BYTE v35[8]; // [rsp+58h] [rbp-70h] BYREF
  LONG LockNV; // [rsp+60h] [rbp-68h]
  int v37; // [rsp+D0h] [rbp+8h]

  CurrentThread = KeGetCurrentThread();
  v5 = 0;
  v6 = 0;
  v32 = CurrentThread;
  CurrentIrql = KeGetCurrentIrql();
  v10 = 2LL;
  __writecr8(2uLL);
  CurrentPrcb = KeGetCurrentPrcb();
  v33 = 0;
  v31 = CurrentPrcb;
  if ( _interlockedbittestandset(&Mutant->Header.Lock, 7u) )
  {
    do
    {
      do
        KeYieldProcessorEx(&v33, *(__int64 *)&Increment, v10);
      while ( (Mutant->Header.LockNV & 0x80u) != 0 );
    }
    while ( _interlockedbittestandset(&Mutant->Header.Lock, 7u) );
    CurrentPrcb = v31;
  }
  SignalState = Mutant->Header.SignalState;
  v37 = SignalState;
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
      v29 = -1073741754;
      if ( Mutant->Abandoned )
        v29 = 128;
      RtlRaiseStatus(v29);
    }
    ++Mutant->Header.SignalState;
  }
  if ( Mutant->Header.SignalState == 1 && SignalState <= 0 )
  {
    LockNV = Mutant->Header.LockNV;
    BYTE2(LockNV) = 0;
    Mutant->Header.LockNV = LockNV;
    OwnerThread = Mutant->OwnerThread;
    ApcDisable = Mutant->ApcDisable;
    v34 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)&OwnerThread->ThreadLock, 0LL) )
    {
      do
        KeYieldProcessorEx(&v34, *(__int64 *)&Increment, v10);
      while ( OwnerThread->ThreadLock );
    }
    Flink = Mutant->MutantListEntry.Flink;
    Blink = Mutant->MutantListEntry.Blink;
    if ( Flink->Blink != &Mutant->MutantListEntry || Blink->Flink != &Mutant->MutantListEntry )
      __fastfail(3u);
    Blink->Flink = Flink;
    Flink->Blink = Blink;
    OwnerThread->ThreadLock = 0LL;
    v16 = (struct _KMUTANT *)Mutant->Header.WaitListHead.Flink;
    Mutant->OwnerThread = 0LL;
    if ( v16 != (struct _KMUTANT *)&Mutant->Header.WaitListHead )
    {
      while ( 1 )
      {
        v17 = (__int64)v16;
        v16 = *(struct _KMUTANT **)&v16->Header.Lock;
        v18 = *(_QWORD *)v17;
        v19 = *(_QWORD **)(v17 + 8);
        if ( *(_QWORD *)(*(_QWORD *)v17 + 8LL) != v17 || *v19 != v17 )
          __fastfail(3u);
        *v19 = v18;
        *(_QWORD *)(v18 + 8) = v19;
        v20 = *(_BYTE *)(v17 + 16);
        if ( v20 == 1 )
        {
          if ( (unsigned __int8)KiTryUnwaitThread(v31, v17, *(unsigned __int16 *)(v17 + 18), v35) )
          {
            v21 = Mutant->Header.SignalState-- == 1;
            if ( v21 )
              goto LABEL_24;
          }
        }
        else if ( v20 == 2 )
        {
          *(_BYTE *)(v17 + 17) = 5;
          v24 = *(_QWORD *)(v17 + 24);
          *(_QWORD *)v17 = 0LL;
          __writecr8(2uLL);
          v25 = KeGetCurrentPrcb();
          v26 = v25->CurrentThread;
          if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
          {
            IsThreadRunning = KeIsThreadRunning(v25->CurrentThread);
            EtwTraceEnqueueWork(v26, v17, IsThreadRunning);
          }
          KiAcquireKobjectLockSafe((volatile signed __int32 *)v24, (__int64)Flink, v10);
          if ( *(_QWORD *)(v24 + 16) == v24 + 8
            || *(_DWORD *)(v24 + 40) >= *(_DWORD *)(v24 + 44)
            || v26->Queue == (_DISPATCHER_HEADER *volatile)v24 && v26->WaitReason == 15
            || !KiWakeQueueWaiter((__int64)v25, v24, v17) )
          {
            ++*(_DWORD *)(v24 + 4);
            v28 = *(__int64 **)(v24 + 32);
            *(_QWORD *)v17 = v24 + 24;
            *(_QWORD *)(v17 + 8) = v28;
            if ( *v28 != v24 + 24 )
              __fastfail(3u);
            *v28 = v17;
            *(_QWORD *)(v24 + 32) = v17;
          }
          _InterlockedAnd((volatile signed __int32 *)v24, 0xFFFFFF7F);
          v21 = Mutant->Header.SignalState-- == 1;
          if ( v21 )
          {
LABEL_24:
            CurrentThread = v32;
            break;
          }
        }
        else
        {
          KiTryUnwaitThread(v31, v17, 256LL, 0LL);
        }
        if ( v16 == (struct _KMUTANT *)&Mutant->Header.WaitListHead )
          goto LABEL_24;
      }
    }
    _InterlockedAnd(&Mutant->Header.Lock, 0xFFFFFF7F);
    if ( Abandoned )
    {
      v22 = &KiObjectRundownLocks[16 * (((unsigned __int64)Mutant >> 4) & 0x3F)];
      ExAcquireSpinLockExclusiveAtDpcLevel(v22);
      ExReleaseSpinLockExclusiveFromDpcLevel(v22);
    }
    v6 = ApcDisable;
    v5 = 0;
    SignalState = v37;
  }
  else
  {
    _InterlockedAnd(&Mutant->Header.Lock, 0xFFFFFF7F);
  }
  if ( Wait )
    v5 = 3;
  KiExitDispatcher((_DWORD)v31, v5, 1, Increment, CurrentIrql);
  if ( v6 )
    KiLeaveCriticalRegionUnsafe(CurrentThread);
  return SignalState;
}
