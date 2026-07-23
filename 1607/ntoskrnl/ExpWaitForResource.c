/*
 * XREFs of ExpWaitForResource @ 0x14005C9B0
 * Callers:
 *     ExAcquireSharedStarveExclusive @ 0x1400341E0 (ExAcquireSharedStarveExclusive.c)
 *     ExAcquireResourceExclusiveLite @ 0x140067CE0 (ExAcquireResourceExclusiveLite.c)
 *     ExAcquireResourceSharedLite @ 0x140068130 (ExAcquireResourceSharedLite.c)
 *     ExAcquireSharedWaitForExclusive @ 0x140132C38 (ExAcquireSharedWaitForExclusive.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002E830 (KeYieldProcessorEx.c)
 *     KiCommitThreadWait @ 0x14005A850 (KiCommitThreadWait.c)
 *     ExpApplyPriorityBoost @ 0x14005CE50 (ExpApplyPriorityBoost.c)
 *     KiDeliverApc @ 0x14005D750 (KiDeliverApc.c)
 *     DbgPrintEx @ 0x140084C90 (DbgPrintEx.c)
 *     KiWaitSatisfyMutant @ 0x140097970 (KiWaitSatisfyMutant.c)
 *     KiSelectNextThread @ 0x1400C8450 (KiSelectNextThread.c)
 *     KiReleaseThreadLockLowerIrql @ 0x1400CAF9C (KiReleaseThreadLockLowerIrql.c)
 *     KiProcessDeferredReadyList @ 0x1400D12F0 (KiProcessDeferredReadyList.c)
 *     KiFastExitThreadWait @ 0x1400F0678 (KiFastExitThreadWait.c)
 *     KiCheckForThreadDispatch @ 0x1400F07B0 (KiCheckForThreadDispatch.c)
 *     RtlRaiseStatus @ 0x1400F4588 (RtlRaiseStatus.c)
 *     HvlNotifyLongSpinWait @ 0x1401BAD4C (HvlNotifyLongSpinWait.c)
 *     KiSatisfyThreadWait @ 0x1401DA7B8 (KiSatisfyThreadWait.c)
 *     PerfLogExecutiveResourceWait @ 0x14022832C (PerfLogExecutiveResourceWait.c)
 */

