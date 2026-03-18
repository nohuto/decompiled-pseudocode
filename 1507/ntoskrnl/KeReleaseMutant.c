/*
 * XREFs of KeReleaseMutant @ 0x140022C40
 * Callers:
 *     KiExpandKernelStackAndCalloutOnStackSegment @ 0x1400219C0 (KiExpandKernelStackAndCalloutOnStackSegment.c)
 *     ExpDeleteMutant @ 0x140022C28 (ExpDeleteMutant.c)
 *     NtSignalAndWaitForSingleObject @ 0x1402331B0 (NtSignalAndWaitForSingleObject.c)
 *     MmReleaseLoadLock @ 0x1404523E8 (MmReleaseLoadLock.c)
 *     NtReleaseMutant @ 0x1404526D0 (NtReleaseMutant.c)
 *     VerifierKeReleaseMutant @ 0x140748824 (VerifierKeReleaseMutant.c)
 *     VerifierKeReleaseMutantNoReboot @ 0x1407488B8 (VerifierKeReleaseMutantNoReboot.c)
 * Callees:
 *     RtlRaiseStatus @ 0x14001BB3C (RtlRaiseStatus.c)
 *     KiWakeQueueWaiter @ 0x140043EC0 (KiWakeQueueWaiter.c)
 *     KiExitDispatcher @ 0x14004C6B0 (KiExitDispatcher.c)
 *     KiTryUnwaitThread @ 0x14004DFB0 (KiTryUnwaitThread.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     EtwTraceEnqueueWork @ 0x14025CFD4 (EtwTraceEnqueueWork.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140264210 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

LONG __stdcall KeReleaseMutant(PRKMUTANT Mutant, KPRIORITY Increment, BOOLEAN Abandoned, BOOLEAN Wait)
{
  struct _KTHREAD *CurrentThread; // rdi
  BOOLEAN v5; // r15
  KPRIORITY v7; // r13d
  int v9; // r14d
  unsigned __int8 CurrentIrql; // bp
  struct _KPRCB *CurrentPrcb; // r10
  unsigned int v12; // ebx
  int SignalState; // ebx
  unsigned int v14; // ebx
  _KTHREAD *OwnerThread; // rdi
  struct _LIST_ENTRY *Flink; // rdx
  struct _LIST_ENTRY *Blink; // rcx
  struct _KMUTANT *v18; // r12
  struct _KMUTANT *v19; // r14
  struct _LIST_ENTRY *v20; // rcx
  struct _LIST_ENTRY *v21; // rax
  char v22; // al
  bool v23; // zf
  volatile signed __int32 *v24; // rsi
  struct _LIST_ENTRY *v25; // rdi
  struct _KPRCB *v26; // r13
  _KTHREAD *v27; // rbp
  bool v28; // al
  unsigned int v29; // ebx
  struct _KMUTANT **v30; // rcx
  unsigned int v31; // ebx
  signed __int32 i; // edx
  __int64 v33; // rdx
  __int64 v34; // r8
  __int16 v35; // ax
  $CD287064E7C9F7953DE243E927CFCB99 *v36; // rcx
  NTSTATUS v38; // ecx
  int ApcDisable; // [rsp+30h] [rbp-88h]
  struct _KPRCB *v40; // [rsp+38h] [rbp-80h]
  unsigned __int8 v41; // [rsp+40h] [rbp-78h]
  struct _KTHREAD *v42; // [rsp+48h] [rbp-70h]
  char v43[8]; // [rsp+50h] [rbp-68h] BYREF
  LONG LockNV; // [rsp+58h] [rbp-60h]
  void *retaddr; // [rsp+B8h] [rbp+0h]
  int v46; // [rsp+C0h] [rbp+8h]

  CurrentThread = KeGetCurrentThread();
  v5 = Wait;
  v42 = CurrentThread;
  v7 = Increment;
  v9 = 0;
  CurrentIrql = KeGetCurrentIrql();
  v41 = CurrentIrql;
  __writecr8(2uLL);
  CurrentPrcb = KeGetCurrentPrcb();
  v12 = 0;
  v40 = CurrentPrcb;
  if ( _interlockedbittestandset(&Mutant->Header.Lock, 7u) )
  {
    do
    {
      if ( (++v12 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v12);
    }
    while ( (Mutant->Header.LockNV & 0x80u) != 0 || _interlockedbittestandset(&Mutant->Header.Lock, 7u) );
    CurrentPrcb = v40;
  }
  SignalState = Mutant->Header.SignalState;
  v46 = SignalState;
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
      v38 = -1073741754;
      if ( Mutant->Abandoned )
        v38 = 128;
      RtlRaiseStatus(v38);
    }
    ++Mutant->Header.SignalState;
  }
  if ( Mutant->Header.SignalState == 1 && SignalState <= 0 )
  {
    v14 = 0;
    LockNV = Mutant->Header.LockNV;
    BYTE2(LockNV) = 0;
    Mutant->Header.LockNV = LockNV;
    OwnerThread = Mutant->OwnerThread;
    ApcDisable = Mutant->ApcDisable;
    while ( _interlockedbittestandset64((volatile signed __int32 *)&OwnerThread->ThreadLock, 0LL) )
    {
      do
      {
        if ( (++v14 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v14);
      }
      while ( OwnerThread->ThreadLock );
    }
    Flink = Mutant->MutantListEntry.Flink;
    Blink = Mutant->MutantListEntry.Blink;
    if ( Flink->Blink != &Mutant->MutantListEntry || Blink->Flink != &Mutant->MutantListEntry )
      __fastfail(3u);
    Blink->Flink = Flink;
    Flink->Blink = Blink;
    OwnerThread->ThreadLock = 0LL;
    v18 = (struct _KMUTANT *)Mutant->Header.WaitListHead.Flink;
    Mutant->OwnerThread = 0LL;
    if ( v18 != (struct _KMUTANT *)&Mutant->Header.WaitListHead )
    {
      while ( 1 )
      {
        v19 = v18;
        v18 = *(struct _KMUTANT **)&v18->Header.Lock;
        v20 = *(struct _LIST_ENTRY **)&v19->Header.Lock;
        v21 = v19->Header.WaitListHead.Flink;
        if ( *(struct _KMUTANT **)(*(_QWORD *)&v19->Header.Lock + 8LL) != v19 || (struct _KMUTANT *)v21->Flink != v19 )
          __fastfail(3u);
        v21->Flink = v20;
        v20->Blink = v21;
        v22 = (char)v19->Header.WaitListHead.Blink;
        if ( v22 == 1 )
        {
          if ( (unsigned __int8)KiTryUnwaitThread(v40, v19, WORD1(v19->Header.WaitListHead.Blink), v43) )
          {
            v23 = Mutant->Header.SignalState-- == 1;
            if ( v23 )
              goto LABEL_32;
          }
        }
        else if ( v22 == 2 )
        {
          BYTE1(v19->Header.WaitListHead.Blink) = 5;
          v25 = v19->MutantListEntry.Flink;
          *(_QWORD *)&v19->Header.Lock = 0LL;
          __writecr8(2uLL);
          v26 = KeGetCurrentPrcb();
          v27 = v26->CurrentThread;
          if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
          {
            v28 = v27->WaitBlockFill6[68] == 2 && v27->NextProcessor == KeGetPcr()->Prcb.Number;
            EtwTraceEnqueueWork(v26->CurrentThread, v19, v28);
          }
          v29 = 0;
          if ( _interlockedbittestandset((volatile signed __int32 *)v25, 7u) )
          {
            do
            {
              if ( (++v29 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
                _mm_pause();
              else
                HvlNotifyLongSpinWait(v29);
            }
            while ( (LODWORD(v25->Flink) & 0x80u) != 0 || _interlockedbittestandset((volatile signed __int32 *)v25, 7u) );
          }
          if ( v25[1].Flink == (struct _LIST_ENTRY *)&v25->Blink
            || LODWORD(v25[2].Blink) >= HIDWORD(v25[2].Blink)
            || (struct _LIST_ENTRY *)v27->Queue == v25 && v27->WaitReason == 15
            || !(unsigned __int8)KiWakeQueueWaiter(v26, v25, v19) )
          {
            ++HIDWORD(v25->Flink);
            v30 = (struct _KMUTANT **)v25[2].Flink;
            *(_QWORD *)&v19->Header.Lock = (char *)v25 + 24;
            v19->Header.WaitListHead.Flink = (struct _LIST_ENTRY *)v30;
            if ( *v30 != (struct _KMUTANT *)&v25[1].Blink )
              __fastfail(3u);
            *v30 = v19;
            v25[2].Flink = (struct _LIST_ENTRY *)v19;
          }
          _InterlockedAnd((volatile signed __int32 *)v25, 0xFFFFFF7F);
          v23 = Mutant->Header.SignalState-- == 1;
          if ( v23 )
          {
LABEL_32:
            CurrentIrql = v41;
            v5 = Wait;
            v7 = Increment;
            break;
          }
        }
        else
        {
          KiTryUnwaitThread(v40, v19, 256LL, 0LL);
        }
        if ( v18 == (struct _KMUTANT *)&Mutant->Header.WaitListHead )
          goto LABEL_32;
      }
    }
    _InterlockedAnd(&Mutant->Header.Lock, 0xFFFFFF7F);
    if ( Abandoned )
    {
      v24 = (volatile signed __int32 *)((char *)&KiObjectRundownLocks + 64 * (((unsigned __int64)Mutant >> 4) & 0x3F));
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v24);
      }
      else
      {
        v31 = 0;
        if ( _interlockedbittestandset(v24, 0x1Fu) )
          v31 = ExpWaitForSpinLockExclusiveAndAcquire(v24);
        for ( i = *v24; (*v24 & 0xBFFFFFFF) != 0x80000000; i = *v24 )
        {
          if ( (i & 0x40000000) == 0 )
            _InterlockedCompareExchange(v24, i | 0x40000000, i);
          if ( (++v31 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
            _mm_pause();
          else
            HvlNotifyLongSpinWait(v31);
        }
      }
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v24, retaddr);
      else
        *v24 = 0;
    }
    SignalState = v46;
    CurrentThread = v42;
    v9 = ApcDisable;
  }
  else
  {
    _InterlockedAnd(&Mutant->Header.Lock, 0xFFFFFF7F);
  }
  KiExitDispatcher((_DWORD)v40, v5, 1, v7, CurrentIrql);
  if ( v9 )
  {
    v35 = CurrentThread->KernelApcDisable + 1;
    CurrentThread->KernelApcDisable = v35;
    if ( !v35 )
    {
      v36 = &CurrentThread->152;
      if ( ($CD287064E7C9F7953DE243E927CFCB99 *)v36->ApcState.ApcListHead[0].Flink != v36
        && !CurrentThread->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery(v36, v33, v34);
      }
    }
  }
  return SignalState;
}
