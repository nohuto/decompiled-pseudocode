/*
 * XREFs of KeWaitForMultipleObjects @ 0x14009F320
 * Callers:
 *     ?SmStReadThread@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x1400DAD90 (-SmStReadThread@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x1400DB094 (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     MmWaitMultipleForCacheManagerPrefetch @ 0x14011D5E4 (MmWaitMultipleForCacheManagerPrefetch.c)
 *     MiZeroPageThread @ 0x14015FE90 (MiZeroPageThread.c)
 *     MiMappedPageWriter @ 0x140165698 (MiMappedPageWriter.c)
 *     CcQueueLazyWriteScanThread @ 0x140165CEC (CcQueueLazyWriteScanThread.c)
 *     KeBalanceSetManager @ 0x140165F30 (KeBalanceSetManager.c)
 *     MiDereferenceSegmentThread @ 0x140167DD0 (MiDereferenceSegmentThread.c)
 *     MiModifiedPageWriter @ 0x140169194 (MiModifiedPageWriter.c)
 *     MiStoreEvictThread @ 0x140170980 (MiStoreEvictThread.c)
 *     MiPartitionWorkingSetManager @ 0x14021D7E0 (MiPartitionWorkingSetManager.c)
 *     MiIssueAsynchronousFlush @ 0x14021E7FC (MiIssueAsynchronousFlush.c)
 *     MiWaitForAsynchronousFlushes @ 0x14021E9B0 (MiWaitForAsynchronousFlushes.c)
 *     PopSleepDeviceList @ 0x1403EE95C (PopSleepDeviceList.c)
 *     PnprQuiesceWorker @ 0x1404012DC (PnprQuiesceWorker.c)
 *     MiZeroAllPageFiles @ 0x140402E6C (MiZeroAllPageFiles.c)
 *     CmpDoFileWrite @ 0x14044ACA4 (CmpDoFileWrite.c)
 *     PiUEventNotifyUserMode @ 0x14046027C (PiUEventNotifyUserMode.c)
 *     ObWaitForMultipleObjects @ 0x140495AC0 (ObWaitForMultipleObjects.c)
 *     EtwpLogger @ 0x1404A17E4 (EtwpLogger.c)
 *     FsRtlCancellableWaitForMultipleObjects @ 0x14051F530 (FsRtlCancellableWaitForMultipleObjects.c)
 *     PfGenerateTrace @ 0x1405668C4 (PfGenerateTrace.c)
 *     CmpFinishSystemHivesLoad @ 0x1405A3A54 (CmpFinishSystemHivesLoad.c)
 *     ExpWorkerThreadBalanceManager @ 0x1405B12E8 (ExpWorkerThreadBalanceManager.c)
 *     PfTLoggingWorker @ 0x1405C2D20 (PfTLoggingWorker.c)
 *     PopThermalReadCounters @ 0x1406B7E10 (PopThermalReadCounters.c)
 *     PsShutdownSystem @ 0x1406C39F0 (PsShutdownSystem.c)
 *     VerifierKeWaitForMultipleObjects @ 0x1407490A0 (VerifierKeWaitForMultipleObjects.c)
 *     VerifierKeWaitForMultipleObjectsNoReboot @ 0x1407492AC (VerifierKeWaitForMultipleObjectsNoReboot.c)
 * Callees:
 *     KiCheckForThreadDispatch @ 0x14000DCB4 (KiCheckForThreadDispatch.c)
 *     RtlRaiseStatus @ 0x14001BB3C (RtlRaiseStatus.c)
 *     KiDeliverApc @ 0x140048670 (KiDeliverApc.c)
 *     KiProcessDeferredReadyList @ 0x14009BE20 (KiProcessDeferredReadyList.c)
 *     KiCommitThreadWait @ 0x1400A0220 (KiCommitThreadWait.c)
 *     KiExitThreadWait @ 0x1400A23E0 (KiExitThreadWait.c)
 *     KiSelectNextThread @ 0x1400D5240 (KiSelectNextThread.c)
 *     KiWaitForAllObjects @ 0x14011ECE8 (KiWaitForAllObjects.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     KeBugCheck @ 0x140182740 (KeBugCheck.c)
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
  struct _KTHREAD *v8; // rdi
  unsigned __int8 v9; // al
  unsigned __int64 v10; // r9
  LONGLONG v11; // r13
  unsigned __int8 v12; // si
  unsigned int v13; // ebx
  volatile signed __int32 *v14; // r14
  unsigned __int64 v15; // r13
  unsigned __int8 *v16; // rcx
  volatile __int64 v17; // rbx
  unsigned __int8 v18; // dl
  $5F589360F986DA22318BA982CE57118F *v19; // rdx
  int v20; // esi
  unsigned int v21; // ebx
  struct _KPRCB *v22; // rbp
  int v23; // eax
  int v24; // eax
  unsigned int v25; // ebx
  unsigned int v26; // ebx
  unsigned __int64 v27; // rcx
  $5F589360F986DA22318BA982CE57118F **v28; // rcx
  int v29; // eax
  unsigned __int8 v30; // al
  volatile unsigned __int8 v31; // cl
  struct _LIST_ENTRY *v32; // rdx
  struct _LIST_ENTRY *v33; // rcx
  unsigned int v34; // ebx
  unsigned int v35; // ebx
  PKWAIT_BLOCK WaitBlock; // r12
  struct _KTHREAD *CurrentThread; // r14
  NTSTATUS result; // eax
  unsigned __int8 CurrentIrql; // al
  unsigned __int8 WaitIrql; // di
  unsigned int v41; // ebx
  PKWAIT_BLOCK v42; // r12
  unsigned __int8 *v43; // rcx
  volatile UCHAR *p_BlockState; // rsi
  ULONG v45; // r10d
  ULONG v46; // r15d
  struct _KPRCB *CurrentPrcb; // r13
  unsigned int v48; // ebx
  volatile signed __int32 *v49; // rdi
  unsigned int v50; // ebx
  PVOID *v51; // rcx
  volatile UCHAR *v52; // rdx
  unsigned int v53; // ebx
  unsigned __int64 v54; // rcx
  unsigned __int64 v55; // rax
  unsigned __int8 v56; // al
  bool v57; // zf
  volatile unsigned __int8 DpcRoutineActive; // cl
  struct _LIST_ENTRY *v59; // rdx
  struct _LIST_ENTRY *v60; // rax
  unsigned __int64 v61; // r8
  volatile __int64 WaitStatus; // rbp
  volatile signed __int32 *v63; // rdi
  unsigned int v64; // ebx
  volatile signed __int32 *v65; // rdi
  unsigned int v66; // ebx
  struct _LIST_ENTRY *Flink; // rcx
  struct _LIST_ENTRY *Blink; // rax
  unsigned int v69; // ebx
  unsigned int v70; // ebx
  struct _LIST_ENTRY *v71; // rcx
  struct _LIST_ENTRY *v72; // rax
  unsigned __int8 v73; // bl
  _KWAIT_STATUS_REGISTER v74; // al
  signed __int32 v75[8]; // [rsp+0h] [rbp-B8h] BYREF
  unsigned __int8 v76; // [rsp+40h] [rbp-78h]
  int v77; // [rsp+44h] [rbp-74h]
  LONGLONG QuadPart; // [rsp+48h] [rbp-70h]
  _QWORD *v79; // [rsp+50h] [rbp-68h] BYREF
  volatile signed __int32 *v80; // [rsp+58h] [rbp-60h]
  volatile signed __int32 v81; // [rsp+60h] [rbp-58h]
  unsigned __int8 v83; // [rsp+C0h] [rbp+8h]
  unsigned __int8 v85; // [rsp+D8h] [rbp+20h]

  v85 = WaitReason;
  if ( Count != 1 )
  {
    WaitBlock = WaitBlockArray;
    CurrentThread = KeGetCurrentThread();
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
    v76 = _bittestandreset((signed __int32 *)&CurrentThread->116, 2u);
    if ( !v76 )
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      CurrentThread->WaitIrql = CurrentIrql;
    }
    if ( Timeout )
    {
      if ( Timeout->HighPart >= 0 )
      {
        QuadPart = Timeout->QuadPart;
        v77 = 1;
      }
      else
      {
        v77 = 2;
        QuadPart = MEMORY[0xFFFFF78000000008]
                 - MEMORY[0xFFFFF780000003B0]
                 - (Timeout->QuadPart
                  + CurrentThread->RelativeTimerBias);
      }
    }
    else
    {
      v77 = 0;
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
          {
            if ( (++v41 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
              _mm_pause();
            else
              HvlNotifyLongSpinWait(v41);
          }
          while ( CurrentThread->ThreadLock );
        }
        if ( !CurrentThread->ApcState.KernelApcPending || CurrentThread->SpecialApcDisable || WaitIrql )
          break;
        CurrentThread->ThreadLock = 0LL;
        __writecr8(1uLL);
        KiDeliverApc(0, 0, 0LL);
        __writecr8(2uLL);
        CurrentThread->WaitIrql = 0;
      }
      v42 = WaitBlockArray;
      if ( Alertable )
      {
        v43 = &CurrentThread->Alerted[WaitMode];
        if ( *v43 )
        {
          *v43 = 0;
          LODWORD(v17) = 257;
          goto LABEL_169;
        }
        if ( WaitMode
          && (unsigned __int8 *)CurrentThread->ApcState.ApcListHead[1].Flink != &CurrentThread->ApcStateFill[16] )
        {
          CurrentThread->ApcState.UserApcPending = 1;
LABEL_168:
          LODWORD(v17) = 192;
LABEL_169:
          v18 = WaitIrql;
          CurrentThread->ThreadLock = 0LL;
LABEL_170:
          KiCheckForThreadDispatch((__int64)KeGetCurrentPrcb(), v18);
          return v17;
        }
        if ( CurrentThread->Alerted[0] )
        {
          CurrentThread->Alerted[0] = 0;
          LODWORD(v17) = 257;
          goto LABEL_169;
        }
      }
      else if ( (CurrentThread->ApcState.UserApcPending & (unsigned __int8)WaitMode) != 0 )
      {
        goto LABEL_168;
      }
      p_BlockState = &WaitBlockArray->BlockState;
      v45 = Count;
      CurrentThread->WaitBlockFill6[68] = 5;
      v46 = 0;
      CurrentThread->WaitReason = v85;
      CurrentThread->ThreadLock = 0LL;
      CurrentThread->WaitBlock[2].SpareLong = MEMORY[0xFFFFF78000000320];
      CurrentPrcb = KeGetCurrentPrcb();
      do
      {
        v48 = 0;
        v49 = (volatile signed __int32 *)Object[v46];
        *((_BYTE *)p_BlockState - 1) = 1;
        *p_BlockState = 4;
        *(_WORD *)(p_BlockState + 1) = v46;
        *(_QWORD *)(p_BlockState + 7) = CurrentThread;
        *(_QWORD *)(p_BlockState + 15) = v49;
        if ( _interlockedbittestandset(v49, 7u) )
        {
          do
          {
            if ( (++v48 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
              _mm_pause();
            else
              HvlNotifyLongSpinWait(v48);
          }
          while ( (*v49 & 0x80u) != 0 || _interlockedbittestandset(v49, 7u) );
          v45 = Count;
        }
        if ( (*(_BYTE *)v49 & 0x7F) == 2 )
        {
          if ( *((int *)v49 + 1) > 0
            || CurrentThread == *((struct _KTHREAD **)v49 + 5) && *((_BYTE *)v49 + 2) == CurrentPrcb->DpcRoutineActive )
          {
            v50 = 0;
            if ( *((_DWORD *)v49 + 1) == 0x80000000 )
            {
              _InterlockedAnd(v49, 0xFFFFFF7F);
              while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
              {
                do
                {
                  if ( (++v50 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
                    _mm_pause();
                  else
                    HvlNotifyLongSpinWait(v50);
                }
                while ( CurrentThread->ThreadLock );
              }
              CurrentThread->WaitBlockFill6[68] = 2;
              CurrentThread->ThreadLock = 0LL;
              if ( v46 )
              {
                do
                {
                  if ( v42->BlockState < 5u )
                  {
                    v65 = (volatile signed __int32 *)v42->Object;
                    v66 = 0;
                    if ( _interlockedbittestandset(v65, 7u) )
                    {
                      do
                      {
                        if ( (++v66 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
                          _mm_pause();
                        else
                          HvlNotifyLongSpinWait(v66);
                      }
                      while ( (*v65 & 0x80u) != 0 || _interlockedbittestandset(v65, 7u) );
                    }
                    if ( v42->BlockState == 4 )
                    {
                      Flink = v42->WaitListEntry.Flink;
                      Blink = v42->WaitListEntry.Blink;
                      if ( (PKWAIT_BLOCK)v42->WaitListEntry.Flink->Blink != v42 || (PKWAIT_BLOCK)Blink->Flink != v42 )
                        __fastfail(3u);
                      Blink->Flink = Flink;
                      Flink->Blink = Blink;
                    }
                    _InterlockedAnd(v65, 0xFFFFFF7F);
                  }
                  ++v42;
                }
                while ( v42 != &WaitBlockArray[(unsigned __int8)v46] );
              }
              KiExitThreadWait(CurrentPrcb, CurrentThread, v76, *(_QWORD *)&WaitReason);
              RtlRaiseStatus(-1073741423);
            }
            while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
            {
              do
              {
                if ( (++v50 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
                  _mm_pause();
                else
                  HvlNotifyLongSpinWait(v50);
              }
              while ( CurrentThread->ThreadLock );
            }
            if ( (CurrentThread->WaitRegister.Flags & 7) == 0 )
            {
              CurrentThread->WaitStatus = v46;
              v57 = (*((_DWORD *)v49 + 1))-- == 1;
              if ( v57 )
              {
                CurrentThread->KernelApcDisable -= *((unsigned __int8 *)v49 + 49);
                if ( CurrentPrcb->CurrentThread == CurrentThread )
                  DpcRoutineActive = CurrentPrcb->DpcRoutineActive;
                else
                  DpcRoutineActive = 0;
                v81 = *v49;
                BYTE2(v81) = DpcRoutineActive;
                *v49 = v81;
                v57 = *((_BYTE *)v49 + 48) == 0;
                *((_QWORD *)v49 + 5) = CurrentThread;
                if ( !v57 )
                {
                  *((_BYTE *)v49 + 48) = 0;
                  CurrentThread->WaitStatus |= 0x80uLL;
                }
                v59 = CurrentThread->MutantListHead.Blink;
                v60 = (struct _LIST_ENTRY *)(v49 + 6);
                *((_QWORD *)v49 + 3) = &CurrentThread->MutantListHead;
                *((_QWORD *)v49 + 4) = v59;
                if ( v59->Flink != &CurrentThread->MutantListHead )
                  __fastfail(3u);
                v59->Flink = v60;
                CurrentThread->MutantListHead.Blink = v60;
              }
            }
            _InterlockedAnd(v49, 0xFFFFFF7F);
            goto LABEL_188;
          }
        }
        else if ( *((int *)v49 + 1) > 0 )
        {
          v70 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
          {
            do
            {
              if ( (++v70 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
                _mm_pause();
              else
                HvlNotifyLongSpinWait(v70);
            }
            while ( CurrentThread->ThreadLock );
          }
          if ( (CurrentThread->WaitRegister.Flags & 7) == 0 )
          {
            CurrentThread->WaitStatus = v46;
            if ( (*(_BYTE *)v49 & 7) == 1 )
            {
              LODWORD(v61) = 0;
              *((_DWORD *)v49 + 1) = 0;
              _InterlockedAnd(v49, 0xFFFFFF7F);
              goto LABEL_189;
            }
            if ( (*(_BYTE *)v49 & 0x7F) == 5 )
              --*((_DWORD *)v49 + 1);
          }
          LODWORD(v61) = 0;
          _InterlockedAnd(v49, 0xFFFFFF7F);
          goto LABEL_189;
        }
        v51 = (PVOID *)*((_QWORD *)v49 + 2);
        v52 = p_BlockState - 17;
        *(_QWORD *)(p_BlockState - 9) = v51;
        *(_QWORD *)(p_BlockState - 17) = v49 + 2;
        if ( *v51 != v49 + 2 )
          __fastfail(3u);
        *v51 = (PVOID)v52;
        *((_QWORD *)v49 + 2) = v52;
        _InterlockedAnd(v49, 0xFFFFFF7F);
        ++v46;
        p_BlockState += 48;
      }
      while ( v46 < v45 );
      v53 = v77;
      if ( v77 == 2 )
      {
        v54 = MEMORY[0xFFFFF78000000008] - CurrentThread->RelativeTimerBias - MEMORY[0xFFFFF780000003B0];
        v55 = QuadPart;
        goto LABEL_164;
      }
      v55 = QuadPart;
      if ( v77 )
      {
        if ( !QuadPart )
          goto LABEL_220;
        v54 = MEMORY[0xFFFFF78000000014];
LABEL_164:
        if ( v54 > v55 )
        {
LABEL_220:
          v69 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
          {
            do
            {
              if ( (++v69 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
                _mm_pause();
              else
                HvlNotifyLongSpinWait(v69);
            }
            while ( CurrentThread->ThreadLock );
          }
          if ( (CurrentThread->WaitRegister.Flags & 7) == 0 )
            CurrentThread->WaitStatus = 258LL;
LABEL_188:
          LODWORD(v61) = 0;
LABEL_189:
          CurrentThread->WaitBlockFill6[68] = 2;
          CurrentThread->ThreadLock = 0LL;
          WaitStatus = CurrentThread->WaitStatus;
          if ( v46 )
          {
            do
            {
              if ( v42->BlockState < 5u )
              {
                v63 = (volatile signed __int32 *)v42->Object;
                v64 = 0;
                if ( _interlockedbittestandset(v63, 7u) )
                {
                  do
                  {
                    if ( (++v64 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
                      _mm_pause();
                    else
                      HvlNotifyLongSpinWait(v64);
                  }
                  while ( (*v63 & 0x80u) != 0 || _interlockedbittestandset(v63, 7u) );
                  LODWORD(v61) = 0;
                }
                if ( v42->BlockState == 4 )
                {
                  v71 = v42->WaitListEntry.Flink;
                  v72 = v42->WaitListEntry.Blink;
                  if ( (PKWAIT_BLOCK)v42->WaitListEntry.Flink->Blink != v42 || (PKWAIT_BLOCK)v72->Flink != v42 )
                    __fastfail(3u);
                  v72->Flink = v71;
                  v71->Blink = v72;
                }
                _InterlockedAnd(v63, 0xFFFFFF7F);
              }
              ++v42;
            }
            while ( v42 != &WaitBlockArray[(unsigned __int8)v46] );
          }
          v73 = CurrentThread->WaitIrql;
          v74.Flags = (unsigned __int8)CurrentThread->WaitRegister;
          if ( (v74.Flags & 0x38) != 0 )
          {
            if ( (v74.Flags & 0x18) != 0 )
            {
              if ( (v74.Flags & 8) != 0 )
                _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0xBu);
              v79 = 0LL;
              while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
              {
                do
                {
                  v61 = (unsigned int)(v61 + 1);
                  v80 = (volatile signed __int32 *)v61;
                  if ( ((unsigned int)v61 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
                  {
                    _mm_pause();
                  }
                  else
                  {
                    HvlNotifyLongSpinWait((unsigned int)v61);
                    LODWORD(v61) = (_DWORD)v80;
                  }
                }
                while ( CurrentPrcb->PrcbLock );
              }
              if ( !CurrentPrcb->NextThread )
                KiSelectNextThread(CurrentPrcb, &v79);
              _InterlockedAnd64((volatile signed __int64 *)&CurrentPrcb->PrcbLock, 0LL);
              KiProcessDeferredReadyList((__int64)CurrentPrcb, &v79, v73);
              return WaitStatus;
            }
            else
            {
              KiCheckForThreadDispatch((__int64)CurrentPrcb, 1u);
              KiDeliverApc(0, 0, 0LL);
              __writecr8(0LL);
              return WaitStatus;
            }
          }
          else
          {
            if ( v76 )
              KiCheckForThreadDispatch((__int64)CurrentPrcb, v73);
            else
              __writecr8(v73);
            return WaitStatus;
          }
        }
      }
      CurrentThread->WaitBlockCount = v45;
      result = KiCommitThreadWait(CurrentThread, WaitBlockArray, v53, v55);
      if ( result != 256 )
        return result;
      v76 = 0;
      v56 = KeGetCurrentIrql();
      __writecr8(2uLL);
      CurrentThread->WaitIrql = v56;
    }
  }
  v8 = KeGetCurrentThread();
  v80 = (volatile signed __int32 *)*Object;
  v83 = _bittestandreset((signed __int32 *)&v8->116, 2u);
  if ( !v83 )
  {
    v9 = KeGetCurrentIrql();
    __writecr8(2uLL);
    v8->WaitIrql = v9;
  }
  v10 = 0xFFFFF780000003B0uLL;
  if ( Timeout )
  {
    if ( Timeout->HighPart >= 0 )
    {
      v11 = Timeout->QuadPart;
      v77 = 1;
    }
    else
    {
      v77 = 2;
      v11 = MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0] - (Timeout->QuadPart + v8->RelativeTimerBias);
    }
    QuadPart = v11;
  }
  else
  {
    v77 = 0;
  }
  while ( 1 )
  {
    v12 = v8->WaitIrql;
    while ( 1 )
    {
      v8->MiscFlags &= ~0x10u;
      v8->WaitRegister.Flags = 0;
      v8->WaitMode = WaitMode;
      if ( Alertable )
        v8->MiscFlags |= 0x10u;
      v13 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)&v8->ThreadLock, 0LL) )
      {
        do
        {
          if ( (++v13 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
            _mm_pause();
          else
            HvlNotifyLongSpinWait(v13);
        }
        while ( v8->ThreadLock );
      }
      if ( !v8->ApcState.KernelApcPending || v8->SpecialApcDisable || v12 )
        break;
      v8->ThreadLock = 0LL;
      __writecr8(1uLL);
      KiDeliverApc(0, 0, 0LL);
      __writecr8(2uLL);
      v8->WaitIrql = 0;
    }
    v14 = v80;
    v15 = QuadPart;
    if ( Alertable )
    {
      v16 = &v8->Alerted[WaitMode];
      if ( *v16 )
      {
        *v16 = 0;
        v8->ThreadLock = 0LL;
        LODWORD(v17) = 257;
        v18 = v12;
        goto LABEL_170;
      }
      if ( WaitMode && (unsigned __int8 *)v8->ApcState.ApcListHead[1].Flink != &v8->ApcStateFill[16] )
      {
        v8->ApcState.UserApcPending = 1;
LABEL_62:
        LODWORD(v17) = 192;
        v8->ThreadLock = 0LL;
        v18 = v12;
        goto LABEL_170;
      }
      if ( v8->Alerted[0] )
      {
        v8->Alerted[0] = 0;
        v8->ThreadLock = 0LL;
        LODWORD(v17) = 257;
        v18 = v12;
        goto LABEL_170;
      }
    }
    else if ( (v8->ApcState.UserApcPending & (unsigned __int8)WaitMode) != 0 )
    {
      goto LABEL_62;
    }
    v19 = &v8->320;
    v8->WaitBlockFill6[68] = 5;
    v8->WaitReason = v85;
    v20 = 0;
    v8->ThreadLock = 0LL;
    v21 = 0;
    v8->WaitBlock[2].SpareLong = MEMORY[0xFFFFF78000000320];
    v22 = KeGetCurrentPrcb();
    v8->WaitBlock[0].WaitType = 1;
    v8->WaitBlockFill4[17] = 4;
    v8->WaitBlock[0].WaitKey = 0;
    v8->WaitBlock[0].Object = (PVOID)v14;
    if ( _interlockedbittestandset(v14, 7u) )
    {
      do
      {
        if ( (++v21 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v21);
      }
      while ( (*v14 & 0x80u) != 0 || _interlockedbittestandset(v14, 7u) );
      v19 = &v8->320;
    }
    if ( (*(_BYTE *)v14 & 0x7F) == 2 )
      break;
    if ( *((int *)v14 + 1) > 0 )
    {
      if ( (*(_BYTE *)v14 & 7) == 1 )
      {
        *((_DWORD *)v14 + 1) = 0;
      }
      else if ( (*(_BYTE *)v14 & 0x7F) == 5 )
      {
        --*((_DWORD *)v14 + 1);
      }
      goto LABEL_91;
    }
LABEL_52:
    v26 = v77;
    if ( v77 == 2 )
    {
      v10 = 0xFFFFF780000003B0uLL;
      v27 = MEMORY[0xFFFFF78000000008] - v8->RelativeTimerBias - MEMORY[0xFFFFF780000003B0];
    }
    else
    {
      if ( !v77 )
        goto LABEL_58;
      if ( !v15 )
        goto LABEL_84;
      v10 = 0xFFFFF78000000014uLL;
      v27 = MEMORY[0xFFFFF78000000014];
    }
    if ( v27 > v15 )
    {
LABEL_84:
      v20 = 258;
      goto LABEL_91;
    }
LABEL_58:
    v28 = ($5F589360F986DA22318BA982CE57118F **)*((_QWORD *)v14 + 2);
    v19->WaitBlock[0].WaitListEntry.Flink = (struct _LIST_ENTRY *)(v14 + 2);
    v19->WaitBlock[0].WaitListEntry.Blink = (struct _LIST_ENTRY *)v28;
    if ( *v28 != ($5F589360F986DA22318BA982CE57118F *)(v14 + 2) )
      __fastfail(3u);
    *v28 = v19;
    *((_QWORD *)v14 + 2) = v19;
    _InterlockedAnd(v14, 0xFFFFFF7F);
    v8->WaitBlockCount = 1;
    v29 = KiCommitThreadWait(v8, v19, v26, v15);
    if ( v29 != 256 )
    {
      LODWORD(v17) = v29;
      return v17;
    }
    v83 = 0;
    v30 = KeGetCurrentIrql();
    __writecr8(2uLL);
    v8->WaitIrql = v30;
  }
  if ( *((int *)v14 + 1) <= 0 && (v8 != *((struct _KTHREAD **)v14 + 5) || *((_BYTE *)v14 + 2) != v22->DpcRoutineActive) )
    goto LABEL_52;
  v23 = *((_DWORD *)v14 + 1);
  if ( v23 == 0x80000000 )
  {
    _InterlockedAnd(v14, 0xFFFFFF7F);
    v8->WaitBlockFill6[68] = 2;
    _InterlockedOr(v75, 0);
    if ( v8->ThreadLock )
    {
      v34 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)&v8->ThreadLock, 0LL) )
      {
        do
        {
          if ( (++v34 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
            _mm_pause();
          else
            HvlNotifyLongSpinWait(v34);
        }
        while ( v8->ThreadLock );
      }
      v8->ThreadLock = 0LL;
    }
    KiExitThreadWait(v22, v8, v83, v10);
    RtlRaiseStatus(-1073741423);
  }
  v24 = v23 - 1;
  *((_DWORD *)v14 + 1) = v24;
  if ( !v24 )
  {
    v8->WaitStatus = 0LL;
    v25 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)&v8->ThreadLock, 0LL) )
    {
      do
      {
        if ( (++v25 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v25);
      }
      while ( v8->ThreadLock );
    }
    v8->KernelApcDisable -= *((unsigned __int8 *)v14 + 49);
    if ( v22->CurrentThread == v8 )
      v31 = v22->DpcRoutineActive;
    else
      v31 = 0;
    v81 = *v14;
    BYTE2(v81) = v31;
    *v14 = v81;
    *((_QWORD *)v14 + 5) = v8;
    if ( *((_BYTE *)v14 + 48) )
    {
      *((_BYTE *)v14 + 48) = 0;
      v8->WaitStatus |= 0x80uLL;
    }
    v32 = v8->MutantListHead.Blink;
    v33 = (struct _LIST_ENTRY *)(v14 + 6);
    *((_QWORD *)v14 + 3) = &v8->MutantListHead;
    *((_QWORD *)v14 + 4) = v32;
    if ( v32->Flink != &v8->MutantListHead )
      __fastfail(3u);
    v32->Flink = v33;
    v8->MutantListHead.Blink = v33;
    _InterlockedAnd(v14, 0xFFFFFF7F);
    v8->WaitBlockFill6[68] = 2;
    v8->ThreadLock = 0LL;
    v17 = v8->WaitStatus;
    KiExitThreadWait(v22, v8, v83, v10);
    return v17;
  }
LABEL_91:
  _InterlockedAnd(v14, 0xFFFFFF7F);
  v8->WaitBlockFill6[68] = 2;
  _InterlockedOr(v75, 0);
  if ( v8->ThreadLock )
  {
    v35 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)&v8->ThreadLock, 0LL) )
    {
      do
      {
        if ( (++v35 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v35);
      }
      while ( v8->ThreadLock );
    }
    v8->ThreadLock = 0LL;
  }
  KiExitThreadWait(v22, v8, v83, v10);
  LODWORD(v17) = v20;
  return v17;
}
