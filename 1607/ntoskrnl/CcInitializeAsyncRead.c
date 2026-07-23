/*
 * XREFs of CcInitializeAsyncRead @ 0x1401466A8
 * Callers:
 *     CcInitializeCacheManager @ 0x14079FAB0 (CcInitializeCacheManager.c)
 * Callees:
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     PsCreateSystemThread @ 0x1403E5D3C (PsCreateSystemThread.c)
 */

char CcInitializeAsyncRead()
{
  PVOID PoolWithTag; // rax
  __int64 v1; // r9
  __int64 v2; // r8
  __int64 v3; // r15
  __int64 v4; // r12
  __int64 v5; // r13
  __int64 v6; // rdi
  _DWORD *v7; // rdx
  unsigned int v8; // ebp
  unsigned int v9; // esi
  _QWORD *v10; // rax
  _QWORD *v11; // rax
  _QWORD *v12; // rax
  __int64 v13; // rax
  _QWORD *v14; // rax
  unsigned int v15; // ebx
  _QWORD *v16; // rax
  __int64 v17; // rcx
  _QWORD *v18; // rdx
  unsigned int v19; // ebx
  _QWORD *StartContext; // rax
  __int64 v21; // rcx
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-68h] BYREF
  HANDLE ThreadHandle; // [rsp+B0h] [rbp+8h] BYREF
  __int64 v25; // [rsp+B8h] [rbp+10h]

  CcIdleAsyncReadWorkerThreadList = (__int64)ExAllocatePoolWithTag(
                                               NonPagedPoolNx,
                                               16LL * (unsigned int)(CcMaxNestingLevel + 1),
                                               0x71576343u);
  CcAsyncReadWorkQueue = (__int64)ExAllocatePoolWithTag(
                                    NonPagedPoolNx,
                                    16LL * (unsigned int)(CcMaxNestingLevel + 1),
                                    0x71576343u);
  CcAsyncReadCompletionWorkQueue = (__int64)ExAllocatePoolWithTag(
                                              NonPagedPoolNx,
                                              16LL * (unsigned int)(CcMaxNestingLevel + 1),
                                              0x71576343u);
  CcReaderThreadsStats = (__int64)ExAllocatePoolWithTag(
                                    NonPagedPoolNx,
                                    404LL * (unsigned int)(CcMaxNestingLevel + 1),
                                    0x71576343u);
  CcNewAsyncReadRequestEvent = (__int64)ExAllocatePoolWithTag(
                                          NonPagedPoolNx,
                                          24LL * (unsigned int)(CcMaxNestingLevel + 1),
                                          0x71576343u);
  CcNumberActiveAsyncReadWorkerThreads = (__int64)ExAllocatePoolWithTag(
                                                    NonPagedPoolNx,
                                                    4LL * (unsigned int)(CcMaxNestingLevel + 1),
                                                    0x71576343u);
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 4LL * (unsigned int)(CcMaxNestingLevel + 1), 0x71576343u);
  v1 = CcIdleAsyncReadWorkerThreadList;
  CcNumberActiveCompleteAsyncReadWorkItems = (__int64)PoolWithTag;
  v2 = (__int64)PoolWithTag;
  v25 = CcIdleAsyncReadWorkerThreadList;
  if ( !CcIdleAsyncReadWorkerThreadList
    || (v3 = CcAsyncReadWorkQueue) == 0
    || (v4 = CcAsyncReadCompletionWorkQueue) == 0
    || (v5 = CcReaderThreadsStats) == 0
    || (v6 = CcNewAsyncReadRequestEvent) == 0
    || (v7 = (_DWORD *)CcNumberActiveAsyncReadWorkerThreads,
        (ThreadHandle = (HANDLE)CcNumberActiveAsyncReadWorkerThreads) == 0LL)
    || !PoolWithTag )
  {
    KeBugCheckEx(0x34u, 0x4013FuLL, 0LL, 0LL, 0LL);
  }
  v8 = CcMaxAsyncReadWorkerThreads;
  v9 = 0;
  while ( 1 )
  {
    v10 = (_QWORD *)(v1 + 16LL * v9);
    v10[1] = v10;
    *v10 = v10;
    v11 = (_QWORD *)(v3 + 16LL * v9);
    v11[1] = v11;
    *v11 = v11;
    v12 = (_QWORD *)(v4 + 16LL * v9);
    v12[1] = v12;
    *v12 = v12;
    v13 = 3LL * v9;
    *(_WORD *)(v6 + 8 * v13) = 1;
    *(_BYTE *)(v6 + 8 * v13 + 2) = 6;
    *(_DWORD *)(v6 + 8 * v13 + 4) = 0;
    v14 = (_QWORD *)(v6 + 8 * (v13 + 1));
    v14[1] = v14;
    *v14 = v14;
    v7[v9] = 0;
    *(_DWORD *)(v2 + 4LL * v9) = 0;
    memset((void *)(v5 + 404LL * v9), 255, 4LL * v8);
    *(_DWORD *)(v5 + 404LL * v9) = 0;
    v15 = 1;
    if ( v8 <= 1 )
    {
      v7 = ThreadHandle;
      v1 = v25;
    }
    else
    {
      do
      {
        v16 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x38uLL, 0x71576343u);
        if ( !v16 )
          KeBugCheckEx(0x34u, 0x4016AuLL, 0LL, 0LL, 0LL);
        v1 = CcIdleAsyncReadWorkerThreadList;
        v16[2] = CcAsyncReadWorkerThread;
        v16[3] = v16;
        *v16 = 0LL;
        v17 = v1 + 16LL * v9;
        *((_DWORD *)v16 + 8) = 3;
        *((_DWORD *)v16 + 10) = v15;
        *((_DWORD *)v16 + 9) = v9;
        v18 = *(_QWORD **)(v17 + 8);
        v25 = v1;
        if ( *v18 != v17 )
          __fastfail(3u);
        v8 = CcMaxAsyncReadWorkerThreads;
        ++v15;
        *v16 = v17;
        v16[1] = v18;
        *v18 = v16;
        *(_QWORD *)(v17 + 8) = v16;
      }
      while ( v15 < v8 );
      v7 = (_DWORD *)CcNumberActiveAsyncReadWorkerThreads;
      v3 = CcAsyncReadWorkQueue;
      v4 = CcAsyncReadCompletionWorkQueue;
      v5 = CcReaderThreadsStats;
      v6 = CcNewAsyncReadRequestEvent;
      ThreadHandle = (HANDLE)CcNumberActiveAsyncReadWorkerThreads;
    }
    if ( ++v9 > CcMaxNestingLevel )
      break;
    v2 = CcNumberActiveCompleteAsyncReadWorkItems;
  }
  CcAsyncReadWorkQueueLock = 0LL;
  v19 = 0;
  while ( 1 )
  {
    ObjectAttributes.Length = 48;
    memset(&ObjectAttributes.RootDirectory, 0, 20);
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    StartContext = ExAllocatePoolWithTag(NonPagedPoolNx, 0x38uLL, 0x71576343u);
    if ( !StartContext )
      KeBugCheckEx(0x34u, 0x4018EuLL, 0LL, 0LL, 0LL);
    StartContext[3] = StartContext;
    StartContext[2] = CcAsyncReadWorkerThread;
    v21 = CcNumberActiveAsyncReadWorkerThreads;
    *StartContext = 0LL;
    *((_DWORD *)StartContext + 8) = 3;
    *((_DWORD *)StartContext + 10) = 0;
    *((_DWORD *)StartContext + 9) = v19;
    ++*(_DWORD *)(v21 + 4LL * v19);
    if ( PsCreateSystemThread(
           &ThreadHandle,
           0x1FFFFFu,
           &ObjectAttributes,
           0LL,
           0LL,
           (PKSTART_ROUTINE)CcAsyncReadWorker,
           StartContext) < 0 )
      break;
    ZwClose(ThreadHandle);
    if ( ++v19 > CcMaxNestingLevel )
      return 1;
  }
  return 0;
}
