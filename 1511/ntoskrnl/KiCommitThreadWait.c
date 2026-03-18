/*
 * XREFs of KiCommitThreadWait @ 0x140081ED0
 * Callers:
 *     KeWaitForAlertByThreadId @ 0x1400297D0 (KeWaitForAlertByThreadId.c)
 *     KeDelayExecutionThread @ 0x140029A90 (KeDelayExecutionThread.c)
 *     KeRemovePriQueue @ 0x14006FC60 (KeRemovePriQueue.c)
 *     KeRemoveQueueEx @ 0x1400807E0 (KeRemoveQueueEx.c)
 *     KeWaitForMultipleObjects @ 0x1400810B0 (KeWaitForMultipleObjects.c)
 *     KeWaitForSingleObject @ 0x140081870 (KeWaitForSingleObject.c)
 *     KeWaitForGate @ 0x1400DEBE8 (KeWaitForGate.c)
 *     KiWaitForAllObjects @ 0x1400DECEC (KiWaitForAllObjects.c)
 * Callees:
 *     KiExitThreadWait @ 0x14002AC60 (KiExitThreadWait.c)
 *     KiDecrementProcessStackCount @ 0x14002DAC8 (KiDecrementProcessStackCount.c)
 *     KiAcquireKobjectLockSafe @ 0x140034400 (KiAcquireKobjectLockSafe.c)
 *     KiTimerWaitTest @ 0x140045200 (KiTimerWaitTest.c)
 *     KeYieldProcessorEx @ 0x14007CAC0 (KeYieldProcessorEx.c)
 *     KiWakeQueueWaiter @ 0x14007E740 (KiWakeQueueWaiter.c)
 *     KiSwapThread @ 0x140082450 (KiSwapThread.c)
 *     KiInsertTimerTable @ 0x140083990 (KiInsertTimerTable.c)
 *     KiIncrementConcurrencyCount @ 0x14008E774 (KiIncrementConcurrencyCount.c)
 *     KiComputeDueTime @ 0x140091630 (KiComputeDueTime.c)
 *     KiActivateWaiterQueueWithNoLocks @ 0x140094210 (KiActivateWaiterQueueWithNoLocks.c)
 *     KiActivateWaiterPriQueue @ 0x1400943C4 (KiActivateWaiterPriQueue.c)
 *     KiProcessThreadWaitList @ 0x1400C7610 (KiProcessThreadWaitList.c)
 *     HvlNotifyLongSpinWait @ 0x1401AE950 (HvlNotifyLongSpinWait.c)
 *     KiTraceSetTimer @ 0x1401CADF8 (KiTraceSetTimer.c)
 */

