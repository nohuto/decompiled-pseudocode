/*
 * XREFs of CcWriteBehindInternal @ 0x1400B0530
 * Callers:
 *     CcWriteBehind @ 0x140101160 (CcWriteBehind.c)
 * Callees:
 *     CcDeleteSharedCacheMap @ 0x14000D140 (CcDeleteSharedCacheMap.c)
 *     CcDereferenceSharedCacheMapFileObject @ 0x14000D4AC (CcDereferenceSharedCacheMapFileObject.c)
 *     CcReferenceSharedCacheMapFileObject @ 0x14000D4E4 (CcReferenceSharedCacheMapFileObject.c)
 *     CcSetValidData @ 0x14001AE4C (CcSetValidData.c)
 *     KeReleaseGuardedMutex @ 0x140020FB0 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14003D1D0 (ExAcquireFastMutex.c)
 *     KeSetEvent @ 0x1400875D0 (KeSetEvent.c)
 *     CcScheduleLazyWriteScan @ 0x1400AF9F0 (CcScheduleLazyWriteScan.c)
 *     CcInsertIntoDirtySharedCacheMapList @ 0x1400AFA68 (CcInsertIntoDirtySharedCacheMapList.c)
 *     CcFlushCachePriv @ 0x1400AFD30 (CcFlushCachePriv.c)
 *     KeAcquireQueuedSpinLock @ 0x1400B0A70 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1400B0AE0 (KeReleaseQueuedSpinLock.c)
 *     CcApplyLowIoPriorityToThread @ 0x1400B0B0C (CcApplyLowIoPriorityToThread.c)
 *     CcDecrementOpenCount @ 0x1400B0D78 (CcDecrementOpenCount.c)
 *     CcIsFatalWriteError @ 0x1400E4250 (CcIsFatalWriteError.c)
 *     CcGetFlushedValidData @ 0x1400E9118 (CcGetFlushedValidData.c)
 *     CcCancelMmWaitForUninitializeCacheMap @ 0x1401A8958 (CcCancelMmWaitForUninitializeCacheMap.c)
 *     CcMmLogLostDelayedWriteError @ 0x1401A9038 (CcMmLogLostDelayedWriteError.c)
 *     FsRtlAcquireFileExclusive @ 0x1403F9138 (FsRtlAcquireFileExclusive.c)
 *     FsRtlReleaseFile @ 0x1403F9150 (FsRtlReleaseFile.c)
 */

