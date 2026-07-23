/*
 * XREFs of MiTrimOrAgeWorkingSet @ 0x1400CBB40
 * Callers:
 *     MiProcessWorkingSets @ 0x1400CB4E0 (MiProcessWorkingSets.c)
 * Callees:
 *     MiEmptyWorkingSet @ 0x140015A54 (MiEmptyWorkingSet.c)
 *     MiTrimWorkingSet @ 0x140015D90 (MiTrimWorkingSet.c)
 *     MiEmptyPageAccessLog @ 0x1400271C0 (MiEmptyPageAccessLog.c)
 *     KeYieldProcessorEx @ 0x14002E830 (KeYieldProcessorEx.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14002EA80 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiAgeWorkingSet @ 0x140046C10 (MiAgeWorkingSet.c)
 *     MiQueuePageAccessLog @ 0x140088894 (MiQueuePageAccessLog.c)
 *     MiAttachSession @ 0x1400A37AC (MiAttachSession.c)
 *     MiDetachSession @ 0x1400A61A4 (MiDetachSession.c)
 *     PfLogForegroundProcess @ 0x1400A6C5C (PfLogForegroundProcess.c)
 *     KiAttachProcess @ 0x1400CB390 (KiAttachProcess.c)
 *     KiDetachProcess @ 0x1400CC300 (KiDetachProcess.c)
 *     MiReturnCcAccessLog @ 0x1400CC664 (MiReturnCcAccessLog.c)
 *     MiCaptureAndResetWorkingSetAccessBits @ 0x14012A1C0 (MiCaptureAndResetWorkingSetAccessBits.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     HvlSwitchVirtualAddressSpace @ 0x1401C146C (HvlSwitchVirtualAddressSpace.c)
 *     KiSetAddressPolicy @ 0x1401D8EA8 (KiSetAddressPolicy.c)
 *     MiComputeTrimAmount @ 0x1401E9348 (MiComputeTrimAmount.c)
 *     MiPreUnlockWorkingSetExclusive @ 0x1401F2898 (MiPreUnlockWorkingSetExclusive.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14022DB5C (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14022DCC8 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MiTrimOrAgeWorkingSet(ULONG_PTR a1, __int64 a2, unsigned int a3)
{
  unsigned __int16 v6; // ax
  int *v7; // rax
  __int64 v8; // rbp
  LONG *v9; // r13
  char v10; // al
  _KPROCESS *v11; // r14
  struct _KTHREAD *CurrentThread; // r8
  unsigned __int8 ApcStateIndex; // al
  struct _KTHREAD *v14; // rbx
  $35A53143D7708A3431DC0DDB695C8DF9 *v15; // r8
  struct _KTHREAD *Flink; // rcx
  struct _LIST_ENTRY *Blink; // rax
  _LIST_ENTRY *v18; // rcx
  _LIST_ENTRY *v19; // rax
  struct _LIST_ENTRY *v20; // rcx
  struct _LIST_ENTRY *v21; // rdx
  struct _KPRCB *CurrentPrcb; // rax
  __int64 Group; // rcx
  __int64 v24; // r13
  unsigned __int64 DirectoryTableBase; // rbp
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // rcx
  unsigned __int64 v28; // rax
  LONG *v29; // rbx
  unsigned __int8 v30; // cl
  signed __int32 v31; // edx
  bool v32; // zf
  signed __int32 v33; // eax
  unsigned int v34; // ebp
  int v35; // r14d
  unsigned int v36; // ebx
  __int64 v37; // rax
  int v38; // r8d
  __int64 v39; // rbp
  char v40; // cl
  LONG *v41; // r14
  _QWORD **v42; // rdx
  _QWORD *v43; // rax
  _QWORD *i; // rcx
  __int64 v45; // rdx
  __int64 v46; // rcx
  char v47; // al
  _SLIST_ENTRY *v48; // rsi
  int v50; // [rsp+30h] [rbp-A8h] BYREF
  int v51; // [rsp+34h] [rbp-A4h] BYREF
  __int64 v52; // [rsp+38h] [rbp-A0h]
  __int64 CurrentIrql; // [rsp+40h] [rbp-98h]
  LONG *v54; // [rsp+48h] [rbp-90h]
  unsigned __int64 GroupIndex; // [rsp+50h] [rbp-88h]
  _KPROCESS *Process; // [rsp+58h] [rbp-80h]
  char v57[32]; // [rsp+60h] [rbp-78h] BYREF
  __int64 v58; // [rsp+80h] [rbp-58h]
  void *retaddr; // [rsp+D8h] [rbp+0h]

  if ( *(_BYTE *)(a1 + 186) == 2 && (*(_BYTE *)(a1 + 184) & 7) == 0 )
    PfLogForegroundProcess(a1);
  v6 = *(_WORD *)(a1 + 164);
  if ( v6 == 1023 )
    v7 = MiSystemPartition;
  else
    v7 = *(int **)(qword_140327038 + 8LL * v6);
  v8 = *((_QWORD *)v7 + 781);
  v9 = &dword_140327CC0;
  v10 = *(_BYTE *)(a1 + 184) & 7;
  v52 = v8;
  if ( v10 == 2 )
    v54 = &dword_140327CC0;
  else
    v54 = (LONG *)(a1 + 192);
  if ( v10 )
  {
    if ( v10 == 1 )
      MiAttachSession(a1 - 3008);
  }
  else
  {
    v11 = (_KPROCESS *)(a1 - 1280);
    if ( (PEPROCESS)(a1 - 1280) != PsInitialSystemProcess )
    {
      CurrentThread = KeGetCurrentThread();
      ApcStateIndex = CurrentThread->ApcStateIndex;
      if ( ApcStateIndex )
        KeBugCheckEx(5u, a1 - 1280, (ULONG_PTR)CurrentThread->ApcState.Process, ApcStateIndex, 0LL);
      v14 = KeGetCurrentThread();
      if ( (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 )
        KeBugCheckEx(
          5u,
          a1 - 1280,
          (ULONG_PTR)v14->ApcState.Process,
          v14->ApcStateIndex,
          KeGetPcr()->Prcb.DpcRequestSummary & 0x10001);
      if ( v14->ApcState.Process == v11 )
      {
        v58 = 1LL;
      }
      else
      {
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        v51 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)&v14->ThreadLock, 0LL) )
        {
          do
            KeYieldProcessorEx(&v51);
          while ( v14->ThreadLock );
        }
        if ( v14->ApcStateIndex )
        {
          KiAttachProcess((__int64)v14, a1 - 1280, CurrentIrql, 1LL, (__int64)v57);
        }
        else
        {
          v15 = &v14->600;
          v14->SavedApcState.Process = v14->ApcState.Process;
          v14->SavedApcState.InProgressFlags = v14->ApcState.InProgressFlags;
          v14->SavedApcState.KernelApcPending = v14->ApcState.KernelApcPending;
          v14->SavedApcState.UserApcPending = v14->ApcState.UserApcPending;
          Flink = (struct _KTHREAD *)v14->ApcState.ApcListHead[0].Flink;
          if ( Flink == (struct _KTHREAD *)&v14->152 )
          {
            v14->SavedApcState.ApcListHead[0].Blink = v14->SavedApcState.ApcListHead;
            v15->SavedApcState.ApcListHead[0].Flink = (struct _LIST_ENTRY *)v15;
            v14->SavedApcState.KernelApcPending = 0;
          }
          else
          {
            Blink = v14->ApcState.ApcListHead[0].Blink;
            v15->SavedApcState.ApcListHead[0].Flink = (struct _LIST_ENTRY *)Flink;
            v14->SavedApcState.ApcListHead[0].Blink = Blink;
            Flink->Header.WaitListHead.Flink = (struct _LIST_ENTRY *)v15;
            Blink->Flink = (struct _LIST_ENTRY *)v15;
          }
          v18 = &v14->ApcState.ApcListHead[1];
          v19 = &v14->SavedApcState.ApcListHead[1];
          if ( v18->Flink == v18 )
          {
            v14->SavedApcState.ApcListHead[1].Blink = &v14->SavedApcState.ApcListHead[1];
            v19->Flink = v19;
            v14->SavedApcState.UserApcPending = 0;
          }
          else
          {
            v20 = v18->Flink;
            v21 = v14->ApcState.ApcListHead[1].Blink;
            v19->Flink = v20;
            v14->SavedApcState.ApcListHead[1].Blink = v21;
            v20->Blink = v19;
            v21->Flink = v19;
          }
          v14->ApcState.ApcListHead[0].Blink = v14->ApcState.ApcListHead;
          v14->ApcState.ApcListHead[0].Flink = v14->ApcState.ApcListHead;
          v14->ApcState.ApcListHead[1].Blink = &v14->ApcState.ApcListHead[1];
          v14->ApcState.ApcListHead[1].Flink = &v14->ApcState.ApcListHead[1];
          v14->MiscFlags |= 0x800u;
          *(_WORD *)&v14->ApcStateFill[40] = 0;
          v14->ApcState.UserApcPending = 0;
          v14->ApcStateIndex = 1;
          v14->ApcState.Process = v11;
          v14->ThreadLock = 0LL;
          Process = v14->SavedApcState.Process;
          CurrentPrcb = KeGetCurrentPrcb();
          Group = CurrentPrcb->Group;
          GroupIndex = CurrentPrcb->GroupIndex;
          v24 = 8 * Group + 280;
          _interlockedbittestandset64(
            (volatile signed __int32 *)((char *)&v11->Header.Lock + v24),
            (unsigned int)GroupIndex);
          DirectoryTableBase = v11->DirectoryTableBase;
          if ( KiKvaShadow )
          {
            v26 = v11->DirectoryTableBase;
            if ( (DirectoryTableBase & 2) != 0 )
              v26 = DirectoryTableBase | 0x8000000000000000uLL;
            __writegsqword(0x7000u, v26);
            KiSetAddressPolicy(v11->AddressPolicy);
          }
          if ( (HvlEnlightenments & 1) != 0 )
            HvlSwitchVirtualAddressSpace(DirectoryTableBase);
          else
            __writecr3(DirectoryTableBase);
          if ( KiKvaShadow && !KiFlushPcid )
          {
            v27 = __readcr4();
            if ( (v27 & 0x20080) != 0 )
            {
              __writecr4(v27 ^ 0x80);
              __writecr4(v27);
            }
            else
            {
              v28 = __readcr3();
              __writecr3(v28);
            }
          }
          _interlockedbittestandreset64((volatile signed __int32 *)((char *)&Process->Header.Lock + v24), GroupIndex);
          v14->MiscFlags &= ~0x800u;
          __writecr8((unsigned __int8)CurrentIrql);
          v8 = v52;
          v9 = &dword_140327CC0;
          v58 = 0LL;
        }
      }
    }
  }
  v29 = &dword_140327CC0;
  if ( (*(_BYTE *)(a1 + 184) & 7) != 2 )
    v29 = (LONG *)(a1 + 192);
  v30 = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v29, v30);
  }
  else
  {
    v50 = 0;
    if ( _interlockedbittestandset(v29, 0x1Fu) )
      v50 = ExpWaitForSpinLockExclusiveAndAcquire(v29, v30);
    v31 = *v29;
    while ( (v31 & 0xBFFFFFFF) != 0x80000000 )
    {
      if ( (v31 & 0x40000000) == 0 )
      {
        v33 = _InterlockedCompareExchange(v29, v31 | 0x40000000, v31);
        v32 = v31 == v33;
        v31 = v33;
        if ( !v32 )
          continue;
      }
      KeYieldProcessorEx(&v50);
      v31 = *v29;
    }
  }
  v29[1] = 0;
  if ( (a3 & 4) != 0 )
    MiEmptyWorkingSet(a1, 0, 0);
  if ( (a3 & 0x20) != 0 && (*(_BYTE *)(a1 + 184) & 7) == 0 )
    MiTrimWorkingSet(a1, *(_QWORD *)(a1 + 128), 0LL, 0LL, 2);
  if ( (a3 & 0x100) != 0 )
    MiTrimWorkingSet(a1, *(_QWORD *)(a1 + 128), 0LL, 0LL, 4);
  v34 = *(unsigned __int16 *)(v8 + 2358);
  v35 = 0;
  v36 = 0;
  if ( (a3 & 1) != 0 )
  {
    *(_BYTE *)(a2 + 1) = MiTrimPassToAge[*(_BYTE *)a2 & 0x7F];
    v37 = MiComputeTrimAmount(a2, a1);
    if ( v37 )
      *(_QWORD *)(a2 + 88) += MiTrimWorkingSet(a1, v37, 0LL, *(unsigned __int8 *)(a2 + 1), 1);
    v38 = 0;
    if ( ((*(_BYTE *)a2 & 0x7F) == 0 && *(char *)a2 >= 0 || (*(_BYTE *)a2 & 0x7F) == 4) && *(_WORD *)(v52 + 2358) )
      v38 = 1;
    if ( *(_BYTE *)(a2 + 4) == 1 )
    {
      v36 = MiAgeWorkingSet(a1, 0, v38, v34);
      v35 = 1;
    }
  }
  else if ( (a3 & 2) != 0 )
  {
    v36 = MiAgeWorkingSet(a1, 0, 1, v34);
    v35 = 1;
    if ( !v36 && *(_BYTE *)(v52 + 55) == 1 && v34 - 1 <= 8 )
      v36 = MiAgeWorkingSet(a1, 0, 2, 0xAuLL);
  }
  else if ( (a3 & 0x40) != 0 )
  {
    v36 = MiAgeWorkingSet(a1, 0, 1, v34);
    v35 = 1;
  }
  else if ( (a3 & 0x80u) != 0 )
  {
    v36 = MiAgeWorkingSet(a1, 0, 2, v34);
    v35 = 1;
  }
  v39 = 0LL;
  if ( v36 != 1 )
  {
    if ( v35 == 1 )
    {
      v40 = 1;
      if ( *(_BYTE *)(a1 + 186) == 2 )
        v40 = 3;
      *(_QWORD *)(a2 + 8) += *(_QWORD *)(a1 + 40) >> v40;
      *(_QWORD *)(a2 + 16) += *(_QWORD *)(a1 + 48) >> v40;
      *(_QWORD *)(a2 + 24) += *(_QWORD *)(a1 + 56) >> v40;
      *(_QWORD *)(a2 + 32) += *(_QWORD *)(a1 + 64) >> v40;
      *(_QWORD *)(a2 + 40) += *(_QWORD *)(a1 + 72) >> v40;
      *(_QWORD *)(a2 + 48) += *(_QWORD *)(a1 + 80) >> v40;
      *(_QWORD *)(a2 + 56) += *(_QWORD *)(a1 + 88) >> v40;
    }
    if ( (a3 & 0x10) != 0 || (a3 & 8) != 0 )
      MiCaptureAndResetWorkingSetAccessBits(a1, a3);
    v41 = v54;
    v39 = MEMORY[0xFFFFF78000000320];
    v42 = (_QWORD **)*((_QWORD *)v54 + 5);
    if ( v42 )
    {
      v43 = *v42;
      for ( i = (_QWORD *)*((_QWORD *)v54 + 5); v43; v43 = (_QWORD *)*v43 )
        i = v43;
      if ( MEMORY[0xFFFFF78000000320] - i[2] > (unsigned __int64)PfKernelGlobals )
      {
        MiEmptyPageAccessLog(*((_SLIST_ENTRY **)v54 + 5));
        *((_QWORD *)v41 + 5) = 0LL;
      }
    }
  }
  MiPreUnlockWorkingSetExclusive(a1, 0LL);
  if ( (*(_BYTE *)(a1 + 184) & 7) != 2 )
    v9 = (LONG *)(a1 + 192);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v9, retaddr);
  else
    *v9 = 0;
  __writecr8(0LL);
  v47 = *(_BYTE *)(a1 + 184) & 7;
  if ( v47 )
  {
    if ( v47 == 1 )
      MiDetachSession(v46, v45);
  }
  else if ( (PEPROCESS)(a1 - 1280) != PsInitialSystemProcess )
  {
    KiDetachProcess(&KeGetCurrentThread()->600, 1LL);
  }
  if ( !v36 )
  {
    if ( qword_1403271C0 )
    {
      v48 = (_SLIST_ENTRY *)_InterlockedExchange64(&qword_1403271C0, 0LL);
      if ( v48 )
      {
        if ( v39 - (unsigned __int64)v48[1].Next > PfKernelGlobals || (a3 & 0x18) != 0 )
          MiQueuePageAccessLog(v48);
        else
          MiReturnCcAccessLog(v48);
      }
    }
  }
  return v36;
}
