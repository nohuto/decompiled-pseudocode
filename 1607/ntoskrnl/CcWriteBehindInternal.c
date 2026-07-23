/*
 * XREFs of CcWriteBehindInternal @ 0x1400E5DD0
 * Callers:
 *     CcWriteBehind @ 0x14007119C (CcWriteBehind.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x14000C5C0 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14002CC20 (ExAcquireFastMutex.c)
 *     KeSetEvent @ 0x140055E50 (KeSetEvent.c)
 *     CcScheduleLazyWriteScan @ 0x14007049C (CcScheduleLazyWriteScan.c)
 *     CcInsertIntoDirtySharedCacheMapList @ 0x140070520 (CcInsertIntoDirtySharedCacheMapList.c)
 *     CcApplyLowIoPriorityToThread @ 0x140071360 (CcApplyLowIoPriorityToThread.c)
 *     CcDecrementOpenCount @ 0x140073218 (CcDecrementOpenCount.c)
 *     CcIsFatalWriteError @ 0x14008E0DC (CcIsFatalWriteError.c)
 *     CcGetFlushedValidData @ 0x1400A7C58 (CcGetFlushedValidData.c)
 *     CcSetValidData @ 0x1400C3EC4 (CcSetValidData.c)
 *     CcDeleteSharedCacheMap @ 0x1400CABD4 (CcDeleteSharedCacheMap.c)
 *     CcDereferenceSharedCacheMapFileObject @ 0x1400CDB94 (CcDereferenceSharedCacheMapFileObject.c)
 *     CcReferenceSharedCacheMapFileObject @ 0x1400CDBEC (CcReferenceSharedCacheMapFileObject.c)
 *     KeAcquireQueuedSpinLock @ 0x1400E6BD0 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1400E6C40 (KeReleaseQueuedSpinLock.c)
 *     CcFlushCachePriv @ 0x1400E6CB0 (CcFlushCachePriv.c)
 *     CcCancelMmWaitForUninitializeCacheMap @ 0x1401B1274 (CcCancelMmWaitForUninitializeCacheMap.c)
 *     CcMmLogLostDelayedWriteError @ 0x1401B1AE0 (CcMmLogLostDelayedWriteError.c)
 *     FsRtlAcquireFileExclusive @ 0x14042CD18 (FsRtlAcquireFileExclusive.c)
 *     FsRtlReleaseFile @ 0x14042CD30 (FsRtlReleaseFile.c)
 */

