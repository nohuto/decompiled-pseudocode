/*
 * XREFs of MiSetPagesModified @ 0x1401E5490
 * Callers:
 *     MiCreateNewSection @ 0x1405050A8 (MiCreateNewSection.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x1400136F0 (KiLeaveGuardedRegionUnsafe.c)
 *     MiReleasePageFileInfo @ 0x140019E00 (MiReleasePageFileInfo.c)
 *     MiDereferenceControlAreaFile @ 0x1400261C0 (MiDereferenceControlAreaFile.c)
 *     MiReferenceControlAreaFile @ 0x140026210 (MiReferenceControlAreaFile.c)
 *     MiGetEffectivePagePriorityThread @ 0x140026934 (MiGetEffectivePagePriorityThread.c)
 *     MiChargeCommit @ 0x14002B1D0 (MiChargeCommit.c)
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     MiUnlockWorkingSetExclusive @ 0x14002E4B0 (MiUnlockWorkingSetExclusive.c)
 *     MiGetSharedVm @ 0x14002E5B0 (MiGetSharedVm.c)
 *     MiLockPageAtDpcInline @ 0x14002E6B0 (MiLockPageAtDpcInline.c)
 *     ExAcquireSpinLockExclusive @ 0x14002E710 (ExAcquireSpinLockExclusive.c)
 *     MiReturnCommit @ 0x14004E080 (MiReturnCommit.c)
 *     MiPartitionIdToPointer @ 0x140067C20 (MiPartitionIdToPointer.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     MiCapturePageFileInfoInline @ 0x140097B20 (MiCapturePageFileInfoInline.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 *     MiSyncCommitSignals @ 0x14014309C (MiSyncCommitSignals.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401F237C (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 *     MiMapImageInSystemSpace @ 0x140508D28 (MiMapImageInSystemSpace.c)
 *     MiUnmapImageInSystemSpace @ 0x140508E5C (MiUnmapImageInSystemSpace.c)
 *     MiPrefetchControlArea @ 0x14050A6B4 (MiPrefetchControlArea.c)
 */

