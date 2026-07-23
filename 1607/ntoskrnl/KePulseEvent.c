/*
 * XREFs of KePulseEvent @ 0x1400BCDA0
 * Callers:
 *     MmResourcesAvailable @ 0x14007E300 (MmResourcesAvailable.c)
 *     MiWorkingSetManager @ 0x1400BBD98 (MiWorkingSetManager.c)
 *     MiPulseCommitSignal @ 0x1401ECF04 (MiPulseCommitSignal.c)
 *     MiPulseLowAvailableEvent @ 0x1401F373C (MiPulseLowAvailableEvent.c)
 *     NtPulseEvent @ 0x1404D6C04 (NtPulseEvent.c)
 *     MiAddPhysicalMemory @ 0x1406576C0 (MiAddPhysicalMemory.c)
 *     MiRemovePhysicalMemory @ 0x1406582A4 (MiRemovePhysicalMemory.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002E830 (KeYieldProcessorEx.c)
 *     KiExitDispatcher @ 0x140056280 (KiExitDispatcher.c)
 *     KiTryUnwaitThread @ 0x140057920 (KiTryUnwaitThread.c)
 *     KiAcquireKobjectLockSafe @ 0x1400EC640 (KiAcquireKobjectLockSafe.c)
 *     KiWakeQueueWaiter @ 0x1400EC680 (KiWakeQueueWaiter.c)
 *     KiWakeOtherQueueWaiters @ 0x1400F7B48 (KiWakeOtherQueueWaiters.c)
 *     KeIsThreadRunning @ 0x1401D2AA4 (KeIsThreadRunning.c)
 *     EtwTraceEnqueueWork @ 0x140225A4C (EtwTraceEnqueueWork.c)
 */