void __fastcall CcWriteBehindInternal(__int64 a1)
{
  __int64 v1; // rdi
  unsigned int *v3; // r15
  char v4; // r13
  KIRQL v5; // al
  KIRQL v6; // dl
  bool v7; // bl
  __int64 v8; // rdx
  KIRQL v9; // r8
  __int64 v10; // rdx
  unsigned int v11; // ebx
  SECTION_OBJECT_POINTERS *v12; // r12
  __int64 *v13; // r9
  unsigned int v14; // ebx
  int valid; // ebp
  bool v16; // cc
  LARGE_INTEGER FlushedValidData; // rbx
  bool v18; // cl
  bool v19; // al
  KIRQL v20; // al
  bool v21; // zf
  KIRQL v22; // si
  struct _FILE_OBJECT *v23; // rsi
  KIRQL v24; // al
  int v25; // edx
  KIRQL v26; // bp
  unsigned int v27; // ecx
  unsigned int v28; // eax
  struct _FILE_OBJECT *v29; // rbx
  char v30; // r12
  char v31; // bl
  unsigned __int64 v32; // rbx
  char v33; // dl
  char v34; // cl
  KIRQL v35; // al
  KIRQL v36; // bl
  char v37; // [rsp+80h] [rbp+8h]
  LARGE_INTEGER v38; // [rsp+90h] [rbp+18h] BYREF
  __int64 v39; // [rsp+98h] [rbp+20h] BYREF

  v1 = *(_QWORD *)(a1 + 16);
  v3 = *(unsigned int **)(a1 + 24);
  v4 = *(_BYTE *)(a1 + 56);
  while ( 1 )
  {
    v37 = 0;
    v5 = KeAcquireQueuedSpinLock(5uLL);
    ++*(_DWORD *)(v1 + 4);
    KeReleaseQueuedSpinLock(5uLL, v5);
    CcApplyLowIoPriorityToThread(1LL, v1);
    v6 = KeAcquireQueuedSpinLock(8uLL);
    v7 = CcMaxNumberOfWriteBehindThreads >= (unsigned int)CcNumberWorkerThreads;
    KeReleaseQueuedSpinLock(8uLL, v6);
    if ( v7 )
      CcApplyLowIoPriorityToThread(0LL, v1);
    LOBYTE(v8) = 1;
    if ( !(**(unsigned __int8 (__fastcall ***)(_QWORD, __int64))(v1 + 208))(*(_QWORD *)(v1 + 216), v8) )
      break;
    ExAcquireFastMutex((PFAST_MUTEX)(v1 + 280));
    v9 = KeAcquireQueuedSpinLock(5uLL);
    if ( (*(_DWORD *)(v1 + 152) & 0x10000) != 0 )
      v37 = 1;
    v10 = *(_QWORD *)(v1 + 160);
    if ( v10 )
    {
      v27 = *(_DWORD *)(v10 + 8);
      v28 = CcPagesYetToWrite;
      *(_DWORD *)(v10 + 4) = v27;
      if ( v27 > v28 )
        *(_DWORD *)(v10 + 4) = v28;
      v11 = *(_DWORD *)(v10 + 4);
    }
    else
    {
      v11 = *(_DWORD *)(v1 + 192);
    }
    v12 = *(SECTION_OBJECT_POINTERS **)((*(_QWORD *)(v1 + 96) & 0xFFFFFFFFFFFFFFF0uLL) + 0x28);
    KeReleaseQueuedSpinLock(5uLL, v9);
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v1 + 280));
    _InterlockedExchangeAdd((volatile signed __int32 *)(*(_QWORD *)(v1 + 504) + 196LL), v11);
    if ( (*(_DWORD *)(v1 + 152) & 0x1000000) != 0
      && (_InterlockedExchangeAdd((volatile signed __int32 *)(*(_QWORD *)(v1 + 504) + 200LL), v11),
          (*(_DWORD *)(v1 + 152) & 0x1000000) != 0) )
    {
      v13 = &v39;
      v39 = *(_QWORD *)(*(_QWORD *)(v1 + 240) + 112LL);
    }
    else
    {
      v13 = 0LL;
    }
    CcFlushCachePriv((__int64)v12, &CcNoDelay, 1u, v13, 0, v3);
    CcApplyLowIoPriorityToThread(0LL, v1);
    v14 = -v11;
    _InterlockedExchangeAdd((volatile signed __int32 *)(*(_QWORD *)(v1 + 504) + 196LL), v14);
    if ( (*(_DWORD *)(v1 + 152) & 0x1000000) != 0 )
      _InterlockedExchangeAdd((volatile signed __int32 *)(*(_QWORD *)(v1 + 504) + 200LL), v14);
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(v1 + 208) + 8LL))(*(_QWORD *)(v1 + 216));
    if ( *v3 != -2147483626 && (unsigned __int8)CcIsFatalWriteError(v1) )
    {
      v32 = CcReferenceSharedCacheMapFileObject(v1);
      CcMmLogLostDelayedWriteError(v32, *v3);
      CcDereferenceSharedCacheMapFileObject(v1, v32);
    }
    valid = 0;
    ExAcquireFastMutex((PFAST_MUTEX)(v1 + 280));
    v16 = *(_DWORD *)(v1 + 4) <= 1u;
    FlushedValidData = *(LARGE_INTEGER *)(v1 + 40);
    v38 = FlushedValidData;
    v18 = !v16 && CcDeferredWrites.Flink != &CcDeferredWrites;
    v19 = (*(_DWORD *)(v1 + 152) & 0x400) != 0
       && *(_QWORD *)(v1 + 48) >= FlushedValidData.QuadPart
       && FlushedValidData.QuadPart != 0x7FFFFFFFFFFFFFFFLL
       && *(_QWORD *)(v1 + 8);
    if ( !*(_DWORD *)(v1 + 516) && v19 && !v18 )
    {
      FlushedValidData = CcGetFlushedValidData(v12, 1u);
      v38 = FlushedValidData;
      if ( FlushedValidData.QuadPart >= *(_QWORD *)(v1 + 40) )
      {
        KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v1 + 280));
        v29 = (struct _FILE_OBJECT *)CcReferenceSharedCacheMapFileObject(v1);
        valid = CcSetValidData(v29, (__int64 *)&v38);
        CcDereferenceSharedCacheMapFileObject(v1, (unsigned __int64)v29);
        ExAcquireFastMutex((PFAST_MUTEX)(v1 + 280));
        if ( valid < 0 )
        {
          if ( valid == -1073741740 || valid == -1073741670 || valid == -2147483626 )
          {
            FlushedValidData = v38;
          }
          else
          {
            FlushedValidData = *(LARGE_INTEGER *)(v1 + 48);
            v38 = FlushedValidData;
          }
        }
        else
        {
          FlushedValidData = v38;
          *(LARGE_INTEGER *)(v1 + 40) = v38;
        }
      }
    }
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v1 + 280));
    v20 = KeAcquireQueuedSpinLock(5uLL);
    v21 = (*(_DWORD *)(v1 + 4))-- == 1;
    v22 = v20;
    if ( v21 )
    {
      if ( valid != -1073741740 && valid != -2147483626 && valid != -1073741670 )
      {
        KeReleaseQueuedSpinLock(5uLL, v20);
        v23 = (struct _FILE_OBJECT *)CcReferenceSharedCacheMapFileObject(v1);
        FsRtlAcquireFileExclusive(v23);
        v24 = KeAcquireQueuedSpinLock(5uLL);
        v25 = *(_DWORD *)(v1 + 4);
        v26 = v24;
        if ( !v25
          && (!*(_DWORD *)(v1 + 112)
           && (*(_QWORD *)(v1 + 40) == 0x7FFFFFFFFFFFFFFFLL
            || (*(_DWORD *)(v1 + 152) & 0x400) == 0
            || FlushedValidData.QuadPart >= *(_QWORD *)(v1 + 48))
           || !*(_QWORD *)(v1 + 8) && (*(_DWORD *)(v1 + 152) & 4) == 0) )
        {
          CcDeleteSharedCacheMap(v1, v24, 1, v23);
          *((_QWORD *)v3 + 1) = 0LL;
LABEL_29:
          if ( !v4 )
            return;
LABEL_35:
          KeSetEvent((PRKEVENT)(a1 + 32), 0, 0);
          return;
        }
        if ( *(_DWORD *)(v1 + 112) )
        {
          v30 = v37;
          if ( v37 )
            CcCancelMmWaitForUninitializeCacheMap(v1);
LABEL_59:
          v31 = 0;
        }
        else
        {
          if ( v25 )
          {
            v30 = v37;
            goto LABEL_59;
          }
          CcInsertIntoDirtySharedCacheMapList(v1);
          v30 = v37;
          v31 = 1;
        }
        KeReleaseQueuedSpinLock(5uLL, v26);
        FsRtlReleaseFile(v23);
        CcDereferenceSharedCacheMapFileObject(v1, (unsigned __int64)v23);
        v22 = KeAcquireQueuedSpinLock(5uLL);
        goto LABEL_49;
      }
      v30 = v37;
      if ( v37 )
        CcCancelMmWaitForUninitializeCacheMap(v1);
      if ( !*(_DWORD *)(v1 + 112) )
      {
        CcInsertIntoDirtySharedCacheMapList(v1);
        v31 = 1;
        goto LABEL_49;
      }
    }
    else
    {
      v30 = v37;
    }
    v31 = 0;
