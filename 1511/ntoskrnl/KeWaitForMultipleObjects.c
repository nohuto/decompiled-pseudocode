/*
 * XREFs of KeWaitForMultipleObjects @ 0x1400810B0
 * Callers:
 *     ?SmStReadThread@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x1400F7294 (-SmStReadThread@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x1400F7568 (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     MmWaitMultipleForCacheManagerPrefetch @ 0x1400FBF2C (MmWaitMultipleForCacheManagerPrefetch.c)
 *     MiZeroPageThread @ 0x1401307A0 (MiZeroPageThread.c)
 *     MiMappedPageWriter @ 0x1401364A8 (MiMappedPageWriter.c)
 *     KeBalanceSetManager @ 0x1401373C4 (KeBalanceSetManager.c)
 *     CcQueueLazyWriteScanThread @ 0x1401379A0 (CcQueueLazyWriteScanThread.c)
 *     MiModifiedPageWriter @ 0x1401384BC (MiModifiedPageWriter.c)
 *     MiDereferenceSegmentThread @ 0x1401389A0 (MiDereferenceSegmentThread.c)
 *     MiStoreEvictThread @ 0x140142B00 (MiStoreEvictThread.c)
 *     MiPartitionWorkingSetManager @ 0x1401D979C (MiPartitionWorkingSetManager.c)
 *     MiIssueAsynchronousFlush @ 0x1401DA2F8 (MiIssueAsynchronousFlush.c)
 *     MiWaitForAsynchronousFlushes @ 0x1401DA4AC (MiWaitForAsynchronousFlushes.c)
 *     PopSleepDeviceList @ 0x1403A503C (PopSleepDeviceList.c)
 *     PnprQuiesceWorker @ 0x1403B0C00 (PnprQuiesceWorker.c)
 *     MiZeroAllPageFiles @ 0x1403B1D84 (MiZeroAllPageFiles.c)
 *     CmpDoFileWrite @ 0x1403DD10C (CmpDoFileWrite.c)
 *     ObWaitForMultipleObjects @ 0x14040B380 (ObWaitForMultipleObjects.c)
 *     EtwpLogger @ 0x14046AE58 (EtwpLogger.c)
 *     FsRtlCancellableWaitForMultipleObjects @ 0x14048BD50 (FsRtlCancellableWaitForMultipleObjects.c)
 *     PiUEventNotifyUserMode @ 0x1404E09F4 (PiUEventNotifyUserMode.c)
 *     PfGenerateTrace @ 0x1404F7C3C (PfGenerateTrace.c)
 *     CmpFinishSystemHivesLoad @ 0x14051F09C (CmpFinishSystemHivesLoad.c)
 *     ExpWorkerThreadBalanceManager @ 0x140536444 (ExpWorkerThreadBalanceManager.c)
 *     PfTLoggingWorker @ 0x14054BCF4 (PfTLoggingWorker.c)
 *     PopThermalReadCounters @ 0x140638014 (PopThermalReadCounters.c)
 *     PsShutdownSystem @ 0x140641460 (PsShutdownSystem.c)
 *     ViKeWaitForMultipleObjectsCommon @ 0x1406C7230 (ViKeWaitForMultipleObjectsCommon.c)
 * Callees:
 *     RtlRaiseStatus @ 0x140023A24 (RtlRaiseStatus.c)
 *     KiSelectNextThread @ 0x14002A940 (KiSelectNextThread.c)
 *     KiCheckForThreadDispatch @ 0x14002AD14 (KiCheckForThreadDispatch.c)
 *     KeYieldProcessorEx @ 0x14007CAC0 (KeYieldProcessorEx.c)
 *     KiProcessDeferredReadyList @ 0x14007DC70 (KiProcessDeferredReadyList.c)
 *     KiCommitThreadWait @ 0x140081ED0 (KiCommitThreadWait.c)
 *     KiDeliverApc @ 0x140083D40 (KiDeliverApc.c)
 *     KiWaitForAllObjects @ 0x1400DECEC (KiWaitForAllObjects.c)
 *     KiWaitSatisfyMutant @ 0x1400DF104 (KiWaitSatisfyMutant.c)
 *     KeBugCheck @ 0x140153DB0 (KeBugCheck.c)
 *     KiSatisfyThreadWait @ 0x1401CB548 (KiSatisfyThreadWait.c)
 */