LONG __stdcall KePulseEvent(PRKEVENT Event, KPRIORITY Increment, BOOLEAN Wait)
{
  unsigned int v3; // esi
  BOOL v5; // edi
  unsigned __int8 CurrentIrql; // r13
  struct _KPRCB *CurrentPrcb; // r15
  LONG SignalState; // ebp
  struct _LIST_ENTRY *Flink; // r14
  LIST_ENTRY *p_WaitListHead; // rdi
  __int64 v13; // rdx
  char v14; // al
  __int64 v15; // r8
  struct _KEVENT *v16; // rax
  __int64 v17; // rdi
  struct _LIST_ENTRY *v18; // rcx
  struct _LIST_ENTRY *v19; // rax
  char v20; // al
  bool v21; // zf
  __int64 v22; // r14
  unsigned __int8 v23; // al
  __int64 v24; // r9
  _QWORD *v25; // rcx
  int v26; // r8d
  __int64 *v27; // rdx
  unsigned __int8 IsThreadRunning; // al
  __int64 v29; // rdx
  __int64 v30; // r9
  _KTHREAD **v31; // r8
  struct _KPRCB *v32; // rcx
  char v33; // al
  int v34; // r10d
  struct _KPRCB **v35; // r9
  _KTHREAD **p_CurrentThread; // [rsp+30h] [rbp-58h]
  struct _KPRCB *v37; // [rsp+38h] [rbp-50h]
  struct _KEVENT *v38; // [rsp+38h] [rbp-50h]
  _KTHREAD *v39; // [rsp+40h] [rbp-48h]
  struct _KPRCB *v40; // [rsp+40h] [rbp-48h]
  _KTHREAD *CurrentThread; // [rsp+48h] [rbp-40h]
  int v42; // [rsp+90h] [rbp+8h] BYREF
  BOOLEAN v43; // [rsp+A0h] [rbp+18h]
  struct _KPRCB *v44; // [rsp+A8h] [rbp+20h]

  v43 = Wait;
  v3 = 0;
  v5 = (Event->Header.Type & 0x7F) == 0;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  CurrentPrcb = KeGetCurrentPrcb();
  v42 = 0;
  while ( _interlockedbittestandset(&Event->Header.Lock, 7u) )
  {
    do
      KeYieldProcessorEx(&v42);
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
        v13 = (__int64)Flink;
        Flink = Flink->Flink;
        v37 = (struct _KPRCB *)v13;
        v14 = *(_BYTE *)(v13 + 16);
        if ( v14 == 1 )
        {
          v15 = *(unsigned __int16 *)(v13 + 18);
        }
        else
        {
          if ( v14 == 2 )
          {
            *(_BYTE *)(v13 + 17) = 5;
            v44 = *(struct _KPRCB **)(v13 + 24);
            p_CurrentThread = &v44->CurrentThread;
            *(_QWORD *)v13 = 0LL;
            __writecr8(2uLL);
            v40 = KeGetCurrentPrcb();
            CurrentThread = v40->CurrentThread;
            if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
            {
              IsThreadRunning = KeIsThreadRunning(v40->CurrentThread);
              EtwTraceEnqueueWork(v30, v29, IsThreadRunning);
            }
            KiAcquireKobjectLockSafe(v44);
            v31 = p_CurrentThread;
            v32 = v44;
            if ( *v31 == (_KTHREAD *)v31
              || LODWORD(v44->RspBase) >= HIDWORD(v44->RspBase)
              || (struct _KPRCB *)CurrentThread->Queue == v44 && CurrentThread->WaitReason == 15 )
            {
LABEL_53:
              v34 = *(_DWORD *)&v32->LegacyNumber;
              *(_DWORD *)&v32->LegacyNumber = v34 + 1;
              v35 = *(struct _KPRCB ***)&v32->NestingLevel;
              if ( *v35 != (struct _KPRCB *)&v32->IdleThread )
                __fastfail(3u);
              *(_QWORD *)&v37->MxCsr = &v32->IdleThread;
              v37->CurrentThread = (_KTHREAD *)v35;
              *v35 = v37;
              *(_QWORD *)&v32->NestingLevel = v37;
              if ( !v34 && *v31 != (_KTHREAD *)v31 )
              {
                KiWakeOtherQueueWaiters(v40, v32);
                v32 = v44;
              }
            }
            else
            {
              v33 = KiWakeQueueWaiter(v40, v44, v37);
              v32 = v44;
              if ( !v33 )
              {
                v31 = p_CurrentThread;
                goto LABEL_53;
              }
            }
            _InterlockedAnd((volatile signed __int32 *)v32, 0xFFFFFF7F);
            goto LABEL_12;
          }
          v15 = 256LL;
        }
        KiTryUnwaitThread((__int64)CurrentPrcb, v13, v15, 0LL);
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
        v17 = (__int64)v16;
        v38 = *(struct _KEVENT **)&v16->Header.Lock;
        v18 = *(struct _LIST_ENTRY **)&v16->Header.Lock;
        v19 = v16->Header.WaitListHead.Flink;
        if ( v18->Blink != (struct _LIST_ENTRY *)v17 || v19->Flink != (struct _LIST_ENTRY *)v17 )
          __fastfail(3u);
        v19->Flink = v18;
        v18->Blink = v19;
        v20 = *(_BYTE *)(v17 + 16);
        if ( v20 == 1 )
        {
          if ( (unsigned __int8)KiTryUnwaitThread((__int64)CurrentPrcb, v17, *(unsigned __int16 *)(v17 + 18), 0LL) )
          {
            v21 = Event->Header.SignalState-- == 1;
            if ( v21 )
              break;
          }
        }
        else
        {
          if ( v20 == 2 )
          {
            *(_BYTE *)(v17 + 17) = 5;
            v22 = *(_QWORD *)(v17 + 24);
            *(_QWORD *)v17 = 0LL;
            __writecr8(2uLL);
            v44 = KeGetCurrentPrcb();
            v39 = v44->CurrentThread;
            if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
            {
              v23 = KeIsThreadRunning(v44->CurrentThread);
              EtwTraceEnqueueWork(v24, v17, v23);
            }
            KiAcquireKobjectLockSafe(v22);
            v25 = (_QWORD *)(v22 + 8);
            if ( (_QWORD *)*v25 == v25
              || *(_DWORD *)(v22 + 40) >= *(_DWORD *)(v22 + 44)
              || v39->Queue == (_DISPATCHER_HEADER *volatile)v22 && v39->WaitReason == 15 )
            {
LABEL_33:
              v26 = *(_DWORD *)(v22 + 4);
              *(_DWORD *)(v22 + 4) = v26 + 1;
              v27 = *(__int64 **)(v22 + 32);
              if ( *v27 != v22 + 24 )
                __fastfail(3u);
              *(_QWORD *)v17 = v22 + 24;
              *(_QWORD *)(v17 + 8) = v27;
              *v27 = v17;
              *(_QWORD *)(v22 + 32) = v17;
              if ( !v26 && (_QWORD *)*v25 != v25 )
                KiWakeOtherQueueWaiters(v44, v22);
            }
            else if ( !(unsigned __int8)KiWakeQueueWaiter(v44, v22, v17) )
            {
              v25 = (_QWORD *)(v22 + 8);
              goto LABEL_33;
            }
            _InterlockedAnd((volatile signed __int32 *)v22, 0xFFFFFF7F);
            v21 = Event->Header.SignalState-- == 1;
            if ( v21 )
              break;
            goto LABEL_40;
          }
          KiTryUnwaitThread((__int64)CurrentPrcb, v17, 256LL, 0LL);
        }
LABEL_40:
        v16 = v38;
      }
      while ( v38 != (struct _KEVENT *)&Event->Header.WaitListHead );
    }
  }
LABEL_6:
  Event->Header.SignalState = 0;
  _InterlockedAnd(&Event->Header.Lock, 0xFFFFFF7F);
  if ( v43 )
    v3 = 3;
  KiExitDispatcher((__int64)CurrentPrcb, v3, 1LL, (unsigned int)Increment, CurrentIrql);
  return SignalState;
}
