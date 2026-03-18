/*
 * XREFs of KiCommitThreadWait @ 0x1400A0220
 * Callers:
 *     KeRemovePriQueue @ 0x1400319E0 (KeRemovePriQueue.c)
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     ExpWaitForResource @ 0x14009C5E0 (ExpWaitForResource.c)
 *     KeRemoveQueueEx @ 0x14009E640 (KeRemoveQueueEx.c)
 *     KeWaitForMultipleObjects @ 0x14009F320 (KeWaitForMultipleObjects.c)
 *     KeDelayExecutionThread @ 0x1400E73A0 (KeDelayExecutionThread.c)
 *     KeWaitForAlertByThreadId @ 0x14010BF10 (KeWaitForAlertByThreadId.c)
 *     KiWaitForAllObjects @ 0x14011ECE8 (KiWaitForAllObjects.c)
 *     KeWaitForGate @ 0x140126304 (KeWaitForGate.c)
 * Callees:
 *     KiActivateWaiterQueueWithNoLocks @ 0x14000C528 (KiActivateWaiterQueueWithNoLocks.c)
 *     KiWakeQueueWaiter @ 0x140043EC0 (KiWakeQueueWaiter.c)
 *     KiComputeDueTime @ 0x140066AA0 (KiComputeDueTime.c)
 *     KiDecrementProcessStackCount @ 0x14009AA60 (KiDecrementProcessStackCount.c)
 *     KiSwapThread @ 0x1400A0810 (KiSwapThread.c)
 *     KiInsertTimerTable @ 0x1400A2120 (KiInsertTimerTable.c)
 *     KiExitThreadWait @ 0x1400A23E0 (KiExitThreadWait.c)
 *     KiTimerWaitTest @ 0x1400A40F0 (KiTimerWaitTest.c)
 *     KiProcessThreadWaitList @ 0x1400F7350 (KiProcessThreadWaitList.c)
 *     KiActivateWaiterPriQueue @ 0x140119EAC (KiActivateWaiterPriQueue.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     KiTraceSetTimer @ 0x1402099B0 (KiTraceSetTimer.c)
 */

