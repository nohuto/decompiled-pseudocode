/*
 * XREFs of KeInsertPriQueue @ 0x14005F280
 * Callers:
 *     ExpQueueWorkItem @ 0x14005F840 (ExpQueueWorkItem.c)
 *     ExTryQueueWorkItem @ 0x1400C0F70 (ExTryQueueWorkItem.c)
 *     ExTryQueueWorkItemFromIo @ 0x14010DC50 (ExTryQueueWorkItemFromIo.c)
 *     ExpQueueWorkItemNode @ 0x14022E8B8 (ExpQueueWorkItemNode.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002E830 (KeYieldProcessorEx.c)
 *     KiDirectSwitchThread @ 0x1400527F0 (KiDirectSwitchThread.c)
 *     KiAbProcessContextSwitch @ 0x14005C010 (KiAbProcessContextSwitch.c)
 *     KiDeliverApc @ 0x14005D750 (KiDeliverApc.c)
 *     KiSignalThread @ 0x14005E2A0 (KiSignalThread.c)
 *     KiReadyThread @ 0x14005F76C (KiReadyThread.c)
 *     KiAbQueueAutoBoostDpc @ 0x14006C1E8 (KiAbQueueAutoBoostDpc.c)
 *     KiQueueReadyThread @ 0x1400CEB10 (KiQueueReadyThread.c)
 *     KiEndThreadCycleAccumulation @ 0x1400D0560 (KiEndThreadCycleAccumulation.c)
 *     KiSetPriorityThread @ 0x1400D0A40 (KiSetPriorityThread.c)
 *     KiRequestSoftwareInterrupt @ 0x1400D60D0 (KiRequestSoftwareInterrupt.c)
 *     KiAcquireKobjectLockSafe @ 0x1400EC640 (KiAcquireKobjectLockSafe.c)
 *     KiSwapContext @ 0x140166240 (KiSwapContext.c)
 *     EtwTraceReadyThread @ 0x140225EF4 (EtwTraceReadyThread.c)
 */

