/*
 * XREFs of MiMapPageFileHash @ 0x140108CF0
 * Callers:
 *     MiStoreUpdatePagefileHash @ 0x140108B4C (MiStoreUpdatePagefileHash.c)
 *     MiGatherPagefilePages @ 0x14010AF5C (MiGatherPagefilePages.c)
 * Callees:
 *     MiLockPageInline @ 0x1400116F0 (MiLockPageInline.c)
 *     MiInitializePfnForOtherProcess @ 0x140018484 (MiInitializePfnForOtherProcess.c)
 *     MmUnmapLockedPages @ 0x14003A290 (MmUnmapLockedPages.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x14003F0B0 (MiInsertPageInFreeOrZeroedList.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140040F30 (KeReleaseInStackQueuedSpinLock.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14004B6B0 (MmMapLockedPagesSpecifyCache.c)
 *     MiMakeValidKernelPte @ 0x14004D080 (MiMakeValidKernelPte.c)
 *     MiReturnCommit @ 0x140067350 (MiReturnCommit.c)
 *     MiReturnResidentAvailable @ 0x1400687F0 (MiReturnResidentAvailable.c)
 *     MI_INITIALIZE_COLOR_BASE @ 0x140070760 (MI_INITIALIZE_COLOR_BASE.c)
 *     MiSetPfnTbFlushStamp @ 0x140071D20 (MiSetPfnTbFlushStamp.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400B1C10 (KeAcquireInStackQueuedSpinLock.c)
 *     MiGetFileHashPage @ 0x140107D58 (MiGetFileHashPage.c)
 *     MiWritePageFileHash @ 0x140108598 (MiWritePageFileHash.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401CE7A4 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 */