void __fastcall CcWriteBehindInternal(__int64 a1)
{
  __int64 v1; // rdi
  unsigned int *v3; // r15
  KIRQL v4; // al
  KIRQL v5; // dl
  bool v6; // bl
  __int64 v7; // rdx
  int valid; // esi
  KIRQL v9; // dl
  bool v10; // r12
  __int64 v11; // rcx
  unsigned int v12; // ebx
  SECTION_OBJECT_POINTERS *v13; // rbp
  __int64 *v14; // r9
  unsigned int v15; // ebx
  __int64 v16; // r8
  __int64 v17; // rdx
  LARGE_INTEGER FlushedValidData; // rbx
  bool v19; // cl
  char v20; // al
  KIRQL v21; // al
  bool v22; // zf
  KIRQL v23; // bp
  struct _FILE_OBJECT *v24; // rsi
  KIRQL v25; // al
  int v26; // edx
  KIRQL v27; // bp
  struct _FILE_OBJECT *v28; // rbx
  char v29; // cl
  ULONG_PTR v30; // rbx
  char v31; // dl
  char v32; // cl
  KIRQL v33; // al
  KIRQL v34; // bl
  char v35; // [rsp+80h] [rbp+8h]
  char v36; // [rsp+88h] [rbp+10h]
  LARGE_INTEGER v37; // [rsp+90h] [rbp+18h] BYREF
  __int64 v38; // [rsp+98h] [rbp+20h] BYREF

  v1 = *(_QWORD *)(a1 + 16);
  v3 = *(unsigned int **)(a1 + 24);
  v36 = *(_BYTE *)(a1 + 56);
  while ( 1 )
  {
    v35 = 0;
    v4 = KeAcquireQueuedSpinLock(5uLL);
    ++*(_DWORD *)(v1 + 4);
    KeReleaseQueuedSpinLock(5uLL, v4);
    CcApplyLowIoPriorityToThread(1, (_DWORD *)v1);
    v5 = KeAcquireQueuedSpinLock(8uLL);
    v6 = CcMaxNumberOfWriteBehindThreads >= (unsigned int)CcNumberWorkerThreads;
    KeReleaseQueuedSpinLock(8uLL, v5);
    if ( v6 )
      CcApplyLowIoPriorityToThread(0, (_DWORD *)v1);
    LOBYTE(v7) = 1;
    if ( !(**(unsigned __int8 (__fastcall ***)(_QWORD, __int64))(v1 + 208))(*(_QWORD *)(v1 + 216), v7) )
      break;
    ExAcquireFastMutex((PFAST_MUTEX)(v1 + 280));
    valid = 0;
    v9 = KeAcquireQueuedSpinLock(5uLL);
    v10 = (*(_DWORD *)(v1 + 152) & 0x10000) != 0;
    v11 = *(_QWORD *)(v1 + 160);
    if ( v11 )
    {
      v12 = *(_DWORD *)(v11 + 8);
      if ( v12 > CcPagesYetToWrite )
        v12 = CcPagesYetToWrite;
      *(_DWORD *)(v11 + 4) = v12;
    }
    else
    {
      v12 = *(_DWORD *)(v1 + 192);
    }
    v13 = *(SECTION_OBJECT_POINTERS **)((*(_QWORD *)(v1 + 96) & 0xFFFFFFFFFFFFFFF0uLL) + 0x28);
    KeReleaseQueuedSpinLock(5uLL, v9);
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v1 + 280));
    _InterlockedExchangeAdd((volatile signed __int32 *)(*(_QWORD *)(v1 + 504) + 196LL), v12);
    if ( (*(_DWORD *)(v1 + 152) & 0x1000000) != 0
      && (_InterlockedExchangeAdd((volatile signed __int32 *)(*(_QWORD *)(v1 + 504) + 200LL), v12),
          (*(_DWORD *)(v1 + 152) & 0x1000000) != 0) )
    {
      v14 = &v38;
      v38 = *(_QWORD *)(*(_QWORD *)(v1 + 240) + 112LL);
    }
    else
    {
      LODWORD(v14) = 0;
    }
    CcFlushCachePriv((_DWORD)v13, (unsigned int)&CcNoDelay, 1, (_DWORD)v14, 0, (__int64)v3);
    CcApplyLowIoPriorityToThread(0, (_DWORD *)v1);
    v15 = -v12;
    _InterlockedExchangeAdd((volatile signed __int32 *)(*(_QWORD *)(v1 + 504) + 196LL), v15);
    if ( (*(_DWORD *)(v1 + 152) & 0x1000000) != 0 )
      _InterlockedExchangeAdd((volatile signed __int32 *)(*(_QWORD *)(v1 + 504) + 200LL), v15);
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(v1 + 208) + 8LL))(*(_QWORD *)(v1 + 216));
    v17 = *v3;
    if ( (_DWORD)v17 != -2147483626 && CcIsFatalWriteError(v1, v17, v16) )
    {
      v30 = CcReferenceSharedCacheMapFileObject(v1);
      CcMmLogLostDelayedWriteError(v30, *v3);
      CcDereferenceSharedCacheMapFileObject(v1, v30);
    }
    ExAcquireFastMutex((PFAST_MUTEX)(v1 + 280));
    FlushedValidData = *(LARGE_INTEGER *)(v1 + 40);
    v37 = FlushedValidData;
    v19 = *(_DWORD *)(v1 + 4) > 1u && CcDeferredWrites.Flink != &CcDeferredWrites;
    if ( (*(_DWORD *)(v1 + 152) & 0x400) == 0
      || *(_QWORD *)(v1 + 48) < FlushedValidData.QuadPart
      || FlushedValidData.QuadPart == 0x7FFFFFFFFFFFFFFFLL
      || (v20 = 1, !*(_QWORD *)(v1 + 8)) )
    {
      v20 = 0;
    }
    if ( !*(_DWORD *)(v1 + 516) )
    {
      if ( v20 )
      {
        if ( !v19 )
        {
          FlushedValidData = CcGetFlushedValidData(v13, 1u);
          v37 = FlushedValidData;
          if ( FlushedValidData.QuadPart >= *(_QWORD *)(v1 + 40) )
          {
            KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v1 + 280));
            v28 = (struct _FILE_OBJECT *)CcReferenceSharedCacheMapFileObject(v1);
            valid = CcSetValidData(v28, (__int64 *)&v37);
            CcDereferenceSharedCacheMapFileObject(v1, (unsigned __int64)v28);
            ExAcquireFastMutex((PFAST_MUTEX)(v1 + 280));
            if ( valid < 0 )
            {
              if ( valid == -1073741740 || valid == -1073741670 || valid == -2147483626 )
              {
                FlushedValidData = v37;
              }
              else
              {
                FlushedValidData = *(LARGE_INTEGER *)(v1 + 48);
                v37 = FlushedValidData;
              }
            }
            else
            {
              FlushedValidData = v37;
              *(LARGE_INTEGER *)(v1 + 40) = v37;
            }
          }
        }
      }
    }
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v1 + 280));
    v21 = KeAcquireQueuedSpinLock(5uLL);
    v22 = (*(_DWORD *)(v1 + 4))-- == 1;
    v23 = v21;
    if ( v22 )
    {
      if ( valid == -1073741740 || valid == -2147483626 || valid == -1073741670 )
      {
        if ( v10 )
          CcCancelMmWaitForUninitializeCacheMap(v1);
        if ( !*(_DWORD *)(v1 + 112) )
        {
          CcInsertIntoDirtySharedCacheMapList(v1);
          v29 = 1;
          goto LABEL_45;
        }
      }
      else
      {
        KeReleaseQueuedSpinLock(5uLL, v21);
        v24 = (struct _FILE_OBJECT *)CcReferenceSharedCacheMapFileObject(v1);
        FsRtlAcquireFileExclusive(v24);
        v25 = KeAcquireQueuedSpinLock(5uLL);
        v26 = *(_DWORD *)(v1 + 4);
        v27 = v25;
        if ( !v26
          && (!*(_DWORD *)(v1 + 112)
           && (*(_QWORD *)(v1 + 40) == 0x7FFFFFFFFFFFFFFFLL
            || (*(_DWORD *)(v1 + 152) & 0x400) == 0
            || FlushedValidData.QuadPart >= *(_QWORD *)(v1 + 48))
           || !*(_QWORD *)(v1 + 8) && (*(_DWORD *)(v1 + 152) & 4) == 0) )
        {
          CcDeleteSharedCacheMap(v1, v25, 1, v24);
          *((_QWORD *)v3 + 1) = 0LL;
          goto LABEL_27;
        }
        if ( *(_DWORD *)(v1 + 112) )
        {
          if ( v10 )
            CcCancelMmWaitForUninitializeCacheMap(v1);
        }
        else if ( !v26 )
        {
          CcInsertIntoDirtySharedCacheMapList(v1);
          v35 = 1;
        }
        KeReleaseQueuedSpinLock(5uLL, v27);
        FsRtlReleaseFile(v24);
        CcDereferenceSharedCacheMapFileObject(v1, (unsigned __int64)v24);
        v23 = KeAcquireQueuedSpinLock(5uLL);
      }
    }
    v29 = v35;
