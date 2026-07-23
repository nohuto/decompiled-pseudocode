/*
 * XREFs of KeWaitForMultipleObjects @ 0x140059E60
 * Callers:
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x1400037A8 (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ?SmStReadThread@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x140003F7C (-SmStReadThread@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     MmWaitMultipleForCacheManagerPrefetch @ 0x1400A7D6C (MmWaitMultipleForCacheManagerPrefetch.c)
 *     MiZeroPageThread @ 0x14013A1B0 (MiZeroPageThread.c)
 *     MiMappedPageWriter @ 0x14013DAC4 (MiMappedPageWriter.c)
 *     KeBalanceSetManager @ 0x14013F4AC (KeBalanceSetManager.c)
 *     CcQueueLazyWriteScanThread @ 0x14014031C (CcQueueLazyWriteScanThread.c)
 *     MiDereferenceSegmentThread @ 0x140141AC4 (MiDereferenceSegmentThread.c)
 *     MiModifiedPageWriter @ 0x140142A78 (MiModifiedPageWriter.c)
 *     MiStoreEvictThread @ 0x14014398C (MiStoreEvictThread.c)
 *     MiPartitionWorkingSetManager @ 0x1401E817C (MiPartitionWorkingSetManager.c)
 *     MiIssueAsynchronousFlush @ 0x1401EAD3C (MiIssueAsynchronousFlush.c)
 *     MiWaitForAsynchronousFlushes @ 0x1401EAEFC (MiWaitForAsynchronousFlushes.c)
 *     PopSleepDeviceList @ 0x1403CF2F0 (PopSleepDeviceList.c)
 *     PnprQuiesceWorker @ 0x1403DCD24 (PnprQuiesceWorker.c)
 *     MiZeroAllPageFiles @ 0x1403DEA58 (MiZeroAllPageFiles.c)
 *     CmpDoFileWrite @ 0x1403F7EE8 (CmpDoFileWrite.c)
 *     ObWaitForMultipleObjects @ 0x14044DCA0 (ObWaitForMultipleObjects.c)
 *     PiUEventNotifyUserMode @ 0x14048D5A4 (PiUEventNotifyUserMode.c)
 *     EtwpLogger @ 0x140490638 (EtwpLogger.c)
 *     FsRtlCancellableWaitForMultipleObjects @ 0x140499178 (FsRtlCancellableWaitForMultipleObjects.c)
 *     PfGenerateTrace @ 0x140530264 (PfGenerateTrace.c)
 *     PfTLoggingWorker @ 0x14055B69C (PfTLoggingWorker.c)
 *     CmpFinishSystemHivesLoad @ 0x14055D650 (CmpFinishSystemHivesLoad.c)
 *     ExpWorkerThreadBalanceManager @ 0x140566648 (ExpWorkerThreadBalanceManager.c)
 *     PopThermalReadCounters @ 0x140670530 (PopThermalReadCounters.c)
 *     PsShutdownSystem @ 0x14067F928 (PsShutdownSystem.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002E830 (KeYieldProcessorEx.c)
 *     KiCommitThreadWait @ 0x14005A850 (KiCommitThreadWait.c)
 *     KiDeliverApc @ 0x14005D750 (KiDeliverApc.c)
 *     KiWaitForAllObjects @ 0x14009759C (KiWaitForAllObjects.c)
 *     KiWaitSatisfyOther @ 0x140097914 (KiWaitSatisfyOther.c)
 *     KiWaitSatisfyMutant @ 0x140097970 (KiWaitSatisfyMutant.c)
 *     KiSelectNextThread @ 0x1400C8450 (KiSelectNextThread.c)
 *     KiProcessDeferredReadyList @ 0x1400D12F0 (KiProcessDeferredReadyList.c)
 *     KiFastExitThreadWait @ 0x1400F0678 (KiFastExitThreadWait.c)
 *     KiExitThreadWait @ 0x1400F06F0 (KiExitThreadWait.c)
 *     KiCheckForThreadDispatch @ 0x1400F07B0 (KiCheckForThreadDispatch.c)
 *     RtlRaiseStatus @ 0x1400F4588 (RtlRaiseStatus.c)
 *     KeBugCheck @ 0x14015DA60 (KeBugCheck.c)
 *     KiSatisfyThreadWait @ 0x1401DA7B8 (KiSatisfyThreadWait.c)
 */

