/*
 * XREFs of KiCommitThreadWait @ 0x14005A850
 * Callers:
 *     MiWaitForInPageComplete @ 0x140024D30 (MiWaitForInPageComplete.c)
 *     KeWaitForMultipleObjects @ 0x140059E60 (KeWaitForMultipleObjects.c)
 *     KeWaitForSingleObject @ 0x14005C400 (KeWaitForSingleObject.c)
 *     ExpWaitForResource @ 0x14005C9B0 (ExpWaitForResource.c)
 *     KeRemoveQueueEx @ 0x140069F30 (KeRemoveQueueEx.c)
 *     KeWaitForGate @ 0x140097498 (KeWaitForGate.c)
 *     KiWaitForAllObjects @ 0x14009759C (KiWaitForAllObjects.c)
 *     KeWaitForAlertByThreadId @ 0x1400CE2E8 (KeWaitForAlertByThreadId.c)
 *     KeDelayExecutionThread @ 0x1400CE420 (KeDelayExecutionThread.c)
 *     KeRemovePriQueue @ 0x1400E5870 (KeRemovePriQueue.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002E830 (KeYieldProcessorEx.c)
 *     KiComputeDueTime @ 0x140057B20 (KiComputeDueTime.c)
 *     KiTimerWaitTest @ 0x140058810 (KiTimerWaitTest.c)
 *     KiInsertTimerTable @ 0x1400599B0 (KiInsertTimerTable.c)
 *     KiSwapThread @ 0x14005AD80 (KiSwapThread.c)
 *     KiActivateWaiterQueueWithNoLocks @ 0x14007E678 (KiActivateWaiterQueueWithNoLocks.c)
 *     KiActivateWaiterPriQueue @ 0x14007E814 (KiActivateWaiterPriQueue.c)
 *     KiProcessThreadWaitList @ 0x14008D420 (KiProcessThreadWaitList.c)
 *     KiIncrementConcurrencyCount @ 0x1400A2E90 (KiIncrementConcurrencyCount.c)
 *     KiDecrementProcessStackCount @ 0x1400CC9C0 (KiDecrementProcessStackCount.c)
 *     KiAcquireKobjectLockSafe @ 0x1400EC640 (KiAcquireKobjectLockSafe.c)
 *     KiWakeQueueWaiter @ 0x1400EC680 (KiWakeQueueWaiter.c)
 *     KiExitThreadWait @ 0x1400F06F0 (KiExitThreadWait.c)
 *     KiTraceSetTimer @ 0x1401DAAEC (KiTraceSetTimer.c)
 */

