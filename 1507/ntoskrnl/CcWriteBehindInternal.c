/*
 * XREFs of CcWriteBehindInternal @ 0x1400414C0
 * Callers:
 *     CcWriteBehind @ 0x1400326B0 (CcWriteBehind.c)
 * Callees:
 *     CcScheduleLazyWriteScan @ 0x140030E38 (CcScheduleLazyWriteScan.c)
 *     CcFlushCachePriv @ 0x140040060 (CcFlushCachePriv.c)
 *     KeAcquireQueuedSpinLock @ 0x140041D50 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x140041DC0 (KeReleaseQueuedSpinLock.c)
 *     CcApplyLowIoPriorityToThread @ 0x140041E40 (CcApplyLowIoPriorityToThread.c)
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 *     ObFastReferenceObject @ 0x14004E430 (ObFastReferenceObject.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     CcGetFlushedValidData @ 0x140075C5C (CcGetFlushedValidData.c)
 *     MmIsWriteErrorFatal @ 0x1400823F0 (MmIsWriteErrorFatal.c)
 *     CcSlowReferenceSharedCacheMapFileObject @ 0x1400854E0 (CcSlowReferenceSharedCacheMapFileObject.c)
 *     CcDeleteSharedCacheMap @ 0x140086290 (CcDeleteSharedCacheMap.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x14009C420 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     CcSetValidData @ 0x1400CF694 (CcSetValidData.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     CcCancelMmWaitForUninitializeCacheMap @ 0x1401DC518 (CcCancelMmWaitForUninitializeCacheMap.c)
 *     CcMmLogLostDelayedWriteError @ 0x1401DD19C (CcMmLogLostDelayedWriteError.c)
 *     FsRtlAcquireFileExclusive @ 0x1404B32E0 (FsRtlAcquireFileExclusive.c)
 *     FsRtlReleaseFile @ 0x1404B32F0 (FsRtlReleaseFile.c)
 */

