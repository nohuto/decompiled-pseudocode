/*
 * XREFs of MiSetPagesModified @ 0x1402165B0
 * Callers:
 *     MiCreateNewSection @ 0x1404702B8 (MiCreateNewSection.c)
 * Callees:
 *     MiGetEffectivePagePriorityThread @ 0x14003C720 (MiGetEffectivePagePriorityThread.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     MiPartitionIdToPointer @ 0x140055BF0 (MiPartitionIdToPointer.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MI_REFERENCE_CONTROL_AREA_FILE @ 0x140088960 (MI_REFERENCE_CONTROL_AREA_FILE.c)
 *     MI_DEREFERENCE_CONTROL_AREA_FILE @ 0x140088A90 (MI_DEREFERENCE_CONTROL_AREA_FILE.c)
 *     MiUnlockWorkingSetExclusive @ 0x14008ABC0 (MiUnlockWorkingSetExclusive.c)
 *     MiChargeCommit @ 0x14008F4A0 (MiChargeCommit.c)
 *     MiReturnCommit @ 0x1400B7E40 (MiReturnCommit.c)
 *     MiReleasePageFileInfo @ 0x1400DD8D8 (MiReleasePageFileInfo.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     MiSyncCommitSignals @ 0x14016BDFC (MiSyncCommitSignals.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     MiPteHasShadow @ 0x14022551C (MiPteHasShadow.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     MiPrefetchControlArea @ 0x14051B0F4 (MiPrefetchControlArea.c)
 *     MiMapImageInSystemSpace @ 0x14051BD60 (MiMapImageInSystemSpace.c)
 *     MiUnmapImageInSystemSpace @ 0x14051BE94 (MiUnmapImageInSystemSpace.c)
 */

