/*
 * XREFs of MiMapPageFileHash @ 0x140116EA0
 * Callers:
 *     MiStoreUpdatePagefileHash @ 0x140116D10 (MiStoreUpdatePagefileHash.c)
 *     MiGatherPagefilePages @ 0x1401199B4 (MiGatherPagefilePages.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x1400122D0 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14001B8C0 (KeAcquireInStackQueuedSpinLock.c)
 *     MiGetAnyMultiplexedVm @ 0x14001CBDC (MiGetAnyMultiplexedVm.c)
 *     MiInitializePfnForOtherProcess @ 0x140021288 (MiInitializePfnForOtherProcess.c)
 *     MiLockPageInline @ 0x1400229F0 (MiLockPageInline.c)
 *     MmUnmapLockedPages @ 0x140025890 (MmUnmapLockedPages.c)
 *     MiMakeValidKernelPte @ 0x140034890 (MiMakeValidKernelPte.c)
 *     MiReturnCommit @ 0x14004E080 (MiReturnCommit.c)
 *     MiReturnResidentAvailable @ 0x14004ED60 (MiReturnResidentAvailable.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x140066D40 (MiInsertPageInFreeOrZeroedList.c)
 *     MmMapLockedPagesSpecifyCache @ 0x1400DC0C0 (MmMapLockedPagesSpecifyCache.c)
 *     MiInitializePageColorBase @ 0x1400E3F40 (MiInitializePageColorBase.c)
 *     MiSetPfnTbFlushStamp @ 0x1400E5330 (MiSetPfnTbFlushStamp.c)
 *     MiGetFileHashPage @ 0x14011525C (MiGetFileHashPage.c)
 *     MiWritePageFileHash @ 0x1401155B0 (MiWritePageFileHash.c)
 *     MiPteInShadowRange @ 0x1401EF1E4 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF484 (MiWritePteShadow.c)
 *     MI_GET_PFN_FROM_PTE @ 0x1401F23C0 (MI_GET_PFN_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetPteTimeStamp @ 0x1401F24C8 (MiGetPteTimeStamp.c)
 *     MiUpdatePageFileHighInPte @ 0x1401F2840 (MiUpdatePageFileHighInPte.c)
 */