__int64 __fastcall ExpWaitForResource(__int64 a1, _DWORD *a2)
{
  unsigned int v4; // r12d
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rdx
  struct _KTHREAD *v9; // rbx
  unsigned __int8 CurrentIrql; // al
  unsigned __int8 WaitIrql; // r13
  struct _KPRCB *CurrentPrcb; // r9
  __int64 *v13; // rdx
  signed __int8 v14; // cf
  unsigned __int64 v15; // rcx
  _QWORD *v16; // rcx
  __int64 result; // rax
  unsigned __int8 v18; // r13
  _KWAIT_STATUS_REGISTER v19; // al
  __int64 v20; // rcx
  unsigned int v21; // ebx
  unsigned int v22; // r13d
  unsigned __int8 v23; // al
  int v24; // eax
  int v25; // eax
  struct _KPRCB *v26; // r13
  struct _KPRCB *v27; // rax
  signed __int32 v28[8]; // [rsp+0h] [rbp-C8h] BYREF
  int v29; // [rsp+30h] [rbp-98h]
  unsigned int v30; // [rsp+34h] [rbp-94h]
  int v31; // [rsp+38h] [rbp-90h]
  struct _KPRCB *v32; // [rsp+40h] [rbp-88h]
  int v33; // [rsp+48h] [rbp-80h]
  unsigned int v34; // [rsp+4Ch] [rbp-7Ch]
  unsigned __int64 v35; // [rsp+50h] [rbp-78h]
  __int64 v36; // [rsp+58h] [rbp-70h]
  int v37; // [rsp+60h] [rbp-68h] BYREF
  int v38; // [rsp+64h] [rbp-64h] BYREF
  int v39; // [rsp+68h] [rbp-60h] BYREF
  _DWORD v40[3]; // [rsp+6Ch] [rbp-5Ch] BYREF
  __int64 v41; // [rsp+78h] [rbp-50h] BYREF
  struct _KTHREAD *v42; // [rsp+80h] [rbp-48h]
  unsigned __int8 v43; // [rsp+E0h] [rbp+18h]
  unsigned __int8 v44; // [rsp+E8h] [rbp+20h]

  __incgsdword(0x63A8u);
  v31 = 0;
  v4 = 66084;
  if ( *(_DWORD **)(a1 + 40) != a2 )
    v4 = 66116;
  v40[1] = v4;
  v29 = 0;
  ++*(_DWORD *)(a1 + 68);
  v36 = -5000000LL;
  CurrentThread = KeGetCurrentThread();
  v42 = CurrentThread;
  v6 = 0LL;
  v7 = (*((_DWORD *)&CurrentThread[1].SwapListEntry + 2) >> 9) & 7;
  if ( (CurrentThread->Process[1].DirectoryTableBase & 0x10000000000000LL) != 0 )
  {
    v7 = 0LL;
  }
  else if ( ((*((_DWORD *)&CurrentThread[1].SwapListEntry + 2) >> 9) & 7u) >= 2 )
  {
    goto LABEL_5;
  }
  if ( CurrentThread == KeGetCurrentThread() && CurrentThread[1].Timer.DueTime.LowPart )
  {
LABEL_6:
    if ( (*(_BYTE *)(a1 + 26) & 4) == 0 )
      v6 = 4LL;
    goto LABEL_8;
  }
LABEL_5:
  if ( (int)v7 > 1 )
    goto LABEL_6;
LABEL_8:
  if ( (*(_BYTE *)(a1 + 26) & 2) == 0 )
    v6 = (unsigned int)v6 | 2;
  if ( CurrentThread->Priority > (int)*(unsigned __int8 *)(a1 + 27) )
    v6 = (unsigned int)v6 | 0xFF00;
  if ( (_DWORD)v6 )
LABEL_13:
    ExpApplyPriorityBoost(a1, v6, CurrentThread);
  v8 = 2LL;
  v9 = KeGetCurrentThread();
  LOBYTE(v7) = _bittestandreset((signed __int32 *)&v9->116, 2u);
  v43 = v7;
  if ( !(_BYTE)v7 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    v9->WaitIrql = CurrentIrql;
  }
  if ( v36 >= 0 )
  {
    v35 = v36;
    v30 = 1;
  }
  else
  {
    v35 = MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0] - (v36 + v9->RelativeTimerBias);
    v30 = 2;
  }
  while ( 1 )
  {
    WaitIrql = v9->WaitIrql;
    while ( 1 )
    {
      v9->WaitRegister.Flags = 0;
      v9->WaitMode = 0;
      v9->MiscFlags &= ~0x10u;
      v37 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)&v9->ThreadLock, 0LL) )
      {
        do
          KeYieldProcessorEx(&v37);
        while ( v9->ThreadLock );
      }
      if ( !v9->ApcState.KernelApcPending || v9->SpecialApcDisable || WaitIrql )
        break;
      LOBYTE(v8) = 1;
      KiReleaseThreadLockLowerIrql(v9, v8);
      KiDeliverApc(0LL, 0LL, 0LL);
      __writecr8(2uLL);
      v9->WaitIrql = 0;
    }
    v9->WaitBlockFill6[68] = 5;
    v9->WaitReason = 27;
    v9->ThreadLock = 0LL;
    v9->WaitBlock[2].SpareLong = MEMORY[0xFFFFF78000000320];
    v34 = 0;
    CurrentPrcb = KeGetCurrentPrcb();
    v32 = CurrentPrcb;
    v13 = (__int64 *)&v9->320;
    v9->WaitBlock[0].WaitType = 1;
    v9->WaitBlockFill4[17] = 4;
    v9->WaitBlock[0].WaitKey = 0;
    v9->WaitBlock[0].Object = a2;
    v33 = 0;
    v14 = _interlockedbittestandset(a2, 7u);
    CurrentThread = v42;
    if ( v14 )
    {
      do
      {
        v20 = (unsigned int)(v33 + 1);
        v33 = v20;
        if ( ((unsigned int)v20 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v20);
      }
      while ( (*a2 & 0x80u) != 0 || _interlockedbittestandset(a2, 7u) );
      v13 = (__int64 *)&v9->320;
      CurrentPrcb = v32;
    }
    if ( (*(_BYTE *)a2 & 0x7F) == 2 )
      break;
    v13 = (__int64 *)(unsigned int)a2[1];
    if ( (int)v13 > 0 )
    {
      if ( (*(_BYTE *)a2 & 7) == 1 )
      {
        a2[1] = 0;
      }
      else if ( (*(_BYTE *)a2 & 0x7F) == 5 )
      {
        a2[1] = (_DWORD)v13 - 1;
      }
      goto LABEL_35;
    }
    v13 = (__int64 *)&v9->320;
LABEL_26:
    if ( v30 == 2 )
    {
      v15 = MEMORY[0xFFFFF78000000008] - v9->RelativeTimerBias - MEMORY[0xFFFFF780000003B0];
    }
    else
    {
      if ( !v30 )
        goto LABEL_29;
      if ( !v35 )
      {
LABEL_85:
        v34 = 258;
        goto LABEL_35;
      }
      v15 = MEMORY[0xFFFFF78000000014];
    }
    if ( v15 > v35 )
      goto LABEL_85;
LABEL_29:
    v16 = (_QWORD *)*((_QWORD *)a2 + 2);
    if ( (_DWORD *)*v16 != a2 + 2 )
      __fastfail(3u);
    *v13 = (__int64)(a2 + 2);
    v13[1] = (__int64)v16;
    *v16 = v13;
    *((_QWORD *)a2 + 2) = v13;
    _InterlockedAnd(a2, 0xFFFFFF7F);
    v9->WaitBlockCount = 1;
    result = KiCommitThreadWait((__int64)v9, v13, v30, v35);
    if ( (_DWORD)result != 256 )
      goto LABEL_31;
    v43 = 0;
    v23 = KeGetCurrentIrql();
    __writecr8(2uLL);
    v9->WaitIrql = v23;
  }
  if ( (int)a2[1] <= 0 && (v9 != *((struct _KTHREAD **)a2 + 5) || *((_BYTE *)a2 + 2) != CurrentPrcb->DpcRoutineActive) )
    goto LABEL_26;
  v24 = a2[1];
  if ( v24 == 0x80000000 )
  {
    _InterlockedAnd(a2, 0xFFFFFF7F);
    KiFastExitThreadWait(CurrentPrcb, v9, v43, CurrentPrcb);
    RtlRaiseStatus(-1073741423);
  }
  v25 = v24 - 1;
  a2[1] = v25;
  if ( !v25 )
  {
    v9->WaitStatus = 0LL;
    v38 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)&v9->ThreadLock, 0LL) )
    {
      do
        KeYieldProcessorEx(&v38);
      while ( v9->ThreadLock );
    }
    KiWaitSatisfyMutant(a2, v9, v32);
    _InterlockedAnd(a2, 0xFFFFFF7F);
    result = KiSatisfyThreadWait((_DWORD)v32, (_DWORD)v9, v43, (int)v9 + 320, 0);
    goto LABEL_31;
  }
