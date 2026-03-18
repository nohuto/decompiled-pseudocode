/*
 * XREFs of CcShouldSpinAsyncReadWorkerThread @ 0x14011E33C
 * Callers:
 *     CcAsyncReadWorker @ 0x14011D044 (CcAsyncReadWorker.c)
 *     CcPostWorkQueueAsyncRead @ 0x14011DF64 (CcPostWorkQueueAsyncRead.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 */

char __fastcall CcShouldSpinAsyncReadWorkerThread(__int64 **a1, unsigned int a2)
{
  __int64 v2; // r9
  __int64 v4; // rbp
  char v5; // bl
  __int64 v6; // rax
  __int64 v7; // rdi
  unsigned int v8; // edx
  _DWORD *v9; // rax
  __int64 **v10; // rdi
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // r9
  signed __int8 v15; // cf
  __int64 v16; // rsi
  __int64 *v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rax
  signed __int64 v20; // rcx
  ULONG_PTR v21; // rtt

  v2 = (unsigned int)CcMaxAsyncReadWorkerThreads;
  v4 = a2;
  v5 = 1;
  v6 = 404LL * a2;
  v7 = a2;
  v8 = 0;
  v9 = (_DWORD *)(CcReaderThreadsStats + v6);
  v10 = (__int64 **)(CcIdleAsyncReadWorkerThreadList + 16 * v7);
  if ( CcMaxAsyncReadWorkerThreads )
  {
    while ( *v9 == -1 || *v9 >= (unsigned int)CcMaxAsyncReadItemsPerThread )
    {
      ++v8;
      ++v9;
      if ( v8 >= CcMaxAsyncReadWorkerThreads )
        goto LABEL_7;
    }
    return 0;
  }
  else
  {
LABEL_7:
    if ( a1 )
    {
      *a1 = 0LL;
      v12 = KeAbPreAcquire((ULONG_PTR)&CcAsyncReadWorkQueueLock, 0LL, 0LL, v2);
      v15 = _interlockedbittestandset64((volatile signed __int32 *)&CcAsyncReadWorkQueueLock, 0LL);
      v16 = v12;
      if ( v15 )
        ExfAcquirePushLockExclusiveEx(&CcAsyncReadWorkQueueLock, v12, (ULONG_PTR)&CcAsyncReadWorkQueueLock, v14);
      if ( v16 )
        *(_BYTE *)(v16 + 26) |= 1u;
      v17 = *v10;
      if ( *v10 != (__int64 *)v10 )
      {
        v18 = *v17;
        if ( (__int64 **)v17[1] != v10 || *(__int64 **)(v18 + 8) != v17 )
          __fastfail(3u);
        *v10 = (__int64 *)v18;
        *a1 = v17;
        v19 = CcNumberActiveAsyncReadWorkerThreads;
        *(_QWORD *)(v18 + 8) = v10;
        ++*(_DWORD *)(v19 + 4 * v4);
      }
      _m_prefetchw(&CcAsyncReadWorkQueueLock);
      if ( (CcAsyncReadWorkQueueLock & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
        v20 = CcAsyncReadWorkQueueLock - 16;
      else
        v20 = 0LL;
      if ( (CcAsyncReadWorkQueueLock & 2) != 0
        || (v21 = CcAsyncReadWorkQueueLock,
            v21 != _InterlockedCompareExchange64(
                     (volatile signed __int64 *)&CcAsyncReadWorkQueueLock,
                     v20,
                     CcAsyncReadWorkQueueLock)) )
      {
        ExfReleasePushLock(&CcAsyncReadWorkQueueLock, v13);
      }
      KeAbPostRelease((ULONG_PTR)&CcAsyncReadWorkQueueLock);
      if ( !*a1 )
        _InterlockedAdd(&CcDbgFoundAsyncReadThreadListEmpty, 1u);
    }
  }
  return v5;
}
