/*
 * XREFs of CcAsyncReadWorkerThread @ 0x14000633C
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 *     CcAsyncReadWorker @ 0x14011D044 (CcAsyncReadWorker.c)
 */

__int64 __fastcall CcAsyncReadWorkerThread(__int64 *a1)
{
  __int64 result; // rax
  __int64 v3; // r14
  __int64 v4; // r15
  __int64 v5; // rdi
  signed __int64 v6; // rbx
  __int64 v7; // rax
  signed __int8 v8; // cf
  __int64 v9; // rbp
  __int64 **v10; // rax
  __int64 v11; // rax
  ULONG_PTR v12; // rtt

  result = *((unsigned int *)a1 + 9);
  v3 = result;
  v4 = CcReaderThreadsStats + 404 * result;
  v5 = CcIdleAsyncReadWorkerThreadList + 16 * result;
  if ( *((_DWORD *)a1 + 8) == 3 )
  {
    v6 = 0LL;
    *(_DWORD *)(v4 + 4LL * *((unsigned int *)a1 + 10)) = 0;
    CcAsyncReadWorker(a1);
    *(_DWORD *)(v4 + 4LL * *((unsigned int *)a1 + 10)) = -1;
    v7 = KeAbPreAcquire((ULONG_PTR)&CcAsyncReadWorkQueueLock);
    v8 = _interlockedbittestandset64((volatile signed __int32 *)&CcAsyncReadWorkQueueLock, 0LL);
    v9 = v7;
    if ( v8 )
      ExfAcquirePushLockExclusiveEx(&CcAsyncReadWorkQueueLock, v7, &CcAsyncReadWorkQueueLock);
    if ( v9 )
      *(_BYTE *)(v9 + 26) |= 1u;
    v10 = *(__int64 ***)(v5 + 8);
    *a1 = v5;
    a1[1] = (__int64)v10;
    if ( *v10 != (__int64 *)v5 )
      __fastfail(3u);
    *v10 = a1;
    v11 = CcNumberActiveAsyncReadWorkerThreads;
    *(_QWORD *)(v5 + 8) = a1;
    --*(_DWORD *)(v11 + 4 * v3);
    _m_prefetchw(&CcAsyncReadWorkQueueLock);
    if ( (CcAsyncReadWorkQueueLock & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
      v6 = CcAsyncReadWorkQueueLock - 16;
    if ( (CcAsyncReadWorkQueueLock & 2) != 0
      || (v12 = CcAsyncReadWorkQueueLock,
          v12 != _InterlockedCompareExchange64(
                   (volatile signed __int64 *)&CcAsyncReadWorkQueueLock,
                   v6,
                   CcAsyncReadWorkQueueLock)) )
    {
      ExfReleasePushLock(&CcAsyncReadWorkQueueLock);
    }
    return KeAbPostRelease((ULONG_PTR)&CcAsyncReadWorkQueueLock);
  }
  return result;
}
