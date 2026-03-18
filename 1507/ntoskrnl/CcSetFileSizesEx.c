/*
 * XREFs of CcSetFileSizesEx @ 0x140078B30
 * Callers:
 *     CcSetFileSizes @ 0x140078B24 (CcSetFileSizes.c)
 * Callees:
 *     RtlRaiseStatus @ 0x14001BB3C (RtlRaiseStatus.c)
 *     CcScheduleLazyWriteScan @ 0x140030E38 (CcScheduleLazyWriteScan.c)
 *     KeAcquireQueuedSpinLock @ 0x140041D50 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x140041DC0 (KeReleaseQueuedSpinLock.c)
 *     KxWaitForLockOwnerShip @ 0x140042D90 (KxWaitForLockOwnerShip.c)
 *     KxWaitForLockChainValid @ 0x14006D660 (KxWaitForLockChainValid.c)
 *     CcExtendVacbArray @ 0x140078038 (CcExtendVacbArray.c)
 *     CcPurgeAndClearCacheSection @ 0x140078F1C (CcPurgeAndClearCacheSection.c)
 *     CcPurgeCacheSection @ 0x14008322C (CcPurgeCacheSection.c)
 *     MmFlushSection @ 0x140085220 (MmFlushSection.c)
 *     CcUnmapVacbArray @ 0x140086690 (CcUnmapVacbArray.c)
 *     CcDeleteMbcb @ 0x1400F1CB4 (CcDeleteMbcb.c)
 *     FsRtlIsNtstatusExpected @ 0x140128CBC (FsRtlIsNtstatusExpected.c)
 *     CcDeleteBcbs @ 0x140139D58 (CcDeleteBcbs.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x14017E064 (KiReleaseQueuedSpinLockInstrumented.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140200B54 (KiAcquireQueuedSpinLockInstrumented.c)
 *     MmExtendSection @ 0x1404B096C (MmExtendSection.c)
 */

