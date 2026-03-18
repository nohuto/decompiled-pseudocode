/*
 * XREFs of ExpWaitForResource @ 0x14009C5E0
 * Callers:
 *     ExAcquireSharedStarveExclusive @ 0x140052F60 (ExAcquireSharedStarveExclusive.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400C8A30 (ExAcquireResourceExclusiveLite.c)
 *     ExAcquireResourceSharedLite @ 0x1400C8DB0 (ExAcquireResourceSharedLite.c)
 *     ExAcquireSharedWaitForExclusive @ 0x14012EDB8 (ExAcquireSharedWaitForExclusive.c)
 * Callees:
 *     KiCheckForThreadDispatch @ 0x14000DCB4 (KiCheckForThreadDispatch.c)
 *     RtlRaiseStatus @ 0x14001BB3C (RtlRaiseStatus.c)
 *     KiDeliverApc @ 0x140048670 (KiDeliverApc.c)
 *     KiProcessDeferredReadyList @ 0x14009BE20 (KiProcessDeferredReadyList.c)
 *     ExpApplyPriorityBoost @ 0x14009CD90 (ExpApplyPriorityBoost.c)
 *     KiCommitThreadWait @ 0x1400A0220 (KiCommitThreadWait.c)
 *     KiExitThreadWait @ 0x1400A23E0 (KiExitThreadWait.c)
 *     KiSelectNextThread @ 0x1400D5240 (KiSelectNextThread.c)
 *     DbgPrintEx @ 0x140131EAC (DbgPrintEx.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     PerfLogExecutiveResourceWait @ 0x14025FA64 (PerfLogExecutiveResourceWait.c)
 */

