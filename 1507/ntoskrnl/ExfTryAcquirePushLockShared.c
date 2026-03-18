/*
 * XREFs of ExfTryAcquirePushLockShared @ 0x1400F78D4
 * Callers:
 *     ExAcquireCacheAwarePushLockSharedEx @ 0x1400F7580 (ExAcquireCacheAwarePushLockSharedEx.c)
 *     ExTryAcquirePushLockSharedEx @ 0x1400F7760 (ExTryAcquirePushLockSharedEx.c)
 *     MiLeapPrefetch @ 0x14015C0CC (MiLeapPrefetch.c)
 *     IopProcessIoTracking @ 0x1401F85A0 (IopProcessIoTracking.c)
 *     ExTryAcquireAutoExpandPushLockShared @ 0x140263500 (ExTryAcquireAutoExpandPushLockShared.c)
 *     ExpTryAcquireFannedOutPushLockShared @ 0x1402636A8 (ExpTryAcquireFannedOutPushLockShared.c)
 *     ExTryAcquireCacheAwarePushLockSharedEx @ 0x14026391C (ExTryAcquireCacheAwarePushLockSharedEx.c)
 *     PfCheckDeprioritizeFile @ 0x140443ABC (PfCheckDeprioritizeFile.c)
 *     TryLockShutdownShared @ 0x14065DB70 (TryLockShutdownShared.c)
 *     VerifierExfTryAcquirePushLockShared @ 0x140751D68 (VerifierExfTryAcquirePushLockShared.c)
 * Callees:
 *     <none>
 */

char __fastcall ExfTryAcquirePushLockShared(signed __int64 *a1)
{
  char v2; // dl
  signed __int64 v3; // rax
  signed __int64 v4; // rcx
  signed __int64 v5; // rtt

  v2 = 0;
  _m_prefetchw(a1);
  v3 = *a1;
  while ( (v3 & 1) == 0 || (v3 & 2) == 0 && (v3 & 0xFFFFFFFFFFFFFFF0uLL) != 0 )
  {
    v4 = v3 | 1;
    if ( (v3 & 2) == 0 )
      v4 += 16LL;
    v5 = v3;
    v3 = _InterlockedCompareExchange64(a1, v4, v3);
    if ( v5 == v3 )
      return 1;
  }
  return v2;
}
