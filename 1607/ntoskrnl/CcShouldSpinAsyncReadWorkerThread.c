/*
 * XREFs of CcShouldSpinAsyncReadWorkerThread @ 0x14006DB58
 * Callers:
 *     CcPostWorkQueueAsyncRead @ 0x14006D8B8 (CcPostWorkQueueAsyncRead.c)
 *     CcAsyncReadWorker @ 0x14013DE8C (CcAsyncReadWorker.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400C64C0 (ExfReleasePushLock.c)
 */

char __fastcall CcShouldSpinAsyncReadWorkerThread(__int64 **a1, unsigned int a2)
{
  __int64 v3; // rbp
  char v4; // bl
  __int64 v5; // rax
  __int64 v6; // rdi
  unsigned int v7; // edx
  _DWORD *v8; // rax
  __int64 **v9; // rdi
  __int64 v11; // rax
  signed __int8 v12; // cf
  __int64 v13; // rsi
  __int64 *v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rax
  signed __int64 v17; // rcx
  ULONG_PTR v18; // rtt

  v3 = a2;
  v4 = 1;
  v5 = 404LL * a2;
  v6 = a2;
  v7 = 0;
  v8 = (_DWORD *)(CcReaderThreadsStats + v5);
  v9 = (__int64 **)(CcIdleAsyncReadWorkerThreadList + 16 * v6);
  if ( CcMaxAsyncReadWorkerThreads )
  {
    while ( *v8 == -1 || *v8 >= (unsigned int)CcMaxAsyncReadItemsPerThread )
    {
      ++v7;
      ++v8;
      if ( v7 >= CcMaxAsyncReadWorkerThreads )
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
      v11 = KeAbPreAcquire((ULONG_PTR)&CcAsyncReadWorkQueueLock, 0LL, 0);
      v12 = _interlockedbittestandset64((volatile signed __int32 *)&CcAsyncReadWorkQueueLock, 0LL);
      v13 = v11;
      if ( v12 )
        ExfAcquirePushLockExclusiveEx(&CcAsyncReadWorkQueueLock, v11, &CcAsyncReadWorkQueueLock);
      if ( v13 )
        *(_BYTE *)(v13 + 26) |= 1u;
      v14 = *v9;
      if ( *v9 != (__int64 *)v9 )
      {
        v15 = *v14;
        if ( (__int64 **)v14[1] != v9 || *(__int64 **)(v15 + 8) != v14 )
          __fastfail(3u);
        *v9 = (__int64 *)v15;
        *a1 = v14;
        v16 = CcNumberActiveAsyncReadWorkerThreads;
        *(_QWORD *)(v15 + 8) = v9;
        ++*(_DWORD *)(v16 + 4 * v3);
      }
      _m_prefetchw(&CcAsyncReadWorkQueueLock);
      if ( (CcAsyncReadWorkQueueLock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
        v17 = 0LL;
      else
        v17 = CcAsyncReadWorkQueueLock - 16;
      if ( (CcAsyncReadWorkQueueLock & 2) != 0
        || (v18 = CcAsyncReadWorkQueueLock,
            v18 != _InterlockedCompareExchange64(
                     (volatile signed __int64 *)&CcAsyncReadWorkQueueLock,
                     v17,
                     CcAsyncReadWorkQueueLock)) )
      {
        ExfReleasePushLock(&CcAsyncReadWorkQueueLock);
      }
      KeAbPostRelease((ULONG_PTR)&CcAsyncReadWorkQueueLock);
      if ( !*a1 )
        _InterlockedAdd(&CcDbgFoundAsyncReadThreadListEmpty, 1u);
    }
  }
  return v4;
}
