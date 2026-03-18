/*
 * XREFs of KePulseEvent @ 0x140014A90
 * Callers:
 *     MiWorkingSetManager @ 0x1400131F4 (MiWorkingSetManager.c)
 *     MmResourcesAvailable @ 0x140041CA0 (MmResourcesAvailable.c)
 *     MiPulseCommitSignal @ 0x1401DBF14 (MiPulseCommitSignal.c)
 *     MiPulseLowAvailableEvent @ 0x1401E41C0 (MiPulseLowAvailableEvent.c)
 *     NtPulseEvent @ 0x1403CB714 (NtPulseEvent.c)
 *     MiAddPhysicalMemory @ 0x140622114 (MiAddPhysicalMemory.c)
 *     MiRemovePhysicalMemory @ 0x140622D58 (MiRemovePhysicalMemory.c)
 *     VerifierKePulseEvent @ 0x1406C6140 (VerifierKePulseEvent.c)
 * Callees:
 *     KiAcquireKobjectLockSafe @ 0x140034400 (KiAcquireKobjectLockSafe.c)
 *     KeYieldProcessorEx @ 0x14007CAC0 (KeYieldProcessorEx.c)
 *     KiWakeQueueWaiter @ 0x14007E740 (KiWakeQueueWaiter.c)
 *     KiExitDispatcher @ 0x1400879A0 (KiExitDispatcher.c)
 *     KiTryUnwaitThread @ 0x140088FA0 (KiTryUnwaitThread.c)
 *     KeIsThreadRunning @ 0x1401C2F44 (KeIsThreadRunning.c)
 *     EtwTraceEnqueueWork @ 0x14020DD68 (EtwTraceEnqueueWork.c)
 */

