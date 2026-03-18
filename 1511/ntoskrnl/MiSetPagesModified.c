/*
 * XREFs of MiSetPagesModified @ 0x1401D4A14
 * Callers:
 *     MiCreateNewSection @ 0x1403C8128 (MiCreateNewSection.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14000A2E0 (ExAcquireSpinLockExclusive.c)
 *     MiGetEffectivePagePriorityThread @ 0x140011A18 (MiGetEffectivePagePriorityThread.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     MI_REFERENCE_CONTROL_AREA_FILE @ 0x14003ABE0 (MI_REFERENCE_CONTROL_AREA_FILE.c)
 *     MI_DEREFERENCE_CONTROL_AREA_FILE @ 0x14003AD10 (MI_DEREFERENCE_CONTROL_AREA_FILE.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400430F0 (KiLeaveGuardedRegionUnsafe.c)
 *     MiUnlockWorkingSetExclusive @ 0x14004CB90 (MiUnlockWorkingSetExclusive.c)
 *     MiChargeCommit @ 0x140063610 (MiChargeCommit.c)
 *     MiReturnCommit @ 0x140067350 (MiReturnCommit.c)
 *     MiLockPageAtDpcInline @ 0x1400A5010 (MiLockPageAtDpcInline.c)
 *     MiPartitionIdToPointer @ 0x1400AA2C0 (MiPartitionIdToPointer.c)
 *     MiReleasePageFileInfo @ 0x1400B4C70 (MiReleasePageFileInfo.c)
 *     MiCapturePageFileInfoInline @ 0x1400E1BBC (MiCapturePageFileInfoInline.c)
 *     MiSyncCommitSignals @ 0x14013A478 (MiSyncCommitSignals.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401CE7A4 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUnmapImageInSystemSpace @ 0x1403C72A0 (MiUnmapImageInSystemSpace.c)
 *     MiMapImageInSystemSpace @ 0x1403C72D4 (MiMapImageInSystemSpace.c)
 *     MiPrefetchControlArea @ 0x1404AF248 (MiPrefetchControlArea.c)
 */