__int64 __fastcall KeInsertPriQueue(_DISPATCHER_HEADER *a1, __int64 a2, _QWORD *p_Blink, __int64 a4, char a5)
{
  __int64 v5; // rbp
  LIST_ENTRY *p_WaitListHead; // rdi
  _QWORD *v7; // rsi
  unsigned __int8 v9; // r12
  struct _KPRCB *CurrentPrcb; // r13
  _KTHREAD *CurrentThread; // rbx
  char v12; // r10
  __int64 v13; // rax
  int v14; // ecx
  LIST_ENTRY *Flink; // r14
  __int64 v16; // rsi
  __int64 v17; // rcx
  _QWORD *v18; // rax
  __int64 v19; // rdi
  __int64 v20; // rax
  struct _KPRCB *v21; // rcx
  char v22; // al
  char v23; // al
  bool v24; // bp
  struct _SINGLE_LIST_ENTRY *Next; // r14
  __int64 v26; // rax
  struct _SINGLE_LIST_ENTRY *v27; // rdi
  struct _SINGLE_LIST_ENTRY *v28; // rbx
  struct _SINGLE_LIST_ENTRY *v29; // rsi
  unsigned __int8 v30; // si
  _KTHREAD *v31; // rbx
  __int64 v33; // rdx
  __int64 v34; // rcx
  _QWORD *v35; // rax
  int v36; // edx
  _KTHREAD *NextThread; // rdi
  volatile signed __int32 *v38; // r15
  __int64 v39; // rcx
  _KTHREAD *v40; // rcx
  unsigned __int8 v41; // al
  struct _SINGLE_LIST_ENTRY *v42; // rcx
  struct _SINGLE_LIST_ENTRY *v43; // rax
  _DWORD v44[4]; // [rsp+20h] [rbp-58h] BYREF
  __int64 CurrentIrql; // [rsp+30h] [rbp-48h]
  int v46; // [rsp+80h] [rbp+8h] BYREF
  _QWORD *v47; // [rsp+88h] [rbp+10h]
  int v48; // [rsp+98h] [rbp+20h] BYREF

  v47 = (_QWORD *)a2;
  v5 = (int)p_Blink;
  p_WaitListHead = &a1->WaitListHead;
  v7 = (_QWORD *)a2;
  v9 = 0;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  CurrentPrcb = KeGetCurrentPrcb();
  v48 = 0;
  CurrentThread = CurrentPrcb->CurrentThread;
  while ( _interlockedbittestandset(&a1->Lock, 7u) )
  {
    do
      KeYieldProcessorEx(&v48);
    while ( (a1->LockNV & 0x80u) != 0 );
  }
  v12 = a5;
  if ( p_WaitListHead->Flink != p_WaitListHead && (CurrentThread->Queue != a1 || CurrentThread->WaitReason != 15) )
  {
    LODWORD(a2) = 0;
    p_Blink = &a1[27].WaitListHead.Blink;
    v13 = 32LL;
    while ( 1 )
    {
      v14 = *((_DWORD *)p_Blink - 1);
      p_Blink = (_QWORD *)((char *)p_Blink - 4);
      a2 = (unsigned int)(v14 + a2);
      --v13;
      if ( (unsigned int)a2 >= LODWORD(a1[27].WaitListHead.Blink) )
        break;
      if ( v13 <= v5 )
      {
        if ( (unsigned int)a2 < LODWORD(a1[27].WaitListHead.Blink) )
        {
          Flink = p_WaitListHead->Flink;
          do
          {
            v16 = (__int64)Flink;
            Flink = Flink->Flink;
            v17 = *(_QWORD *)v16;
            v18 = *(_QWORD **)(v16 + 8);
            if ( *(_QWORD *)(*(_QWORD *)v16 + 8LL) != v16 || *v18 != v16 )
              __fastfail(3u);
            *v18 = v17;
            v9 = 0;
            *(_QWORD *)(v17 + 8) = v18;
            v19 = *(_QWORD *)(v16 + 24);
            v44[2] = v5;
            v46 = 0;
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v19 + 64), 0LL) )
            {
              do
                KeYieldProcessorEx(&v46);
              while ( *(_QWORD *)(v19 + 64) );
            }
            if ( *(_BYTE *)(v19 + 388) == 5 )
            {
              v20 = (unsigned __int8)*(_DWORD *)(v19 + 540);
              if ( (_DWORD)v20 != (_DWORD)v5 )
              {
                v36 = *(_DWORD *)(v19 + 540) & 0x100;
                if ( !v36 )
                {
                  v39 = *(_QWORD *)(v19 + 232);
                  _InterlockedDecrement((volatile signed __int32 *)(v39 + 4 * v20 + 536));
                  _InterlockedIncrement((volatile signed __int32 *)(v39 + 4 * v5 + 536));
                }
                *(_DWORD *)(v19 + 540) = v36 | (unsigned __int8)v5;
              }
              v9 = KiSignalThread((__int64)CurrentPrcb, v19, (__int64)v47, v16);
              if ( v9 )
              {
                *(_BYTE *)(v19 + 645) = 0;
                v21 = KeGetCurrentPrcb();
                if ( (char)v5 < *(char *)(v19 + 563) )
                {
                  if ( *(_BYTE *)(v19 + 1423) )
                  {
                    a2 = v19 + 1384;
                    if ( *(_QWORD *)(v19 + 1384) == 1LL )
                    {
                      p_Blink = &v21->AbSelfIoBoostsList.Next;
                      if ( v21 != (struct _KPRCB *)-25776LL )
                      {
                        *(_QWORD *)a2 = *p_Blink;
                        *p_Blink = a2;
                        _InterlockedIncrement16((volatile signed __int16 *)(v19 + 1420));
                        KiAbQueueAutoBoostDpc(v21);
                      }
                    }
                  }
                }
                v22 = *(_BYTE *)(v19 + 564);
                *(_BYTE *)(v19 + 563) = v5;
                if ( v22 )
                {
                  if ( (v22 & 0xF) != 0 )
                    *(_DWORD *)(v19 + 1424) = MEMORY[0xFFFFF78000000320];
                  *(_BYTE *)(v19 + 564) = 0;
                }
                if ( (_DWORD)v5 != *(char *)(v19 + 195) )
                {
                  v33 = *(_QWORD *)(v19 + 72) + KiCyclesPerClockQuantum * (unsigned int)*(unsigned __int8 *)(v19 + 651);
                  if ( (*(_DWORD *)(v19 + 120) & 0x10) != 0 )
                    _interlockedbittestandreset((volatile signed __int32 *)(v19 + 120), 4u);
                  *(_QWORD *)(v19 + 32) = v33;
                  KiSetPriorityThread(v19, 0LL, (unsigned int)v5);
                }
              }
            }
            *(_QWORD *)(v19 + 64) = 0LL;
            ++*(_BYTE *)(v16 + 17);
            if ( v9 )
            {
              v12 = a5;
              goto LABEL_21;
            }
          }
          while ( Flink != &a1->WaitListHead );
          v12 = a5;
          v7 = v47;
        }
        break;
      }
    }
  }
  if ( (v12 & 2) == 0 )
  {
    ++a1->SignalState;
    v34 = (__int64)&a1[1] + 16 * v5;
    v35 = *(_QWORD **)(v34 + 8);
    if ( *v35 != v34 )
      __fastfail(3u);
    *v7 = v34;
    v7[1] = v35;
    *v35 = v7;
    *(_QWORD *)(v34 + 8) = v7;
  }