__int64 __fastcall KiCommitThreadWait(__int64 a1, __int64 *a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r15
  int v5; // r12d
  int v7; // edi
  __int64 *v8; // r14
  struct _KPRCB *CurrentPrcb; // rsi
  BOOL v11; // ebp
  char v12; // al
  struct _LIST_ENTRY *Blink; // rdx
  struct _LIST_ENTRY *v14; // rcx
  volatile signed __int32 *v15; // r14
  __int64 v16; // rdi
  unsigned __int64 v18; // r13
  unsigned int v19; // r9d
  __int64 v20; // r8
  char v21; // al
  volatile signed __int32 *v22; // rdx
  _BYTE *v23; // rbp
  __int64 v24; // rcx
  __int64 v25; // rcx
  volatile signed __int32 **v26; // rax
  char v27; // r9
  __int64 *v28; // r15
  volatile signed __int32 *v29; // rbp
  __int64 *v30; // rcx
  __int64 **v31; // rax
  __int64 v32; // rcx
  char v33; // bp
  __int64 v34; // rcx
  volatile signed __int32 *v35; // rax
  int v36; // [rsp+30h] [rbp-68h] BYREF
  volatile signed __int32 *v37; // [rsp+38h] [rbp-60h]
  int v38; // [rsp+40h] [rbp-58h]
  int v39; // [rsp+A0h] [rbp+8h] BYREF
  int v40; // [rsp+A8h] [rbp+10h] BYREF
  unsigned int v41; // [rsp+B0h] [rbp+18h] BYREF

  v4 = a1 + 256;
  v5 = 0;
  v7 = a3;
  v8 = a2;
  _m_prefetchw((const void *)(a1 + 112));
  if ( (_DWORD)a3 )
  {
    *(_DWORD *)(a1 + 116) |= 0x200u;
    *(_DWORD *)v4 |= 0x40000080u;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  *(_QWORD *)(a1 + 208) = a2;
  v11 = *(_BYTE *)(a1 + 391) && (*(_DWORD *)(a1 + 120) & 0x20) != 0 && *(char *)(a1 + 195) < 25;
  v39 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
  {
    do
      KeYieldProcessorEx(&v39);
    while ( *(_QWORD *)(a1 + 64) );
  }
  v12 = *(_BYTE *)(a1 + 112);
  if ( (v12 & 0xE7) == 0 )
  {
    *(_BYTE *)(a1 + 112) = v12 & 0xF8 | 1;
    if ( v11 )
    {
      v40 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->WaitLock, 0LL) )
      {
        do
          KeYieldProcessorEx(&v40);
        while ( CurrentPrcb->WaitLock );
      }
      Blink = CurrentPrcb->WaitListHead.Blink;
      v14 = (struct _LIST_ENTRY *)(a1 + 216);
      if ( Blink->Flink != &CurrentPrcb->WaitListHead )
        __fastfail(3u);
      v14->Flink = &CurrentPrcb->WaitListHead;
      *(_QWORD *)(a1 + 224) = Blink;
      Blink->Flink = v14;
      CurrentPrcb->WaitListHead.Blink = v14;
      *(_QWORD *)(a1 + 712) = CurrentPrcb;
      _InterlockedAnd64((volatile signed __int64 *)&CurrentPrcb->WaitLock, 0LL);
    }
    if ( (*(_DWORD *)(a1 + 120) & 0x800) != 0 )
      _interlockedbittestandreset((volatile signed __int32 *)(a1 + 120), 0xBu);
    if ( (*(_DWORD *)(a1 + 116) & 0x80000) != 0
      && !_interlockedbittestandset((volatile signed __int32 *)(a1 + 120), 0x12u) )
    {
      v5 = 1;
    }
    if ( *(_BYTE *)(a1 + 643) == 15 || (v15 = *(volatile signed __int32 **)(a1 + 232)) == 0LL )
    {
      *(_QWORD *)(a1 + 64) = 0LL;
      goto LABEL_21;
    }
    _m_prefetchw((const void *)v15);
    if ( (*(_BYTE *)v15 & 0x7F) == 0x15 )
    {
      v24 = (unsigned __int8)*(_DWORD *)(a1 + 540);
      *(_DWORD *)(a1 + 540) = (unsigned __int8)*(_DWORD *)(a1 + 540) | 0x100;
      _InterlockedDecrement(&v15[v24 + 134]);
    }
    else
    {
      _InterlockedDecrement(v15 + 10);
    }
    if ( _interlockedbittestandset(v15, 7u) )
      v21 = 0;
    else
      v21 = 1;
    *(_QWORD *)(a1 + 64) = 0LL;
    if ( v21 )
    {
      if ( (*(_BYTE *)v15 & 0x7F) == 0x15 )
      {
        KiActivateWaiterPriQueue(v15);
        goto LABEL_21;
      }
      if ( *((_DWORD *)v15 + 10) < *((_DWORD *)v15 + 11) )
      {
        v22 = (volatile signed __int32 *)*((_QWORD *)v15 + 3);
        v23 = v15 + 6;
        v37 = v22;
        if ( v22 != v15 + 6 && *((volatile signed __int32 **)v15 + 1) != v15 + 2 )
        {
          v25 = *(_QWORD *)v22;
          v26 = (volatile signed __int32 **)*((_QWORD *)v22 + 1);
          if ( *(volatile signed __int32 **)(*(_QWORD *)v22 + 8LL) != v22 || *v26 != v22 )
            __fastfail(3u);
          *v26 = (volatile signed __int32 *)v25;
          *(_QWORD *)(v25 + 8) = v26;
          *(_QWORD *)v22 = 0LL;
          if ( (unsigned __int8)KiWakeQueueWaiter(KeGetCurrentPrcb(), v15, v22) )
          {
            --*((_DWORD *)v15 + 1);
            _InterlockedAnd(v15, 0xFFFFFF7F);
            goto LABEL_21;
          }
          v34 = *(_QWORD *)v23;
          if ( *(_BYTE **)(*(_QWORD *)v23 + 8LL) != v23 )
            __fastfail(3u);
          v35 = v37;
          *(_QWORD *)v37 = v34;
          *((_QWORD *)v35 + 1) = v23;
          *(_QWORD *)(v34 + 8) = v35;
          *(_QWORD *)v23 = v35;
        }
      }
      _InterlockedAnd(v15, 0xFFFFFF7F);
      goto LABEL_21;
    }
    KiActivateWaiterQueueWithNoLocks(a1, v15, 0LL);
LABEL_21:
    if ( v5 )
      KiDecrementProcessStackCount(*(_QWORD *)(a1 + 184));
    *(_BYTE *)(a1 + 565) = 0;
    if ( !v7 )
      return KiSwapThread(a1, CurrentPrcb);
    if ( v7 == 2 )
    {
      v18 = MEMORY[0xFFFFF780000003B0] + *(_QWORD *)(a1 + 248) + a4;
      *(_QWORD *)(v4 + 24) = v18;
      v18 >>= 18;
      v41 = (unsigned __int8)v18;
      v19 = (unsigned __int8)v18;
      v38 = *(_DWORD *)v4;
      BYTE1(v38) &= ~1u;
      BYTE2(v38) = v18;
      *(_DWORD *)v4 = v38;
    }
    else
    {
      if ( !(unsigned int)KiComputeDueTime((int *)v4, a4, 0, &v41) )
        goto LABEL_78;
      v19 = v41;
    }
    if ( KiInsertTimerTable((__int64)CurrentPrcb, v4, 0LL, v19, 0LL) )
    {
      if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 )
      {
        LOBYTE(v20) = 1;
        KiTraceSetTimer(v4, 0LL, v20);
      }
      else
      {
        _InterlockedAnd((volatile signed __int32 *)v4, 0xFFFFFF7F);
      }
      return KiSwapThread(a1, CurrentPrcb);
    }