void __fastcall MiMapPageFileHash(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, unsigned int a5)
{
  unsigned int v5; // r13d
  _QWORD *BugCheckOnFailure; // r10
  _QWORD *v10; // rdi
  unsigned int v11; // ebx
  KSPIN_LOCK *v12; // rax
  unsigned __int64 v13; // r15
  int v14; // ecx
  unsigned __int64 v15; // r15
  __int64 v16; // r12
  __int64 v17; // r15
  unsigned __int64 v18; // rbx
  _WORD *v19; // rax
  __int64 FileHashPage; // rax
  ULONG_PTR v21; // rdi
  __int64 v22; // r13
  __int64 v23; // rax
  __int64 v24; // rcx
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rbx
  unsigned __int64 v27; // rbx
  unsigned __int64 v28; // rdi
  __int64 v29; // r9
  unsigned __int64 v30; // rbx
  unsigned int v31; // eax
  signed __int32 v32[8]; // [rsp+0h] [rbp-80h] BYREF
  unsigned __int64 v33; // [rsp+30h] [rbp-50h] BYREF
  _QWORD *v34; // [rsp+38h] [rbp-48h]
  __int64 v35; // [rsp+40h] [rbp-40h]
  __int64 v36; // [rsp+48h] [rbp-38h]
  __int128 v37; // [rsp+50h] [rbp-30h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+60h] [rbp-20h] BYREF
  unsigned __int8 v39; // [rsp+C0h] [rbp+40h]
  unsigned int v40; // [rsp+D8h] [rbp+58h]

  v40 = a4;
  v5 = a4;
  v37 = 0LL;
  if ( !*(_QWORD *)(a1 + 216) )
    return;
  MI_INITIALIZE_COLOR_BASE((__int64)&dword_1402FFA80, 0, (__int64)&v37);
  if ( a2 )
  {
    if ( (*(_BYTE *)(a2 + 10) & 5) == 0 )
      MmMapLockedPagesSpecifyCache(
        (PMDL)a2,
        0,
        (MEMORY_CACHING_TYPE)((_DWORD)BugCheckOnFailure + 1),
        0LL,
        (ULONG)BugCheckOnFailure,
        0xC0000010);
    v10 = (_QWORD *)(a2 + 8 * (a3 + 6));
  }
  else
  {
    v10 = BugCheckOnFailure;
  }
  v11 = a5;
  v12 = (KSPIN_LOCK *)(a1 + 232);
  v34 = v10;
  do
  {
    KeAcquireInStackQueuedSpinLock(v12, &LockHandle);
    v35 = *(_QWORD *)(a1 + 216);
    v13 = v35 + 4LL * v5;
    v14 = v13 & 0xFFF;
    v15 = ((v13 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v16 = (unsigned int)(4096 - v14) >> 2;
    if ( (unsigned int)v16 > v11 )
      v16 = v11;
    v33 = MI_READ_PTE_LOCK_FREE(v15);
    if ( (v33 & 1) != 0 )
    {
      v17 = 48 * MI_GET_PAGE_FRAME_FROM_PTE(&v33) - 0x58000000000LL;
      v18 = ((unsigned __int64)(unsigned int)v16 << 32) + *(_QWORD *)(v17 + 16);
      v33 = v18;
      *(_QWORD *)(v17 + 16) = v18;
      if ( (unsigned int)MiPteInShadowRange(v17 + 16) )
        MiWritePteShadow(v17 + 16, v18);
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      MiWritePageFileHash(a1, a2, v10, v5, v16);
LABEL_36:
      if ( v10 )
      {
        v10 += v16;
        v34 = v10;
      }
      v5 += v16;
      v11 = a5 - v16;
      v40 = v5;
      a5 -= v16;
      goto LABEL_40;
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    v19 = (_WORD *)v37;
    ++*(_WORD *)v37;
    FileHashPage = MiGetFileHashPage(a1, WORD5(v37) | (unsigned int)(unsigned __int16)(WORD4(v37) & *v19));
    v36 = FileHashPage;
    v21 = FileHashPage;
    if ( FileHashPage == -1 )
    {
      v39 = 17;
      v22 = 0LL;
    }
    else
    {
      v22 = 48 * FileHashPage - 0x58000000000LL;
      _InterlockedOr(v32, 0);
      MiSetPfnTbFlushStamp(v22, (unsigned int)KiTbFlushTimeStamp, 0);
      MiInitializePfnForOtherProcess(v21, v15, -1LL, 0);
      v33 = MI_READ_PTE_LOCK_FREE(((v15 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
      *(_QWORD *)(v22 + 40) ^= (*(_QWORD *)(v22 + 40) ^ (v33 >> 12)) & 0xFFFFFFFFFLL;
      v39 = MiLockPageInline(v22);
      *(_BYTE *)(v22 + 34) = *(_BYTE *)(v22 + 34) & 0xF8 | 6;
    }
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 232), &LockHandle);
    if ( v35 == *(_QWORD *)(a1 + 216) )
    {
      v25 = MI_READ_PTE_LOCK_FREE(v15);
      if ( v21 == -1LL )
      {
        v26 = ((unsigned __int64)(unsigned int)v16 << 32) + v25;
        v33 = v26;
        *(_QWORD *)v15 = v26;
        if ( (unsigned int)MiPteInShadowRange(v15) )
          MiWritePteShadow(v15, v26);
        KeReleaseInStackQueuedSpinLock(&LockHandle);
        v10 = v34;
        v5 = v40;
      }
      else
      {
        v27 = HIDWORD(v25);
        v28 = *(unsigned int *)(v22 + 16) | ((unsigned __int64)(unsigned int)(HIDWORD(v25) + v16) << 32);
        v33 = v28;
        *(_QWORD *)(v22 + 16) = v28;
        if ( (unsigned int)MiPteInShadowRange(v22 + 16) )
          MiWritePteShadow(v22 + 16, v28);
        if ( (_DWORD)v27 )
          *(_BYTE *)(v22 + 34) &= ~0x10u;
        v30 = MiMakeValidKernelPte(v36, 4, v15, v29) | 0x42;
        v33 = v30;
        *(_QWORD *)v15 = v30;
        if ( (unsigned int)MiPteInShadowRange(v15) )
          MiWritePteShadow(v15, v30);
        v31 = ++*(_DWORD *)(a1 + 208);
        if ( v31 > *(_DWORD *)(a1 + 212) )
          *(_DWORD *)(a1 + 212) = v31;
        KeReleaseInStackQueuedSpinLock(&LockHandle);
        _InterlockedAnd64((volatile signed __int64 *)(v22 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        __writecr8(v39);
        v10 = v34;
        v5 = v40;
        MiWritePageFileHash(a1, a2, v34, v40, v16);
      }
      goto LABEL_36;
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    if ( v21 != -1LL )
    {
      v23 = 48 * v21 - 0x58000000000LL;
      *(_QWORD *)(v23 + 24) &= 0xC000000000000000uLL;
      *(_WORD *)(v23 + 32) = 0;
      MiInsertPageInFreeOrZeroedList(v21, 2uLL);
      _InterlockedAnd64((volatile signed __int64 *)(v22 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(v39);
      v24 = *(_QWORD *)(a1 + 256);
      if ( (int *)v24 == MiSystemPartition )
      {
        MiReturnResidentAvailable(1uLL);
        _InterlockedExchangeAdd64(&qword_1402FF468, 1uLL);
      }
      else
      {
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v24 + 5952), 1uLL);
      }
      MiReturnCommit(*(_QWORD *)(a1 + 256), 1uLL);
      _InterlockedDecrement64(&qword_1402FFB88);
    }
    v5 = v40;
    v10 = v34;
LABEL_40:
    v12 = (KSPIN_LOCK *)(a1 + 232);
  }
  while ( v11 );
  if ( a2 )
  {
    if ( (*(_BYTE *)(a2 + 10) & 1) != 0 )
      MmUnmapLockedPages(*(PVOID *)(a2 + 24), (PMDL)a2);
  }
}