// local variable allocation has failed, the output may be wrong!
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
  NTSTATUS result; // eax
  struct _KTHREAD *CurrentThread; // rbx
  PKWAIT_BLOCK WaitBlock; // r12
  unsigned __int8 CurrentIrql; // al
  __int64 v12; // rdx
  unsigned __int8 WaitIrql; // si
  struct _KWAIT_BLOCK *v14; // r12
  unsigned __int8 *v15; // rcx
  NTSTATUS v16; // edi
  volatile UCHAR *p_BlockState; // rsi
  PVOID *__attribute__((__org_arrdim(0,0))) v18; // r10
  __int64 v19; // r8
  ULONG v20; // r15d
  struct _KPRCB *CurrentPrcb; // r14
  char *v22; // rdi
  __int64 *v23; // rcx
  unsigned __int64 v24; // rcx
  unsigned __int64 v25; // rax
  unsigned __int8 v26; // al
  __int64 v28; // r8
  volatile __int64 WaitStatus; // rbp
  volatile signed __int32 *v30; // rdi
  struct _LIST_ENTRY *Flink; // rcx
  struct _LIST_ENTRY *Blink; // rax
  unsigned __int8 v33; // di
  _KWAIT_STATUS_REGISTER v34; // al
  unsigned __int8 v35; // [rsp+40h] [rbp-78h]
  unsigned int v36; // [rsp+44h] [rbp-74h]
  LONGLONG QuadPart; // [rsp+48h] [rbp-70h]
  int v38; // [rsp+50h] [rbp-68h] BYREF
  int v39; // [rsp+54h] [rbp-64h] BYREF
  int v40; // [rsp+58h] [rbp-60h] BYREF
  int v41; // [rsp+5Ch] [rbp-5Ch] BYREF
  int v42; // [rsp+60h] [rbp-58h] BYREF
  int v43; // [rsp+64h] [rbp-54h] BYREF
  int v44; // [rsp+68h] [rbp-50h] BYREF
  int v45; // [rsp+6Ch] [rbp-4Ch] BYREF
  _QWORD v46[2]; // [rsp+70h] [rbp-48h] BYREF
  unsigned __int8 v49; // [rsp+D8h] [rbp+20h]

  v49 = WaitReason;
  if ( Count == 1 )
    return KeWaitForSingleObject(*Object, WaitReason, WaitMode, Alertable, Timeout);
  CurrentThread = KeGetCurrentThread();
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
  if ( WaitType == WaitAll )
    return KiWaitForAllObjects(
             Count,
             (_DWORD)Object,
             WaitReason,
             (unsigned __int8)WaitMode,
             Alertable,
             (__int64)Timeout,
             (__int64)WaitBlock);
  v35 = _bittestandreset((signed __int32 *)&CurrentThread->116, 2u);
  if ( !v35 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    CurrentThread->WaitIrql = CurrentIrql;
  }
  v12 = 0xFFFFF78000000008uLL;
  if ( Timeout )
  {
    if ( Timeout->HighPart >= 0 )
    {
      QuadPart = Timeout->QuadPart;
      v36 = 1;
    }
    else
    {
      v36 = 2;
      v12 = MEMORY[0xFFFFF78000000008]
          - MEMORY[0xFFFFF780000003B0]
          - (Timeout->QuadPart
           + CurrentThread->RelativeTimerBias);
      QuadPart = v12;
    }
  }
  else
  {
    v36 = 0;
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
      v41 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
      {
        do
          KeYieldProcessorEx(&v41, v12, *(__int64 *)&WaitType);
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
    if ( !Alertable )
    {
      if ( (CurrentThread->ApcState.UserApcPending & (unsigned __int8)WaitMode) != 0 )
        goto LABEL_61;
      goto LABEL_35;
    }
    v15 = &CurrentThread->Alerted[WaitMode];
    if ( *v15 )
    {
      *v15 = 0;
      v16 = 257;
      goto LABEL_62;
    }
    if ( WaitMode && (unsigned __int8 *)CurrentThread->ApcState.ApcListHead[1].Flink != &CurrentThread->ApcStateFill[16] )
      break;
    if ( CurrentThread->Alerted[0] )
    {
      CurrentThread->Alerted[0] = 0;
      v16 = 257;
      goto LABEL_62;
    }
LABEL_35:
    p_BlockState = &WaitBlockArray->BlockState;
    v18 = Object;
    v19 = 0LL;
    CurrentThread->WaitBlockFill6[68] = 5;
    v20 = 0;
    CurrentThread->WaitReason = v49;
    CurrentThread->ThreadLock = 0LL;
    CurrentThread->WaitBlock[2].SpareLong = MEMORY[0xFFFFF78000000320];
    CurrentPrcb = KeGetCurrentPrcb();
    do
    {
      v44 = 0;
      v22 = (char *)v18[v20];
      *((_BYTE *)p_BlockState - 1) = 1;
      *p_BlockState = 4;
      *(_WORD *)(p_BlockState + 1) = v20;
      *(_QWORD *)(p_BlockState + 7) = CurrentThread;
      *(_QWORD *)(p_BlockState + 15) = v22;
      if ( _interlockedbittestandset((volatile signed __int32 *)v22, 7u) )
      {
        do
        {
          do
            KeYieldProcessorEx(&v44, v12, v19);
          while ( (*(_DWORD *)v22 & 0x80u) != 0 );
        }
        while ( _interlockedbittestandset((volatile signed __int32 *)v22, 7u) );
        v18 = Object;
        v19 = 0LL;
      }
      if ( (*v22 & 0x7F) == 2 )
      {
        if ( *((int *)v22 + 1) > 0
          || CurrentThread == *((struct _KTHREAD **)v22 + 5) && v22[2] == CurrentPrcb->DpcRoutineActive )
        {
          if ( *((_DWORD *)v22 + 1) == 0x80000000 )
          {
            _InterlockedAnd((volatile signed __int32 *)v22, 0xFFFFFF7F);
            v38 = 0;
            while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
            {
              do
                KeYieldProcessorEx(&v38, v12, v19);
              while ( CurrentThread->ThreadLock );
            }
            KiSatisfyThreadWait((_DWORD)CurrentPrcb, (_DWORD)CurrentThread, v35, (_DWORD)WaitBlockArray, v20);
            RtlRaiseStatus(-1073741423);
          }
          v43 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
          {
            do
              KeYieldProcessorEx(&v43, v12, v19);
            while ( CurrentThread->ThreadLock );
          }
          if ( (CurrentThread->WaitRegister.Flags & 7) == 0 )
          {
            CurrentThread->WaitStatus = v20;
            if ( (*((_DWORD *)v22 + 1))-- == 1 )
              KiWaitSatisfyMutant(v22, CurrentThread, CurrentPrcb, *(_QWORD *)&WaitReason);
          }
          _InterlockedAnd((volatile signed __int32 *)v22, 0xFFFFFF7F);
          goto LABEL_69;
        }
      }
      else if ( *((int *)v22 + 1) > 0 )
      {
        v39 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
        {
          do
            KeYieldProcessorEx(&v39, v12, v19);
          while ( CurrentThread->ThreadLock );
        }
        if ( (CurrentThread->WaitRegister.Flags & 7) == 0 )
        {
          CurrentThread->WaitStatus = v20;
          if ( (*v22 & 7) == 1 )
          {
            v28 = 0LL;
            *((_DWORD *)v22 + 1) = 0;
            _InterlockedAnd((volatile signed __int32 *)v22, 0xFFFFFF7F);
            goto LABEL_70;
          }
          if ( (*v22 & 0x7F) == 5 )
            --*((_DWORD *)v22 + 1);
        }
        v28 = 0LL;
        _InterlockedAnd((volatile signed __int32 *)v22, 0xFFFFFF7F);
        goto LABEL_70;
      }
      v23 = (__int64 *)*((_QWORD *)v22 + 2);
      v12 = (__int64)(p_BlockState - 17);
      *(_QWORD *)(p_BlockState - 9) = v23;
      *(_QWORD *)(p_BlockState - 17) = v22 + 8;
      if ( (char *)*v23 != v22 + 8 )
        __fastfail(3u);
      *v23 = v12;
      *((_QWORD *)v22 + 2) = v12;
      _InterlockedAnd((volatile signed __int32 *)v22, 0xFFFFFF7F);
      ++v20;
      p_BlockState += 48;
    }
    while ( v20 < Count );
    if ( v36 == 2 )
    {
      v24 = MEMORY[0xFFFFF78000000008] - CurrentThread->RelativeTimerBias - MEMORY[0xFFFFF780000003B0];
      v25 = QuadPart;
      goto LABEL_57;
    }
    v25 = QuadPart;
    if ( v36 )
    {
      if ( !QuadPart )
        goto LABEL_94;
      v24 = MEMORY[0xFFFFF78000000014];
LABEL_57:
      if ( v24 > v25 )
      {
LABEL_94:
        v45 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
        {
          do
            KeYieldProcessorEx(&v45, v12, v19);
          while ( CurrentThread->ThreadLock );
        }
        if ( (CurrentThread->WaitRegister.Flags & 7) == 0 )
          CurrentThread->WaitStatus = 258LL;
LABEL_69:
        v28 = 0LL;
LABEL_70:
        CurrentThread->WaitBlockFill6[68] = 2;
        CurrentThread->ThreadLock = 0LL;
        WaitStatus = CurrentThread->WaitStatus;
        if ( v20 )
        {
          do
          {
            if ( v14->BlockState < 5u )
            {
              v30 = (volatile signed __int32 *)v14->Object;
              v40 = 0;
              if ( _interlockedbittestandset(v30, 7u) )
              {
                do
                {
                  do
                    KeYieldProcessorEx(&v40, v12, v28);
                  while ( (*v30 & 0x80u) != 0 );
                }
                while ( _interlockedbittestandset(v30, 7u) );
                v28 = 0LL;
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
              _InterlockedAnd(v30, 0xFFFFFF7F);
            }
            ++v14;
          }
          while ( v14 != &WaitBlockArray[(unsigned __int8)v20] );
        }
        v33 = CurrentThread->WaitIrql;
        v34.Flags = (unsigned __int8)CurrentThread->WaitRegister;
        if ( (v34.Flags & 0x38) != 0 )
        {
          if ( (v34.Flags & 0x18) != 0 )
          {
            if ( (v34.Flags & 8) != 0 )
              _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0xBu);
            v46[0] = 0LL;
            v42 = 0;
            while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
            {
              do
                KeYieldProcessorEx(&v42, v12, v28);
              while ( CurrentPrcb->PrcbLock );
            }
            if ( !CurrentPrcb->NextThread )
              KiSelectNextThread((__int64)CurrentPrcb, v46);
            _InterlockedAnd64((volatile signed __int64 *)&CurrentPrcb->PrcbLock, 0LL);
            KiProcessDeferredReadyList((__int64)CurrentPrcb, (__int64)v46, v33);
            return WaitStatus;
          }
          else
          {
            KiCheckForThreadDispatch((__int64)CurrentPrcb, 1u);
            KiDeliverApc(0LL, 0LL, 0LL);
            __writecr8(0LL);
            return WaitStatus;
          }
        }
        else
        {
          if ( v35 )
            KiCheckForThreadDispatch((__int64)CurrentPrcb, v33);
          else
            __writecr8(v33);
          return WaitStatus;
        }
      }
    }
    CurrentThread->WaitBlockCount = Count;
    result = KiCommitThreadWait(CurrentThread, WaitBlockArray, v36, v25);
    if ( result != 256 )
      return result;
    v35 = 0;
    v26 = KeGetCurrentIrql();
    __writecr8(2uLL);
    CurrentThread->WaitIrql = v26;
  }
  CurrentThread->ApcState.UserApcPending = 1;
LABEL_61:
  v16 = 192;
LABEL_62:
  CurrentThread->ThreadLock = 0LL;
  KiCheckForThreadDispatch((__int64)KeGetCurrentPrcb(), WaitIrql);
  return v16;
}
