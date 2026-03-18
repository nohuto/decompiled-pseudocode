/*
 * XREFs of KePulseEvent @ 0x1400118D0
 * Callers:
 *     MiWorkingSetManager @ 0x1400124C4 (MiWorkingSetManager.c)
 *     MmResourcesAvailable @ 0x140013FD0 (MmResourcesAvailable.c)
 *     MiAddPhysicalMemory @ 0x1402123C8 (MiAddPhysicalMemory.c)
 *     MiPulseCommitSignal @ 0x140220BC8 (MiPulseCommitSignal.c)
 *     MiPulseLowAvailableEvent @ 0x14022E01C (MiPulseLowAvailableEvent.c)
 *     NtPulseEvent @ 0x14042CF98 (NtPulseEvent.c)
 *     MiRemovePhysicalMemory @ 0x1406A1FE8 (MiRemovePhysicalMemory.c)
 *     VerifierKePulseEvent @ 0x1407484F0 (VerifierKePulseEvent.c)
 * Callees:
 *     KiWakeQueueWaiter @ 0x140043EC0 (KiWakeQueueWaiter.c)
 *     KiExitDispatcher @ 0x14004C6B0 (KiExitDispatcher.c)
 *     KiTryUnwaitThread @ 0x14004DFB0 (KiTryUnwaitThread.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     EtwTraceEnqueueWork @ 0x14025CFD4 (EtwTraceEnqueueWork.c)
 */