LABEL_35:
  _InterlockedAnd(a2, 0xFFFFFF7F);
  v9->WaitBlockFill6[68] = 2;
  _InterlockedOr(v28, 0);
  if ( v9->ThreadLock )
  {
    v39 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)&v9->ThreadLock, 0LL) )
    {
      do
        KeYieldProcessorEx(&v39);
      while ( v9->ThreadLock );
    }
    v9->ThreadLock = 0LL;
    CurrentPrcb = v32;
  }
  v18 = v9->WaitIrql;
  v44 = v18;
  v19.Flags = (unsigned __int8)v9->WaitRegister;
  if ( (v19.Flags & 0x38) != 0 )
  {
    if ( (v19.Flags & 0x18) != 0 )
    {
      if ( (v19.Flags & 8) != 0 )
        _interlockedbittestandset((volatile signed __int32 *)&v9->116 + 1, 0xBu);
      v41 = 0LL;
      v40[0] = 0;
      v26 = v32;
      while ( _interlockedbittestandset64((volatile signed __int32 *)&v26->PrcbLock, 0LL) )
      {
        do
          KeYieldProcessorEx(v40);
        while ( v26->PrcbLock );
      }
      if ( !v26->NextThread )
        KiSelectNextThread(v32, &v41, v7, CurrentPrcb);
      v27 = v32;
      _InterlockedAnd64((volatile signed __int64 *)&v32->PrcbLock, 0LL);
      KiProcessDeferredReadyList(v27, &v41, v44);
    }
    else
    {
      LOBYTE(v13) = 1;
      KiCheckForThreadDispatch(CurrentPrcb, v13, v7, CurrentPrcb);
      KiDeliverApc(0LL, 0LL, 0LL);
      __writecr8(0LL);
    }
  }
  else if ( v43 )
  {
    KiCheckForThreadDispatch(CurrentPrcb, v18, v7, CurrentPrcb);
  }
  else
  {
    __writecr8(v18);
  }
  result = v34;
LABEL_31:
  if ( (_DWORD)result == 258 )
  {
    v21 = ++v31;
    if ( (DWORD1(PerfGlobalGroupMask) & 0x20000) != 0 )
      PerfLogExecutiveResourceWait(v4, a1, v21);
    v22 = ++v29;
    v36 = ExpTimeout;
    if ( ExResourceTimeoutCount )
    {
      if ( v22 > ExResourceTimeoutCount )
      {
        v29 = 0;
        DbgPrintEx(0, 0, "Possible deadlock. Use !locks %p to determine the resource owner\n", (const void *)a1);
        __debugbreak();
      }
    }
    v6 = 65280LL;
    goto LABEL_13;
  }
  return result;
}
