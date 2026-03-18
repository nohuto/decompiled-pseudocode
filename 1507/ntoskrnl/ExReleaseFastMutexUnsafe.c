/*
 * XREFs of ExReleaseFastMutexUnsafe @ 0x1400628F0
 * Callers:
 *     VerifierExReleaseFastMutexUnsafe @ 0x140751BB8 (VerifierExReleaseFastMutexUnsafe.c)
 *     VerifierExReleaseFastMutexUnsafeNoReboot @ 0x140751C04 (VerifierExReleaseFastMutexUnsafeNoReboot.c)
 * Callees:
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 */

void __stdcall ExReleaseFastMutexUnsafe(PFAST_MUTEX FastMutex)
{
  unsigned __int32 v2; // eax

  FastMutex->Owner = 0LL;
  v2 = _InterlockedCompareExchange(&FastMutex->Count, 1, 0);
  if ( v2 )
    ExpReleaseFastMutexContended(FastMutex, v2);
  KeAbPostRelease((ULONG_PTR)FastMutex);
}
