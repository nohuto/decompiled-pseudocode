/*
 * XREFs of MiWaitForInPageComplete @ 0x140024D30
 * Callers:
 *     MiPfCompleteInPageSupport @ 0x140023538 (MiPfCompleteInPageSupport.c)
 *     MiIssueHardFault @ 0x1400244B0 (MiIssueHardFault.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x1400122D0 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14001B8C0 (KeAcquireInStackQueuedSpinLock.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x14001D720 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiLockPageInline @ 0x1400229F0 (MiLockPageInline.c)
 *     MmUnmapLockedPages @ 0x140025890 (MmUnmapLockedPages.c)
 *     MiDereferenceControlAreaProbe @ 0x140026304 (MiDereferenceControlAreaProbe.c)
 *     MiValidateInPage @ 0x140026330 (MiValidateInPage.c)
 *     RtlAvlRemoveNode @ 0x140028080 (RtlAvlRemoveNode.c)
 *     MiGetSharedVm @ 0x14002E5B0 (MiGetSharedVm.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140034510 (MiMapPageInHyperSpaceWorker.c)
 *     MiIsAddressValid @ 0x1400370C0 (MiIsAddressValid.c)
 *     MiFinishHardFault @ 0x14004D220 (MiFinishHardFault.c)
 *     KiCommitThreadWait @ 0x14005A850 (KiCommitThreadWait.c)
 *     MiPartitionIdToPointer @ 0x140067C20 (MiPartitionIdToPointer.c)
 *     MiIsRetryIoStatus @ 0x14008E8D8 (MiIsRetryIoStatus.c)
 *     KiWaitSatisfyOther @ 0x140097914 (KiWaitSatisfyOther.c)
 *     KiWaitSatisfyMutant @ 0x140097970 (KiWaitSatisfyMutant.c)
 *     PfHardFaultLog @ 0x14009DDA0 (PfHardFaultLog.c)
 *     MiPrefetchRestOfCluster @ 0x1400B05A4 (MiPrefetchRestOfCluster.c)
 *     KiUnstackDetachProcess @ 0x1400CC6C0 (KiUnstackDetachProcess.c)
 *     KiBeginThreadWait @ 0x1400CE820 (KiBeginThreadWait.c)
 *     KiCheckDueTimeExpired @ 0x1400CE988 (KiCheckDueTimeExpired.c)
 *     KiCheckWaitNext @ 0x1400CE9E0 (KiCheckWaitNext.c)
 *     MiCopyPage @ 0x1400E1100 (MiCopyPage.c)
 *     KiAcquireKobjectLockSafe @ 0x1400EC640 (KiAcquireKobjectLockSafe.c)
 *     KiExitThreadWait @ 0x1400F06F0 (KiExitThreadWait.c)
 *     RtlRaiseStatus @ 0x1400F4588 (RtlRaiseStatus.c)
 *     MiFindContiguousPages @ 0x140102220 (MiFindContiguousPages.c)
 *     MiZeroPhysicalPage @ 0x140108208 (MiZeroPhysicalPage.c)
 *     MiValidatePagefilePageHash @ 0x140115370 (MiValidatePagefilePageHash.c)
 *     MiStoreFaultComplete @ 0x140123FE0 (MiStoreFaultComplete.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     HvlNotifyLongSpinWait @ 0x1401BAD4C (HvlNotifyLongSpinWait.c)
 *     KiSatisfyThreadWait @ 0x1401DA7B8 (KiSatisfyThreadWait.c)
 *     MiExceptionForMappedVa @ 0x1401E11D0 (MiExceptionForMappedVa.c)
 *     MiRetardMdl @ 0x1401E2CDC (MiRetardMdl.c)
 *     MmFlushAllFilesystemPages @ 0x1401E5C00 (MmFlushAllFilesystemPages.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 *     MiSetFreshPfnFromFreeList @ 0x1401F2DD8 (MiSetFreshPfnFromFreeList.c)
 */

