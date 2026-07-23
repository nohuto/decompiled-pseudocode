/*
 * XREFs of ExfTryAcquirePushLockShared @ 0x1400C5AB8
 * Callers:
 *     PfLockSharedTryAcquire @ 0x14000652C (PfLockSharedTryAcquire.c)
 *     MiCoalesceFreePages @ 0x1400673F0 (MiCoalesceFreePages.c)
 *     ExTryAcquirePushLockSharedEx @ 0x1400C5780 (ExTryAcquirePushLockSharedEx.c)
 *     ExAcquireCacheAwarePushLockSharedEx @ 0x1400C5930 (ExAcquireCacheAwarePushLockSharedEx.c)
 *     ExTryAcquireAutoExpandPushLockShared @ 0x14013428C (ExTryAcquireAutoExpandPushLockShared.c)
 *     IopProcessIoTracking @ 0x1401CAB20 (IopProcessIoTracking.c)
 *     MiTryAcquirePushLockUnordered @ 0x1401E66D4 (MiTryAcquirePushLockUnordered.c)
 *     MiLeapPrefetch @ 0x1401E828C (MiLeapPrefetch.c)
 *     ExpTryAcquireFannedOutPushLockShared @ 0x14022D3A4 (ExpTryAcquireFannedOutPushLockShared.c)
 *     ExTryAcquireCacheAwarePushLockSharedEx @ 0x14022D5C4 (ExTryAcquireCacheAwarePushLockSharedEx.c)
 *     TryLockShutdownShared @ 0x140603FB4 (TryLockShutdownShared.c)
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
