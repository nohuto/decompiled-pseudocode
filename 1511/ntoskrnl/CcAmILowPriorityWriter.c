/*
 * XREFs of CcAmILowPriorityWriter @ 0x1400E3684
 * Callers:
 *     CcFlushCachePriv @ 0x1400AFD30 (CcFlushCachePriv.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 */

bool CcAmILowPriorityWriter()
{
  __int64 v0; // rax
  signed __int8 v1; // cf
  __int64 v2; // rbx
  bool v3; // bl

  v0 = KeAbPreAcquire((ULONG_PTR)&CcLowPriorityWorkerThreadLock, 0LL, 0LL);
  v1 = _interlockedbittestandset64((volatile signed __int32 *)&CcLowPriorityWorkerThreadLock, 0LL);
  v2 = v0;
  if ( v1 )
    ExfAcquirePushLockExclusiveEx(&CcLowPriorityWorkerThreadLock, v0, (ULONG_PTR)&CcLowPriorityWorkerThreadLock);
  if ( v2 )
    *(_BYTE *)(v2 + 26) |= 1u;
  v3 = CcLowPriWorkerThread == KeGetCurrentThread();
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&CcLowPriorityWorkerThreadLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&CcLowPriorityWorkerThreadLock);
  KeAbPostRelease((ULONG_PTR)&CcLowPriorityWorkerThreadLock);
  return v3;
}