__int64 __fastcall MiWaitForInPageComplete(ULONG_PTR a1, __int64 a2, __int64 a3, __int64 a4, char a5, _QWORD *a6)
{
  unsigned __int8 *v6; // rbp
  __int64 v7; // r15
  ULONG_PTR v8; // r12
  __int64 v12; // r9
  ULONG_PTR v13; // rdi
  ULONG_PTR v14; // r13
  unsigned __int64 v15; // r8
  __int64 v16; // rcx
  int v17; // r8d
  unsigned __int64 v18; // r10
  int v19; // r11d
  int v20; // r9d
  _BYTE *v21; // rbx
  struct _KTHREAD *CurrentThread; // rsi
  _BYTE *v23; // r14
  $C41897776C0457C78394BDAEF5CBAAD1 *v24; // r15
  unsigned __int8 v25; // al
  unsigned __int8 v26; // bl
  struct _KPRCB *CurrentPrcb; // r13
  int v28; // eax
  int v29; // eax
  unsigned int v30; // ebx
  struct _LIST_ENTRY *v31; // rcx
  unsigned __int8 CurrentIrql; // al
  __int64 v33; // rbx
  ULONG_PTR v34; // r15
  unsigned int v35; // ebx
  unsigned int v36; // ebx
  __int64 v37; // rcx
  __int64 v38; // rbx
  __int64 v39; // r12
  ULONG_PTR v40; // rax
  int v41; // r13d
  int v42; // esi
  int v43; // r14d
  __int64 v44; // r9
  ULONG_PTR v45; // r8
  int IsRetryIoStatus; // ebx
  __int64 v47; // rdx
  _QWORD *v48; // r14
  __int64 v49; // r12
  void *v50; // rbx
  _DWORD *v51; // r14
  ULONG_PTR v52; // r12
  __int64 v53; // rdx
  ULONG_PTR v54; // rbx
  ULONG_PTR *v55; // rsi
  unsigned __int64 v56; // rbx
  unsigned __int64 v57; // rdi
  __int64 v58; // rbx
  __int64 v59; // rdi
  __int64 v60; // rbx
  unsigned __int8 v61; // al
  signed __int32 v63[8]; // [rsp+0h] [rbp-90h] BYREF
  ULONG_PTR BugCheckParameter4; // [rsp+20h] [rbp-70h]
  char v65; // [rsp+90h] [rbp+0h] BYREF

  v6 = (unsigned __int8 *)((unsigned __int64)&v65 & 0xFFFFFFFFFFFFFFC0uLL);
  v7 = *(_QWORD *)(a1 + 240);
  v8 = a1 + 256;
  *((_QWORD *)v6 + 9) = v7;
  *((_DWORD *)v6 + 1) = 0;
  *((_QWORD *)v6 + 10) = *(_QWORD *)(a1 + 224);
  v12 = 1023LL;
  *((_QWORD *)v6 + 5) = *(_QWORD *)(a1 + 216);
  if ( *(_QWORD *)(a1 + 248) )
    v8 = *(_QWORD *)(a1 + 248);
  v13 = -1LL;
  *(_QWORD *)(((unsigned __int64)&v65 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = v8;
  *(_QWORD *)(((unsigned __int64)&v65 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = -1LL;
  v14 = v8 + 48;
  *(_QWORD *)(((unsigned __int64)&v65 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = v8 + 48;
  if ( (*(_QWORD *)(v7 + 8) & 0x8000000000000000uLL) == 0 )
  {
    v15 = (v7 + 0x58000000000LL) / 48;
    if ( v15 < qword_140326AD0 )
    {
      v16 = *(_QWORD *)(v7 + 40) >> 40;
      LOWORD(v16) = v16 & 0x3FF;
      v19 = MiPartitionIdToPointer(
              v16,
              (unsigned __int128)((v7 + 0x58000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64,
              v15,
              1023LL);
      v20 = 0x40000000;
      if ( a5 != 1 )
        v20 = 1073872896;
      if ( (void (__fastcall __noreturn *)())KeGetCurrentThread()[1].ApcState.ApcListHead[1].Flink == KeSwapProcessOrStack )
        v20 |= 8u;
      MiFindContiguousPages(
        v19,
        v17 + 1,
        qword_140326AD0,
        0,
        1LL,
        *(unsigned __int8 *)(v7 + 34) >> 6,
        v18 >> 58,
        0x80000000,
        v20,
        (__int64)(v6 + 48));
    }
  }
  if ( (a4 & 1) != 0 )
  {
    v21 = (_BYTE *)(a4 & 0xFFFFFFFFFFFFFFFEuLL);
    if ( *v21 == 2 )
    {
      if ( a3 )
        MiPrefetchRestOfCluster(a1, v21, a3, v12);
    }
  }
  CurrentThread = KeGetCurrentThread();
  v23 = (_BYTE *)(a1 + 32);
  v24 = &CurrentThread->320;
  v25 = KiCheckWaitNext((_DWORD)CurrentThread, 0, 0, (int)v6 + 56, (__int64)(v6 + 8));
  *v6 = v25;
  v26 = v25;
  if ( (unsigned int)KiBeginThreadWait(CurrentThread, 0LL, 9LL) )
    goto LABEL_32;
  while ( 1 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    CurrentThread->WaitBlock[0].WaitType = 1;
    CurrentThread->WaitBlockFill4[17] = 4;
    CurrentThread->WaitBlock[0].WaitKey = 0;
    CurrentThread->WaitBlock[0].Object = v23;
    KiAcquireKobjectLockSafe(v23);
    if ( (*v23 & 0x7F) == 2 )
      break;
    if ( *((int *)v23 + 1) > 0 )
    {
      KiWaitSatisfyOther(v23);
      goto LABEL_51;
    }
LABEL_27:
    if ( (unsigned int)KiCheckDueTimeExpired(
                         CurrentThread,
                         *(unsigned int *)(((unsigned __int64)&v65 & 0xFFFFFFFFFFFFFFC0uLL) + 8),
                         *(_QWORD *)(((unsigned __int64)&v65 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38)) )
      goto LABEL_51;
    v31 = (struct _LIST_ENTRY *)*((_QWORD *)v23 + 2);
    if ( v31->Flink != (struct _LIST_ENTRY *)(v23 + 8) )
      __fastfail(3u);
    v24->WaitBlock[0].WaitListEntry.Flink = (struct _LIST_ENTRY *)(v23 + 8);
    CurrentThread->WaitBlock[0].WaitListEntry.Blink = v31;
    v31->Flink = (struct _LIST_ENTRY *)v24;
    *((_QWORD *)v23 + 2) = v24;
    _InterlockedAnd((volatile signed __int32 *)v23, 0xFFFFFF7F);
    CurrentThread->WaitBlockCount = 1;
    if ( (unsigned int)KiCommitThreadWait(
                         CurrentThread,
                         &CurrentThread->320,
                         *(unsigned int *)(((unsigned __int64)&v65 & 0xFFFFFFFFFFFFFFC0uLL) + 8),
                         *(_QWORD *)(((unsigned __int64)&v65 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38)) == 256 )
    {
      v26 = 0;
      *v6 = 0;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      CurrentThread->WaitIrql = CurrentIrql;
      if ( !(unsigned int)KiBeginThreadWait(CurrentThread, 0LL, 9LL) )
        continue;
    }
    v14 = *(_QWORD *)(((unsigned __int64)&v65 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
    goto LABEL_32;
  }
  if ( *((int *)v23 + 1) <= 0
    && (CurrentThread != *((struct _KTHREAD **)v23 + 5) || v23[2] != CurrentPrcb->DpcRoutineActive) )
  {
    goto LABEL_27;
  }
  v28 = *((_DWORD *)v23 + 1);
  if ( v28 == 0x80000000 )
  {
    _InterlockedAnd((volatile signed __int32 *)v23, 0xFFFFFF7F);
    CurrentThread->WaitBlockFill6[68] = 2;
    _InterlockedOr(v63, 0);
    if ( CurrentThread->ThreadLock )
    {
      v35 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
      {
        do
        {
          if ( (++v35 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
            _mm_pause();
          else
            HvlNotifyLongSpinWait(v35);
        }
        while ( CurrentThread->ThreadLock );
      }
      v26 = *v6;
      CurrentThread->ThreadLock = 0LL;
    }
    KiExitThreadWait(CurrentPrcb, CurrentThread, v26);
    RtlRaiseStatus(-1073741423);
  }
  v29 = v28 - 1;
  *((_DWORD *)v23 + 1) = v29;
  if ( !v29 )
  {
    CurrentThread->WaitStatus = 0LL;
    v30 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
    {
      do
      {
        if ( (++v30 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v30);
      }
      while ( CurrentThread->ThreadLock );
    }
    KiWaitSatisfyMutant(v23, CurrentThread, CurrentPrcb);
    _InterlockedAnd((volatile signed __int32 *)v23, 0xFFFFFF7F);
    KiSatisfyThreadWait((_DWORD)CurrentPrcb, (_DWORD)CurrentThread, *v6, (_DWORD)CurrentThread + 320, 0);
    v14 = *(_QWORD *)(((unsigned __int64)&v65 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
    goto LABEL_32;
  }
LABEL_51:
  _InterlockedAnd((volatile signed __int32 *)v23, 0xFFFFFF7F);
  CurrentThread->WaitBlockFill6[68] = 2;
  _InterlockedOr(v63, 0);
  if ( CurrentThread->ThreadLock )
  {
    v36 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
    {
      do
      {
        if ( (++v36 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v36);
      }
      while ( CurrentThread->ThreadLock );
    }
    v26 = *v6;
    CurrentThread->ThreadLock = 0LL;
  }
  KiExitThreadWait(CurrentPrcb, CurrentThread, v26);
  v14 = *(_QWORD *)(((unsigned __int64)&v65 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
LABEL_32:
  v33 = a3;
  if ( a3 && (*(_BYTE *)(a3 + 187) & 0xC0) == 0xC0 )
  {
    v34 = a1;
    if ( !*(_QWORD *)(MiGetSharedVm(a3) + 32) )
      KiUnstackDetachProcess(a1 + 104, 0LL);
  }
  else
  {
    v34 = a1;
  }
  v37 = *(_QWORD *)(((unsigned __int64)&v65 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48);
  if ( *(__int64 *)(v37 + 8) >= 0
    && (((unsigned int)HIDWORD(*(_QWORD *)(v37 + 40)) >> 8) & 0x3FF) != 0
    && *(_QWORD *)(((unsigned __int64)&v65 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) == -1LL )
  {
    *(_DWORD *)(v34 + 80) = -1073741670;
    *(_QWORD *)(v34 + 88) = 0LL;
  }
  if ( (*(_WORD *)(v8 + 10) & 0x200) != 0 )
  {
    MiRetardMdl(v8);
    *(_DWORD *)(v34 + 80) = -1073741670;
    *(_QWORD *)(v34 + 88) = 0LL;
  }
  if ( (*(_BYTE *)(v34 + 189) & 8) != 0 )
  {
    v38 = *(_QWORD *)(v34 + 320);
    if ( v38 )
    {
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v38 + 232), (PKLOCK_QUEUE_HANDLE)(v6 + 88));
      RtlAvlRemoveNode(v38 + 248, v34 + 336);
      KeReleaseInStackQueuedSpinLock((PKLOCK_QUEUE_HANDLE)(v6 + 88));
    }
    v33 = a3;
  }
  v39 = *(unsigned int *)(v34 + 180);
  v40 = v14
      + 8
      * ((*(unsigned int *)(*(_QWORD *)(((unsigned __int64)&v65 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) + 40LL)
        + 4095LL
        + (unsigned __int64)((*(_DWORD *)(*(_QWORD *)(((unsigned __int64)&v65 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) + 44LL)
                            + *(_DWORD *)(*(_QWORD *)(((unsigned __int64)&v65 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) + 32LL)) & 0xFFF)) >> 12)
      - 8;
  v41 = 0;
  *(_QWORD *)(((unsigned __int64)&v65 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = v40;
  if ( *(char *)(v34 + 189) < 0 )
    MiStoreFaultComplete(v34);
  if ( *(_QWORD *)(v34 + 200) )
  {
    if ( *(int *)(v34 + 80) >= 0 )
    {
      v41 = MiValidateInPage(v34);
      if ( v41 == -1073740748 )
        *(_BYTE *)(v34 + 191) |= 8u;
    }
    MiDereferenceControlAreaProbe(*(_QWORD *)(v34 + 200), 0LL);
  }
  else if ( *(int *)(v34 + 80) >= 0 && (*(_BYTE *)(v34 + 191) & 0x20) != 0 )
  {
    v41 = MiValidatePagefilePageHash(v34);
  }
  v42 = *(_DWORD *)(v34 + 80);
  v43 = *(_DWORD *)(((unsigned __int64)&v65 & 0xFFFFFFFFFFFFFFC0uLL) + 4) & 1;
  if ( !v43 )
  {
    __incgsdword(0x2E24u);
    __addgsdword(0x2E20u, ((v39 & 0xFFF) != 0) + ((unsigned int)v39 >> 12));
    if ( v33 )
    {
      if ( (*(_BYTE *)(v34 + 189) & 4) == 0 )
        _InterlockedIncrement((volatile signed __int32 *)(v33 + 160));
    }
  }
  if ( *a6 )
    PfHardFaultLog(*a6, v43 != 0 ? 2 : 0);
  v44 = *(_QWORD *)(((unsigned __int64)&v65 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18);
  *(_DWORD *)a6 = v43 != 0 ? 2 : 0;
  if ( (*(_BYTE *)(v44 + 10) & 1) != 0 )
  {
    MmUnmapLockedPages(*(PVOID *)(v44 + 24), (PMDL)v44);
    v44 = *(_QWORD *)(((unsigned __int64)&v65 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18);
  }
  v45 = a1;
  *(_DWORD *)(((unsigned __int64)&v65 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = 0;
  IsRetryIoStatus = 0;
  *(_DWORD *)(a1 + 184) = -1;
  if ( v42 < 0 )
  {
    if ( v42 == -1073741807 )
    {
      if ( (*(_BYTE *)(a1 + 191) & 0x10) != 0 )
        KeBugCheckEx(
          0x7Au,
          3uLL,
          0xFFFFFFFFC0000011uLL,
          a1,
          *(_QWORD *)(((unsigned __int64)&v65 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28));
      v55 = *(ULONG_PTR **)(((unsigned __int64)&v65 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
      v56 = 1LL;
      v57 = (unsigned __int64)(*(_QWORD *)(((unsigned __int64)&v65 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) - (_QWORD)v55 + 8LL) >> 3;
      if ( (unsigned __int64)v55 > *(_QWORD *)(((unsigned __int64)&v65 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) )
        v57 = 0LL;
      if ( v57 )
      {
        do
        {
          MiZeroPhysicalPage(*v55);
          ++v56;
          ++v55;
        }
        while ( v56 <= v57 );
      }
      v51 = (_DWORD *)a1;
      v42 = 0;
    }
    else if ( v42 == -2147483626 )
    {
      v51 = (_DWORD *)a1;
    }
    else
    {
      IsRetryIoStatus = MiIsRetryIoStatus((unsigned int)v42, *(unsigned int *)(v44 + 40));
      if ( IsRetryIoStatus
        && !dword_1403276A4
        && (!v43 || (*(_BYTE *)(((unsigned __int64)&v65 & 0xFFFFFFFFFFFFFFC0uLL) + 4) & 2) != 0) )
      {
        dword_1403276A4 = 32;
      }
      v51 = (_DWORD *)a1;
      if ( (*(_BYTE *)(a1 + 189) & 4) != 0 )
      {
        v42 = -1073741801;
      }
      else
      {
LABEL_103:
        v52 = *(_QWORD *)(((unsigned __int64)&v65 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28);
        if ( v52 > 0x7FFFFFFEFFFFLL
          && (!qword_140326CC0 || v52 < qword_140326CC0 || v52 >= qword_140326CC0 + (qword_140326CA0 << 21))
          && !(unsigned int)MiExceptionForMappedVa(
                              *(_QWORD *)(((unsigned __int64)&v65 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28),
                              v47,
                              v45,
                              v44) )
        {
          if ( !IsRetryIoStatus )
          {
            v54 = *(_QWORD *)(((unsigned __int64)&v65 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50);
            if ( (unsigned __int8)MiIsAddressValid(v54, v53) == 1 )
              v13 = MI_READ_PTE_LOCK_FREE(v54);
            MmFlushAllFilesystemPages(1LL);
            BugCheckParameter4 = v52;
            if ( v41 < 0 )
              v42 = v41;
            KeBugCheckEx(0x7Au, v54, v42, v13, BugCheckParameter4);
          }
          if ( v41 != -1073741761 )
            v42 = -1073741801;
        }
      }
    }
  }
  else
  {
    v47 = *(_QWORD *)(a1 + 88);
    if ( v47 != v39 )
    {
      if ( v47 || (*(_BYTE *)(a1 + 189) & 4) == 0 )
      {
        if ( (*(_BYTE *)(a1 + 191) & 0x10) != 0 && !v43 )
          KeBugCheckEx(
            0x7Au,
            4uLL,
            *(_QWORD *)(a1 + 88),
            a1,
            *(_QWORD *)(((unsigned __int64)&v65 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28));
        v48 = (_QWORD *)(v44
                       + 8
                       * (((((*(_DWORD *)(v44 + 44) + *(_DWORD *)(v44 + 32)) & 0xFFF)
                          - (unsigned __int64)(unsigned int)(v39 - *(_DWORD *)(v44 + 40))
                          + v47
                          + 4095) >> 12)
                        + 5));
        v49 = *(_QWORD *)(a1 + 88) & 0xFFFLL;
        if ( (v47 & 0xFFF) != 0 )
        {
          v50 = (void *)((unsigned int)v49 + MiMapPageInHyperSpaceWorker(*v48, v6 + 1, 0x80000000LL));
          memset(v50, 0, (unsigned int)(4096 - v49));
          MiUnmapPageInHyperSpaceWorker(
            (__int64)v50,
            *(unsigned __int8 *)(((unsigned __int64)&v65 & 0xFFFFFFFFFFFFFFC0uLL) + 1));
          v45 = a1;
          v44 = *(_QWORD *)(((unsigned __int64)&v65 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18);
          IsRetryIoStatus = *(_DWORD *)(((unsigned __int64)&v65 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20);
        }
        if ( (unsigned __int64)(v48 + 1) <= *(_QWORD *)(((unsigned __int64)&v65 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) )
          *(_DWORD *)(v45 + 184) = (((__int64)v48 - v44 - 48) >> 3) + 1;
      }
      else
      {
        v42 = -1073741801;
      }
    }
    v51 = (_DWORD *)a1;
    if ( v41 == -1073741761 )
      goto LABEL_103;
  }
  v58 = *(_QWORD *)(((unsigned __int64)&v65 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30);
  if ( v58 != -1 )
  {
    v59 = *(_QWORD *)(((unsigned __int64)&v65 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48);
    MiCopyPage(
      *(_QWORD *)(((unsigned __int64)&v65 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30),
      (v59 + 0x58000000000LL) / 48,
      0LL,
      1LL);
    v60 = 48 * v58 - 0x58000000000LL;
    *(_QWORD *)(v60 + 16) = 0LL;
    MiSetFreshPfnFromFreeList(v60);
    *(_QWORD *)(v60 + 16) ^= (*(_DWORD *)(v60 + 16) ^ *(_DWORD *)(v59 + 16)) & 8;
    if ( ((*(_QWORD *)(v60 + 40) >> 54) & 7) == 3 )
    {
      v61 = MiLockPageInline(v60);
      *(_QWORD *)(v60 + 8) = *(_QWORD *)(v59 + 8);
      _InterlockedAnd64((volatile signed __int64 *)(v60 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(v61);
    }
  }
  BugCheckParameter4 = (ULONG_PTR)(v6 + 4);
  v51[20] = v42;
  return MiFinishHardFault(v51, BugCheckParameter4);
}