LABEL_45:
    if ( (*(_DWORD *)(v1 + 152) & 0x10000) == 0 || v10 )
    {
      if ( *((_QWORD *)v3 + 1) != 35422LL )
        *(_DWORD *)(v1 + 152) &= ~0x20u;
      if ( v29 )
      {
        byte_1403231E1 = 1;
        if ( (*(_DWORD *)(v1 + 152) & 0x10000) != 0 )
        {
          v31 = 1;
          v32 = 1;
        }
        else
        {
          v31 = 0;
          v32 = 0;
        }
        CcScheduleLazyWriteScan(v32, v31);
      }
      KeReleaseQueuedSpinLock(5uLL, v23);
      goto LABEL_27;
    }
    KeReleaseQueuedSpinLock(5uLL, v23);
  }
  CcApplyLowIoPriorityToThread(0, (_DWORD *)v1);
  v33 = KeAcquireQueuedSpinLock(5uLL);
  *(_DWORD *)(v1 + 152) &= ~0x20u;
  v34 = v33;
  if ( (*(_DWORD *)(v1 + 152) & 0x10000) != 0 )
    CcCancelMmWaitForUninitializeCacheMap(v1);
  CcDecrementOpenCount((_DWORD *)v1);
  KeReleaseQueuedSpinLock(5uLL, v34);
  *v3 = -1073741740;
LABEL_27:
  if ( v36 )
    KeSetEvent((PRKEVENT)(a1 + 32), 0, 0);
}