void __fastcall MiMapPageFileHash(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, unsigned int a5)
{
  unsigned int v5; // r15d
  char *AnyMultiplexedVm; // rax
  _QWORD *BugCheckOnFailure; // r10
  MEMORY_CACHING_TYPE v11; // r11d
  _QWORD *v12; // r13
  unsigned int v13; // r12d
  KSPIN_LOCK *v14; // rax
  unsigned __int64 v15; // rsi
  __int64 v16; // r14
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 PteTimeStamp; // rax
  _QWORD *v21; // r9
  __int64 updated; // rax
  __int64 *v23; // r9
  __int64 v24; // rdx
  __int64 v25; // rcx
  _WORD *v26; // rax
  __int64 FileHashPage; // rax
  ULONG_PTR v28; // r12
  __int64 v29; // r15
  __int64 v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // r8
  __int64 v35; // rdx
  __int64 v36; // r9
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // rax
  __int64 *v41; // r8
  __int64 v42; // rdx
  __int64 v43; // rcx
  int v44; // r10d
  unsigned __int64 ValidKernelPte; // rax
  __int64 v46; // rdx
  __int64 v47; // rcx
  unsigned int v48; // eax
  signed __int32 v49[8]; // [rsp+0h] [rbp-70h] BYREF
  unsigned __int64 v50; // [rsp+30h] [rbp-40h] BYREF
  __int64 v51; // [rsp+38h] [rbp-38h]
  __int128 v52; // [rsp+40h] [rbp-30h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-20h] BYREF
  unsigned __int8 v54; // [rsp+B0h] [rbp+40h]
  unsigned int v55; // [rsp+C8h] [rbp+58h]

  v55 = a4;
  v5 = a4;
  v52 = 0LL;
  if ( !*(_QWORD *)(a1 + 216) )
    return;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
  MiInitializePageColorBase((__int64)AnyMultiplexedVm, 0, (__int64)&v52);
  if ( a2 )
  {
    if ( (*(_BYTE *)(a2 + 10) & 5) == 0 )
      MmMapLockedPagesSpecifyCache((PMDL)a2, 0, v11, 0LL, (ULONG)BugCheckOnFailure, 0xC0000010);
    v12 = (_QWORD *)(a2 + 8 * (a3 + 6));
  }
  else
  {
    v12 = BugCheckOnFailure;
  }
  v13 = a5;
  v14 = (KSPIN_LOCK *)(a1 + 232);
  do
  {
    KeAcquireInStackQueuedSpinLock(v14, &LockHandle);
    v51 = *(_QWORD *)(a1 + 216);
    v15 = (((v51 + 4 * (unsigned __int64)v5) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v16 = (4096 - (((unsigned int)v51 + 4 * v5) & 0xFFF)) >> 2;
    if ( (unsigned int)v16 > v13 )
      v16 = v13;
    v50 = MI_READ_PTE_LOCK_FREE((((v51 + 4 * (unsigned __int64)v5) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    if ( (v50 & 1) != 0 )
    {
      v17 = MI_GET_PFN_FROM_PTE(&v50);
      PteTimeStamp = MiGetPteTimeStamp(*(_QWORD *)(v17 + 16), v18, v19);
      updated = MiUpdatePageFileHighInPte(*v21, PteTimeStamp + (unsigned int)v16);
      v50 = updated;
      *v23 = updated;
      if ( (unsigned int)MiPteInShadowRange(v23, updated) )
        MiWritePteShadow(v25, v24);
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      MiWritePageFileHash(a1, a2, v12, v5, v16);
LABEL_37:
      if ( v12 )
        v12 += v16;
      v5 += v16;
      v13 -= v16;
      v55 = v5;
      a5 = v13;
      goto LABEL_41;
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    v26 = (_WORD *)v52;
    ++*(_WORD *)v52;
    FileHashPage = MiGetFileHashPage(a1, WORD5(v52) | (unsigned int)(unsigned __int16)(WORD4(v52) & *v26));
    v28 = FileHashPage;
    if ( FileHashPage == -1 )
    {
      v54 = 17;
      v29 = 0LL;
    }
    else
    {
      v29 = 48 * FileHashPage - 0x58000000000LL;
      _InterlockedOr(v49, 0);
      MiSetPfnTbFlushStamp(v29, (unsigned int)KiTbFlushTimeStamp, 0);
      MiInitializePfnForOtherProcess(v28, v15, -1LL, 0);
      v50 = MI_READ_PTE_LOCK_FREE(((v15 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
      *(_QWORD *)(v29 + 40) ^= (*(_QWORD *)(v29 + 40) ^ (v50 >> 12)) & 0xFFFFFFFFFLL;
      v54 = MiLockPageInline(v29);
      *(_BYTE *)(v29 + 34) = *(_BYTE *)(v29 + 34) & 0xF8 | 6;
    }
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 232), &LockHandle);
    if ( v51 == *(_QWORD *)(a1 + 216) )
    {
      v32 = MI_READ_PTE_LOCK_FREE(v15);
      v35 = (unsigned int)MiGetPteTimeStamp(v32, v33, v34) + (unsigned int)v16;
      if ( v28 == -1LL )
      {
        v37 = MiUpdatePageFileHighInPte(v36, v35);
        v50 = v37;
        *(_QWORD *)v15 = v37;
        if ( (unsigned int)MiPteInShadowRange(v15, v37) )
          MiWritePteShadow(v39, v38);
        KeReleaseInStackQueuedSpinLock(&LockHandle);
        v5 = v55;
      }
      else
      {
        v40 = MiUpdatePageFileHighInPte(*(_QWORD *)(v29 + 16), v35);
        v50 = v40;
        *v41 = v40;
        if ( (unsigned int)MiPteInShadowRange(v41, v40) )
          MiWritePteShadow(v43, v42);
        if ( v44 )
          *(_BYTE *)(v29 + 34) &= ~0x10u;
        ValidKernelPte = MiMakeValidKernelPte(v28, 4, v15);
        v50 = ValidKernelPte | 0x42;
        *(_QWORD *)v15 = ValidKernelPte | 0x42;
        if ( (unsigned int)MiPteInShadowRange(v15, ValidKernelPte | 0x42) )
          MiWritePteShadow(v47, v46);
        v48 = ++*(_DWORD *)(a1 + 208);
        if ( v48 > *(_DWORD *)(a1 + 212) )
          *(_DWORD *)(a1 + 212) = v48;
        KeReleaseInStackQueuedSpinLock(&LockHandle);
        _InterlockedAnd64((volatile signed __int64 *)(v29 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        __writecr8(v54);
        v5 = v55;
        MiWritePageFileHash(a1, a2, v12, v55, v16);
      }
      v13 = a5;
      goto LABEL_37;
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    if ( v28 != -1LL )
    {
      v30 = 48 * v28 - 0x58000000000LL;
      *(_QWORD *)(v30 + 24) &= 0xC000000000000000uLL;
      *(_WORD *)(v30 + 32) = 0;
      MiInsertPageInFreeOrZeroedList(v28, 2);
      _InterlockedAnd64((volatile signed __int64 *)(v29 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(v54);
      v31 = *(_QWORD *)(a1 + 256);
      if ( (int *)v31 == MiSystemPartition )
        MiReturnResidentAvailable(1uLL);
      else
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v31 + 6528), 1uLL);
      MiReturnCommit(*(_QWORD *)(a1 + 256), 1uLL);
      _InterlockedDecrement64(&qword_140327DC8);
    }
    v13 = a5;
    v5 = v55;
LABEL_41:
    v14 = (KSPIN_LOCK *)(a1 + 232);
  }
  while ( v13 );
  if ( a2 )
  {
    if ( (*(_BYTE *)(a2 + 10) & 1) != 0 )
      MmUnmapLockedPages(*(PVOID *)(a2 + 24), (PMDL)a2);
  }
}