NTSTATUS __stdcall CcSetFileSizesEx(PFILE_OBJECT FileObject, PCC_FILE_SIZES FileSizes)
{
  NTSTATUS v2; // ebp
  LARGE_INTEGER ValidDataLength; // rdi
  NTSTATUS v5; // r14d
  unsigned __int8 CurrentIrql; // r12
  void *ArbitraryUserPointer; // rcx
  volatile __int64 *v8; // r8
  __int64 v9; // rcx
  _QWORD *v10; // rdx
  LARGE_INTEGER *SharedCacheMap; // rsi
  __int64 v12; // rbx
  LARGE_INTEGER v13; // rax
  LARGE_INTEGER v14; // rbx
  bool v15; // zf
  volatile signed __int64 **v16; // rbx
  __int64 v17; // rax
  NTSTATUS result; // eax
  ULONG v19; // ecx
  __int64 *v20; // rsi
  __int64 v21; // rcx
  __int64 **v22; // rax
  __int64 **v23; // rax
  char v24; // dl
  char v25; // cl
  NTSTATUS v26; // eax
  LARGE_INTEGER v27; // rcx
  NTSTATUS v28; // eax
  NTSTATUS v29; // ebx
  KIRQL v30; // al
  int v31; // r9d
  ULONG LowPart; // eax
  LARGE_INTEGER v33; // rdx
  __int64 *v34; // rax
  __int64 **v35; // rcx
  __int64 **v36; // rcx
  __int64 *v37; // rsi
  __int64 v38; // rcx
  __int64 **v39; // rax
  __int64 **v40; // rax
  char v41; // r8
  LARGE_INTEGER v42; // rdx
  __int64 *v43; // rax
  __int64 **v44; // rcx
  __int64 **v45; // rcx
  __int64 *v46; // rsi
  __int64 v47; // rcx
  __int64 **v48; // rax
  __int64 **v49; // rax
  LARGE_INTEGER v50; // rdx
  __int64 *v51; // rax
  __int64 **v52; // rcx
  __int64 **v53; // rcx
  __int64 *v54; // rsi
  __int64 v55; // rcx
  __int64 **v56; // rax
  __int64 **v57; // rax
  bool v58; // r8
  LARGE_INTEGER v59; // rdx
  __int64 *v60; // rax
  __int64 **v61; // rcx
  __int64 **v62; // rcx
  NTSTATUS v63[4]; // [rsp+30h] [rbp-48h] BYREF
  void *retaddr; // [rsp+78h] [rbp+0h]
  LARGE_INTEGER FileOffset; // [rsp+80h] [rbp+8h] BYREF
  __int64 QuadPart; // [rsp+88h] [rbp+10h] BYREF

  v2 = 0;
  ValidDataLength = FileSizes->ValidDataLength;
  QuadPart = FileSizes->AllocationSize.QuadPart;
  v5 = 0;
  FileOffset = FileSizes->FileSize;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  ArbitraryUserPointer = KeGetPcr()->NtTib.ArbitraryUserPointer;
  v8 = (volatile __int64 *)*((_QWORD *)ArbitraryUserPointer + 11);
  v9 = (__int64)ArbitraryUserPointer + 80;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(v9, v8);
  }
  else
  {
    v10 = (_QWORD *)_InterlockedExchange64(v8, v9);
    if ( v10 )
      KxWaitForLockOwnerShip(v9, v10);
  }
  SharedCacheMap = (LARGE_INTEGER *)FileObject->SectionObjectPointer->SharedCacheMap;
  if ( SharedCacheMap && SharedCacheMap[21].QuadPart )
  {
    v12 = QuadPart;
    if ( QuadPart > SharedCacheMap[4].QuadPart )
    {
      ++SharedCacheMap->HighPart;
      KeReleaseQueuedSpinLock(5uLL, CurrentIrql);
      v27 = SharedCacheMap[21];
      QuadPart = (v12 + 0xFFFFF) & 0xFFFFFFFFFFF00000uLL;
      v28 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))MmExtendSection)(
              (LARGE_INTEGER)v27.QuadPart,
              &QuadPart,
              1LL);
      v29 = v28;
      if ( v28 < 0 )
      {
        if ( !FsRtlIsNtstatusExpected(v28) )
          v29 = -1073741588;
      }
      else
      {
        v29 = CcExtendVacbArray((__int64)SharedCacheMap, QuadPart);
      }
      v30 = KeAcquireQueuedSpinLock(5uLL);
      v15 = SharedCacheMap->HighPart-- == 1;
      CurrentIrql = v30;
      if ( v15 )
      {
        byte_14034E041 = 1;
        LowPart = SharedCacheMap[19].LowPart;
        if ( (LowPart & 0x10000) != 0 )
        {
          if ( !SharedCacheMap[14].LowPart )
          {
            if ( (LowPart & 0x3000000) != 0 )
            {
              v33 = SharedCacheMap[15];
              v34 = (__int64 *)&SharedCacheMap[15];
              v35 = (__int64 **)SharedCacheMap[16].QuadPart;
              if ( *(LARGE_INTEGER **)(v33.QuadPart + 8) != &SharedCacheMap[15] || *v35 != v34 )
                __fastfail(3u);
              *v35 = (__int64 *)v33.QuadPart;
              *(_QWORD *)(v33.QuadPart + 8) = v35;
              v36 = (__int64 **)qword_14034DE38;
              *v34 = (__int64)&CcDirtySharedCacheMapWithLogHandleList;
              SharedCacheMap[16].QuadPart = (LONGLONG)v36;
              if ( *v36 != &CcDirtySharedCacheMapWithLogHandleList )
                __fastfail(3u);
              *v36 = v34;
              qword_14034DE38 = (__int64)&SharedCacheMap[15];
            }
            v37 = (__int64 *)&SharedCacheMap[17];
            v38 = *v37;
            v39 = (__int64 **)v37[1];
            if ( *(__int64 **)(*v37 + 8) != v37 || *v39 != v37 )
              __fastfail(3u);
            *v39 = (__int64 *)v38;
            *(_QWORD *)(v38 + 8) = v39;
            v40 = (__int64 **)qword_14034DE68;
            *v37 = (__int64)&CcLazyWriterCursor;
            v37[1] = (__int64)v40;
            if ( *v40 != &CcLazyWriterCursor )
              __fastfail(3u);
            *v40 = v37;
            qword_14034DE68 = (__int64)v37;
          }
          CcScheduleLazyWriteScan(1, 1);
        }
        else if ( !SharedCacheMap[14].LowPart && (LowPart & 0x20) == 0 )
        {
          v41 = SharedCacheMap[34].QuadPart != 0;
          if ( (LowPart & 0x2000000) != 0 || (LowPart & 0x1000000) != 0 )
          {
            v42 = SharedCacheMap[15];
            v43 = (__int64 *)&SharedCacheMap[15];
            v44 = (__int64 **)SharedCacheMap[16].QuadPart;
            if ( *(LARGE_INTEGER **)(v42.QuadPart + 8) != &SharedCacheMap[15] || *v44 != v43 )
              __fastfail(3u);
            *v44 = (__int64 *)v42.QuadPart;
            *(_QWORD *)(v42.QuadPart + 8) = v44;
            v45 = (__int64 **)qword_14034DE38;
            *v43 = (__int64)&CcDirtySharedCacheMapWithLogHandleList;
            SharedCacheMap[16].QuadPart = (LONGLONG)v45;
            if ( *v45 != &CcDirtySharedCacheMapWithLogHandleList )
              __fastfail(3u);
            *v45 = v43;
            qword_14034DE38 = (__int64)&SharedCacheMap[15];
          }
          v46 = (__int64 *)&SharedCacheMap[17];
          v47 = *v46;
          v48 = (__int64 **)v46[1];
          if ( *(__int64 **)(*v46 + 8) != v46 || *v48 != v46 )
            __fastfail(3u);
          *v48 = (__int64 *)v47;
          *(_QWORD *)(v47 + 8) = v48;
          v49 = (__int64 **)qword_14034DE68;
          *v46 = (__int64)&CcLazyWriterCursor;
          v46[1] = (__int64)v49;
          if ( *v49 != &CcLazyWriterCursor )
            __fastfail(3u);
          *v49 = v46;
          qword_14034DE68 = (__int64)v46;
          CcScheduleLazyWriteScan(v41, 0);
        }
      }
      if ( v29 < 0 )
      {
        KeReleaseQueuedSpinLock(5uLL, CurrentIrql);
        RtlRaiseStatus(v29);
      }
      SharedCacheMap = (LARGE_INTEGER *)FileObject->SectionObjectPointer->SharedCacheMap;
      if ( !SharedCacheMap )
      {
        KeReleaseQueuedSpinLock(5uLL, CurrentIrql);
        return 0;
      }
    }
    ++SharedCacheMap->HighPart;
    v13 = SharedCacheMap[5];
    v14 = FileOffset;
    if ( v13.QuadPart != 0x7FFFFFFFFFFFFFFFLL )
    {
      if ( FileOffset.QuadPart < v13.QuadPart )
        SharedCacheMap[5] = FileOffset;
      SharedCacheMap[6] = ValidDataLength;
    }
    if ( v14.QuadPart < SharedCacheMap[1].QuadPart && (SharedCacheMap[19].LowPart & 4) == 0 )
    {
      KeReleaseQueuedSpinLock(5uLL, CurrentIrql);
      if ( (unsigned __int8)CcUnmapVacbArray((_DWORD)SharedCacheMap, (unsigned int)&FileOffset, 0, 0, 0) )
      {
        if ( !v14.QuadPart )
        {
          if ( SharedCacheMap[20].QuadPart )
            CcDeleteMbcb(SharedCacheMap);
          if ( (LARGE_INTEGER *)SharedCacheMap[2].QuadPart != &SharedCacheMap[2] )
            CcDeleteBcbs(SharedCacheMap);
        }
        v26 = CcPurgeAndClearCacheSection(SharedCacheMap, &FileOffset);
        v14 = FileOffset;
        v5 = v26;
      }
      CurrentIrql = KeAcquireQueuedSpinLock(5uLL);
    }
    v15 = SharedCacheMap->HighPart-- == 1;
    SharedCacheMap[1] = v14;
    if ( !v15 )
    {
LABEL_13:
      v16 = (volatile signed __int64 **)((char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 80);
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      {
        KiReleaseQueuedSpinLockInstrumented(v16, retaddr);
        goto LABEL_16;
      }
      _m_prefetchw(v16);
      v17 = (__int64)*v16;
      if ( !*v16 )
      {
        if ( v16 == (volatile signed __int64 **)_InterlockedCompareExchange64(v16[1], 0LL, (signed __int64)v16) )
        {
LABEL_16:
          __writecr8(CurrentIrql);
          return v5;
        }
        v17 = KxWaitForLockChainValid((__int64 *)v16);
      }
      *v16 = 0LL;
      _InterlockedXor64((volatile signed __int64 *)(v17 + 8), 1uLL);
      goto LABEL_16;
    }
    byte_14034E041 = 1;
    v19 = SharedCacheMap[19].LowPart;
    if ( (v19 & 0x10000) != 0 )
    {
      if ( !SharedCacheMap[14].LowPart )
      {
        if ( (v19 & 0x2000000) != 0 || (v19 & 0x1000000) != 0 )
        {
          v50 = SharedCacheMap[15];
          v51 = (__int64 *)&SharedCacheMap[15];
          v52 = (__int64 **)SharedCacheMap[16].QuadPart;
          if ( *(LARGE_INTEGER **)(v50.QuadPart + 8) != &SharedCacheMap[15] || *v52 != v51 )
            __fastfail(3u);
          *v52 = (__int64 *)v50.QuadPart;
          *(_QWORD *)(v50.QuadPart + 8) = v52;
          v53 = (__int64 **)qword_14034DE38;
          *v51 = (__int64)&CcDirtySharedCacheMapWithLogHandleList;
          SharedCacheMap[16].QuadPart = (LONGLONG)v53;
          if ( *v53 != &CcDirtySharedCacheMapWithLogHandleList )
            __fastfail(3u);
          *v53 = v51;
          qword_14034DE38 = (__int64)&SharedCacheMap[15];
        }
        v54 = (__int64 *)&SharedCacheMap[17];
        v55 = *v54;
        v56 = (__int64 **)v54[1];
        if ( *(__int64 **)(*v54 + 8) != v54 || *v56 != v54 )
          __fastfail(3u);
        *v56 = (__int64 *)v55;
        *(_QWORD *)(v55 + 8) = v56;
        v57 = (__int64 **)qword_14034DE68;
        *v54 = (__int64)&CcLazyWriterCursor;
        v54[1] = (__int64)v57;
        if ( *v57 != &CcLazyWriterCursor )
          __fastfail(3u);
        *v57 = v54;
        qword_14034DE68 = (__int64)v54;
      }
      v24 = 1;
      v25 = 1;
    }
    else
    {
      if ( SharedCacheMap[14].LowPart || (v19 & 0x20) != 0 )
        goto LABEL_13;
      v58 = SharedCacheMap[34].QuadPart != 0;
      if ( (v19 & 0x2000000) != 0 || (v19 & 0x1000000) != 0 )
      {
        v59 = SharedCacheMap[15];
        v60 = (__int64 *)&SharedCacheMap[15];
        v61 = (__int64 **)SharedCacheMap[16].QuadPart;
        if ( *(LARGE_INTEGER **)(v59.QuadPart + 8) != &SharedCacheMap[15] || *v61 != v60 )
          __fastfail(3u);
        *v61 = (__int64 *)v59.QuadPart;
        *(_QWORD *)(v59.QuadPart + 8) = v61;
        v62 = (__int64 **)qword_14034DE38;
        *v60 = (__int64)&CcDirtySharedCacheMapWithLogHandleList;
        SharedCacheMap[16].QuadPart = (LONGLONG)v62;
        if ( *v62 != &CcDirtySharedCacheMapWithLogHandleList )
          __fastfail(3u);
        *v62 = v60;
        qword_14034DE38 = (__int64)&SharedCacheMap[15];
      }
      v20 = (__int64 *)&SharedCacheMap[17];
      v21 = *v20;
      v22 = (__int64 **)v20[1];
      if ( *(__int64 **)(*v20 + 8) != v20 || *v22 != v20 )
        __fastfail(3u);
      *v22 = (__int64 *)v21;
      *(_QWORD *)(v21 + 8) = v22;
      v23 = (__int64 **)qword_14034DE68;
      *v20 = (__int64)&CcLazyWriterCursor;
      v20[1] = (__int64)v23;
      if ( *v23 != &CcLazyWriterCursor )
        __fastfail(3u);
      *v23 = v20;
      v24 = 0;
      qword_14034DE68 = (__int64)v20;
      v25 = v58;
    }
    CcScheduleLazyWriteScan(v25, v24);
    goto LABEL_13;
  }
  KeReleaseQueuedSpinLock(5uLL, CurrentIrql);
  if ( (FileOffset.LowPart & 0xFFF) == 0
    || (MmFlushSection(FileObject->SectionObjectPointer, (unsigned int)&FileOffset, 1, v31, (__int64)v63, 0),
        result = v63[0],
        v63[0] >= 0) )
  {
    if ( !CcPurgeCacheSection(FileObject->SectionObjectPointer, &FileOffset, 0, 0) )
      return -1073740747;
    return v2;
  }
  return result;
}