LONG __stdcall KePulseEvent(PRKEVENT Event, KPRIORITY Increment, BOOLEAN Wait)
{
  PRKEVENT v3; // r15
  BOOL v4; // edi
  struct _KPRCB *CurrentPrcb; // r10
  unsigned int v6; // ebx
  LIST_ENTRY *Flink; // r12
  LIST_ENTRY *p_WaitListHead; // r13
  LIST_ENTRY *v9; // rsi
  struct _LIST_ENTRY *v10; // rcx
  struct _LIST_ENTRY *Blink; // rax
  char v12; // al
  bool v13; // zf
  struct _LIST_ENTRY *v14; // rdi
  struct _KPRCB *v15; // r15
  _KTHREAD *CurrentThread; // rbp
  bool v17; // al
  unsigned int v18; // ebx
  struct _LIST_ENTRY *v19; // rcx
  LIST_ENTRY *v20; // r14
  LIST_ENTRY *v21; // r12
  LIST_ENTRY *v22; // rsi
  char v23; // al
  __int64 v24; // r8
  struct _LIST_ENTRY *v25; // rdi
  struct _KPRCB *v26; // r13
  _KTHREAD *v27; // rbp
  bool v28; // al
  unsigned int v29; // ebx
  struct _LIST_ENTRY *v30; // rcx
  struct _KPRCB *v32; // [rsp+30h] [rbp-58h]
  char CurrentIrql; // [rsp+38h] [rbp-50h]
  LONG SignalState; // [rsp+A8h] [rbp+20h]

  v3 = Event;
  v4 = (Event->Header.Type & 0x7F) == 0;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  CurrentPrcb = KeGetCurrentPrcb();
  v6 = 0;
  v32 = CurrentPrcb;
  if ( _interlockedbittestandset(&Event->Header.Lock, 7u) )
  {
    do
    {
      if ( (++v6 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v6);
    }
    while ( (v3->Header.LockNV & 0x80u) != 0 || _interlockedbittestandset(&v3->Header.Lock, 7u) );
    CurrentPrcb = v32;
  }
  SignalState = v3->Header.SignalState;
  if ( SignalState )
    goto LABEL_78;
  v3->Header.SignalState = 1;
  if ( !v4 )
  {
    Flink = v3->Header.WaitListHead.Flink;
    p_WaitListHead = &v3->Header.WaitListHead;
    if ( Flink != &v3->Header.WaitListHead )
    {
      while ( 1 )
      {
        v9 = Flink;
        Flink = Flink->Flink;
        v10 = v9->Flink;
        Blink = v9->Blink;
        if ( v9->Flink->Blink != v9 || Blink->Flink != v9 )
          __fastfail(3u);
        Blink->Flink = v10;
        v10->Blink = Blink;
        v12 = (char)v9[1].Flink;
        if ( v12 == 1 )
        {
          if ( (unsigned __int8)KiTryUnwaitThread(CurrentPrcb, v9, WORD1(v9[1].Flink), 0LL) )
          {
            v13 = v3->Header.SignalState-- == 1;
            if ( v13 )
              goto LABEL_78;
          }
        }
        else if ( v12 == 2 )
        {
          BYTE1(v9[1].Flink) = 5;
          v14 = v9[1].Blink;
          v9->Flink = 0LL;
          __writecr8(2uLL);
          v15 = KeGetCurrentPrcb();
          CurrentThread = v15->CurrentThread;
          if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
          {
            v17 = CurrentThread->WaitBlockFill6[68] == 2 && CurrentThread->NextProcessor == KeGetPcr()->Prcb.Number;
            EtwTraceEnqueueWork(v15->CurrentThread, v9, v17);
          }
          v18 = 0;
          if ( _interlockedbittestandset((volatile signed __int32 *)v14, 7u) )
          {
            do
            {
              if ( (++v18 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
                _mm_pause();
              else
                HvlNotifyLongSpinWait(v18);
            }
            while ( (LODWORD(v14->Flink) & 0x80u) != 0 || _interlockedbittestandset((volatile signed __int32 *)v14, 7u) );
          }
          if ( v14[1].Flink == (struct _LIST_ENTRY *)&v14->Blink
            || LODWORD(v14[2].Blink) >= HIDWORD(v14[2].Blink)
            || (struct _LIST_ENTRY *)CurrentThread->Queue == v14 && CurrentThread->WaitReason == 15
            || !(unsigned __int8)KiWakeQueueWaiter(v15, v14, v9) )
          {
            ++HIDWORD(v14->Flink);
            v19 = v14[2].Flink;
            v9->Flink = (struct _LIST_ENTRY *)((char *)v14 + 24);
            v9->Blink = v19;
            if ( v19->Flink != (struct _LIST_ENTRY *)&v14[1].Blink )
              __fastfail(3u);
            v19->Flink = v9;
            v14[2].Flink = v9;
          }
          _InterlockedAnd((volatile signed __int32 *)v14, 0xFFFFFF7F);
          v3 = Event;
          v13 = Event->Header.SignalState-- == 1;
          if ( v13 )
            goto LABEL_78;
        }
        else
        {
          KiTryUnwaitThread(CurrentPrcb, v9, 256LL, 0LL);
        }
        if ( Flink == p_WaitListHead )
          goto LABEL_78;
        CurrentPrcb = v32;
      }
    }
    goto LABEL_78;
  }
  v20 = v3->Header.WaitListHead.Flink;
  v21 = &v3->Header.WaitListHead;
  if ( v20 == &v3->Header.WaitListHead )
    goto LABEL_77;
  while ( 1 )
  {
    v22 = v20;
    v20 = v20->Flink;
    v23 = (char)v22[1].Flink;
    if ( v23 == 1 )
    {
      v24 = WORD1(v22[1].Flink);
LABEL_72:
      KiTryUnwaitThread(CurrentPrcb, v22, v24, 0LL);
      goto LABEL_73;
    }
    if ( v23 != 2 )
    {
      v24 = 256LL;
      goto LABEL_72;
    }
    BYTE1(v22[1].Flink) = 5;
    v25 = v22[1].Blink;
    v22->Flink = 0LL;
    __writecr8(2uLL);
    v26 = KeGetCurrentPrcb();
    v27 = v26->CurrentThread;
    if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
    {
      v28 = v27->WaitBlockFill6[68] == 2 && v27->NextProcessor == KeGetPcr()->Prcb.Number;
      EtwTraceEnqueueWork(v26->CurrentThread, v22, v28);
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
      || !(unsigned __int8)KiWakeQueueWaiter(v26, v25, v22) )
    {
      ++HIDWORD(v25->Flink);
      v30 = v25[2].Flink;
      v22->Flink = (struct _LIST_ENTRY *)((char *)v25 + 24);
      v22->Blink = v30;
      if ( v30->Flink != (struct _LIST_ENTRY *)&v25[1].Blink )
        __fastfail(3u);
      v30->Flink = v22;
      v25[2].Flink = v22;
    }
    _InterlockedAnd((volatile signed __int32 *)v25, 0xFFFFFF7F);
LABEL_73:
    if ( v20 == v21 )
      break;
    CurrentPrcb = v32;
  }
  v3 = Event;
LABEL_77:
  v21->Blink = v21;
  v21->Flink = v21;
LABEL_78:
  v3->Header.SignalState = 0;
  _InterlockedAnd(&v3->Header.Lock, 0xFFFFFF7F);
  KiExitDispatcher((_DWORD)v32, Wait, 1, Increment, CurrentIrql);
  return SignalState;
}
