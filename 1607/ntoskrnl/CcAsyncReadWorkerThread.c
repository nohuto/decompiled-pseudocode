/*
 * XREFs of CcAsyncReadWorkerThread @ 0x1401B115C
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400C64C0 (ExfReleasePushLock.c)
 *     CcAsyncReadWorker @ 0x14013DE8C (CcAsyncReadWorker.c)
 */

unsigned __int64 __fastcall CcAsyncReadWorkerThread(__int64 a1)
{
  unsigned __int64 result; // rax
  unsigned __int64 v3; // r14
  __int64 v4; // r15
  __int64 v5; // rdi
  signed __int64 v6; // rbx
  _BYTE *v7; // rax
  signed __int8 v8; // cf
  _BYTE *v9; // rbp
  _QWORD *v10; // rax
  __int64 v11; // rax
  ULONG_PTR v12; // rtt

  result = *(unsigned int *)(a1 + 36);
  v3 = result;
  v4 = CcReaderThreadsStats + 404 * result;
  v5 = CcIdleAsyncReadWorkerThreadList + 16 * result;
  if ( *(_DWORD *)(a1 + 32) == 3 )
  {
    v6 = 0LL;
    *(_DWORD *)(v4 + 4LL * *(unsigned int *)(a1 + 40)) = 0;
    CcAsyncReadWorker((_DWORD *)a1);
    *(_DWORD *)(v4 + 4LL * *(unsigned int *)(a1 + 40)) = -1;
    v7 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)&CcAsyncReadWorkQueueLock, 0LL, 0);
    v8 = _interlockedbittestandset64((volatile signed __int32 *)&CcAsyncReadWorkQueueLock, 0LL);
    v9 = v7;
    if ( v8 )
      ExfAcquirePushLockExclusiveEx(&CcAsyncReadWorkQueueLock, v7, (ULONG_PTR)&CcAsyncReadWorkQueueLock);
    if ( v9 )
      v9[26] |= 1u;
    v10 = *(_QWORD **)(v5 + 8);
    if ( *v10 != v5 )
      __fastfail(3u);
    *(_QWORD *)(a1 + 8) = v10;
    *(_QWORD *)a1 = v5;
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
