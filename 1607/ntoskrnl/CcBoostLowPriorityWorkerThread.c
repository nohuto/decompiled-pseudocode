/*
 * XREFs of CcBoostLowPriorityWorkerThread @ 0x14006B550
 * Callers:
 *     CcAdjustWriteBehindThreadPoolIfNeeded @ 0x14006FC80 (CcAdjustWriteBehindThreadPoolIfNeeded.c)
 *     CcFlushCachePriv @ 0x1400E8E10 (CcFlushCachePriv.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002C1B0 (KeAbPreAcquire.c)
 *     PsBoostThreadIoEx @ 0x14002D440 (PsBoostThreadIoEx.c)
 *     CcUpdateSharedCacheMapFlag @ 0x14006B19C (CcUpdateSharedCacheMapFlag.c)
 *     IoBoostThreadIoPriority @ 0x14006E244 (IoBoostThreadIoPriority.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C8070 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C8738 (ExfTryToWakePushLock.c)
 *     KeSetPriorityThread @ 0x1400D2F20 (KeSetPriorityThread.c)
 *     PsGetIoPriorityThread @ 0x1400E7E30 (PsGetIoPriorityThread.c)
 *     KeBugCheckEx @ 0x14015D500 (KeBugCheckEx.c)
 */

unsigned __int64 __fastcall CcBoostLowPriorityWorkerThread(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // r8
  signed __int8 v5; // cf
  __int64 v6; // rdi

  if ( a1 && !*(_DWORD *)(a1 + 4) )
    KeBugCheckEx(0x34u, 0x4FFuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  v2 = KeAbPreAcquire((ULONG_PTR)&CcLowPriorityWorkerThreadLock, 0LL, 0);
  v5 = _interlockedbittestandset64((volatile signed __int32 *)&CcLowPriorityWorkerThreadLock, 0LL);
  v6 = v2;
  if ( v5 )
    ExfAcquirePushLockExclusiveEx(&CcLowPriorityWorkerThreadLock, v2, &CcLowPriorityWorkerThreadLock);
  if ( v6 )
    *(_BYTE *)(v6 + 26) |= 1u;
  if ( CcLowPriWorkerThread
    && (int)PsGetIoPriorityThread(KeGetCurrentThread(), v3, v4) > 0
    && (!a1 || a1 == CcLowPriSharedCacheMap) )
  {
    IoBoostThreadIoPriority(CcLowPriWorkerThread, 2LL, 0LL);
    CcLowPriOldCpuPriority = KeSetPriorityThread(CcLowPriWorkerThread, 13);
    if ( !*(_DWORD *)(CcLowPriSharedCacheMap + 4) )
      KeBugCheckEx(0x34u, 0x529uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
    if ( (*(_DWORD *)(CcLowPriSharedCacheMap + 152) & 0x20000000) == 0 )
    {
      PsBoostThreadIoEx((__int64)CcLowPriWorkerThread, 0, 0, 0LL);
      CcUpdateSharedCacheMapFlag(CcLowPriSharedCacheMap, 0x20000000, 1);
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&CcLowPriorityWorkerThreadLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&CcLowPriorityWorkerThreadLock);
  return KeAbPostRelease((ULONG_PTR)&CcLowPriorityWorkerThreadLock);
}
