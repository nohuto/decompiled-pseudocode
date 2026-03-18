/*
 * XREFs of ExTryAcquireCacheAwarePushLockSharedEx @ 0x14026391C
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostReleaseEx @ 0x1400F49CC (KeAbPostReleaseEx.c)
 *     ExfTryAcquirePushLockShared @ 0x1400F78D4 (ExfTryAcquirePushLockShared.c)
 *     KeGetCurrentProcessorNumberEx @ 0x140101D50 (KeGetCurrentProcessorNumberEx.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 */

unsigned __int64 __fastcall ExTryAcquireCacheAwarePushLockSharedEx(
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR BugCheckParameter1)
{
  char v2; // bl
  volatile signed __int64 *v4; // rbp
  __int64 v5; // r9
  ULONG_PTR v6; // rbx
  bool v7; // di

  v2 = BugCheckParameter1;
  if ( (BugCheckParameter1 & 0xFFFFFFFC) != 0 )
    KeBugCheckEx(0x152u, (unsigned int)BugCheckParameter1, BugCheckParameter2, 0LL, 0LL);
  v4 = *(volatile signed __int64 **)(BugCheckParameter2 + 8LL * (KeGetCurrentProcessorNumberEx(0LL) & 0x1F));
  if ( (v2 & 2) != 0 )
    v6 = 0LL;
  else
    v6 = KeAbPreAcquire(BugCheckParameter2, 0LL, 1LL, v5);
  v7 = !_InterlockedCompareExchange64(v4, 17LL, 0LL) || ExfTryAcquirePushLockShared((signed __int64 *)v4);
  if ( v6 )
  {
    if ( v7 )
      *(_BYTE *)(v6 + 26) |= 1u;
    else
      KeAbPostReleaseEx(BugCheckParameter2, v6);
  }
  return (unsigned __int64)v4 & -(__int64)v7;
}
