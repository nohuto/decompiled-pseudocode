/*
 * XREFs of CcBoostLowPriorityWorkerThread @ 0x14012E1F4
 * Callers:
 *     CcAdjustWriteBehindThreadPoolIfNeeded @ 0x1400304C4 (CcAdjustWriteBehindThreadPoolIfNeeded.c)
 *     CcFlushCachePriv @ 0x140040060 (CcFlushCachePriv.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     CcUpdateSharedCacheMapFlag @ 0x1400851D0 (CcUpdateSharedCacheMapFlag.c)
 *     KeSetPriorityThread @ 0x14009B5F0 (KeSetPriorityThread.c)
 *     PsBoostThreadIoEx @ 0x1400CA890 (PsBoostThreadIoEx.c)
 *     IoBoostThreadIoPriority @ 0x1400D69B0 (IoBoostThreadIoPriority.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 */

void __fastcall CcBoostLowPriorityWorkerThread(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rax
  __int64 v6; // r9
  signed __int8 v7; // cf
  __int64 v8; // rdi
  struct _KTHREAD *CurrentThread; // r8
  int v10; // edx

  if ( a1 && !*(_DWORD *)(a1 + 4) )
    KeBugCheckEx(0x34u, 0x4FFuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  v5 = KeAbPreAcquire((ULONG_PTR)&CcLowPriorityWorkerThreadLock, 0LL, 0LL, a4);
  v7 = _interlockedbittestandset64((volatile signed __int32 *)&CcLowPriorityWorkerThreadLock, 0LL);
  v8 = v5;
  if ( v7 )
    ExfAcquirePushLockExclusiveEx(&CcLowPriorityWorkerThreadLock, v5, (ULONG_PTR)&CcLowPriorityWorkerThreadLock, v6);
  if ( v8 )
    *(_BYTE *)(v8 + 26) |= 1u;
  if ( CcLowPriWorkerThread )
  {
    CurrentThread = KeGetCurrentThread();
    v10 = (*((_DWORD *)&CurrentThread[1].SwapListEntry + 3) >> 9) & 7;
    if ( (CurrentThread->Process[1].DirectoryTableBase & 0x10000000000000LL) != 0 )
      v10 = 0;
    if ( v10 < 2 && CurrentThread == KeGetCurrentThread() && HIDWORD(CurrentThread[1].Timer.TimerListEntry.Flink) )
      v10 = 2;
    if ( v10 > 0 && (!a1 || a1 == CcLowPriSharedCacheMap) )
    {
      IoBoostThreadIoPriority((__int64)CcLowPriWorkerThread, 2, 0);
      CcLowPriOldCpuPriority = KeSetPriorityThread(CcLowPriWorkerThread, 13);
      if ( !*(_DWORD *)(CcLowPriSharedCacheMap + 4) )
        KeBugCheckEx(0x34u, 0x529uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
      if ( (*(_DWORD *)(CcLowPriSharedCacheMap + 152) & 0x20000000) == 0 )
      {
        PsBoostThreadIoEx((__int64)CcLowPriWorkerThread, 0, 0, 0LL);
        CcUpdateSharedCacheMapFlag(CcLowPriSharedCacheMap, 0x20000000, 1);
      }
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&CcLowPriorityWorkerThreadLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&CcLowPriorityWorkerThreadLock);
  KeAbPostRelease((ULONG_PTR)&CcLowPriorityWorkerThreadLock);
}
