/*
 * XREFs of CcBoostLowPriorityWorkerThread @ 0x1400E7D3C
 * Callers:
 *     CcFlushCachePriv @ 0x1400AFD30 (CcFlushCachePriv.c)
 *     CcAdjustWriteBehindThreadPoolIfNeeded @ 0x1400B2D14 (CcAdjustWriteBehindThreadPoolIfNeeded.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     PsBoostThreadIoEx @ 0x140040D00 (PsBoostThreadIoEx.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     PsGetIoPriorityThread @ 0x140070170 (PsGetIoPriorityThread.c)
 *     KeSetPriorityThread @ 0x14007D6F0 (KeSetPriorityThread.c)
 *     CcUpdateSharedCacheMapFlag @ 0x1400E7E70 (CcUpdateSharedCacheMapFlag.c)
 *     IoBoostThreadIoPriority @ 0x1401028BC (IoBoostThreadIoPriority.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 */

void __fastcall CcBoostLowPriorityWorkerThread(__int64 a1)
{
  __int64 v2; // rax
  signed __int8 v3; // cf
  __int64 v4; // rdi
  __int64 v5; // r8

  if ( a1 && !*(_DWORD *)(a1 + 4) )
    KeBugCheckEx(0x34u, 0x4FFuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  v2 = KeAbPreAcquire((ULONG_PTR)&CcLowPriorityWorkerThreadLock, 0LL, 0LL);
  v3 = _interlockedbittestandset64((volatile signed __int32 *)&CcLowPriorityWorkerThreadLock, 0LL);
  v4 = v2;
  if ( v3 )
    ExfAcquirePushLockExclusiveEx(&CcLowPriorityWorkerThreadLock, v2, (ULONG_PTR)&CcLowPriorityWorkerThreadLock);
  if ( v4 )
    *(_BYTE *)(v4 + 26) |= 1u;
  if ( CcLowPriWorkerThread
    && (int)PsGetIoPriorityThread((__int64)KeGetCurrentThread()) > 0
    && (!a1 || a1 == CcLowPriSharedCacheMap) )
  {
    IoBoostThreadIoPriority(CcLowPriWorkerThread, 2LL);
    CcLowPriOldCpuPriority = KeSetPriorityThread(CcLowPriWorkerThread, 13);
    if ( !*(_DWORD *)(CcLowPriSharedCacheMap + 4) )
      KeBugCheckEx(0x34u, 0x529uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
    if ( (*(_DWORD *)(CcLowPriSharedCacheMap + 152) & 0x20000000) == 0 )
    {
      PsBoostThreadIoEx((__int64)CcLowPriWorkerThread, 0, 0, 0LL);
      LOBYTE(v5) = 1;
      CcUpdateSharedCacheMapFlag(CcLowPriSharedCacheMap, 0x20000000LL, v5);
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&CcLowPriorityWorkerThreadLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&CcLowPriorityWorkerThreadLock);
  KeAbPostRelease((ULONG_PTR)&CcLowPriorityWorkerThreadLock);
}
