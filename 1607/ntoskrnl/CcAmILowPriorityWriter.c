/*
 * XREFs of CcAmILowPriorityWriter @ 0x14009F3F4
 * Callers:
 *     CcFlushCachePriv @ 0x1400E6CB0 (CcFlushCachePriv.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 */

bool CcAmILowPriorityWriter()
{
  __int64 v0; // rax
  signed __int8 v1; // cf
  __int64 v2; // rbx
  bool v3; // bl

  v0 = KeAbPreAcquire((ULONG_PTR)&CcLowPriorityWorkerThreadLock, 0LL, 0);
  v1 = _interlockedbittestandset64((volatile signed __int32 *)&CcLowPriorityWorkerThreadLock, 0LL);
  v2 = v0;
  if ( v1 )
    ExfAcquirePushLockExclusiveEx(&CcLowPriorityWorkerThreadLock, v0, &CcLowPriorityWorkerThreadLock);
  if ( v2 )
    *(_BYTE *)(v2 + 26) |= 1u;
  v3 = CcLowPriWorkerThread == KeGetCurrentThread();
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&CcLowPriorityWorkerThreadLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&CcLowPriorityWorkerThreadLock);
  KeAbPostRelease((ULONG_PTR)&CcLowPriorityWorkerThreadLock);
  return v3;
}
