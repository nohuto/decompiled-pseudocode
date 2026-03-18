/*
 * XREFs of CcSlowReferenceSharedCacheMapFileObject @ 0x14000D50C
 * Callers:
 *     CcReferenceSharedCacheMapFileObject @ 0x14000D4E4 (CcReferenceSharedCacheMapFileObject.c)
 * Callees:
 *     ObFastReferenceObjectLocked @ 0x14000D5AC (ObFastReferenceObjectLocked.c)
 *     ExfAcquirePushLockSharedEx @ 0x140020AB0 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400309E0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 */

__int64 __fastcall CcSlowReferenceSharedCacheMapFileObject(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rbx

  v2 = KeAbPreAcquire((ULONG_PTR)&CcChangeSharedCacheMapFileLock);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&CcChangeSharedCacheMapFileLock, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(&CcChangeSharedCacheMapFileLock, v2, &CcChangeSharedCacheMapFileLock);
  if ( v2 )
    *(_BYTE *)(v2 + 26) |= 1u;
  v3 = ObFastReferenceObjectLocked(a1 + 96);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&CcChangeSharedCacheMapFileLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(&CcChangeSharedCacheMapFileLock);
  KeAbPostRelease((ULONG_PTR)&CcChangeSharedCacheMapFileLock);
  return v3;
}
