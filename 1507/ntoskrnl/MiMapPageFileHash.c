/*
 * XREFs of MiMapPageFileHash @ 0x14013BAD4
 * Callers:
 *     MiStoreUpdatePagefileHash @ 0x14013B86C (MiStoreUpdatePagefileHash.c)
 *     MiGatherPagefilePages @ 0x14013D12C (MiGatherPagefilePages.c)
 *     MiTrimUnusedPageFileRegionsApc @ 0x1402220BC (MiTrimUnusedPageFileRegionsApc.c)
 * Callees:
 *     MiReturnResidentAvailable @ 0x1400380DC (MiReturnResidentAvailable.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400430C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140045FD0 (KeReleaseInStackQueuedSpinLock.c)
 *     MI_INITIALIZE_COLOR_BASE @ 0x140055C20 (MI_INITIALIZE_COLOR_BASE.c)
 *     MiSetPfnTbFlushStamp @ 0x140059A30 (MiSetPfnTbFlushStamp.c)
 *     MiInitializePfnForOtherProcess @ 0x14006A908 (MiInitializePfnForOtherProcess.c)
 *     MmMapLockedPagesSpecifyCache @ 0x1400ABA30 (MmMapLockedPagesSpecifyCache.c)
 *     MmUnmapLockedPages @ 0x1400ADB20 (MmUnmapLockedPages.c)
 *     MiReturnCommit @ 0x1400B7E40 (MiReturnCommit.c)
 *     MI_SHOULD_PTE_BE_GLOBAL @ 0x1400B9CB0 (MI_SHOULD_PTE_BE_GLOBAL.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1400C80C0 (MiInsertPageInFreeOrZeroedList.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     MiPteHasShadow @ 0x14022551C (MiPteHasShadow.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 *     MiGetPteTimeStamp @ 0x140225B28 (MiGetPteTimeStamp.c)
 *     MiUpdatePageFileHighInPte @ 0x140225FFC (MiUpdatePageFileHighInPte.c)
 *     MiGetFileHashPage @ 0x140231DB8 (MiGetFileHashPage.c)
 *     MiWritePageFileHash @ 0x14023228C (MiWritePageFileHash.c)
 */