void __fastcall CcWriteBehindInternal(__int64 a1)
{
  __int64 v1; // rbx
  char *v2; // r12
  KIRQL v3; // al
  KIRQL v4; // dl
  bool v5; // di
  __int64 v6; // rdx
  volatile signed __int32 *v7; // rdi
  __int64 v8; // rsi
  unsigned __int8 CurrentIrql; // bp
  KIRQL v10; // r8
  __int64 v11; // rdx
  unsigned int v12; // esi
  SECTION_OBJECT_POINTERS *v13; // r15
  unsigned __int8 v14; // bp
  unsigned __int32 v15; // eax
  __int64 *v16; // r9
  unsigned int v17; // esi
  int v18; // esi
  int valid; // r14d
  __int64 v20; // rsi
  unsigned __int8 v21; // bp
  bool v22; // cc
  LARGE_INTEGER v23; // rcx
  bool v24; // dl
  bool v25; // al
  unsigned __int8 v26; // si
  char v27; // bp
  unsigned __int32 v28; // eax
  KIRQL v29; // al
  bool v30; // zf
  KIRQL v31; // di
  __int64 v32; // rdi
  KIRQL v33; // al
  int v34; // edx
  KIRQL v35; // si
  __int64 v36; // r8
  unsigned int v37; // ebp
  signed __int64 v38; // rax
  signed __int64 v39; // rtt
  unsigned int v40; // ecx
  unsigned int v41; // eax
  unsigned __int8 v42; // si
  unsigned __int32 v43; // eax
  __int64 v44; // rsi
  signed __int64 v45; // rax
  signed __int64 v46; // rtt
  __int64 v47; // rsi
  unsigned __int8 v48; // bp
  char v49; // r14
  signed __int64 v50; // rax
  signed __int64 v51; // rtt
  __int64 *v52; // rax
  __int64 *v53; // rdx
  __int64 **v54; // rcx
  __int64 **v55; // rcx
  char v56; // dl
  char v57; // cl
  __int64 v58; // rax
  __int64 v59; // rsi
  signed __int64 v60; // rax
  signed __int64 v61; // rtt
  __int64 *v62; // rdx
  __int64 *v63; // rax
  __int64 **v64; // rcx
  __int64 **v65; // rcx
  __int64 *v66; // rax
  __int64 *v67; // rdx
  __int64 **v68; // rcx
  __int64 **v69; // rcx
  __int64 *v70; // rdx
  __int64 *v71; // rax
  __int64 **v72; // rcx
  __int64 **v73; // rcx
  KIRQL v74; // al
  KIRQL v75; // di
  int v76; // eax
  __int64 *v77; // rdx
  __int64 *v78; // rax
  __int64 **v79; // rcx
  __int64 **v80; // rcx
  __int64 *v81; // rbx
  __int64 v82; // rcx
  __int64 **v83; // rax
  __int64 **v84; // rax
  char v85; // dl
  char v86; // cl
  bool v87; // r8
  __int64 *v88; // rdx
  __int64 *v89; // rax
  __int64 **v90; // rcx
  __int64 **v91; // rcx
  __int64 *v92; // rbx
  __int64 v93; // rcx
  __int64 **v94; // rax
  __int64 **v95; // rax
  LARGE_INTEGER FlushedValidData; // [rsp+30h] [rbp-58h] BYREF
  __int64 v97; // [rsp+38h] [rbp-50h] BYREF
  char v99; // [rsp+98h] [rbp+10h]
  char v100; // [rsp+A8h] [rbp+20h]

  v1 = *(_QWORD *)(a1 + 16);
  v2 = *(char **)(a1 + 24);
  v100 = *(_BYTE *)(a1 + 56);
  while ( 1 )
  {
    v99 = 0;
    v3 = KeAcquireQueuedSpinLock(5uLL);
    ++*(_DWORD *)(v1 + 4);
    KeReleaseQueuedSpinLock(5uLL, v3);
    CcApplyLowIoPriorityToThread(1LL, v1);
    v4 = KeAcquireQueuedSpinLock(8uLL);
    v5 = CcMaxNumberOfWriteBehindThreads >= (unsigned int)CcNumberWorkerThreads;
    KeReleaseQueuedSpinLock(8uLL, v4);
    if ( v5 )
      CcApplyLowIoPriorityToThread(0LL, v1);
    LOBYTE(v6) = 1;
    if ( !(**(unsigned __int8 (__fastcall ***)(_QWORD, __int64))(v1 + 208))(*(_QWORD *)(v1 + 216), v6) )
      break;
    v7 = (volatile signed __int32 *)(v1 + 280);
    v8 = KeAbPreAcquire(v1 + 280);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(1uLL);
    if ( !_interlockedbittestandreset((volatile signed __int32 *)(v1 + 280), 0) )
      ExpAcquireFastMutexContended(v1 + 280);
    if ( v8 )
      *(_BYTE *)(v8 + 26) |= 1u;
    *(_QWORD *)(v1 + 288) = KeGetCurrentThread();
    *(_DWORD *)(v1 + 328) = CurrentIrql;
    v10 = KeAcquireQueuedSpinLock(5uLL);
    if ( (*(_DWORD *)(v1 + 152) & 0x10000) != 0 )
      v99 = 1;
    v11 = *(_QWORD *)(v1 + 160);
    if ( v11 )
    {
      v40 = *(_DWORD *)(v11 + 8);
      v41 = CcPagesYetToWrite;
      *(_DWORD *)(v11 + 4) = v40;
      if ( v40 > v41 )
        *(_DWORD *)(v11 + 4) = v41;
      v12 = *(_DWORD *)(v11 + 4);
    }
    else
    {
      v12 = *(_DWORD *)(v1 + 192);
    }
    v13 = *(SECTION_OBJECT_POINTERS **)((*(_QWORD *)(v1 + 96) & 0xFFFFFFFFFFFFFFF0uLL) + 0x28);
    KeReleaseQueuedSpinLock(5uLL, v10);
    v14 = *(_BYTE *)(v1 + 328);
    *(_QWORD *)(v1 + 288) = 0LL;
    v15 = _InterlockedCompareExchange(v7, 1, 0);
    if ( v15 )
      ExpReleaseFastMutexContended(v1 + 280, v15);
    __writecr8(v14);
    KeAbPostRelease(v1 + 280);
    _InterlockedExchangeAdd((volatile signed __int32 *)(*(_QWORD *)(v1 + 504) + 196LL), v12);
    if ( (*(_DWORD *)(v1 + 152) & 0x1000000) != 0
      && (_InterlockedExchangeAdd((volatile signed __int32 *)(*(_QWORD *)(v1 + 504) + 200LL), v12),
          (*(_DWORD *)(v1 + 152) & 0x1000000) != 0) )
    {
      v16 = &v97;
      v97 = *(_QWORD *)(*(_QWORD *)(v1 + 240) + 112LL);
    }
    else
    {
      v16 = 0LL;
    }
    CcFlushCachePriv((__int64)v13, &CcNoDelay, 1u, (__int64)v16, 0, v2);
    CcApplyLowIoPriorityToThread(0LL, v1);
    v17 = -v12;
    _InterlockedExchangeAdd((volatile signed __int32 *)(*(_QWORD *)(v1 + 504) + 196LL), v17);
    if ( (*(_DWORD *)(v1 + 152) & 0x1000000) != 0 )
      _InterlockedExchangeAdd((volatile signed __int32 *)(*(_QWORD *)(v1 + 504) + 200LL), v17);
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(v1 + 208) + 8LL))(*(_QWORD *)(v1 + 216));
    v18 = *(_DWORD *)v2;
    if ( *(_DWORD *)v2 != -2147483626 && v18 < 0 )
    {
      if ( !*(_DWORD *)(v1 + 4) )
        KeBugCheckEx(0x34u, 0x1349uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
      v36 = ObFastReferenceObject(v1 + 96);
      if ( !v36 )
        v36 = CcSlowReferenceSharedCacheMapFileObject(v1);
      v37 = *(_DWORD *)(*(_QWORD *)(v36 + 8) + 52LL) & 0x10;
      _m_prefetchw((const void *)(v1 + 96));
      v38 = *(_QWORD *)(v1 + 96);
      if ( (v36 ^ (unsigned __int64)v38) >= 0xF )
      {
LABEL_101:
        ObDereferenceObjectDeferDeleteWithTag((PVOID)v36, 0x746C6644u);
      }
      else
      {
        while ( 1 )
        {
          v39 = v38;
          v38 = _InterlockedCompareExchange64((volatile signed __int64 *)(v1 + 96), v38 + 1, v38);
          if ( v39 == v38 )
            break;
          if ( (v36 ^ (unsigned __int64)v38) >= 0xF )
            goto LABEL_101;
        }
      }
      if ( (unsigned int)MmIsWriteErrorFatal(1LL, v37, (unsigned int)v18) )
      {
        v58 = ObFastReferenceObject(v1 + 96);
        v59 = v58;
        if ( !v58 )
          v59 = CcSlowReferenceSharedCacheMapFileObject(v1);
        CcMmLogLostDelayedWriteError(v59, *(unsigned int *)v2);
        _m_prefetchw((const void *)(v1 + 96));
        v60 = *(_QWORD *)(v1 + 96);
        if ( (v59 ^ (unsigned __int64)v60) >= 0xF )
        {
LABEL_125:
          ObDereferenceObjectDeferDeleteWithTag((PVOID)v59, 0x746C6644u);
        }
        else
        {
          while ( 1 )
          {
            v61 = v60;
            v60 = _InterlockedCompareExchange64((volatile signed __int64 *)(v1 + 96), v60 + 1, v60);
            if ( v61 == v60 )
              break;
            if ( (v59 ^ (unsigned __int64)v60) >= 0xF )
              goto LABEL_125;
          }
        }
      }
    }
    valid = 0;
    v20 = KeAbPreAcquire(v1 + 280);
    v21 = KeGetCurrentIrql();
    __writecr8(1uLL);
    if ( !_interlockedbittestandreset(v7, 0) )
      ExpAcquireFastMutexContended(v1 + 280);
    if ( v20 )
      *(_BYTE *)(v20 + 26) |= 1u;
    *(_QWORD *)(v1 + 288) = KeGetCurrentThread();
    *(_DWORD *)(v1 + 328) = v21;
    v22 = *(_DWORD *)(v1 + 4) <= 1u;
    v23 = *(LARGE_INTEGER *)(v1 + 40);
    FlushedValidData = v23;
    v24 = !v22 && CcDeferredWrites.Flink != &CcDeferredWrites;
    v25 = (*(_DWORD *)(v1 + 152) & 0x400) != 0
       && *(_QWORD *)(v1 + 48) >= v23.QuadPart
       && v23.QuadPart != 0x7FFFFFFFFFFFFFFFLL
       && *(_QWORD *)(v1 + 8);
    if ( !*(_DWORD *)(v1 + 516) && v25 && !v24 )
    {
      FlushedValidData = CcGetFlushedValidData(v13, 1u);
      if ( FlushedValidData.QuadPart >= *(_QWORD *)(v1 + 40) )
      {
        v42 = *(_BYTE *)(v1 + 328);
        *(_QWORD *)(v1 + 288) = 0LL;
        v43 = _InterlockedCompareExchange(v7, 1, 0);
        if ( v43 )
          ExpReleaseFastMutexContended(v1 + 280, v43);
        __writecr8(v42);
        KeAbPostRelease(v1 + 280);
        v44 = ObFastReferenceObject(v1 + 96);
        if ( !v44 )
          v44 = CcSlowReferenceSharedCacheMapFileObject(v1);
        valid = CcSetValidData(v44, &FlushedValidData);
        _m_prefetchw((const void *)(v1 + 96));
        v45 = *(_QWORD *)(v1 + 96);
        if ( (v44 ^ (unsigned __int64)v45) >= 0xF )
        {
LABEL_95:
          ObDereferenceObjectDeferDeleteWithTag((PVOID)v44, 0x746C6644u);
        }
        else
        {
          while ( 1 )
          {
            v46 = v45;
            v45 = _InterlockedCompareExchange64((volatile signed __int64 *)(v1 + 96), v45 + 1, v45);
            if ( v46 == v45 )
              break;
            if ( (v44 ^ (unsigned __int64)v45) >= 0xF )
              goto LABEL_95;
          }
        }
        v47 = KeAbPreAcquire(v1 + 280);
        v48 = KeGetCurrentIrql();
        __writecr8(1uLL);
        if ( !_interlockedbittestandreset(v7, 0) )
          ExpAcquireFastMutexContended(v1 + 280);
        if ( v47 )
          *(_BYTE *)(v47 + 26) |= 1u;
        *(_QWORD *)(v1 + 288) = KeGetCurrentThread();
        *(_DWORD *)(v1 + 328) = v48;
        if ( valid < 0 )
        {
          if ( valid != -1073741740 && valid != -1073741670 && valid != -2147483626 )
            FlushedValidData = *(LARGE_INTEGER *)(v1 + 48);
        }
        else
        {
          *(LARGE_INTEGER *)(v1 + 40) = FlushedValidData;
        }
      }
    }
    v26 = *(_BYTE *)(v1 + 328);
    *(_QWORD *)(v1 + 288) = 0LL;
    v27 = 1;
    v28 = _InterlockedCompareExchange(v7, 1, 0);
    if ( v28 )
      ExpReleaseFastMutexContended(v1 + 280, v28);
    __writecr8(v26);
    KeAbPostRelease(v1 + 280);
    v29 = KeAcquireQueuedSpinLock(5uLL);
    v30 = (*(_DWORD *)(v1 + 4))-- == 1;
    v31 = v29;
    if ( !v30 )
    {
      v49 = v99;
LABEL_85:
      v27 = 0;
      goto LABEL_86;
    }
    if ( valid != -1073741740 && valid != -2147483626 && valid != -1073741670 )
    {
      KeReleaseQueuedSpinLock(5uLL, v29);
      v32 = ObFastReferenceObject(v1 + 96);
      if ( !v32 )
        v32 = CcSlowReferenceSharedCacheMapFileObject(v1);
      FsRtlAcquireFileExclusive((PFILE_OBJECT)v32);
      v33 = KeAcquireQueuedSpinLock(5uLL);
      v34 = *(_DWORD *)(v1 + 4);
      v35 = v33;
      if ( !v34
        && (!*(_DWORD *)(v1 + 112)
         && (*(_QWORD *)(v1 + 40) == 0x7FFFFFFFFFFFFFFFLL
          || (*(_DWORD *)(v1 + 152) & 0x400) == 0
          || FlushedValidData.QuadPart >= *(_QWORD *)(v1 + 48))
         || !*(_QWORD *)(v1 + 8) && (*(_DWORD *)(v1 + 152) & 4) == 0) )
      {
        CcDeleteSharedCacheMap(v1, v33, 1LL, v32);
        *((_QWORD *)v2 + 1) = 0LL;
LABEL_43:
        if ( !v100 )
          return;
LABEL_83:
        KeSetEvent((PRKEVENT)(a1 + 32), 0, 0);
        return;
      }
      if ( *(_DWORD *)(v1 + 112) )
      {
        v49 = v99;
        if ( v99 )
          CcCancelMmWaitForUninitializeCacheMap(v1);
LABEL_79:
        v27 = 0;
      }
      else
      {
        if ( v34 )
        {
          v49 = v99;
          goto LABEL_79;
        }
        if ( (*(_DWORD *)(v1 + 152) & 0x3000000) != 0 )
        {
          v62 = *(__int64 **)(v1 + 120);
          v63 = (__int64 *)(v1 + 120);
          v64 = *(__int64 ***)(v1 + 128);
          if ( v62[1] != v1 + 120 || *v64 != v63 )
            __fastfail(3u);
          *v64 = v62;
          v62[1] = (__int64)v64;
          v65 = (__int64 **)qword_14034DE38;
          *v63 = (__int64)&CcDirtySharedCacheMapWithLogHandleList;
          *(_QWORD *)(v1 + 128) = v65;
          if ( *v65 != &CcDirtySharedCacheMapWithLogHandleList )
            __fastfail(3u);
          *v65 = v63;
          qword_14034DE38 = v1 + 120;
        }
        v66 = (__int64 *)(v1 + 136);
        v67 = *(__int64 **)(v1 + 136);
        v68 = *(__int64 ***)(v1 + 144);
        if ( v67[1] != v1 + 136 || *v68 != v66 )
          __fastfail(3u);
        *v68 = v67;
        v67[1] = (__int64)v68;
        v69 = (__int64 **)qword_14034DE68;
        *v66 = (__int64)&CcLazyWriterCursor;
        *(_QWORD *)(v1 + 144) = v69;
        if ( *v69 != &CcLazyWriterCursor )
          __fastfail(3u);
        v49 = v99;
        *v69 = v66;
        qword_14034DE68 = v1 + 136;
      }
      KeReleaseQueuedSpinLock(5uLL, v35);
      FsRtlReleaseFile((PFILE_OBJECT)v32);
      _m_prefetchw((const void *)(v1 + 96));
      v50 = *(_QWORD *)(v1 + 96);
      if ( (v32 ^ (unsigned __int64)v50) >= 0xF )
      {
LABEL_96:
        ObDereferenceObjectDeferDeleteWithTag((PVOID)v32, 0x746C6644u);
      }
      else
      {
        while ( 1 )
        {
          v51 = v50;
          v50 = _InterlockedCompareExchange64((volatile signed __int64 *)(v1 + 96), v50 + 1, v50);
          if ( v51 == v50 )
            break;
          if ( (v32 ^ (unsigned __int64)v50) >= 0xF )
            goto LABEL_96;
        }
      }
      v31 = KeAcquireQueuedSpinLock(5uLL);
      goto LABEL_86;
    }
    v49 = v99;
    if ( v99 )
      CcCancelMmWaitForUninitializeCacheMap(v1);
    if ( *(_DWORD *)(v1 + 112) )
      goto LABEL_85;
    if ( (*(_DWORD *)(v1 + 152) & 0x3000000) != 0 )
    {
      v70 = *(__int64 **)(v1 + 120);
      v71 = (__int64 *)(v1 + 120);
      v72 = *(__int64 ***)(v1 + 128);
      if ( v70[1] != v1 + 120 || *v72 != v71 )
        __fastfail(3u);
      *v72 = v70;
      v70[1] = (__int64)v72;
      v73 = (__int64 **)qword_14034DE38;
      *v71 = (__int64)&CcDirtySharedCacheMapWithLogHandleList;
      *(_QWORD *)(v1 + 128) = v73;
      if ( *v73 != &CcDirtySharedCacheMapWithLogHandleList )
        __fastfail(3u);
      *v73 = v71;
      qword_14034DE38 = v1 + 120;
    }
    v52 = (__int64 *)(v1 + 136);
    v53 = *(__int64 **)(v1 + 136);
    v54 = *(__int64 ***)(v1 + 144);
    if ( v53[1] != v1 + 136 || *v54 != v52 )
      __fastfail(3u);
    *v54 = v53;
    v53[1] = (__int64)v54;
    v55 = (__int64 **)qword_14034DE68;
    *v52 = (__int64)&CcLazyWriterCursor;
    *(_QWORD *)(v1 + 144) = v55;
    if ( *v55 != &CcLazyWriterCursor )
      __fastfail(3u);
    *v55 = v52;
    qword_14034DE68 = v1 + 136;
LABEL_86:
    if ( (*(_DWORD *)(v1 + 152) & 0x10000) == 0 || v49 )
    {
      if ( *((_QWORD *)v2 + 1) != 35422LL )
        *(_DWORD *)(v1 + 152) &= ~0x20u;
      if ( v27 )
      {
        byte_14034E041 = 1;
        if ( (*(_DWORD *)(v1 + 152) & 0x10000) != 0 )
        {
          v56 = 1;
          v57 = 1;
        }
        else
        {
          v56 = 0;
          v57 = 0;
        }
        CcScheduleLazyWriteScan(v57, v56);
      }
      KeReleaseQueuedSpinLock(5uLL, v31);
      goto LABEL_43;
    }
    KeReleaseQueuedSpinLock(5uLL, v31);
  }
  CcApplyLowIoPriorityToThread(0LL, v1);
  v74 = KeAcquireQueuedSpinLock(5uLL);
  *(_DWORD *)(v1 + 152) &= ~0x20u;
  v75 = v74;
  if ( (*(_DWORD *)(v1 + 152) & 0x10000) != 0 )
    CcCancelMmWaitForUninitializeCacheMap(v1);
  v30 = (*(_DWORD *)(v1 + 4))-- == 1;
  if ( v30 )
  {
    byte_14034E041 = 1;
    v76 = *(_DWORD *)(v1 + 152);
    if ( (v76 & 0x10000) != 0 )
    {
      if ( !*(_DWORD *)(v1 + 112) )
      {
        if ( (v76 & 0x3000000) != 0 )
        {
          v77 = *(__int64 **)(v1 + 120);
          v78 = (__int64 *)(v1 + 120);
          v79 = *(__int64 ***)(v1 + 128);
          if ( v77[1] != v1 + 120 || *v79 != v78 )
            __fastfail(3u);
          *v79 = v77;
          v77[1] = (__int64)v79;
          v80 = (__int64 **)qword_14034DE38;
          *v78 = (__int64)&CcDirtySharedCacheMapWithLogHandleList;
          *(_QWORD *)(v1 + 128) = v80;
          if ( *v80 != &CcDirtySharedCacheMapWithLogHandleList )
            __fastfail(3u);
          *v80 = v78;
          qword_14034DE38 = v1 + 120;
        }
        v81 = (__int64 *)(v1 + 136);
        v82 = *v81;
        v83 = (__int64 **)v81[1];
        if ( *(__int64 **)(*v81 + 8) != v81 || *v83 != v81 )
          __fastfail(3u);
        *v83 = (__int64 *)v82;
        *(_QWORD *)(v82 + 8) = v83;
        v84 = (__int64 **)qword_14034DE68;
        *v81 = (__int64)&CcLazyWriterCursor;
        v81[1] = (__int64)v84;
        if ( *v84 != &CcLazyWriterCursor )
          __fastfail(3u);
        *v84 = v81;
        qword_14034DE68 = (__int64)v81;
      }
      v85 = 1;
      v86 = 1;
      goto LABEL_172;
    }
    if ( !*(_DWORD *)(v1 + 112) && (v76 & 0x20) == 0 )
    {
      v87 = *(_QWORD *)(v1 + 272) != 0LL;
      if ( (v76 & 0x3000000) != 0 )
      {
        v88 = *(__int64 **)(v1 + 120);
        v89 = (__int64 *)(v1 + 120);
        v90 = *(__int64 ***)(v1 + 128);
        if ( v88[1] != v1 + 120 || *v90 != v89 )
          __fastfail(3u);
        *v90 = v88;
        v88[1] = (__int64)v90;
        v91 = (__int64 **)qword_14034DE38;
        *v89 = (__int64)&CcDirtySharedCacheMapWithLogHandleList;
        *(_QWORD *)(v1 + 128) = v91;
        if ( *v91 != &CcDirtySharedCacheMapWithLogHandleList )
          __fastfail(3u);
        *v91 = v89;
        qword_14034DE38 = v1 + 120;
      }
      v92 = (__int64 *)(v1 + 136);
      v93 = *v92;
      v94 = (__int64 **)v92[1];
      if ( *(__int64 **)(*v92 + 8) != v92 || *v94 != v92 )
        __fastfail(3u);
      *v94 = (__int64 *)v93;
      *(_QWORD *)(v93 + 8) = v94;
      v95 = (__int64 **)qword_14034DE68;
      *v92 = (__int64)&CcLazyWriterCursor;
      v92[1] = (__int64)v95;
      if ( *v95 != &CcLazyWriterCursor )
        __fastfail(3u);
      *v95 = v92;
      v85 = 0;
      qword_14034DE68 = (__int64)v92;
      v86 = v87;
LABEL_172:
      CcScheduleLazyWriteScan(v86, v85);
    }
  }
  KeReleaseQueuedSpinLock(5uLL, v75);
  *(_DWORD *)v2 = -1073741740;
  if ( v100 )
    goto LABEL_83;
}