__int64 __fastcall MiSetPagesModified(__int64 *a1, int a2)
{
  int *v4; // rsi
  unsigned __int64 v5; // rdi
  unsigned __int64 v7; // r12
  struct _KTHREAD *CurrentThread; // r13
  unsigned int EffectivePagePriorityThread; // eax
  int v10; // r9d
  int v11; // ebx
  __int64 v12; // r13
  __int64 v13; // r9
  _BYTE *v14; // r14
  __int64 v15; // r15
  __int64 v16; // r9
  LONG *SharedVm; // rbx
  KIRQL v18; // al
  __int64 v19; // rdx
  __int64 v20; // rdx
  __int64 v21; // r13
  unsigned __int64 v22; // rbx
  struct _KEVENT *v23; // rax
  __int64 v24; // rbx
  unsigned __int64 v25; // rdi
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // rdx
  unsigned __int64 v28; // rtt
  struct _KPRCB *CurrentPrcb; // r8
  __int64 CachedCommit; // rdx
  unsigned __int64 i; // rax
  signed __int32 v32; // eax
  unsigned __int64 v33; // rcx
  unsigned __int64 v34; // rdx
  unsigned __int64 v35; // rdx
  unsigned __int64 v36; // r15
  __int64 v37; // r14
  __int64 v38; // r13
  _BYTE *v39; // rax
  _BYTE *v40; // rsi
  KIRQL v41; // [rsp+30h] [rbp-108h]
  __int64 v43; // [rsp+50h] [rbp-E8h]
  _QWORD v44[4]; // [rsp+58h] [rbp-E0h] BYREF
  __int64 v45; // [rsp+78h] [rbp-C0h]
  unsigned __int64 v46; // [rsp+80h] [rbp-B8h]
  _BYTE *v47; // [rsp+88h] [rbp-B0h]
  __int64 v48; // [rsp+90h] [rbp-A8h]
  __int64 v49; // [rsp+98h] [rbp-A0h]
  unsigned __int64 v50; // [rsp+A0h] [rbp-98h]
  struct _KTHREAD *v51; // [rsp+A8h] [rbp-90h]
  _QWORD v52[2]; // [rsp+B0h] [rbp-88h] BYREF
  __int64 v53; // [rsp+C0h] [rbp-78h]

  v4 = MiPartitionIdToPointer(*((_WORD *)a1 + 30) & 0x3FF);
  v44[1] = v4;
  v49 = *a1;
  v44[2] = v49;
  v5 = *(unsigned int *)(v49 + 8);
  v44[3] = v5;
  if ( !(unsigned int)MiChargeCommit((__int64)v4, (unsigned int)v5, 0) )
    return 3221225773LL;
  v7 = a1[17];
  v46 = v7;
  v50 = v7 + 8 * v5;
  CurrentThread = KeGetCurrentThread();
  v51 = CurrentThread;
  EffectivePagePriorityThread = MiGetEffectivePagePriorityThread((__int64)CurrentThread);
  v10 = 5;
  if ( EffectivePagePriorityThread <= 5 )
    v10 = MiGetEffectivePagePriorityThread((__int64)CurrentThread);
  MiPrefetchControlArea((_DWORD)a1, (_DWORD)CLFS_LSN_NULL_EXT, 0, v10, 0, a2);
  v11 = MiMapImageInSystemSpace(a1, 3LL, v52);
  if ( v11 >= 0 )
  {
    v12 = v53;
    v45 = v53;
    v13 = v52[0];
    v43 = v52[0];
    v14 = (_BYTE *)(((v52[0] >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    v15 = 0LL;
    while ( 1 )
    {
      v48 = v13;
      v47 = v14;
      if ( v7 >= v50 )
        break;
      v44[0] = MI_READ_PTE_LOCK_FREE(v7);
      if ( v44[0] )
      {
        while ( 1 )
        {
          SharedVm = MiGetSharedVm(v12);
          v18 = ExAcquireSpinLockExclusive(SharedVm);
          v41 = v18;
          SharedVm[1] = 0;
          if ( (*v14 & 1) != 0 )
            break;
          LOBYTE(v19) = v18;
          MiUnlockWorkingSetExclusive(v12, v19);
        }
        ++v15;
        v44[0] = MI_READ_PTE_LOCK_FREE(v14);
        v21 = 48 * MI_GET_PAGE_FRAME_FROM_PTE(v44) - 0x58000000000LL;
        if ( (*(_QWORD *)(v21 + 40) & 0x200000000000000LL) != 0 )
        {
          v22 = 0LL;
          MiLockPageAtDpcInline(v21);
          if ( (*(_DWORD *)(v21 + 16) & 0x400LL) == 0 && (*(_BYTE *)(v21 + 34) & 8) == 0 )
            v22 = MiCapturePageFileInfoInline((_QWORD *)(v21 + 16), 1, 0);
          *(_BYTE *)(v21 + 34) |= 0x10u;
          _InterlockedAnd64((volatile signed __int64 *)(v21 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( v22 )
          {
            v23 = (struct _KEVENT *)MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(v21 + 40)) >> 8) & 0x3FF);
            MiReleasePageFileInfo(v23, v22, 1);
          }
        }
        LOBYTE(v20) = v41;
        v12 = v45;
        MiUnlockWorkingSetExclusive(v45, v20);
        v16 = v43;
      }
      v7 += 8LL;
      v46 = v7;
      v14 += 8;
      v13 = v16 + 4096;
      v43 = v13;
    }
    v24 = v49;
    MiUnmapImageInSystemSpace(v52);
    v25 = *(_QWORD *)(v24 + 16) - v15 + v5;
    if ( v25 )
    {
      v26 = *((_QWORD *)v4 + 712);
      while ( v26 )
      {
        v27 = v25;
        if ( v25 > v26 )
          v27 = v26;
        v28 = v26;
        v26 = _InterlockedCompareExchange64((volatile signed __int64 *)v4 + 712, v26 - v27, v26);
        if ( v28 == v26 )
        {
          v25 -= v27;
          if ( !v25 )
            goto LABEL_38;
          break;
        }
      }
      if ( v4 == MiSystemPartition )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        _m_prefetchw((const void *)&CurrentPrcb->CachedCommit);
        CachedCommit = CurrentPrcb->CachedCommit;
        for ( i = v25 + CachedCommit; i <= 0x100; i = v32 + v25 )
        {
          v32 = _InterlockedCompareExchange(
                  (volatile signed __int32 *)&CurrentPrcb->CachedCommit,
                  v25 + CachedCommit,
                  CachedCommit);
          if ( v32 == CachedCommit )
            goto LABEL_38;
          CachedCommit = v32;
        }
      }
      v33 = _InterlockedExchangeAdd64((volatile signed __int64 *)v4 + 901, -(__int64)v25);
      v34 = *((_QWORD *)v4 + 708);
      if ( v33 >= v34 && v33 - v25 < v34 || (v35 = *((_QWORD *)v4 + 707), v33 - v25 < v35) && v33 >= v35 )
        MiSyncCommitSignals((__int64)v4, 0);
    }
LABEL_38:
    v36 = v15 - *(_QWORD *)(v24 + 16);
    if ( v36 )
    {
      v37 = *a1;
      _InterlockedExchangeAdd64(&qword_140327958, v36);
      v38 = (__int64)v51;
      --v51->SpecialApcDisable;
      v39 = (_BYTE *)KeAbPreAcquire(v37 + 40, 0LL, 0);
      v40 = v39;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v37 + 40), 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v37 + 40), v39, v37 + 40);
      if ( v40 )
        v40[26] |= 1u;
      *(_QWORD *)(v37 + 16) += v36;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v37 + 40), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(v37 + 40));
      KeAbPostRelease(v37 + 40);
      KiLeaveGuardedRegionUnsafe(v38);
    }
    return 0LL;
  }
  else
  {
    MiReturnCommit((__int64)v4, v5);
    return (unsigned int)v11;
  }
}