__int64 __fastcall MiSetPagesModified(__int64 *a1, int a2)
{
  unsigned __int64 v2; // rbp
  __int64 v4; // rax
  unsigned __int64 v5; // rdi
  __int64 *v7; // r14
  struct _KTHREAD *CurrentThread; // r15
  unsigned int EffectivePagePriorityThread; // eax
  int v10; // r9d
  int v11; // ebx
  volatile LONG *v12; // r15
  unsigned __int64 v13; // r13
  __int64 *v14; // rsi
  __int64 v15; // r12
  __int64 v16; // rax
  KIRQL v17; // al
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r15
  unsigned __int64 v23; // rbx
  int *v24; // rax
  __int64 v25; // rsi
  unsigned int v26; // r13d
  unsigned __int64 v27; // rdi
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // rdx
  unsigned __int64 v30; // rtt
  struct _KPRCB *CurrentPrcb; // r8
  __int64 CachedCommit; // rdx
  unsigned __int64 i; // rax
  signed __int32 v34; // eax
  unsigned __int64 v35; // rcx
  unsigned __int64 v36; // rdx
  unsigned __int64 v37; // rax
  unsigned __int64 v38; // r8
  unsigned __int64 v39; // rtt
  struct _KPRCB *v40; // r9
  __int64 v41; // r8
  unsigned __int64 j; // rax
  signed __int32 v43; // eax
  unsigned __int64 v44; // rcx
  unsigned __int64 v45; // r12
  __int64 v46; // r14
  __int64 v47; // r15
  __int64 v48; // rax
  __int64 v49; // rsi
  _BYTE v50[4]; // [rsp+50h] [rbp+0h] BYREF

  v2 = (unsigned __int64)v50 & 0xFFFFFFFFFFFFFFE0uLL;
  *(_QWORD *)(v2 + 16) = a1;
  v4 = *a1;
  *(_QWORD *)(v2 + 64) = *a1;
  *(_QWORD *)(v2 + 88) = v4;
  v5 = *(unsigned int *)(v4 + 8);
  *(_QWORD *)(v2 + 32) = v5;
  if ( !(unsigned int)MiChargeCommit((unsigned __int64)MiSystemPartition, (unsigned int)v5, 0LL) )
    return 3221225773LL;
  v7 = *(__int64 **)(*(_QWORD *)(((unsigned __int64)v50 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10) + 128LL);
  *(_QWORD *)(((unsigned __int64)v50 & 0xFFFFFFFFFFFFFFE0uLL) + 0x48) = v7;
  *(_QWORD *)(((unsigned __int64)v50 & 0xFFFFFFFFFFFFFFE0uLL) + 0x60) = &v7[v5];
  CurrentThread = KeGetCurrentThread();
  *(_QWORD *)(((unsigned __int64)v50 & 0xFFFFFFFFFFFFFFE0uLL) + 0x68) = CurrentThread;
  EffectivePagePriorityThread = MiGetEffectivePagePriorityThread((__int64)CurrentThread);
  v10 = 5;
  if ( EffectivePagePriorityThread <= 5 )
    v10 = MiGetEffectivePagePriorityThread((__int64)CurrentThread);
  MiPrefetchControlArea(
    *(_QWORD *)(((unsigned __int64)v50 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10),
    (_DWORD)CLFS_LSN_NULL_EXT,
    0,
    v10,
    0,
    a2);
  v11 = MiMapImageInSystemSpace(*(_QWORD *)(((unsigned __int64)v50 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10), 3LL, v2 + 112);
  if ( v11 >= 0 )
  {
    v12 = *(volatile LONG **)(((unsigned __int64)v50 & 0xFFFFFFFFFFFFFFE0uLL) + 0x80);
    *(_QWORD *)(((unsigned __int64)v50 & 0xFFFFFFFFFFFFFFE0uLL) + 0x50) = v12;
    *(_DWORD *)(((unsigned __int64)v50 & 0xFFFFFFFFFFFFFFE0uLL) + 4) = 0;
    v13 = *(_QWORD *)(((unsigned __int64)v50 & 0xFFFFFFFFFFFFFFE0uLL) + 0x70);
    v14 = (__int64 *)(((v13 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    v15 = 0LL;
    *(_QWORD *)(((unsigned __int64)v50 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18) = 0LL;
    *(_DWORD *)(((unsigned __int64)v50 & 0xFFFFFFFFFFFFFFE0uLL) + 8) = 0;
    while ( 1 )
    {
      *(_QWORD *)(((unsigned __int64)v50 & 0xFFFFFFFFFFFFFFE0uLL) + 0x30) = v13;
      *(_QWORD *)(((unsigned __int64)v50 & 0xFFFFFFFFFFFFFFE0uLL) + 0x28) = v14;
      if ( (unsigned __int64)v7 >= *(_QWORD *)(((unsigned __int64)v50 & 0xFFFFFFFFFFFFFFE0uLL) + 0x60) )
        break;
      v16 = MI_READ_PTE_LOCK_FREE(v7);
      *(_QWORD *)(((unsigned __int64)v50 & 0xFFFFFFFFFFFFFFE0uLL) + 0x38) = v16;
      if ( v16 )
      {
        while ( 1 )
        {
          v17 = ExAcquireSpinLockExclusive(v12);
          *(_BYTE *)v2 = v17;
          if ( (*(_BYTE *)v14 & 1) != 0 )
            break;
          LOBYTE(v18) = v17;
          MiUnlockWorkingSetExclusive((__int64)v12, v18, v19);
        }
        *(_QWORD *)(((unsigned __int64)v50 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18) = ++v15;
        *(_QWORD *)(((unsigned __int64)v50 & 0xFFFFFFFFFFFFFFE0uLL) + 0x38) = MI_READ_PTE_LOCK_FREE(v14);
        v22 = 48 * MI_GET_PAGE_FRAME_FROM_PTE(v2 + 56) - 0x58000000000LL;
        if ( (*(_QWORD *)(v22 + 40) & 0x200000000000000LL) != 0 )
        {
          v23 = 0LL;
          MiLockPageAtDpcInline(v22, v20, v21);
          if ( (*(_DWORD *)(v22 + 16) & 0x400LL) == 0 && (*(_BYTE *)(v22 + 34) & 8) == 0 )
            v23 = MiCapturePageFileInfoInline((unsigned __int64 *)(v22 + 16), 1, 0);
          *(_BYTE *)(v22 + 34) |= 0x10u;
          _InterlockedAnd64((volatile signed __int64 *)(v22 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( v23 )
          {
            v24 = MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(v22 + 40)) >> 8) & 0x3FF);
            MiReleasePageFileInfo((__int64)v24, v23, 1);
          }
        }
        LOBYTE(v20) = *(_BYTE *)v2;
        v12 = *(volatile LONG **)(((unsigned __int64)v50 & 0xFFFFFFFFFFFFFFE0uLL) + 0x50);
        MiUnlockWorkingSetExclusive((__int64)v12, v20, v21);
      }
      *(_QWORD *)(((unsigned __int64)v50 & 0xFFFFFFFFFFFFFFE0uLL) + 0x48) = ++v7;
      ++v14;
      v13 += 4096LL;
    }
    v25 = *(_QWORD *)(((unsigned __int64)v50 & 0xFFFFFFFFFFFFFFE0uLL) + 0x40);
    v26 = *(_DWORD *)(((unsigned __int64)v50 & 0xFFFFFFFFFFFFFFE0uLL) + 4);
    MiUnmapImageInSystemSpace(v2 + 112);
    v27 = v5 - v15;
    if ( v27 )
    {
      v28 = qword_140301100[0];
      while ( v28 )
      {
        v29 = v27;
        if ( v27 > v28 )
          v29 = v28;
        v30 = v28;
        v28 = _InterlockedCompareExchange64(qword_140301100, v28 - v29, v28);
        if ( v30 == v28 )
        {
          v27 -= v29;
          if ( !v27 )
            goto LABEL_37;
          break;
        }
      }
      CurrentPrcb = KeGetCurrentPrcb();
      _m_prefetchw((const void *)&CurrentPrcb->CachedCommit);
      CachedCommit = CurrentPrcb->CachedCommit;
      for ( i = v27 + CachedCommit; i <= 0x100; i = v34 + v27 )
      {
        v34 = _InterlockedCompareExchange(
                (volatile signed __int32 *)&CurrentPrcb->CachedCommit,
                v27 + CachedCommit,
                CachedCommit);
        if ( v34 == CachedCommit )
          goto LABEL_37;
        CachedCommit = v34;
      }
      v35 = _InterlockedExchangeAdd64(&qword_140301488, -(__int64)v27);
      if ( v35 >= qword_1403010E0 && v35 - v27 < qword_1403010E0
        || v35 - v27 < qword_1403010D8 && v35 >= qword_1403010D8 )
      {
        MiSyncCommitSignals((__int64)MiSystemPartition, 0);
      }
    }
LABEL_37:
    v36 = *(_QWORD *)(v25 + 16);
    if ( v36 )
    {
      v37 = qword_140301100[0];
      while ( v37 )
      {
        v38 = v36;
        if ( v36 > v37 )
          v38 = v37;
        v39 = v37;
        v37 = _InterlockedCompareExchange64(qword_140301100, v37 - v38, v37);
        if ( v39 == v37 )
        {
          v36 -= v38;
          if ( !v36 )
            goto LABEL_54;
          break;
        }
      }
      v40 = KeGetCurrentPrcb();
      _m_prefetchw((const void *)&v40->CachedCommit);
      v41 = v40->CachedCommit;
      for ( j = v36 + v41; j <= 0x100; j = v43 + v36 )
      {
        v43 = _InterlockedCompareExchange((volatile signed __int32 *)&v40->CachedCommit, v36 + v41, v41);
        if ( v43 == v41 )
          goto LABEL_54;
        v41 = v43;
      }
      v44 = _InterlockedExchangeAdd64(&qword_140301488, -(__int64)v36);
      if ( v44 >= qword_1403010E0 && v44 - v36 < qword_1403010E0
        || v44 - v36 < qword_1403010D8 && v44 >= qword_1403010D8 )
      {
        MiSyncCommitSignals((__int64)MiSystemPartition, 0);
      }
    }
LABEL_54:
    v45 = v15 - *(_QWORD *)(v25 + 16);
    if ( v45 )
    {
      v46 = **(_QWORD **)(((unsigned __int64)v50 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10);
      _InterlockedExchangeAdd64(&qword_1402FF850, v45);
      v47 = *(_QWORD *)(((unsigned __int64)v50 & 0xFFFFFFFFFFFFFFE0uLL) + 0x68);
      --*(_WORD *)(v47 + 486);
      v48 = KeAbPreAcquire(v46 + 40, 0LL, 0LL);
      v49 = v48;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v46 + 40), 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v46 + 40), v48, v46 + 40);
      if ( v49 )
        *(_BYTE *)(v49 + 26) |= 1u;
      *(_QWORD *)(v46 + 16) += v45;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v46 + 40), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(v46 + 40));
      KeAbPostRelease(v46 + 40);
      KiLeaveGuardedRegionUnsafe(v47);
    }
    return v26;
  }
  else
  {
    MiReturnCommit((__int64)MiSystemPartition, v5);
    return (unsigned int)v11;
  }
}
