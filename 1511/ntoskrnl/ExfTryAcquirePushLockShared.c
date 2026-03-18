/*
 * XREFs of ExfTryAcquirePushLockShared @ 0x1400209C4
 * Callers:
 *     PfLockSharedTryAcquire @ 0x14001B9CC (PfLockSharedTryAcquire.c)
 *     ExTryAcquirePushLockSharedEx @ 0x1400206A0 (ExTryAcquirePushLockSharedEx.c)
 *     ExAcquireCacheAwarePushLockSharedEx @ 0x140020820 (ExAcquireCacheAwarePushLockSharedEx.c)
 *     MiLeapPrefetch @ 0x1401161B8 (MiLeapPrefetch.c)
 *     ExTryAcquireAutoExpandPushLockShared @ 0x14012BFF0 (ExTryAcquireAutoExpandPushLockShared.c)
 *     IopProcessIoTracking @ 0x1401BCC68 (IopProcessIoTracking.c)
 *     ExpTryAcquireFannedOutPushLockShared @ 0x140213A4C (ExpTryAcquireFannedOutPushLockShared.c)
 *     ExTryAcquireCacheAwarePushLockSharedEx @ 0x140213C6C (ExTryAcquireCacheAwarePushLockSharedEx.c)
 *     TryLockShutdownShared @ 0x1405E6734 (TryLockShutdownShared.c)
 *     VerifierExfTryAcquirePushLockShared @ 0x1406CE390 (VerifierExfTryAcquirePushLockShared.c)
 * Callees:
 *     <none>
 */

char __fastcall ExfTryAcquirePushLockShared(signed __int64 *a1)
{
  char v2; // dl
  signed __int64 v3; // rax
  signed __int64 v5; // rcx
  signed __int64 v6; // rtt

  v2 = 0;
  _m_prefetchw(a1);
  v3 = *a1;
  while ( (v3 & 1) == 0 || (v3 & 2) == 0 && (v3 & 0xFFFFFFFFFFFFFFF0uLL) != 0 )
  {
    v5 = v3 | 1;
    if ( (v3 & 2) == 0 )
      v5 += 16LL;
    v6 = v3;
    v3 = _InterlockedCompareExchange64(a1, v5, v3);
    if ( v6 == v3 )
      return 1;
  }
  return v2;
}