LONG __stdcall KePulseEvent(PRKEVENT Event, KPRIORITY Increment, BOOLEAN Wait)
{
  int v3; // esi
  BOOL v5; // edi
  char CurrentIrql; // r13
  struct _KPRCB *CurrentPrcb; // r15
  LONG SignalState; // ebp
  struct _LIST_ENTRY *Flink; // r14
  LIST_ENTRY *p_WaitListHead; // rdi
  struct _LIST_ENTRY *v13; // rdx
  char v14; // al
  __int64 v15; // r8
  struct _KEVENT *v16; // rax
  struct _KEVENT *v17; // rdi
  __int64 v18; // rcx
  struct _LIST_ENTRY *v19; // rax
  char v20; // al
  bool v21; // zf
  __int64 v22; // r14
  _KTHREAD *v23; // r9
  unsigned __int8 v24; // al
  __int64 v25; // r9
  struct _KEVENT **v26; // rcx
  unsigned __int8 IsThreadRunning; // al
  __int64 v28; // rdx
  __int64 v29; // r9
  _DISPATCHER_HEADER *volatile v30; // rcx
  char v31; // al
  struct _LIST_ENTRY *v32; // r8
  struct _LIST_ENTRY *v33; // [rsp+30h] [rbp-58h]
  struct _KPRCB *v34; // [rsp+30h] [rbp-58h]
  struct _KEVENT *v35; // [rsp+38h] [rbp-50h]
  LIST_ENTRY *v36; // [rsp+38h] [rbp-50h]
  _KTHREAD *CurrentThread; // [rsp+40h] [rbp-48h]
  struct _KPRCB *v38; // [rsp+48h] [rbp-40h]
  int v39; // [rsp+90h] [rbp+8h] BYREF
  BOOLEAN v40; // [rsp+A0h] [rbp+18h]
  _DISPATCHER_HEADER *volatile Blink; // [rsp+A8h] [rbp+20h]

  v40 = Wait;
  v3 = 0;
  v5 = (Event->Header.Type & 0x7F) == 0;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  CurrentPrcb = KeGetCurrentPrcb();
  v39 = 0;
  while ( _interlockedbittestandset(&Event->Header.Lock, 7u) )
  {
    do
      KeYieldProcessorEx(&v39);
    while ( (Event->Header.LockNV & 0x80u) != 0 );
  }
  SignalState = Event->Header.SignalState;
  if ( !SignalState )
  {
    Event->Header.SignalState = 1;
    if ( v5 )
    {
      Flink = Event->Header.WaitListHead.Flink;
      p_WaitListHead = &Event->Header.WaitListHead;
      if ( Flink == &Event->Header.WaitListHead )
      {
LABEL_5:
        Event->Header.WaitListHead.Blink = &Event->Header.WaitListHead;
        p_WaitListHead->Flink = p_WaitListHead;
        goto LABEL_6;
      }
      while ( 1 )
      {
        v13 = Flink;
        Flink = Flink->Flink;
        v33 = v13;
        v14 = (char)v13[1].Flink;
        if ( v14 == 1 )
        {
          v15 = WORD1(v13[1].Flink);
        }
        else
        {
          if ( v14 == 2 )
          {
            BYTE1(v13[1].Flink) = 5;
            Blink = (_DISPATCHER_HEADER *volatile)v13[1].Blink;
            v36 = &Blink->WaitListHead;
            v13->Flink = 0LL;
            __writecr8(2uLL);
            v38 = KeGetCurrentPrcb();
            CurrentThread = v38->CurrentThread;
            if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
            {
              IsThreadRunning = KeIsThreadRunning(v38->CurrentThread);
              EtwTraceEnqueueWork(v29, v28, IsThreadRunning);
            }
            KiAcquireKobjectLockSafe(Blink);
            v30 = Blink;
            if ( v36->Blink == v36
              || LODWORD(Blink[1].WaitListHead.Blink) >= HIDWORD(Blink[1].WaitListHead.Blink)
              || CurrentThread->Queue == Blink && CurrentThread->WaitReason == 15
              || (v31 = KiWakeQueueWaiter(v38, Blink, v33), v30 = Blink, !v31) )
            {
              ++v30->SignalState;
              v32 = v30[1].WaitListHead.Flink;
              v33->Flink = (struct _LIST_ENTRY *)&v30[1];
              v33->Blink = v32;
              if ( (_DISPATCHER_HEADER *volatile)v32->Flink != &v30[1] )
                __fastfail(3u);
              v32->Flink = v33;
              v30[1].WaitListHead.Flink = v33;
            }
            _InterlockedAnd(&v30->Lock, 0xFFFFFF7F);
            goto LABEL_12;
          }
          v15 = 256LL;
        }
        KiTryUnwaitThread(CurrentPrcb, v13, v15, 0LL);
LABEL_12:
        if ( Flink == p_WaitListHead )
          goto LABEL_5;
      }
    }
    v16 = (struct _KEVENT *)Event->Header.WaitListHead.Flink;
    if ( v16 != (struct _KEVENT *)&Event->Header.WaitListHead )
    {
      do
      {
        v17 = v16;
        v35 = *(struct _KEVENT **)&v16->Header.Lock;
        v18 = *(_QWORD *)&v16->Header.Lock;
        v19 = v16->Header.WaitListHead.Flink;
        if ( *(struct _KEVENT **)(v18 + 8) != v17 || (struct _KEVENT *)v19->Flink != v17 )
          __fastfail(3u);
        v19->Flink = (struct _LIST_ENTRY *)v18;
        *(_QWORD *)(v18 + 8) = v19;
        v20 = (char)v17->Header.WaitListHead.Blink;
        if ( v20 == 1 )
        {
          if ( (unsigned __int8)KiTryUnwaitThread(CurrentPrcb, v17, WORD1(v17->Header.WaitListHead.Blink), 0LL) )
          {
            v21 = Event->Header.SignalState-- == 1;
            if ( v21 )
              break;
          }
        }
        else if ( v20 == 2 )
        {
          BYTE1(v17->Header.WaitListHead.Blink) = 5;
          v22 = *(_QWORD *)&v17[1].Header.Lock;
          *(_QWORD *)&v17->Header.Lock = 0LL;
          __writecr8(2uLL);
          v34 = KeGetCurrentPrcb();
          v23 = v34->CurrentThread;
          Blink = &v23->Header;
          if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
          {
            v24 = KeIsThreadRunning(v23);
            EtwTraceEnqueueWork(v25, v17, v24);
          }
          KiAcquireKobjectLockSafe(v22);
          if ( *(_QWORD *)(v22 + 16) == v22 + 8
            || *(_DWORD *)(v22 + 40) >= *(_DWORD *)(v22 + 44)
            || Blink[9].WaitListHead.Blink == (struct _LIST_ENTRY *)v22 && BYTE3(Blink[26].WaitListHead.Blink) == 15
            || !(unsigned __int8)KiWakeQueueWaiter(v34, v22, v17) )
          {
            ++*(_DWORD *)(v22 + 4);
            v26 = *(struct _KEVENT ***)(v22 + 32);
            *(_QWORD *)&v17->Header.Lock = v22 + 24;
            v17->Header.WaitListHead.Flink = (struct _LIST_ENTRY *)v26;
            if ( *v26 != (struct _KEVENT *)(v22 + 24) )
              __fastfail(3u);
            *v26 = v17;
            *(_QWORD *)(v22 + 32) = v17;
          }
          _InterlockedAnd((volatile signed __int32 *)v22, 0xFFFFFF7F);
          v21 = Event->Header.SignalState-- == 1;
          if ( v21 )
            break;
        }
        else
        {
          KiTryUnwaitThread(CurrentPrcb, v17, 256LL, 0LL);
        }
        v16 = v35;
      }
      while ( v35 != (struct _KEVENT *)&Event->Header.WaitListHead );
    }
  }
LABEL_6:
  Event->Header.SignalState = 0;
  _InterlockedAnd(&Event->Header.Lock, 0xFFFFFF7F);
  if ( v40 )
    v3 = 3;
  KiExitDispatcher((_DWORD)CurrentPrcb, v3, 1, Increment, CurrentIrql);
  return SignalState;
}