void __fastcall MiMapPageFileHash(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, unsigned int a5)
{
  unsigned int v5; // esi
  __int64 v7; // r14
  __int64 BugCheckOnFailure; // r11
  __int64 v10; // rbx
  __int64 v11; // r15
  KSPIN_LOCK *v12; // rax
  __int64 v13; // r11
  unsigned __int64 v14; // r10
  unsigned __int64 v15; // rdi
  __int64 Process; // rcx
  unsigned __int64 v17; // rdi
  __int64 v18; // r12
  unsigned __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // rax
  __int64 v22; // r8
  __int64 v23; // rax
  __int64 PteTimeStamp; // rax
  _QWORD *v25; // r9
  __int64 updated; // rax
  __int64 *v27; // r9
  __int64 v28; // r11
  unsigned __int64 v29; // r10
  _WORD *v30; // rax
  __int64 FileHashPage; // rax
  ULONG_PTR v32; // rbx
  __int64 v33; // rsi
  unsigned int v34; // r15d
  unsigned __int64 *v35; // rcx
  unsigned __int64 PteShadow; // rax
  __int64 v37; // rax
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r8
  int v41; // r15d
  __int64 v42; // rdx
  __int64 v43; // rax
  unsigned __int64 v44; // r9
  unsigned __int64 v45; // r10
  __int64 v46; // rax
  __int64 *v47; // r8
  unsigned __int64 v48; // r10
  __int64 v49; // rbx
  unsigned __int64 v50; // r9
  unsigned __int64 v51; // r10
  unsigned __int64 v52; // rdx
  unsigned int v53; // eax
  signed __int32 v54[8]; // [rsp+0h] [rbp-80h] BYREF
  __int64 v55; // [rsp+30h] [rbp-50h]
  __int64 CurrentIrql; // [rsp+38h] [rbp-48h]
  unsigned __int64 v57; // [rsp+40h] [rbp-40h]
  __int64 v58; // [rsp+48h] [rbp-38h]
  __int128 v59; // [rsp+50h] [rbp-30h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+60h] [rbp-20h] BYREF
  unsigned __int64 v61; // [rsp+C0h] [rbp+40h] BYREF
  __int64 v62; // [rsp+C8h] [rbp+48h]
  unsigned int v63; // [rsp+D8h] [rbp+58h]

  v63 = a4;
  v62 = a2;
  v5 = a4;
  v7 = a2;
  v59 = 0LL;
  if ( !*(_QWORD *)(a1 + 176) )
    return;
  MI_INITIALIZE_COLOR_BASE((__int64)dword_14034FF40, 0, (__int64)&v59);
  if ( v7 )
  {
    if ( (*(_BYTE *)(v7 + 10) & 5) == 0 )
      MmMapLockedPagesSpecifyCache(
        (PMDL)v7,
        0,
        (MEMORY_CACHING_TYPE)(BugCheckOnFailure + 1),
        0LL,
        BugCheckOnFailure,
        0xC0000010);
    v10 = v7 + 8 * (a3 + 6);
  }
  else
  {
    v10 = BugCheckOnFailure;
  }
  v11 = a5;
  v12 = (KSPIN_LOCK *)(a1 + 192);
  v55 = v10;
  do
  {
    KeAcquireInStackQueuedSpinLock(v12, &LockHandle);
    v13 = 0x90482413000LL;
    v14 = 2040LL;
    v58 = *(_QWORD *)(a1 + 176);
    v15 = v58 + 4LL * v5;
    Process = v15 & 0xFFF;
    v17 = ((v15 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v18 = (unsigned int)(4096 - Process) >> 2;
    v19 = *(_QWORD *)v17;
    if ( (unsigned int)v18 > (unsigned int)v11 )
      v18 = (unsigned int)v11;
    v57 = v17 + 0x90482413000LL;
    if ( v17 + 0x90482413000LL <= 0x7F8 )
    {
      if ( (unsigned int)MiPteHasShadow(Process, v19) )
      {
        Process = 1LL;
        if ( (v19 & 1) != 0 && ((v19 & 0x20) == 0 || (v19 & 0x42) == 0) )
        {
          Process = (__int64)KeGetCurrentThread()->ApcState.Process;
          v20 = *(_QWORD *)(Process + 1520);
          if ( v20 )
          {
            v21 = *(_QWORD *)(v20 + 8 * ((v17 >> 3) & 0x1FF));
            if ( (v21 & 0x20) != 0 )
              v19 |= 0x20uLL;
            if ( (v21 & 0x42) != 0 )
              v19 |= 0x42uLL;
          }
        }
      }
    }
    v61 = v19;
    if ( (v19 & 1) != 0 )
    {
      if ( (unsigned __int64)&v61 + v13 <= v14
        && (unsigned int)MiPteHasShadow(Process, v19)
        && ((v19 & 0x20) == 0 || (v19 & 0x42) == 0) )
      {
        v22 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ProcessLock;
        if ( v22 )
        {
          v23 = *(_QWORD *)(v22 + 8 * (((unsigned __int64)&v61 >> 3) & 0x1FF));
          if ( (v23 & 0x20) != 0 )
            v19 |= 0x20uLL;
          if ( (v23 & 0x42) != 0 )
            v19 |= 0x42uLL;
        }
      }
      PteTimeStamp = MiGetPteTimeStamp(*(_QWORD *)(48 * ((v19 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL + 16));
      updated = MiUpdatePageFileHighInPte(*v25, PteTimeStamp + (unsigned int)v18);
      v61 = updated;
      *v27 = updated;
      if ( (unsigned __int64)v27 + v28 <= v29 )
        MiWritePteShadow(v27, updated);
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      MiWritePageFileHash(a1, v7, v10, v5, v18);
LABEL_81:
      if ( v10 )
      {
        v10 += 8 * v18;
        v55 = v10;
      }
      v5 += v18;
      v11 = (unsigned int)(v11 - v18);
      v63 = v5;
      a5 = v11;
      goto LABEL_85;
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    v30 = (_WORD *)v59;
    ++*(_WORD *)v59;
    FileHashPage = MiGetFileHashPage(a1, WORD5(v59) | (unsigned int)(unsigned __int16)(WORD4(v59) & *v30));
    v32 = FileHashPage;
    if ( FileHashPage == -1 )
    {
      LOBYTE(v11) = 17;
      v33 = 0LL;
      CurrentIrql = v11;
    }
    else
    {
      v33 = 48 * FileHashPage - 0x58000000000LL;
      v34 = 0;
      _InterlockedOr(v54, 0);
      MiSetPfnTbFlushStamp(v33, (unsigned int)KiTbFlushTimeStamp, 0);
      MiInitializePfnForOtherProcess(v32, v17, -1LL, 0);
      v35 = (unsigned __int64 *)(((v17 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
      PteShadow = *v35;
      if ( (unsigned __int64)(v35 + 0x12090482600LL) <= 0x7F8 )
        PteShadow = MiReadPteShadow(v35, *v35);
      *(_QWORD *)(v33 + 40) ^= (*(_QWORD *)(v33 + 40) ^ (PteShadow >> 12)) & 0xFFFFFFFFFLL;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v33 + 24), 0x3FuLL) )
      {
        do
        {
          if ( (++v34 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
            _mm_pause();
          else
            HvlNotifyLongSpinWait(v34);
        }
        while ( *(__int64 *)(v33 + 24) < 0
             || _interlockedbittestandset64((volatile signed __int32 *)(v33 + 24), 0x3FuLL) );
        v7 = v62;
      }
      LOBYTE(v11) = CurrentIrql;
      *(_BYTE *)(v33 + 34) = *(_BYTE *)(v33 + 34) & 0xF8 | 6;
    }
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 192), &LockHandle);
    if ( v58 == *(_QWORD *)(a1 + 176) )
    {
      v39 = *(_QWORD *)v17;
      if ( v57 <= 0x7F8 )
        v39 = MiReadPteShadow(v17, *(_QWORD *)v17);
      v41 = MiGetPteTimeStamp(v39);
      v42 = (unsigned int)(v41 + v18);
      if ( v32 == -1LL )
      {
        v43 = MiUpdatePageFileHighInPte(v40, v42);
        v61 = v43;
        *(_QWORD *)v17 = v43;
        if ( v44 <= v45 )
          MiWritePteShadow(v17, v43);
        KeReleaseInStackQueuedSpinLock(&LockHandle);
        v10 = v55;
        v5 = v63;
      }
      else
      {
        v46 = MiUpdatePageFileHighInPte(*(_QWORD *)(v33 + 16), v42);
        v61 = v46;
        *v47 = v46;
        if ( (unsigned __int64)(v47 + 0x12090482600LL) <= v48 )
          MiWritePteShadow(v47, v46);
        if ( v41 )
          *(_BYTE *)(v33 + 34) &= ~0x10u;
        v49 = qword_1403D0230 ^ (qword_1403D0230 ^ (v32 << 12)) & 0xFFFFFFFFF000LL | 0x21;
        if ( v17 + 0x904C0000000LL <= 0x3FFFFFFF )
          v49 &= ~qword_1403D0220 & 0x7FFFFFFFFFFFFFFFLL;
        if ( v17 <= (((unsigned __int64)MmHighestUserAddress >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL
          && v17 >= 0xFFFFF68000000000uLL
          || v17 >= 0xFFFFF6FB40000000uLL
          && v17 <= (((unsigned __int64)MmHighestUserAddress >> 18) & 0x3FFFFFF8) - 0x904C0000000LL
          || v17 >= 0xFFFFF6FB7DA00000uLL
          && v17 <= (((unsigned __int64)MmHighestUserAddress >> 27) & 0x1FFFF8) - 0x90482600000LL
          || v17 >= 0xFFFFF6FB7DBED000uLL
          && v17 <= 8 * (((unsigned __int64)MmHighestUserAddress >> 39) & 0x1FF) - 0x90482413000LL )
        {
          v49 |= 4uLL;
        }
        if ( (unsigned int)MI_SHOULD_PTE_BE_GLOBAL(v17) )
          v49 |= 0x100uLL;
        v52 = v49 & 0xFFFFFFFFFFFFFE7FuLL | ((unsigned __int64)(word_14034EC18 & 1) << 8) | 0x42;
        v61 = v52;
        *(_QWORD *)v17 = v52;
        if ( v50 <= v51 )
          MiWritePteShadow(v17, v52);
        v53 = ++*(_DWORD *)(a1 + 168);
        if ( v53 > *(_DWORD *)(a1 + 172) )
          *(_DWORD *)(a1 + 172) = v53;
        KeReleaseInStackQueuedSpinLock(&LockHandle);
        _InterlockedAnd64((volatile signed __int64 *)(v33 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        __writecr8((unsigned __int8)CurrentIrql);
        v10 = v55;
        v5 = v63;
        MiWritePageFileHash(a1, v7, v55, v63, v18);
      }
      LODWORD(v11) = a5;
      goto LABEL_81;
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    if ( v32 != -1LL )
    {
      v37 = 48 * v32 - 0x58000000000LL;
      *(_QWORD *)(v37 + 24) &= 0xC000000000000000uLL;
      *(_WORD *)(v37 + 32) = 0;
      MiInsertPageInFreeOrZeroedList(v32, 2);
      _InterlockedAnd64((volatile signed __int64 *)(v33 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8((unsigned __int8)v11);
      v38 = *(_QWORD *)(a1 + 216);
      if ( (__int16 *)v38 == MiSystemPartition )
      {
        MiReturnResidentAvailable(1uLL);
        _InterlockedExchangeAdd64(&qword_14034F8E8, 1uLL);
      }
      else
      {
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v38 + 5568), 1uLL);
      }
      MiReturnCommit(*(_QWORD *)(a1 + 216), 1LL);
      _InterlockedDecrement64(&qword_140350050);
    }
    v11 = a5;
    v5 = v63;
    v10 = v55;
LABEL_85:
    v12 = (KSPIN_LOCK *)(a1 + 192);
  }
  while ( (_DWORD)v11 );
  if ( v7 )
  {
    if ( (*(_BYTE *)(v7 + 10) & 1) != 0 )
      MmUnmapLockedPages(*(PVOID *)(v7 + 24), (PMDL)v7);
  }
}
