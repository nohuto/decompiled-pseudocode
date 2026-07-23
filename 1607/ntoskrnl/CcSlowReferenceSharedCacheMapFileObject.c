/*
 * XREFs of CcSlowReferenceSharedCacheMapFileObject @ 0x1400CDC18
 * Callers:
 *     CcReferenceSharedCacheMapFileObject @ 0x1400CDBEC (CcReferenceSharedCacheMapFileObject.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400C6120 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400C64E0 (ExfReleasePushLockShared.c)
 *     ObFastReferenceObjectLocked @ 0x1400CF3D4 (ObFastReferenceObjectLocked.c)
 */

__int64 __fastcall CcSlowReferenceSharedCacheMapFileObject(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rbx

  v2 = KeAbPreAcquire((ULONG_PTR)&CcChangeSharedCacheMapFileLock, 0LL, 0);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&CcChangeSharedCacheMapFileLock, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(&CcChangeSharedCacheMapFileLock, v2, (ULONG_PTR)&CcChangeSharedCacheMapFileLock);
  if ( v2 )
    *(_BYTE *)(v2 + 26) |= 1u;
  v3 = ObFastReferenceObjectLocked(a1 + 96);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&CcChangeSharedCacheMapFileLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&CcChangeSharedCacheMapFileLock);
  KeAbPostRelease((ULONG_PTR)&CcChangeSharedCacheMapFileLock);
  return v3;
}
