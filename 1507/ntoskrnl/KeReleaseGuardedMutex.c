/*
 * XREFs of KeReleaseGuardedMutex @ 0x14004F930
 * Callers:
 *     VerifierKeReleaseGuardedMutex @ 0x1407421CC (VerifierKeReleaseGuardedMutex.c)
 *     VerifierExReleaseFastMutex @ 0x140751B00 (VerifierExReleaseFastMutex.c)
 *     VerifierExReleaseFastMutexNoReboot @ 0x140751B98 (VerifierExReleaseFastMutexNoReboot.c)
 * Callees:
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 */

void __stdcall KeReleaseGuardedMutex(PKGUARDED_MUTEX Mutex)
{
  unsigned __int8 OldIrql; // di
  unsigned __int32 v3; // eax

  OldIrql = Mutex->OldIrql;
  Mutex->Owner = 0LL;
  v3 = _InterlockedCompareExchange(&Mutex->Count, 1, 0);
  if ( v3 )
    ExpReleaseFastMutexContended(Mutex, v3);
  __writecr8(OldIrql);
  KeAbPostRelease((ULONG_PTR)Mutex);
}