__int64 __fastcall MiSetPagesModified(__int64 *a1, int a2)
{
  unsigned __int64 v2; // rbp
  __int64 v4; // rax
  __int64 v5; // rsi
  __int64 *v7; // r15
  struct _KTHREAD *CurrentThread; // r13
  unsigned int EffectivePagePriorityThread; // eax
  int v10; // r9d
  int v11; // ebx
  volatile signed __int32 *v12; // rdi
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rbx
  __int64 v15; // r12
  unsigned __int64 v16; // r9
  __int64 PteShadow; // rax
  unsigned __int64 Process; // rcx
  signed __int32 v19; // edx
  unsigned __int64 v20; // rdx
  __int64 v21; // r9
  unsigned __int64 v22; // r11
  __int64 v23; // r8
  __int64 v24; // rax
  __int64 v25; // r8
  __int64 v26; // rax
  __int64 v27; // rdi
  unsigned __int64 v28; // rbx
  unsigned int v29; // ecx
  __int64 *v30; // r9
  __int64 v31; // r10
  __int64 v32; // rbx
  __int16 *v33; // rax
  __int64 v34; // rdi
  struct _KPRCB *v35; // r9
  __int64 v36; // rsi
  struct _KPRCB *CurrentPrcb; // r8
  __int64 CachedCommit; // rdx
  unsigned __int64 i; // rax
  signed __int32 v40; // eax
  unsigned __int64 v41; // rcx
  __int64 v42; // rdx
  __int64 v43; // r8
  unsigned __int64 j; // rax
  signed __int32 v45; // eax
  unsigned __int64 v46; // rcx
  unsigned __int64 v47; // r12
  __int64 v48; // r15
  __int64 v49; // rax
  __int64 v50; // r9
  __int64 v51; // rsi
  __int16 v52; // cx
  int v53; // [rsp+50h] [rbp+0h] BYREF

  v2 = (unsigned __int64)&v53 & 0xFFFFFFFFFFFFFFE0uLL;
  *(_QWORD *)(v2 + 24) = a1;
  v4 = *a1;
  *(_QWORD *)(v2 + 96) = *a1;
  *(_QWORD *)(v2 + 72) = v4;
  v5 = *(unsigned int *)(v4 + 8);
  *(_QWORD *)(v2 + 104) = v5;
  if ( !(unsigned int)MiChargeCommit((__int64)MiSystemPartition, (unsigned int)v5, 0) )
    return 3221225773LL;
  v7 = *(__int64 **)(*(_QWORD *)(((unsigned __int64)&v53 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18) + 128LL);
  *(_QWORD *)(((unsigned __int64)&v53 & 0xFFFFFFFFFFFFFFE0uLL) + 0x40) = v7;
  *(_QWORD *)(((unsigned __int64)&v53 & 0xFFFFFFFFFFFFFFE0uLL) + 0x78) = &v7[v5];
  CurrentThread = KeGetCurrentThread();
  *(_QWORD *)(((unsigned __int64)&v53 & 0xFFFFFFFFFFFFFFE0uLL) + 0x58) = CurrentThread;
  EffectivePagePriorityThread = MiGetEffectivePagePriorityThread((__int64)CurrentThread);
  v10 = 5;
  if ( EffectivePagePriorityThread <= 5 )
    v10 = MiGetEffectivePagePriorityThread((__int64)CurrentThread);
  MiPrefetchControlArea(
    *(_QWORD *)(((unsigned __int64)&v53 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18),
    (_DWORD)CLFS_LSN_NULL_EXT,
    0,
    v10,
    0,
    a2);
  v11 = MiMapImageInSystemSpace(*(_QWORD *)(((unsigned __int64)&v53 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18), 3LL, v2 + 128);
  if ( v11 >= 0 )
  {
    v12 = *(volatile signed __int32 **)(((unsigned __int64)&v53 & 0xFFFFFFFFFFFFFFE0uLL) + 0x90);
    *(_QWORD *)(((unsigned __int64)&v53 & 0xFFFFFFFFFFFFFFE0uLL) + 0x38) = v12;
    *(_DWORD *)(((unsigned __int64)&v53 & 0xFFFFFFFFFFFFFFE0uLL) + 4) = 0;
    v13 = *(_QWORD *)(((unsigned __int64)&v53 & 0xFFFFFFFFFFFFFFE0uLL) + 0x80);
    v14 = ((v13 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v15 = 0LL;
    *(_QWORD *)(((unsigned __int64)&v53 & 0xFFFFFFFFFFFFFFE0uLL) + 0x28) = 0LL;
    *(_DWORD *)(((unsigned __int64)&v53 & 0xFFFFFFFFFFFFFFE0uLL) + 8) = 0;
    while ( 1 )
    {
      v16 = 2LL;
      *(_QWORD *)(((unsigned __int64)&v53 & 0xFFFFFFFFFFFFFFE0uLL) + 0x50) = v13;
      *(_QWORD *)(((unsigned __int64)&v53 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20) = v14;
      *(_QWORD *)(((unsigned __int64)&v53 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10) = v13;
      if ( (unsigned __int64)v7 >= *(_QWORD *)(((unsigned __int64)&v53 & 0xFFFFFFFFFFFFFFE0uLL) + 0x78) )
        break;
      PteShadow = *v7;
      if ( (unsigned __int64)(v7 + 0x12090482600LL) <= 0x7F8 )
      {
        PteShadow = MiReadPteShadow(v7, *v7);
        v13 = *(_QWORD *)(((unsigned __int64)&v53 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10);
      }
      if ( PteShadow )
      {
        while ( 1 )
        {
          *(_QWORD *)(((unsigned __int64)&v53 & 0xFFFFFFFFFFFFFFE0uLL) + 0x30) = KeGetCurrentIrql();
          __writecr8(v16);
          if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
          {
            ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v12);
          }
          else
          {
            *(_DWORD *)v2 = 0;
            if ( _interlockedbittestandset(v12, 0x1Fu) )
              *(_DWORD *)v2 = ExpWaitForSpinLockExclusiveAndAcquire(v12);
            v19 = *v12;
            Process = *(unsigned int *)v12;
            LODWORD(Process) = Process & 0xBFFFFFFF;
            if ( (_DWORD)Process != 0x80000000 )
            {
              do
              {
                if ( (v19 & 0x40000000) == 0 )
                  _InterlockedCompareExchange(v12, v19 | 0x40000000, v19);
                Process = (unsigned int)(*(_DWORD *)v2 + 1);
                *(_DWORD *)v2 = Process;
                if ( ((unsigned int)Process & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
                  _mm_pause();
                else
                  HvlNotifyLongSpinWait(Process);
                v19 = *v12;
              }
              while ( (*v12 & 0xBFFFFFFF) != 0x80000000 );
            }
          }
          v20 = *(_QWORD *)v14;
          if ( (*(_QWORD *)v14 & 1) != 0 )
            break;
          MiUnlockWorkingSetExclusive((__int64)v12, *(_BYTE *)(((unsigned __int64)&v53 & 0xFFFFFFFFFFFFFFE0uLL) + 0x30));
          v16 = 2LL;
        }
        *(_QWORD *)(((unsigned __int64)&v53 & 0xFFFFFFFFFFFFFFE0uLL) + 0x28) = ++v15;
        v21 = 0x90482413000LL;
        v22 = 2040LL;
        if ( v14 + 0x90482413000LL <= 0x7F8
          && (unsigned int)MiPteHasShadow(Process, v20)
          && (v20 & 1) != 0
          && ((v20 & 0x20) == 0 || (v20 & 0x42) == 0) )
        {
          Process = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
          v23 = *(_QWORD *)(Process + 1520);
          if ( v23 )
          {
            v24 = *(_QWORD *)(v23 + 8 * ((v14 >> 3) & 0x1FF));
            if ( (v24 & 0x20) != 0 )
              v20 |= 0x20uLL;
            if ( (v24 & 0x42) != 0 )
              v20 |= 0x42uLL;
          }
        }
        *(_QWORD *)(((unsigned __int64)&v53 & 0xFFFFFFFFFFFFFFE0uLL) + 0x70) = v20;
        if ( v21 + v2 + 112 <= v22
          && (unsigned int)MiPteHasShadow(Process, v20)
          && (v20 & 1) != 0
          && ((v20 & 0x20) == 0 || (v20 & 0x42) == 0) )
        {
          v25 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ProcessLock;
          if ( v25 )
          {
            v26 = *(_QWORD *)(v25 + 8 * (((v2 + 112) >> 3) & 0x1FF));
            if ( (v26 & 0x20) != 0 )
              v20 |= 0x20uLL;
            if ( (v26 & 0x42) != 0 )
              v20 |= 0x42uLL;
          }
        }
        v27 = 48 * ((v20 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
        if ( (*(_QWORD *)(v27 + 40) & 0x200000000000000LL) != 0 )
        {
          v28 = 0LL;
          *(_DWORD *)(((unsigned __int64)&v53 & 0xFFFFFFFFFFFFFFE0uLL) + 0xC) = 0;
          if ( _interlockedbittestandset64((volatile signed __int32 *)(v27 + 24), 0x3FuLL) )
          {
            do
            {
              v29 = *(_DWORD *)(((unsigned __int64)&v53 & 0xFFFFFFFFFFFFFFE0uLL) + 0xC) + 1;
              *(_DWORD *)(((unsigned __int64)&v53 & 0xFFFFFFFFFFFFFFE0uLL) + 0xC) = v29;
              if ( (v29 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
                _mm_pause();
              else
                HvlNotifyLongSpinWait(v29);
            }
            while ( *(__int64 *)(v27 + 24) < 0
                 || _interlockedbittestandset64((volatile signed __int32 *)(v27 + 24), 0x3FuLL) );
            v22 = 2040LL;
          }
          v30 = (__int64 *)(v27 + 16);
          if ( (*(_DWORD *)(v27 + 16) & 0x400LL) == 0 && (*(_BYTE *)(v27 + 34) & 8) == 0 )
          {
            v31 = *v30;
            if ( (*v30 & 4) != 0 )
            {
              v32 = *v30;
              if ( v27 + 0x90482413010LL <= v22 )
                v32 = MiReadPteShadow(v27 + 16, v31);
              *v30 = v31 & 0xFFFFFFFFFFFFFFFBuLL;
              v28 = v32 & 0xFFFFFFFFFFFFFFFDuLL;
            }
            else
            {
              v28 = 0LL;
            }
          }
          *(_BYTE *)(v27 + 34) |= 0x10u;
          _InterlockedAnd64((volatile signed __int64 *)(v27 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( v28 )
          {
            v33 = MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(v27 + 40)) >> 8) & 0x3FF);
            MiReleasePageFileInfo((struct _KEVENT *)v33, v28, 1);
          }
          v14 = *(_QWORD *)(((unsigned __int64)&v53 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20);
        }
        v12 = *(volatile signed __int32 **)(((unsigned __int64)&v53 & 0xFFFFFFFFFFFFFFE0uLL) + 0x38);
        MiUnlockWorkingSetExclusive((__int64)v12, *(_BYTE *)(((unsigned __int64)&v53 & 0xFFFFFFFFFFFFFFE0uLL) + 0x30));
        v13 = *(_QWORD *)(((unsigned __int64)&v53 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10);
      }
      *(_QWORD *)(((unsigned __int64)&v53 & 0xFFFFFFFFFFFFFFE0uLL) + 0x40) = ++v7;
      v14 += 8LL;
      v13 += 4096LL;
    }
    v34 = *(_QWORD *)(((unsigned __int64)&v53 & 0xFFFFFFFFFFFFFFE0uLL) + 0x60);
    MiUnmapImageInSystemSpace(v2 + 128, v13, 0x90482413000LL, 2LL);
    v36 = v5 - v15;
    if ( v36 )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _m_prefetchw((const void *)&CurrentPrcb->CachedCommit);
      CachedCommit = CurrentPrcb->CachedCommit;
      for ( i = v36 + CachedCommit; i <= 0x100; i = v40 + v36 )
      {
        v40 = _InterlockedCompareExchange(
                (volatile signed __int32 *)&CurrentPrcb->CachedCommit,
                v36 + CachedCommit,
                CachedCommit);
        if ( v40 == CachedCommit )
          goto LABEL_77;
        CachedCommit = v40;
      }
      v41 = _InterlockedExchangeAdd64(&qword_1403552C8, -v36);
      if ( v41 >= qword_140354FA0 && v41 - v36 < qword_140354FA0
        || v41 - v36 < qword_140354F98 && v41 >= qword_140354F98 )
      {
        MiSyncCommitSignals((__int64)MiSystemPartition, 0);
      }
    }
LABEL_77:
    v42 = *(_QWORD *)(v34 + 16);
    if ( v42 )
    {
      v35 = KeGetCurrentPrcb();
      _m_prefetchw((const void *)&v35->CachedCommit);
      v43 = v35->CachedCommit;
      for ( j = v42 + v43; j <= 0x100; j = v45 + v42 )
      {
        v45 = _InterlockedCompareExchange((volatile signed __int32 *)&v35->CachedCommit, v42 + v43, v43);
        if ( v45 == v43 )
          goto LABEL_87;
        v43 = v45;
      }
      v46 = _InterlockedExchangeAdd64(&qword_1403552C8, -v42);
      if ( v46 >= qword_140354FA0 && v46 - v42 < qword_140354FA0
        || v46 - v42 < qword_140354F98 && v46 >= qword_140354F98 )
      {
        MiSyncCommitSignals((__int64)MiSystemPartition, 0);
      }
    }
LABEL_87:
    v47 = v15 - *(_QWORD *)(v34 + 16);
    if ( v47 )
    {
      v48 = **(_QWORD **)(((unsigned __int64)&v53 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18);
      _InterlockedExchangeAdd64(&qword_14034FD10, v47);
      --CurrentThread->SpecialApcDisable;
      v49 = KeAbPreAcquire(v48 + 40, 0LL, 0LL, (__int64)v35);
      v51 = v49;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v48 + 40), 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v48 + 40), v49, v48 + 40, v50);
      if ( v51 )
        *(_BYTE *)(v51 + 26) |= 1u;
      *(_QWORD *)(v48 + 16) += v47;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v48 + 40), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(v48 + 40));
      KeAbPostRelease(v48 + 40);
      v52 = CurrentThread->SpecialApcDisable + 1;
      CurrentThread->SpecialApcDisable = v52;
      if ( !v52
        && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      {
        KiCheckForKernelApcDelivery();
      }
    }
    return *(unsigned int *)(((unsigned __int64)&v53 & 0xFFFFFFFFFFFFFFE0uLL) + 4);
  }
  else
  {
    MiReturnCommit((__int64)MiSystemPartition, v5);
    return (unsigned int)v11;
  }
}