__int64 __fastcall KiCommitThreadWait(__int64 a1, __int64 *a2, __int64 a3, __int64 a4)
{
  int v4; // r13d
  char v5; // bp
  __int64 v6; // r15
  int v8; // r14d
  struct _KPRCB *CurrentPrcb; // rax
  BOOL v11; // edi
  unsigned int v12; // ebx
  char v13; // cl
  struct _KPRCB *v14; // rbp
  unsigned int v15; // ebx
  __int64 *Blink; // rdx
  __int64 v17; // rcx
  _BYTE *v18; // rbx
  __int64 v19; // rcx
  signed __int8 v20; // cf
  __int64 *v21; // rdi
  __int64 *v22; // r14
  __int64 *v23; // rcx
  __int64 **v24; // rax
  __int64 v25; // rax
  unsigned __int64 v26; // r12
  int v27; // r9d
  __int64 v28; // r8
  __int64 v29; // r15
  int v30; // eax
  __int64 v31; // rdx
  __int64 v32; // rcx
  char v33; // di
  unsigned int v34; // ebx
  __int64 *v35; // r14
  __int64 *v36; // rbp
  volatile signed __int32 *v37; // rdi
  unsigned int v38; // ebx
  __int64 *v39; // rcx
  __int64 **v40; // rax
  struct _KPRCB *v41; // rbx
  int v44; // [rsp+38h] [rbp-50h]
  int v45; // [rsp+90h] [rbp+8h] BYREF
  struct _KPRCB *v46; // [rsp+98h] [rbp+10h]
  int v47; // [rsp+A0h] [rbp+18h]

  v47 = a3;
  v4 = 0;
  v5 = 0;
  v6 = a1 + 256;
  v8 = a3;
  _m_prefetchw((const void *)(a1 + 112));
  if ( (_DWORD)a3 )
  {
    *(_DWORD *)(a1 + 116) |= 0x200u;
    *(_DWORD *)v6 |= 0x40000080u;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  *(_QWORD *)(a1 + 208) = a2;
  v46 = CurrentPrcb;
  v11 = *(_BYTE *)(a1 + 391) && (*(_DWORD *)(a1 + 120) & 0x20) != 0 && *(char *)(a1 + 195) < 25;
  v12 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
  {
    do
    {
      if ( (++v12 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v12);
    }
    while ( *(_QWORD *)(a1 + 64) );
  }
  v13 = *(_BYTE *)(a1 + 112);
  if ( (v13 & 0xE7) == 0 )
  {
    v14 = v46;
    *(_BYTE *)(a1 + 112) = v13 & 0xF8 | 1;
    if ( v11 )
    {
      v15 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)&v14->WaitLock, 0LL) )
      {
        do
        {
          if ( (++v15 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
            _mm_pause();
          else
            HvlNotifyLongSpinWait(v15);
        }
        while ( v14->WaitLock );
      }
      Blink = (__int64 *)v14->WaitListHead.Blink;
      v17 = a1 + 216;
      *(_QWORD *)(a1 + 216) = &v14->WaitListHead;
      *(_QWORD *)(a1 + 224) = Blink;
      if ( (_LIST_ENTRY *)*Blink != &v14->WaitListHead )
        __fastfail(3u);
      *Blink = v17;
      v14->WaitListHead.Blink = (struct _LIST_ENTRY *)v17;
      *(_QWORD *)(a1 + 712) = v14;
      _InterlockedAnd64((volatile signed __int64 *)&v14->WaitLock, 0LL);
    }
    if ( (*(_DWORD *)(a1 + 120) & 0x800) != 0 )
      _interlockedbittestandreset((volatile signed __int32 *)(a1 + 120), 0xBu);
    if ( (*(_DWORD *)(a1 + 116) & 0x80000) != 0
      && !_interlockedbittestandset((volatile signed __int32 *)(a1 + 120), 0x12u) )
    {
      v4 = 1;
    }
    if ( *(_BYTE *)(a1 + 643) == 15 || (v18 = *(_BYTE **)(a1 + 232)) == 0LL )
    {
      *(_QWORD *)(a1 + 64) = 0LL;
    }
    else
    {
      _m_prefetchw(v18);
      if ( (*v18 & 0x7F) == 0x15 )
      {
        v19 = (unsigned __int8)*(_DWORD *)(a1 + 540);
        *(_DWORD *)(a1 + 540) = (unsigned __int8)*(_DWORD *)(a1 + 540) | 0x100;
        _InterlockedDecrement((volatile signed __int32 *)&v18[4 * v19 + 536]);
      }
      else
      {
        _InterlockedDecrement((volatile signed __int32 *)v18 + 10);
      }
      v20 = _interlockedbittestandset((volatile signed __int32 *)v18, 7u);
      *(_QWORD *)(a1 + 64) = 0LL;
      if ( v20 )
      {
        KiActivateWaiterQueueWithNoLocks(a1, (unsigned __int64)v18, 0LL);
      }
      else
      {
        if ( (*v18 & 0x7F) == 0x15 )
        {
          KiActivateWaiterPriQueue(v18);
          goto LABEL_57;
        }
        if ( *((_DWORD *)v18 + 10) >= *((_DWORD *)v18 + 11) )
          goto LABEL_50;
        v21 = (__int64 *)*((_QWORD *)v18 + 3);
        v22 = (__int64 *)(v18 + 24);
        if ( v21 == (__int64 *)(v18 + 24) || *((_BYTE **)v18 + 2) == v18 + 8 )
        {
LABEL_49:
          v8 = v47;
LABEL_50:
          _InterlockedAnd((volatile signed __int32 *)v18, 0xFFFFFF7F);
          goto LABEL_57;
        }
        v23 = (__int64 *)*v21;
        v24 = (__int64 **)v21[1];
        if ( *(__int64 **)(*v21 + 8) != v21 || *v24 != v21 )
          __fastfail(3u);
        *v24 = v23;
        v23[1] = (__int64)v24;
        *v21 = 0LL;
        if ( KiWakeQueueWaiter((__int64)KeGetCurrentPrcb(), (__int64)v18, (__int64)v21) )
        {
          --*((_DWORD *)v18 + 1);
          goto LABEL_49;
        }
        v25 = *v22;
        *v21 = *v22;
        v21[1] = (__int64)v22;
        if ( *(__int64 **)(v25 + 8) != v22 )
          __fastfail(3u);
        *(_QWORD *)(v25 + 8) = v21;
        *v22 = (__int64)v21;
        v8 = v47;
        _InterlockedAnd((volatile signed __int32 *)v18, 0xFFFFFF7F);
      }
    }
LABEL_57:
    if ( v4 )
      KiDecrementProcessStackCount(*(_QWORD *)(a1 + 184));
    *(_BYTE *)(a1 + 565) = 0;
    if ( !v8 )
      return KiSwapThread(a1, v14);
    if ( v8 == 2 )
    {
      v26 = MEMORY[0xFFFFF780000003B0] + *(_QWORD *)(a1 + 248) + a4;
      *(_QWORD *)(v6 + 24) = v26;
      v26 >>= 18;
      v45 = (unsigned __int8)v26;
      v27 = (unsigned __int8)v26;
      v44 = *(_DWORD *)v6;
      BYTE1(v44) = BYTE1(*(_DWORD *)v6) & 0xFE;
      BYTE2(v44) = v26;
      *(_DWORD *)v6 = v44;
    }
    else
    {
      if ( !(unsigned int)KiComputeDueTime((int *)v6, a4, 0, &v45) )
        goto LABEL_69;
      v27 = v45;
    }
    if ( (unsigned __int8)KiInsertTimerTable((_DWORD)v14, v6, 0, v27, 0LL) )
    {
      if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 )
      {
        LOBYTE(v28) = 1;
        KiTraceSetTimer(v6, 0LL, v28);
      }
      else
      {
        _InterlockedAnd((volatile signed __int32 *)v6, 0xFFFFFF7F);
      }
      return KiSwapThread(a1, v14);
    }
LABEL_69:
    KiTimerWaitTest(v14, v6, 0LL);
    return KiSwapThread(a1, v14);
  }
  if ( (v13 & 7) == 0 )
  {
    if ( (v13 & 0x20) != 0 )
    {
      *(_QWORD *)(a1 + 200) = 256LL;
    }
    else
    {
      v30 = 257;
      v5 = 1;
      if ( (v13 & 0x40) != 0 )
        v30 = 192;
      *(_QWORD *)(a1 + 200) = v30;
    }
  }
  *(_BYTE *)(a1 + 388) = 2;
  if ( *(_BYTE *)(a1 + 643) == 15 )
  {
    v31 = *(_QWORD *)(a1 + 232);
    if ( v31 )
    {
      if ( (*(_BYTE *)v31 & 0x7F) == 0x15 )
      {
        v32 = (unsigned __int8)*(_DWORD *)(a1 + 540);
        *(_DWORD *)(a1 + 540) = v32;
        _InterlockedIncrement((volatile signed __int32 *)(v31 + 4 * v32 + 536));
      }
      else
      {
        _InterlockedIncrement((volatile signed __int32 *)(v31 + 40));
      }
    }
  }
  *(_QWORD *)(a1 + 64) = 0LL;
  if ( v8 )
    *(_DWORD *)(a1 + 116) &= ~0x200u;
  v29 = *(_QWORD *)(a1 + 200);
  if ( v5 )
  {
    v33 = *(_BYTE *)(a1 + 391);
    v34 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
    {
      do
      {
        if ( (++v34 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v34);
      }
      while ( *(_QWORD *)(a1 + 64) );
    }
    if ( v29 == 257 )
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
  v35 = a2;
  v36 = &a2[6 * *(unsigned __int8 *)(a1 + 587)];
  do
  {
    if ( *((_BYTE *)v35 + 17) < 5u )
    {
      v37 = (volatile signed __int32 *)v35[4];
      v38 = 0;
      if ( _interlockedbittestandset(v37, 7u) )
      {
        do
        {
          if ( (++v38 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
            _mm_pause();
          else
            HvlNotifyLongSpinWait(v38);
        }
        while ( (*v37 & 0x80u) != 0 || _interlockedbittestandset(v37, 7u) );
      }
      if ( *((_BYTE *)v35 + 17) == 4 )
      {
        v39 = (__int64 *)*v35;
        v40 = (__int64 **)v35[1];
        if ( *(__int64 **)(*v35 + 8) != v35 || *v40 != v35 )
          __fastfail(3u);
        *v40 = v39;
        v39[1] = (__int64)v40;
      }
      _InterlockedAnd(v37, 0xFFFFFF7F);
    }
    v35 += 6;
  }
  while ( v35 != v36 );
  v41 = v46;
  if ( v46->DeferredReadyListHead.Next )
    KiProcessThreadWaitList(v46, 1LL, 0LL, 0LL);
  LOBYTE(a3) = 1;
  KiExitThreadWait(v41, a1, a3, a4);
  return v29;
}