LABEL_78:
    KiTimerWaitTest((__int64)CurrentPrcb, v4, 0LL);
    return KiSwapThread(a1, CurrentPrcb);
  }
  if ( (v12 & 7) == 0 )
  {
    if ( (v12 & 0x20) == 0 )
    {
      v27 = 1;
      if ( (v12 & 0x40) != 0 )
        *(_QWORD *)(a1 + 200) = 192LL;
      else
        *(_QWORD *)(a1 + 200) = 257LL;
      goto LABEL_57;
    }
    *(_QWORD *)(a1 + 200) = 256LL;
  }
  v27 = 0;
LABEL_57:
  *(_BYTE *)(a1 + 388) = 2;
  if ( *(_BYTE *)(a1 + 643) == 15 )
  {
    v32 = *(_QWORD *)(a1 + 232);
    if ( v32 )
      KiIncrementConcurrencyCount(v32, a1);
  }
  *(_QWORD *)(a1 + 64) = 0LL;
  if ( v7 )
    *(_DWORD *)(a1 + 116) &= ~0x200u;
  v16 = *(_QWORD *)(a1 + 200);
  if ( v27 )
  {
    v33 = *(_BYTE *)(a1 + 391);
    v36 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
    {
      do
        KeYieldProcessorEx(&v36);
      while ( *(_QWORD *)(a1 + 64) );
    }
    if ( v16 == 257 )
    {
      if ( (*(_DWORD *)(a1 + 116) & 0x10) != 0 )
      {
        if ( *(_BYTE *)(v33 + a1 + 114) )
        {
          *(_BYTE *)(v33 + a1 + 114) = 0;
        }
        else if ( v33 )
        {
          *(_BYTE *)(a1 + 114) = 0;
        }
      }
      else
      {
        _interlockedbittestandreset((volatile signed __int32 *)(a1 + 120), 3u);
      }
    }
    else if ( *(_QWORD *)(a1 + 168) != a1 + 168 )
    {
      *(_BYTE *)(a1 + 194) = 1;
    }
    *(_QWORD *)(a1 + 64) = 0LL;
  }
  v28 = &v8[6 * *(unsigned __int8 *)(a1 + 587)];
  do
  {
    if ( *((_BYTE *)v8 + 17) < 5u )
    {
      v29 = (volatile signed __int32 *)v8[4];
      KiAcquireKobjectLockSafe(v29);
      if ( *((_BYTE *)v8 + 17) == 4 )
      {
        v30 = (__int64 *)*v8;
        v31 = (__int64 **)v8[1];
        if ( *(__int64 **)(*v8 + 8) != v8 || *v31 != v8 )
          __fastfail(3u);
        *v31 = v30;
        v30[1] = (__int64)v31;
      }
      _InterlockedAnd(v29, 0xFFFFFF7F);
    }
    v8 += 6;
  }
  while ( v8 != v28 );
  if ( CurrentPrcb->DeferredReadyListHead.Next )
    KiProcessThreadWaitList(CurrentPrcb, 1LL, 0LL, 0LL);
  LOBYTE(a3) = 1;
  KiExitThreadWait(CurrentPrcb, a1, a3);
  return v16;
}
