/*
 * XREFs of ExTryAcquireCacheAwarePushLockExclusiveEx @ 0x140263850
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     KeAbPostReleaseEx @ 0x1400F49CC (KeAbPostReleaseEx.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 */

char __fastcall ExTryAcquireCacheAwarePushLockExclusiveEx(
        volatile signed __int32 **BugCheckParameter2,
        ULONG_PTR BugCheckParameter1,
        __int64 a3,
        __int64 a4)
{
  ULONG_PTR v5; // rbp
  volatile signed __int32 **v6; // rsi
  ULONG_PTR v7; // rbx
  volatile signed __int32 *v9; // rcx

  if ( (BugCheckParameter1 & 0xFFFFFFFC) != 0 )
    KeBugCheckEx(0x152u, (unsigned int)BugCheckParameter1, (ULONG_PTR)BugCheckParameter2, 0LL, 0LL);
  v5 = (ULONG_PTR)(BugCheckParameter2 + 32);
  v6 = BugCheckParameter2;
  if ( (BugCheckParameter1 & 2) != 0 )
    v7 = 0LL;
  else
    v7 = KeAbPreAcquire((ULONG_PTR)BugCheckParameter2, 0LL, 1LL, a4);
  if ( (unsigned __int64)BugCheckParameter2 >= v5 )
  {
LABEL_9:
    if ( v7 )
      *(_BYTE *)(v7 + 26) |= 1u;
    return 1;
  }
  else
  {
    while ( !_interlockedbittestandset64(*v6, 0LL) )
    {
      if ( (unsigned __int64)++v6 >= v5 )
        goto LABEL_9;
    }
    while ( v6 != BugCheckParameter2 )
    {
      v9 = *--v6;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)*v6, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v9);
    }
    if ( v7 )
      KeAbPostReleaseEx((ULONG_PTR)BugCheckParameter2, v7);
    return 0;
  }
}