__int64 __fastcall KiCommitThreadWait(__int64 a1, __int64 Blink, int a3, __int64 a4)
{
  __int64 v4; // rbp
  char v5; // r12
  __int64 v7; // rsi
  struct _KPRCB *CurrentPrcb; // r15
  __int64 v10; // r8
  int v11; // r14d
  unsigned int v12; // edi
  char v13; // cl
  struct _LIST_ENTRY *v14; // rcx
  _BYTE *v15; // rdi
  __int64 v16; // rcx
  bool v17; // al
  __int64 *v18; // rsi
  __int64 *v19; // r14
  __int64 *v20; // rcx
  __int64 **v21; // rax
  __int64 v22; // rax
  int v23; // eax
  unsigned __int64 v24; // r13
  int v25; // r9d
  __int64 v26; // r8
  __int64 v27; // r14
  int v28; // eax
  __int64 v29; // rcx
  int v30; // eax
  char v31; // di
  __int64 v32; // rbp
  volatile signed __int32 *v33; // rdi
  __int64 v34; // rcx
  _QWORD *v35; // rax
  int v37; // [rsp+30h] [rbp-58h] BYREF
  int v38; // [rsp+34h] [rbp-54h] BYREF
  int v39; // [rsp+38h] [rbp-50h]
  int v40; // [rsp+90h] [rbp+8h]
  int v41; // [rsp+98h] [rbp+10h] BYREF
  int v42; // [rsp+A0h] [rbp+18h]

  v42 = a3;
  v4 = a1 + 256;
  v40 = 0;
  v5 = 0;
  v7 = Blink;
  _m_prefetchw((const void *)(a1 + 112));
  if ( a3 )
  {
    *(_DWORD *)(a1 + 116) |= 0x200u;
    *(_DWORD *)v4 |= 0x40000080u;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v10 = 1LL;
  *(_QWORD *)(a1 + 208) = Blink;
  if ( !*(_BYTE *)(a1 + 391) || (*(_DWORD *)(a1 + 120) & 0x20) == 0 || (v11 = 1, *(char *)(a1 + 195) >= 25) )
    v11 = 0;
  v12 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
  {
    do
    {
      if ( (++v12 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v12, Blink, v10);
    }
    while ( *(_QWORD *)(a1 + 64) );
  }
  v13 = *(_BYTE *)(a1 + 112);
  if ( (v13 & 0xE7) == 0 )
  {
    *(_BYTE *)(a1 + 112) = v13 & 0xF8 | 1;
    if ( v11 )
    {
      v37 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->WaitLock, 0LL) )
      {
        do
          KeYieldProcessorEx(&v37, Blink, v10);
        while ( CurrentPrcb->WaitLock );
      }
      Blink = (__int64)CurrentPrcb->WaitListHead.Blink;
      v14 = (struct _LIST_ENTRY *)(a1 + 216);
      *(_QWORD *)(a1 + 216) = &CurrentPrcb->WaitListHead;
      *(_QWORD *)(a1 + 224) = Blink;
      if ( *(struct _KPRCB **)Blink != (struct _KPRCB *)&CurrentPrcb->WaitListHead )
        __fastfail(3u);
      *(_QWORD *)Blink = v14;
      CurrentPrcb->WaitListHead.Blink = v14;
      *(_QWORD *)(a1 + 712) = CurrentPrcb;
      _InterlockedAnd64((volatile signed __int64 *)&CurrentPrcb->WaitLock, 0LL);
    }
    if ( (*(_DWORD *)(a1 + 120) & 0x800) != 0 )
      _interlockedbittestandreset((volatile signed __int32 *)(a1 + 120), 0xBu);
    if ( (*(_DWORD *)(a1 + 116) & 0x80000) != 0 )
    {
      Blink = _interlockedbittestandset((volatile signed __int32 *)(a1 + 120), 0x12u) == 0;
      v40 = Blink;
    }
    if ( *(_BYTE *)(a1 + 643) == 15 || (v15 = *(_BYTE **)(a1 + 232)) == 0LL )
    {
      *(_QWORD *)(a1 + 64) = 0LL;
    }
    else
    {
      _m_prefetchw(v15);
      if ( (*v15 & 0x7F) == 0x15 )
      {
        v16 = (unsigned __int8)*(_DWORD *)(a1 + 540);
        *(_DWORD *)(a1 + 540) = (unsigned __int8)*(_DWORD *)(a1 + 540) | 0x100;
        _InterlockedDecrement((volatile signed __int32 *)&v15[4 * v16 + 536]);
      }
      else
      {
        _InterlockedDecrement((volatile signed __int32 *)v15 + 10);
      }
      v17 = !_interlockedbittestandset((volatile signed __int32 *)v15, 7u);
      *(_QWORD *)(a1 + 64) = 0LL;
      if ( v17 )
      {
        if ( (*v15 & 0x7F) == 0x15 )
        {
          KiActivateWaiterPriQueue(v15, Blink, v10);
          goto LABEL_50;
        }
        if ( *((_DWORD *)v15 + 10) >= *((_DWORD *)v15 + 11) )
          goto LABEL_43;
        v18 = (__int64 *)*((_QWORD *)v15 + 3);
        v19 = (__int64 *)(v15 + 24);
        if ( v18 == (__int64 *)(v15 + 24) || *((_BYTE **)v15 + 2) == v15 + 8 )
          goto LABEL_43;
        v20 = (__int64 *)*v18;
        v21 = (__int64 **)v18[1];
        if ( *(__int64 **)(*v18 + 8) != v18 || *v21 != v18 )
          __fastfail(3u);
        *v21 = v20;
        v20[1] = (__int64)v21;
        *v18 = 0LL;
        if ( KiWakeQueueWaiter((__int64)KeGetCurrentPrcb(), (__int64)v15, (__int64)v18) )
        {
          --*((_DWORD *)v15 + 1);
LABEL_43:
          _InterlockedAnd((volatile signed __int32 *)v15, 0xFFFFFF7F);
          goto LABEL_50;
        }
        v22 = *v19;
        *v18 = *v19;
        v18[1] = (__int64)v19;
        if ( *(__int64 **)(v22 + 8) != v19 )
          __fastfail(3u);
        *(_QWORD *)(v22 + 8) = v18;
        *v19 = (__int64)v18;
        _InterlockedAnd((volatile signed __int32 *)v15, 0xFFFFFF7F);
      }
      else
      {
        KiActivateWaiterQueueWithNoLocks(a1, v15, 0LL);
      }
    }
LABEL_50:
    if ( v40 )
      KiDecrementProcessStackCount(*(_QWORD *)(a1 + 184));
    v23 = v42;
    *(_BYTE *)(a1 + 565) = 0;
    if ( !v23 )
      return KiSwapThread(a1, CurrentPrcb);
    if ( v23 == 2 )
    {
      v24 = MEMORY[0xFFFFF780000003B0] + *(_QWORD *)(a1 + 248) + a4;
      *(_QWORD *)(v4 + 24) = v24;
      v24 >>= 18;
      v41 = (unsigned __int8)v24;
      v25 = (unsigned __int8)v24;
      v39 = *(_DWORD *)v4;
      BYTE1(v39) &= ~1u;
      BYTE2(v39) = v24;
      *(_DWORD *)v4 = v39;
    }
    else
    {
      if ( !(unsigned int)KiComputeDueTime(v4, a4, 0LL, &v41) )
        goto LABEL_62;
      v25 = v41;
    }
    if ( (unsigned __int8)KiInsertTimerTable((_DWORD)CurrentPrcb, v4, 0, v25, 0LL) )
    {
      if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 )
      {
        LOBYTE(v26) = 1;
        KiTraceSetTimer(v4, 0LL, v26);
      }
      else
      {
        _InterlockedAnd((volatile signed __int32 *)v4, 0xFFFFFF7F);
      }
      return KiSwapThread(a1, CurrentPrcb);
    }
LABEL_62:
    KiTimerWaitTest((__int64)CurrentPrcb, v4, 0LL);
    return KiSwapThread(a1, CurrentPrcb);
  }
  if ( (v13 & 7) == 0 )
  {
    if ( (v13 & 0x20) != 0 )
    {
      *(_QWORD *)(a1 + 200) = 256LL;
    }
    else
    {
      v28 = 257;
      Blink = 192LL;
      v5 = 1;
      if ( (v13 & 0x40) != 0 )
        v28 = 192;
      *(_QWORD *)(a1 + 200) = v28;
    }
  }
  *(_BYTE *)(a1 + 388) = 2;
  if ( *(_BYTE *)(a1 + 643) == 15 )
  {
    v29 = *(_QWORD *)(a1 + 232);
    if ( v29 )
      KiIncrementConcurrencyCount(v29, a1);
  }
  v30 = v42;
  *(_QWORD *)(a1 + 64) = 0LL;
  if ( v30 )
    *(_DWORD *)(a1 + 116) &= ~0x200u;
  v27 = *(_QWORD *)(a1 + 200);
  if ( v5 )
  {
    v31 = *(_BYTE *)(a1 + 391);
    v38 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
    {
      do
        KeYieldProcessorEx(&v38, Blink, v10);
      while ( *(_QWORD *)(a1 + 64) );
    }
    if ( v27 == 257 )
    {
      if ( (*(_DWORD *)(a1 + 116) & 0x10) != 0 )
      {
        if ( *(_BYTE *)(v31 + a1 + 114) )
        {
          *(_BYTE *)(v31 + a1 + 114) = 0;
        }
        else if ( v31 )
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
  v32 = v7 + 48LL * *(unsigned __int8 *)(a1 + 587);
  do
  {
    if ( *(_BYTE *)(v7 + 17) < 5u )
    {
      v33 = *(volatile signed __int32 **)(v7 + 32);
      KiAcquireKobjectLockSafe(v33, Blink, v10);
      if ( *(_BYTE *)(v7 + 17) == 4 )
      {
        v34 = *(_QWORD *)v7;
        v35 = *(_QWORD **)(v7 + 8);
        if ( *(_QWORD *)(*(_QWORD *)v7 + 8LL) != v7 || *v35 != v7 )
          __fastfail(3u);
        *v35 = v34;
        *(_QWORD *)(v34 + 8) = v35;
      }
      _InterlockedAnd(v33, 0xFFFFFF7F);
    }
    v7 += 48LL;
  }
  while ( v7 != v32 );
  if ( CurrentPrcb->DeferredReadyListHead.Next )
    KiProcessThreadWaitList(CurrentPrcb, 1LL, 0LL);
  LOBYTE(v10) = 1;
  KiExitThreadWait((__int64)CurrentPrcb, a1, v10);
  return v27;
}