LABEL_49:
    if ( (*(_DWORD *)(v1 + 152) & 0x10000) == 0 || v30 )
    {
      if ( *((_QWORD *)v3 + 1) != 35422LL )
        *(_DWORD *)(v1 + 152) &= ~0x20u;
      if ( v31 )
      {
        byte_1402FDBA1 = 1;
        if ( (*(_DWORD *)(v1 + 152) & 0x10000) != 0 )
        {
          v33 = 1;
          v34 = 1;
        }
        else
        {
          v33 = 0;
          v34 = 0;
        }
        CcScheduleLazyWriteScan(v34, v33);
      }
      KeReleaseQueuedSpinLock(5uLL, v22);
      goto LABEL_29;
    }
    KeReleaseQueuedSpinLock(5uLL, v22);
  }
  CcApplyLowIoPriorityToThread(0LL, v1);
  v35 = KeAcquireQueuedSpinLock(5uLL);
  *(_DWORD *)(v1 + 152) &= ~0x20u;
  v36 = v35;
  if ( (*(_DWORD *)(v1 + 152) & 0x10000) != 0 )
    CcCancelMmWaitForUninitializeCacheMap(v1);
  CcDecrementOpenCount(v1);
  KeReleaseQueuedSpinLock(5uLL, v36);
  *v3 = -1073741740;
  if ( v4 )
    goto LABEL_35;
}