NTSTATUS __stdcall KeWaitForMultipleObjects(
        ULONG Count,
        PVOID Object[],
        WAIT_TYPE WaitType,
        KWAIT_REASON WaitReason,
        KPROCESSOR_MODE WaitMode,
        BOOLEAN Alertable,
        PLARGE_INTEGER Timeout,
        PKWAIT_BLOCK WaitBlockArray)
{
  struct _KTHREAD *CurrentThread; // rbx
  PKWAIT_BLOCK WaitBlock; // rsi
  unsigned __int8 CurrentIrql; // al
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // r9
  unsigned __int8 WaitIrql; // r14
  struct _KWAIT_BLOCK *v14; // rsi
  volatile UCHAR *p_BlockState; // r14
  ULONG v16; // r15d
  struct _KPRCB *CurrentPrcb; // rcx
  PVOID *__attribute__((__org_arrdim(0,0))) v18; // rdx
  volatile signed __int32 *v19; // rdi
  PVOID *v20; // rdx
  unsigned int v21; // eax
  LONGLONG v22; // r9
  NTSTATUS result; // eax
  unsigned __int8 v24; // al
  volatile __int64 WaitStatus; // r13
  volatile signed __int32 *v26; // r14
  struct _LIST_ENTRY *Flink; // rcx
  struct _LIST_ENTRY *Blink; // rax
  unsigned __int8 v29; // di
  _KWAIT_STATUS_REGISTER v30; // al
  unsigned __int8 v31; // al
  unsigned int v32; // esi
  $C41897776C0457C78394BDAEF5CBAAD1 *v33; // r15
  _DWORD *v34; // rdi
  unsigned __int64 v35; // r13
  NTSTATUS v36; // r14d
  struct _KPRCB *v37; // r10
  struct _LIST_ENTRY *v38; // rcx
  NTSTATUS v39; // eax
  NTSTATUS v40; // edi
  unsigned __int64 v41; // rcx
  __int64 v42; // rcx
  unsigned __int64 v43; // rcx
  int v45; // eax
  int v46; // eax
  struct _KPRCB *v47; // rcx
  volatile __int64 v48; // rdi
  unsigned __int8 v49; // al
  signed __int32 v50[8]; // [rsp+0h] [rbp-99h] BYREF
  unsigned __int8 v51; // [rsp+40h] [rbp-59h]
  struct _KPRCB *v52; // [rsp+48h] [rbp-51h]
  LONGLONG QuadPart; // [rsp+50h] [rbp-49h]
  _DWORD *v54; // [rsp+58h] [rbp-41h]
  int v55; // [rsp+60h] [rbp-39h] BYREF
  int v56; // [rsp+64h] [rbp-35h] BYREF
  int v57; // [rsp+68h] [rbp-31h] BYREF
  int v58; // [rsp+6Ch] [rbp-2Dh] BYREF
  int v59; // [rsp+70h] [rbp-29h] BYREF
  int v60; // [rsp+74h] [rbp-25h] BYREF
  int v61; // [rsp+78h] [rbp-21h] BYREF
  int v62; // [rsp+7Ch] [rbp-1Dh] BYREF
  int v63; // [rsp+80h] [rbp-19h] BYREF
  int v64; // [rsp+84h] [rbp-15h] BYREF
  int v65; // [rsp+88h] [rbp-11h] BYREF
  int v66; // [rsp+8Ch] [rbp-Dh] BYREF
  _QWORD v67[8]; // [rsp+90h] [rbp-9h] BYREF
  unsigned __int8 v69; // [rsp+E0h] [rbp+47h]
  unsigned __int8 v71; // [rsp+F8h] [rbp+5Fh]

  v71 = WaitReason;
  CurrentThread = KeGetCurrentThread();
  if ( Count != 1 )
  {
    WaitBlock = WaitBlockArray;
    if ( WaitBlockArray )
    {
      if ( Count > 0x40 )
        KeBugCheck(0xCu);
    }
    else
    {
      if ( Count > 3 )
        KeBugCheck(0xCu);
      WaitBlock = CurrentThread->WaitBlock;
      WaitBlockArray = CurrentThread->WaitBlock;
    }
    if ( WaitType )
    {
      v51 = _bittestandreset((signed __int32 *)&CurrentThread->116, 2u);
      if ( !v51 )
      {
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        CurrentThread->WaitIrql = CurrentIrql;
      }
      v11 = 0xFFFFF780000003B0uLL;
      v12 = 0xFFFFF78000000008uLL;
      if ( Timeout )
      {
        if ( Timeout->HighPart >= 0 )
        {
          QuadPart = Timeout->QuadPart;
          LODWORD(v54) = 1;
        }
        else
        {
          LODWORD(v54) = 2;
          QuadPart = MEMORY[0xFFFFF78000000008]
                   - MEMORY[0xFFFFF780000003B0]
                   - (Timeout->QuadPart
                    + CurrentThread->RelativeTimerBias);
        }
      }
      else
      {
        LODWORD(v54) = 0;
      }
      while ( 1 )
      {
        WaitIrql = CurrentThread->WaitIrql;
        while ( 1 )
        {
          CurrentThread->MiscFlags &= ~0x10u;
          CurrentThread->WaitRegister.Flags = 0;
          CurrentThread->WaitMode = WaitMode;
          if ( Alertable )
            CurrentThread->MiscFlags |= 0x10u;
          v59 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
          {
            do
              KeYieldProcessorEx(&v59);
            while ( CurrentThread->ThreadLock );
          }
          if ( !CurrentThread->ApcState.KernelApcPending || CurrentThread->SpecialApcDisable || WaitIrql )
            break;
          CurrentThread->ThreadLock = 0LL;
          __writecr8(1uLL);
          KiDeliverApc(0LL, 0LL, 0LL);
          __writecr8(2uLL);
          CurrentThread->WaitIrql = 0;
        }
        v14 = WaitBlockArray;
        if ( Alertable )
        {
          v42 = WaitMode;
          if ( CurrentThread->Alerted[WaitMode] )
            goto LABEL_148;
          if ( WaitMode
            && (unsigned __int8 *)CurrentThread->ApcState.ApcListHead[1].Flink != &CurrentThread->ApcStateFill[16] )
          {
            goto LABEL_97;
          }
          if ( CurrentThread->Alerted[0] )
            goto LABEL_169;
        }
        else if ( (CurrentThread->ApcState.UserApcPending & (unsigned __int8)WaitMode) != 0 )
        {
          goto LABEL_98;
        }
        p_BlockState = &WaitBlockArray->BlockState;
        CurrentThread->WaitBlockFill6[68] = 5;
        v16 = 0;
        CurrentThread->WaitReason = v71;
        CurrentThread->ThreadLock = 0LL;
        CurrentThread->WaitBlock[2].SpareLong = MEMORY[0xFFFFF78000000320];
        CurrentPrcb = KeGetCurrentPrcb();
        v52 = CurrentPrcb;
        do
        {
          v18 = Object;
          v60 = 0;
          v19 = (volatile signed __int32 *)Object[v16];
          *((_BYTE *)p_BlockState - 1) = 1;
          *p_BlockState = 4;
          *(_WORD *)(p_BlockState + 1) = v16;
          *(_QWORD *)(p_BlockState + 7) = CurrentThread;
          *(_QWORD *)(p_BlockState + 15) = v19;
          if ( _interlockedbittestandset(v19, 7u) )
          {
            do
            {
              do
                KeYieldProcessorEx(&v60);
              while ( (*v19 & 0x80u) != 0 );
            }
            while ( _interlockedbittestandset(v19, 7u) );
            CurrentPrcb = v52;
          }
          if ( (*(_BYTE *)v19 & 0x7F) == 2 )
          {
            if ( *((int *)v19 + 1) > 0
              || CurrentThread == *((struct _KTHREAD **)v19 + 5) && *((_BYTE *)v19 + 2) == CurrentPrcb->DpcRoutineActive )
            {
              if ( *((_DWORD *)v19 + 1) == 0x80000000 )
              {
                _InterlockedAnd(v19, 0xFFFFFF7F);
                v62 = 0;
                while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
                {
                  do
                    KeYieldProcessorEx(&v62);
                  while ( CurrentThread->ThreadLock );
                }
                KiSatisfyThreadWait((_DWORD)v52, (_DWORD)CurrentThread, v51, (_DWORD)WaitBlockArray, v16);
                RtlRaiseStatus(-1073741423);
              }
              v61 = 0;
              while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
              {
                do
                  KeYieldProcessorEx(&v61);
                while ( CurrentThread->ThreadLock );
              }
              if ( (CurrentThread->WaitRegister.Flags & 7) == 0 )
              {
                CurrentThread->WaitStatus = v16;
                if ( (*((_DWORD *)v19 + 1))-- == 1 )
                  KiWaitSatisfyMutant(v19, CurrentThread, v52);
              }
              goto LABEL_33;
            }
          }
          else if ( *((int *)v19 + 1) > 0 )
          {
            v64 = 0;
            while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
            {
              do
                KeYieldProcessorEx(&v64);
              while ( CurrentThread->ThreadLock );
            }
            if ( (CurrentThread->WaitRegister.Flags & 7) == 0 )
            {
              CurrentThread->WaitStatus = v16;
              if ( (*(_BYTE *)v19 & 7) == 1 )
              {
                *((_DWORD *)v19 + 1) = 0;
              }
              else if ( (*(_BYTE *)v19 & 0x7F) == 5 )
              {
                --*((_DWORD *)v19 + 1);
              }
            }
LABEL_33:
            _InterlockedAnd(v19, 0xFFFFFF7F);
LABEL_34:
            CurrentThread->WaitBlockFill6[68] = 2;
            CurrentThread->ThreadLock = 0LL;
            WaitStatus = CurrentThread->WaitStatus;
            if ( v16 )
            {
              do
              {
                if ( v14->BlockState < 5u )
                {
                  v26 = (volatile signed __int32 *)v14->Object;
                  v65 = 0;
                  while ( _interlockedbittestandset(v26, 7u) )
                  {
                    do
                      KeYieldProcessorEx(&v65);
                    while ( (*v26 & 0x80u) != 0 );
                  }
                  if ( v14->BlockState == 4 )
                  {
                    Flink = v14->WaitListEntry.Flink;
                    Blink = v14->WaitListEntry.Blink;
                    if ( (struct _KWAIT_BLOCK *)v14->WaitListEntry.Flink->Blink != v14
                      || (struct _KWAIT_BLOCK *)Blink->Flink != v14 )
                    {
                      __fastfail(3u);
                    }
                    Blink->Flink = Flink;
                    Flink->Blink = Blink;
                  }
                  _InterlockedAnd(v26, 0xFFFFFF7F);
                }
                ++v14;
              }
              while ( v14 != &WaitBlockArray[(unsigned __int8)v16] );
            }
            v29 = CurrentThread->WaitIrql;
            v30.Flags = (unsigned __int8)CurrentThread->WaitRegister;
            if ( (v30.Flags & 0x38) != 0 )
            {
              if ( (v30.Flags & 0x18) != 0 )
              {
                if ( (v30.Flags & 8) != 0 )
                  _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0xBu);
                v67[0] = 0LL;
                v66 = 0;
                while ( _interlockedbittestandset64((volatile signed __int32 *)&v52->PrcbLock, 0LL) )
                {
                  do
                    KeYieldProcessorEx(&v66);
                  while ( v52->PrcbLock );
                }
                if ( !v52->NextThread )
                  KiSelectNextThread(v52, v67, v11, v12);
                _InterlockedAnd64((volatile signed __int64 *)&v52->PrcbLock, 0LL);
                KiProcessDeferredReadyList(v52, v67, v29);
              }
              else
              {
                LOBYTE(v18) = 1;
                KiCheckForThreadDispatch(v52, v18, v11, v12);
                KiDeliverApc(0LL, 0LL, 0LL);
                __writecr8(0LL);
              }
            }
            else if ( v51 )
            {
              KiCheckForThreadDispatch(v52, v29, v11, v12);
            }
            else
            {
              __writecr8(v29);
            }
            return WaitStatus;
          }
          v20 = (PVOID *)*((_QWORD *)v19 + 2);
          if ( *v20 != v19 + 2 )
            __fastfail(3u);
          *(_QWORD *)(p_BlockState - 9) = v20;
          *(_QWORD *)(p_BlockState - 17) = v19 + 2;
          *v20 = (PVOID)(p_BlockState - 17);
          *((_QWORD *)v19 + 2) = p_BlockState - 17;
          _InterlockedAnd(v19, 0xFFFFFF7F);
          CurrentPrcb = v52;
          ++v16;
          p_BlockState += 48;
        }
        while ( v16 < Count );
        v21 = (unsigned int)v54;
        if ( (_DWORD)v54 == 2 )
        {
          v18 = (PVOID *)QuadPart;
          v41 = MEMORY[0xFFFFF78000000008] - CurrentThread->RelativeTimerBias - MEMORY[0xFFFFF780000003B0];
          v21 = 2;
        }
        else
        {
          if ( !(_DWORD)v54 )
            goto LABEL_25;
          v18 = (PVOID *)QuadPart;
          if ( !QuadPart )
          {
LABEL_75:
            v63 = 0;
            while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
            {
              do
                KeYieldProcessorEx(&v63);
              while ( CurrentThread->ThreadLock );
            }
            if ( (CurrentThread->WaitRegister.Flags & 7) == 0 )
              CurrentThread->WaitStatus = 258LL;
            goto LABEL_34;
          }
          v41 = MEMORY[0xFFFFF78000000014];
        }
        if ( v41 > (unsigned __int64)v18 )
          goto LABEL_75;
LABEL_25:
        v22 = QuadPart;
        CurrentThread->WaitBlockCount = Count;
        result = KiCommitThreadWait(CurrentThread, WaitBlockArray, v21, v22);
        if ( result != 256 )
          return result;
        v51 = 0;
        v24 = KeGetCurrentIrql();
        __writecr8(2uLL);
        CurrentThread->WaitIrql = v24;
      }
    }
    return KiWaitForAllObjects(
             Count,
             (_DWORD)Object,
             (_BYTE)WaitReason,
             (unsigned __int8)WaitMode,
             Alertable,
             (__int64)Timeout,
             (__int64)WaitBlock);
  }
  v54 = *Object;
  v69 = _bittestandreset((signed __int32 *)&CurrentThread->116, 2u);
  if ( !v69 )
  {
    v31 = KeGetCurrentIrql();
    __writecr8(2uLL);
    CurrentThread->WaitIrql = v31;
  }
  v11 = 0xFFFFF780000003B0uLL;
  v12 = 0xFFFFF78000000008uLL;
  if ( Timeout )
  {
    if ( Timeout->HighPart < 0 )
    {
      v32 = 2;
      QuadPart = MEMORY[0xFFFFF78000000008]
               - MEMORY[0xFFFFF780000003B0]
               - (Timeout->QuadPart
                + CurrentThread->RelativeTimerBias);
    }
    else
    {
      v32 = 1;
      QuadPart = Timeout->QuadPart;
    }
  }
  else
  {
    v32 = 0;
  }
  while ( 1 )
  {
    WaitIrql = CurrentThread->WaitIrql;
    while ( 1 )
    {
      CurrentThread->MiscFlags &= ~0x10u;
      CurrentThread->WaitRegister.Flags = 0;
      CurrentThread->WaitMode = WaitMode;
      if ( Alertable )
        CurrentThread->MiscFlags |= 0x10u;
      v55 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
      {
        do
          KeYieldProcessorEx(&v55);
        while ( CurrentThread->ThreadLock );
      }
      if ( !CurrentThread->ApcState.KernelApcPending || CurrentThread->SpecialApcDisable || WaitIrql )
        break;
      CurrentThread->ThreadLock = 0LL;
      __writecr8(1uLL);
      KiDeliverApc(0LL, 0LL, 0LL);
      __writecr8(2uLL);
      CurrentThread->WaitIrql = 0;
    }
    v33 = &CurrentThread->320;
    v34 = v54;
    v35 = QuadPart;
    if ( Alertable )
    {
      v42 = WaitMode;
      if ( CurrentThread->Alerted[WaitMode] )
      {
LABEL_148:
        CurrentThread->Alerted[v42] = 0;
        v40 = 257;
LABEL_99:
        CurrentThread->ThreadLock = 0LL;
        KiCheckForThreadDispatch(KeGetCurrentPrcb(), WaitIrql, v11, v12);
        return v40;
      }
      if ( WaitMode
        && (unsigned __int8 *)CurrentThread->ApcState.ApcListHead[1].Flink != &CurrentThread->ApcStateFill[16] )
      {
LABEL_97:
        CurrentThread->ApcState.UserApcPending = 1;
LABEL_98:
        v40 = 192;
        goto LABEL_99;
      }
      if ( CurrentThread->Alerted[0] )
      {
LABEL_169:
        CurrentThread->Alerted[0] = 0;
        v40 = 257;
        goto LABEL_99;
      }
    }
    else if ( (CurrentThread->ApcState.UserApcPending & (unsigned __int8)WaitMode) != 0 )
    {
      goto LABEL_98;
    }
    v36 = 0;
    CurrentThread->WaitBlockFill6[68] = 5;
    CurrentThread->WaitReason = v71;
    CurrentThread->ThreadLock = 0LL;
    CurrentThread->WaitBlock[2].SpareLong = MEMORY[0xFFFFF78000000320];
    v37 = KeGetCurrentPrcb();
    CurrentThread->WaitBlock[0].WaitType = 1;
    CurrentThread->WaitBlockFill4[17] = 4;
    CurrentThread->WaitBlock[0].WaitKey = 0;
    CurrentThread->WaitBlock[0].Object = v34;
    v56 = 0;
    v52 = v37;
    if ( _interlockedbittestandset(v34, 7u) )
    {
      do
      {
        do
          KeYieldProcessorEx(&v56);
        while ( (*v34 & 0x80u) != 0 );
      }
      while ( _interlockedbittestandset(v34, 7u) );
      v37 = v52;
    }
    if ( (*(_BYTE *)v34 & 0x7F) == 2 )
      break;
    if ( (int)v34[1] > 0 )
    {
      KiWaitSatisfyOther(v34);
      goto LABEL_90;
    }
LABEL_67:
    if ( v32 == 2 )
    {
      v43 = MEMORY[0xFFFFF78000000008] - CurrentThread->RelativeTimerBias - MEMORY[0xFFFFF780000003B0];
    }
    else
    {
      if ( !v32 )
        goto LABEL_69;
      if ( !v35 )
        goto LABEL_89;
      v43 = MEMORY[0xFFFFF78000000014];
    }
    if ( v43 > v35 )
    {
LABEL_89:
      v36 = 258;
      goto LABEL_90;
    }
LABEL_69:
    v38 = (struct _LIST_ENTRY *)*((_QWORD *)v34 + 2);
    if ( v38->Flink != (struct _LIST_ENTRY *)(v34 + 2) )
      __fastfail(3u);
    v33->WaitBlock[0].WaitListEntry.Flink = (struct _LIST_ENTRY *)(v34 + 2);
    CurrentThread->WaitBlock[0].WaitListEntry.Blink = v38;
    v38->Flink = (struct _LIST_ENTRY *)v33;
    *((_QWORD *)v34 + 2) = v33;
    _InterlockedAnd(v34, 0xFFFFFF7F);
    CurrentThread->WaitBlockCount = 1;
    v39 = KiCommitThreadWait(CurrentThread, &CurrentThread->320, v32, v35);
    if ( v39 != 256 )
      return v39;
    v69 = 0;
    v49 = KeGetCurrentIrql();
    __writecr8(2uLL);
    CurrentThread->WaitIrql = v49;
  }
  if ( (int)v34[1] <= 0
    && (CurrentThread != *((struct _KTHREAD **)v34 + 5) || *((_BYTE *)v34 + 2) != v37->DpcRoutineActive) )
  {
    goto LABEL_67;
  }
  v45 = v34[1];
  if ( v45 == 0x80000000 )
  {
    _InterlockedAnd(v34, 0xFFFFFF7F);
    KiFastExitThreadWait(v37, CurrentThread, v69, v12);
    RtlRaiseStatus(-1073741423);
  }
  v46 = v45 - 1;
  v34[1] = v46;
  if ( !v46 )
  {
    CurrentThread->WaitStatus = 0LL;
    v57 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
    {
      do
        KeYieldProcessorEx(&v57);
      while ( CurrentThread->ThreadLock );
    }
    KiWaitSatisfyMutant(v34, CurrentThread, v52);
    _InterlockedAnd(v34, 0xFFFFFF7F);
    v47 = v52;
    CurrentThread->WaitBlockFill6[68] = 2;
    CurrentThread->ThreadLock = 0LL;
    v48 = CurrentThread->WaitStatus;
    KiExitThreadWait(v47, CurrentThread, v69);
    return v48;
  }
LABEL_90:
  _InterlockedAnd(v34, 0xFFFFFF7F);
  CurrentThread->WaitBlockFill6[68] = 2;
  _InterlockedOr(v50, 0);
  if ( CurrentThread->ThreadLock )
  {
    v58 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
    {
      do
        KeYieldProcessorEx(&v58);
      while ( CurrentThread->ThreadLock );
    }
    v37 = v52;
    CurrentThread->ThreadLock = 0LL;
  }
  KiExitThreadWait(v37, CurrentThread, v69);
  return v36;
}
