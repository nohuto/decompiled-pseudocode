/*
 * XREFs of KeTryToAcquireGuardedMutex @ 0x14010B7B0
 * Callers:
 *     VerifierKeTryToAcquireGuardedMutex @ 0x1407422E0 (VerifierKeTryToAcquireGuardedMutex.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostReleaseEx @ 0x1400F49CC (KeAbPostReleaseEx.c)
 */

BOOLEAN __stdcall KeTryToAcquireGuardedMutex(PKGUARDED_MUTEX Mutex)
{
  __int64 v1; // r9
  ULONG_PTR v3; // rax
  unsigned __int8 CurrentIrql; // dl

  v3 = KeAbPreAcquire((ULONG_PTR)Mutex, 0LL, 1LL, v1);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  if ( _interlockedbittestandreset(&Mutex->Count, 0) )
  {
    if ( v3 )
      *(_BYTE *)(v3 + 26) |= 1u;
    Mutex->Owner = KeGetCurrentThread();
    Mutex->OldIrql = CurrentIrql;
    return 1;
  }
  else
  {
    __writecr8(CurrentIrql);
    if ( v3 )
      KeAbPostReleaseEx((ULONG_PTR)Mutex, v3);
    _mm_pause();
    return 0;
  }
}