void __fastcall ExpWaitForResource(__int64 a1, volatile signed __int32 *a2)
{
  int v3; // ebx
  struct _KTHREAD *CurrentThread; // r10
  __int64 v5; // rdx
  int v6; // r8d
  unsigned __int64 v7; // r9
  struct _KTHREAD *v8; // rdi
  $5F589360F986DA22318BA982CE57118F *v9; // r12
  unsigned __int8 CurrentIrql; // al
  unsigned __int8 WaitIrql; // bl
  __int64 v12; // rcx
  int v13; // r14d
  struct _KPRCB *CurrentPrcb; // rsi
  __int64 v15; // rcx
  int v16; // eax
  int v17; // eax
  __int64 v18; // rcx
  volatile unsigned __int8 DpcRoutineActive; // cl
  struct _LIST_ENTRY *v20; // rcx
  struct _LIST_ENTRY *Blink; // rdx
  volatile __int64 WaitStatus; // rbx
  __int64 v23; // rcx
  int v24; // edx
  unsigned __int64 v25; // rcx
  __int64 v26; // rcx
  unsigned __int8 v27; // bl
  _KWAIT_STATUS_REGISTER v28; // al
  __int64 v29; // rcx
  struct _LIST_ENTRY *v30; // rcx
  int v31; // eax
  unsigned int v32; // esi
  unsigned int v33; // ebx
  unsigned __int8 v34; // al
  signed __int32 v35[8]; // [rsp+0h] [rbp-B8h] BYREF
  int v36; // [rsp+20h] [rbp-98h]
  int v37; // [rsp+24h] [rbp-94h]
  unsigned int v38; // [rsp+28h] [rbp-90h]
  int v39; // [rsp+2Ch] [rbp-8Ch]
  unsigned int v40; // [rsp+30h] [rbp-88h]
  int v41; // [rsp+34h] [rbp-84h]
  int v42; // [rsp+38h] [rbp-80h]
  int v43; // [rsp+3Ch] [rbp-7Ch]
  int v44; // [rsp+40h] [rbp-78h]
  unsigned __int64 v45; // [rsp+48h] [rbp-70h]
  __int64 v46; // [rsp+50h] [rbp-68h]
  _QWORD *v47; // [rsp+58h] [rbp-60h] BYREF
  struct _KTHREAD *v48; // [rsp+60h] [rbp-58h]
  volatile signed __int32 v49; // [rsp+68h] [rbp-50h]
  unsigned __int8 v51; // [rsp+D0h] [rbp+18h]
  int v52; // [rsp+D8h] [rbp+20h]

  __incgsdword(0x6328u);
  v37 = 0;
  v3 = 66084;
  if ( *(volatile signed __int32 **)(a1 + 40) != a2 )
    v3 = 66116;
  v40 = v3;
  v52 = 0;
  ++*(_DWORD *)(a1 + 68);
  v46 = -5000000LL;
  CurrentThread = KeGetCurrentThread();
  v48 = CurrentThread;
  v5 = 0LL;
  v6 = (*((_DWORD *)&CurrentThread[1].SwapListEntry + 3) >> 9) & 7;
  if ( (CurrentThread->Process[1].DirectoryTableBase & 0x10000000000000LL) != 0 )
  {
    v6 = 0;
  }
  else if ( ((*((_DWORD *)&CurrentThread[1].SwapListEntry + 3) >> 9) & 7u) >= 2 )
  {
    goto LABEL_8;
  }
  if ( CurrentThread != KeGetCurrentThread() || !HIDWORD(CurrentThread[1].Timer.TimerListEntry.Flink) )
  {
LABEL_8:
    if ( v6 <= 1 )
      goto LABEL_11;
  }
  if ( (*(_BYTE *)(a1 + 26) & 4) == 0 )
    v5 = 4LL;
LABEL_11:
  if ( CurrentThread->Priority > (int)*(unsigned __int8 *)(a1 + 27) )
    v5 = (unsigned int)v5 | 0xFF00;
  if ( (_DWORD)v5 )
    ExpApplyPriorityBoost(a1, v5, CurrentThread);
  while ( 2 )
  {
    v7 = 0xFFFFF780000003B0uLL;
    v8 = KeGetCurrentThread();
    v9 = &v8->320;
    v51 = _bittestandreset((signed __int32 *)&v8->116, 2u);
    if ( !v51 )
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      v8->WaitIrql = CurrentIrql;
    }
    if ( v46 >= 0 )
    {
      v45 = v46;
      v38 = 1;
    }
    else
    {
      v45 = MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0] - (v46 + v8->RelativeTimerBias);
      v38 = 2;
    }
    while ( 1 )
    {
      WaitIrql = v8->WaitIrql;
      while ( 1 )
      {
        v8->WaitRegister.Flags = 0;
        v8->WaitMode = 0;
        v8->MiscFlags &= ~0x10u;
        v36 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)&v8->ThreadLock, 0LL) )
        {
          do
          {
            v12 = (unsigned int)(v36 + 1);
            v36 = v12;
            if ( ((unsigned int)v12 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
              _mm_pause();
            else
              HvlNotifyLongSpinWait(v12);
          }
          while ( v8->ThreadLock );
        }
        if ( !v8->ApcState.KernelApcPending || v8->SpecialApcDisable || WaitIrql )
          break;
        v8->ThreadLock = 0LL;
        __writecr8(1uLL);
        KiDeliverApc(0, 0, 0LL);
        __writecr8(2uLL);
        v8->WaitIrql = 0;
      }
      v8->WaitBlockFill6[68] = 5;
      v8->WaitReason = 27;
      v8->ThreadLock = 0LL;
      v8->WaitBlock[2].SpareLong = MEMORY[0xFFFFF78000000320];
      v13 = 0;
      CurrentPrcb = KeGetCurrentPrcb();
      v8->WaitBlock[0].WaitType = 1;
      v8->WaitBlockFill4[17] = 4;
      v8->WaitBlock[0].WaitKey = 0;
      v8->WaitBlock[0].Object = (PVOID)a2;
      v41 = 0;
      if ( _interlockedbittestandset(a2, 7u) )
      {
        do
        {
          v15 = (unsigned int)(v41 + 1);
          v41 = v15;
          if ( ((unsigned int)v15 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
            _mm_pause();
          else
            HvlNotifyLongSpinWait(v15);
        }
        while ( (*a2 & 0x80u) != 0 || _interlockedbittestandset(a2, 7u) );
      }
      if ( (*(_BYTE *)a2 & 0x7F) == 2 )
        break;
      v24 = *((_DWORD *)a2 + 1);
      if ( v24 > 0 )
      {
        if ( (*(_BYTE *)a2 & 7) == 1 )
        {
          *((_DWORD *)a2 + 1) = 0;
        }
        else if ( (*(_BYTE *)a2 & 0x7F) == 5 )
        {
          *((_DWORD *)a2 + 1) = v24 - 1;
        }
        goto LABEL_85;
      }
LABEL_78:
      if ( v38 == 2 )
      {
        v25 = MEMORY[0xFFFFF78000000008] - v8->RelativeTimerBias - MEMORY[0xFFFFF780000003B0];
      }
      else
      {
        if ( !v38 )
          goto LABEL_115;
        if ( !v45 )
          goto LABEL_84;
        v25 = MEMORY[0xFFFFF78000000014];
      }
      if ( v25 > v45 )
      {
LABEL_84:
        v13 = 258;
        goto LABEL_85;
      }
LABEL_115:
      v30 = (struct _LIST_ENTRY *)*((_QWORD *)a2 + 2);
      v9->WaitBlock[0].WaitListEntry.Flink = (struct _LIST_ENTRY *)(a2 + 2);
      v8->WaitBlock[0].WaitListEntry.Blink = v30;
      if ( (volatile signed __int32 *)v30->Flink != a2 + 2 )
        __fastfail(3u);
      v30->Flink = (struct _LIST_ENTRY *)v9;
      *((_QWORD *)a2 + 2) = v9;
      _InterlockedAnd(a2, 0xFFFFFF7F);
      v8->WaitBlockCount = 1;
      v31 = KiCommitThreadWait(v8, &v8->320, v38, v45);
      if ( v31 != 256 )
      {
        LODWORD(WaitStatus) = v31;
        goto LABEL_119;
      }
      v51 = 0;
      v34 = KeGetCurrentIrql();
      __writecr8(2uLL);
      v8->WaitIrql = v34;
    }
    if ( *((int *)a2 + 1) <= 0
      && (v8 != *((struct _KTHREAD **)a2 + 5) || *((_BYTE *)a2 + 2) != CurrentPrcb->DpcRoutineActive) )
    {
      goto LABEL_78;
    }
    v16 = *((_DWORD *)a2 + 1);
    if ( v16 == 0x80000000 )
    {
      _InterlockedAnd(a2, 0xFFFFFF7F);
      v8->WaitBlockFill6[68] = 2;
      _InterlockedOr(v35, 0);
      if ( v8->ThreadLock )
      {
        v43 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)&v8->ThreadLock, 0LL) )
        {
          do
          {
            v23 = (unsigned int)(v43 + 1);
            v43 = v23;
            if ( ((unsigned int)v23 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
              _mm_pause();
            else
              HvlNotifyLongSpinWait(v23);
          }
          while ( v8->ThreadLock );
        }
        v8->ThreadLock = 0LL;
      }
      KiExitThreadWait(CurrentPrcb, v8, v51, v7);
      RtlRaiseStatus(-1073741423);
    }
    v17 = v16 - 1;
    *((_DWORD *)a2 + 1) = v17;
    if ( !v17 )
    {
      v8->WaitStatus = 0LL;
      v44 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)&v8->ThreadLock, 0LL) )
      {
        do
        {
          v18 = (unsigned int)(v44 + 1);
          v44 = v18;
          if ( ((unsigned int)v18 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
            _mm_pause();
          else
            HvlNotifyLongSpinWait(v18);
        }
        while ( v8->ThreadLock );
      }
      v8->KernelApcDisable -= *((unsigned __int8 *)a2 + 49);
      if ( CurrentPrcb->CurrentThread == v8 )
        DpcRoutineActive = CurrentPrcb->DpcRoutineActive;
      else
        DpcRoutineActive = 0;
      v49 = *a2;
      BYTE2(v49) = DpcRoutineActive;
      *a2 = v49;
      *((_QWORD *)a2 + 5) = v8;
      if ( *((_BYTE *)a2 + 48) )
      {
        *((_BYTE *)a2 + 48) = 0;
        v8->WaitStatus |= 0x80uLL;
      }
      v20 = (struct _LIST_ENTRY *)(a2 + 6);
      Blink = v8->MutantListHead.Blink;
      *((_QWORD *)a2 + 3) = &v8->MutantListHead;
      *((_QWORD *)a2 + 4) = Blink;
      if ( Blink->Flink != &v8->MutantListHead )
        __fastfail(3u);
      Blink->Flink = v20;
      v8->MutantListHead.Blink = v20;
      _InterlockedAnd(a2, 0xFFFFFF7F);
      v8->WaitBlockFill6[68] = 2;
      v8->ThreadLock = 0LL;
      WaitStatus = v8->WaitStatus;
      KiExitThreadWait(CurrentPrcb, v8, v51, v7);
      goto LABEL_119;
    }
LABEL_85:
    _InterlockedAnd(a2, 0xFFFFFF7F);
    v8->WaitBlockFill6[68] = 2;
    _InterlockedOr(v35, 0);
    if ( v8->ThreadLock )
    {
      v39 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)&v8->ThreadLock, 0LL) )
      {
        do
        {
          v26 = (unsigned int)(v39 + 1);
          v39 = v26;
          if ( ((unsigned int)v26 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
            _mm_pause();
          else
            HvlNotifyLongSpinWait(v26);
        }
        while ( v8->ThreadLock );
      }
      v8->ThreadLock = 0LL;
    }
    v27 = v8->WaitIrql;
    v28.Flags = (unsigned __int8)v8->WaitRegister;
    if ( (v28.Flags & 0x38) != 0 )
    {
      if ( (v28.Flags & 0x18) != 0 )
      {
        if ( (v28.Flags & 8) != 0 )
          _interlockedbittestandset((volatile signed __int32 *)&v8->116 + 1, 0xBu);
        v47 = 0LL;
        v42 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
        {
          do
          {
            v29 = (unsigned int)(v42 + 1);
            v42 = v29;
            if ( ((unsigned int)v29 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
              _mm_pause();
            else
              HvlNotifyLongSpinWait(v29);
          }
          while ( CurrentPrcb->PrcbLock );
        }
        if ( !CurrentPrcb->NextThread )
          KiSelectNextThread(CurrentPrcb, &v47);
        _InterlockedAnd64((volatile signed __int64 *)&CurrentPrcb->PrcbLock, 0LL);
        KiProcessDeferredReadyList((__int64)CurrentPrcb, &v47, v27);
      }
      else
      {
        KiCheckForThreadDispatch((__int64)CurrentPrcb, 1u);
        KiDeliverApc(0, 0, 0LL);
        __writecr8(0LL);
      }
    }
    else if ( v51 )
    {
      KiCheckForThreadDispatch((__int64)CurrentPrcb, v27);
    }
    else
    {
      __writecr8(v27);
    }
    LODWORD(WaitStatus) = v13;
LABEL_119:
    if ( (_DWORD)WaitStatus == 258 )
    {
      v32 = ++v37;
      if ( (DWORD1(PerfGlobalGroupMask) & 0x20000) != 0 )
        PerfLogExecutiveResourceWait(v40, a1, v32);
      v33 = ++v52;
      v46 = ExpTimeout;
      if ( ExResourceTimeoutCount && v33 > ExResourceTimeoutCount )
      {
        v52 = 0;
        v36 = 0;
        DbgPrintEx(0, 0, "Possible deadlock. Use !locks %p to determine the resource owner\n", (const void *)a1);
        __debugbreak();
      }
      ExpApplyPriorityBoost(a1, 65280LL, v48);
      continue;
    }
    break;
  }
}
