/*
 * XREFs of KeReleaseGuardedMutexUnsafe @ 0x14017E030
 * Callers:
 *     VerifierKeReleaseGuardedMutexUnsafe @ 0x1407421D4 (VerifierKeReleaseGuardedMutexUnsafe.c)
 * Callees:
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 */

void __stdcall KeReleaseGuardedMutexUnsafe(PKGUARDED_MUTEX FastMutex)
{
  signed __int32 v2; // eax

  FastMutex->Owner = 0LL;
  v2 = _InterlockedCompareExchange(&FastMutex->Count, 1, 0);
  if ( v2 )
    ExpReleaseFastMutexContended(&FastMutex->Count, v2);
  KeAbPostRelease((ULONG_PTR)FastMutex);
}
