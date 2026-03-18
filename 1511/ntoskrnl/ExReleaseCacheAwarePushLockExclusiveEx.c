/*
 * XREFs of ExReleaseCacheAwarePushLockExclusiveEx @ 0x140213B14
 * Callers:
 *     <none>
 * Callees:
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 */

void __fastcall ExReleaseCacheAwarePushLockExclusiveEx(
        volatile signed __int64 **BugCheckParameter2,
        ULONG_PTR BugCheckParameter1)
{
  char v2; // si
  unsigned __int64 v4; // rbp
  volatile signed __int64 **v5; // rdi
  volatile signed __int64 *v6; // rcx

  v2 = BugCheckParameter1;
  if ( (BugCheckParameter1 & 0xFFFFFFFC) != 0 )
    KeBugCheckEx(0x152u, (unsigned int)BugCheckParameter1, (ULONG_PTR)BugCheckParameter2, 0LL, 0LL);
  v4 = (unsigned __int64)(BugCheckParameter2 + 32);
  v5 = BugCheckParameter2;
  if ( BugCheckParameter2 < BugCheckParameter2 + 32 )
  {
    do
    {
      v6 = *v5;
      if ( (_InterlockedExchangeAdd64(*v5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v6);
      ++v5;
    }
    while ( (unsigned __int64)v5 < v4 );
  }
  if ( (v2 & 2) == 0 )
    KeAbPostRelease((ULONG_PTR)BugCheckParameter2);
}