LABEL_21:
  _InterlockedAnd(&a1->Lock, 0xFFFFFF7F);
  if ( (v12 & 1) != 0 )
    v23 = 3;
  else
    v23 = 0;
  v24 = (v23 & 1) != 0;
  if ( CurrentPrcb->DeferredReadyListHead.Next )
  {
    if ( (v23 & 1) != 0 && KiDirectSwitchThread((__int64)CurrentPrcb, 0, (v23 & 2) != 0) )
      goto LABEL_80;
    Next = CurrentPrcb->DeferredReadyListHead.Next;
    CurrentPrcb->DeferredReadyListHead.Next = 0LL;
    do
    {
      v26 = BYTE3(Next[46].Next);
      v27 = Next - 27;
      v28 = Next[-1].Next;
      Next = Next->Next;
      v29 = &v28[6 * v26];
      do
      {
        if ( BYTE1(v28[2].Next) < 5u )
        {
          v38 = (volatile signed __int32 *)v28[4].Next;
          KiAcquireKobjectLockSafe(v38);
          if ( BYTE1(v28[2].Next) == 4 )
          {
            v42 = v28->Next;
            v43 = v28[1].Next;
            if ( v28->Next[1].Next != v28 || v43->Next != v28 )
              __fastfail(3u);
            v43->Next = v42;
            v42[1].Next = v43;
          }
          _InterlockedAnd(v38, 0xFFFFFF7F);
        }
        v28 += 6;
      }
      while ( v28 != v29 );
      HIWORD(v27[70].Next) = 1;
      if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
      {
        LOBYTE(a2) = 1;
        EtwTraceReadyThread(v27, a2, 0LL);
      }
      KiReadyThread(CurrentPrcb, v27, p_Blink);
    }
    while ( Next );
  }
  if ( v24 )
  {
LABEL_80:
    v40 = CurrentPrcb->CurrentThread;
    v41 = CurrentIrql;
    v40->MiscFlags |= 4u;
    v40->WaitIrql = v41;
    return v9;
  }
  v30 = CurrentIrql;
  if ( (unsigned __int8)CurrentIrql < 2u )
  {
    v31 = CurrentPrcb->CurrentThread;
    if ( CurrentPrcb->NextThread )
    {
      KiAbProcessContextSwitch((__int64)CurrentPrcb->CurrentThread, 0, (__int64)p_Blink, a4);
      v44[0] = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
      {
        do
          KeYieldProcessorEx(v44);
        while ( CurrentPrcb->PrcbLock );
      }
      NextThread = CurrentPrcb->NextThread;
      CurrentPrcb->NextThread = 0LL;
      _disable();
      KiEndThreadCycleAccumulation(CurrentPrcb, v31, 0LL);
      _enable();
      CurrentPrcb->CurrentThread = NextThread;
      if ( NextThread->WaitBlockFill6[68] == 1 )
        LODWORD(NextThread[1].Uch) = LODWORD(NextThread[1].Uch)
                                   - NextThread->WaitBlock[2].SpareLong
                                   + MEMORY[0xFFFFF78000000320];
      NextThread->WaitBlockFill6[68] = 2;
      v31->WaitReason = 32;
      v31->WaitIrql = v30;
      KiQueueReadyThread(CurrentPrcb, v31);
      if ( !(unsigned __int8)KiSwapContext(v31, NextThread, v30) )
        goto LABEL_36;
    }
    else if ( (v31->MiscFlags & 0x40) == 0 )
    {
LABEL_36:
      __writecr8(v30);
      return v9;
    }
    __writecr8(1uLL);
    v31->MiscFlags &= ~0x40u;
    KiDeliverApc(0, 0, 0LL);
    goto LABEL_36;
  }
  if ( CurrentPrcb->NextThread && !CurrentPrcb->DpcRoutineActive )
  {
    LOBYTE(a2) = 2;
    KiRequestSoftwareInterrupt(CurrentPrcb, a2, p_Blink, a4);
  }
  return v9;
}
