/*
 * XREFs of ExTryToAcquireFastMutex @ 0x140263A28
 * Callers:
 *     ViExTryToAcquireFastMutexCommon @ 0x140752060 (ViExTryToAcquireFastMutexCommon.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostReleaseEx @ 0x1400F49CC (KeAbPostReleaseEx.c)
 */

BOOLEAN __stdcall ExTryToAcquireFastMutex(PFAST_MUTEX FastMutex)
{
  __int64 v1; // r9
  ULONG_PTR v3; // rax
  unsigned __int8 CurrentIrql; // dl
  BOOLEAN result; // al

  v3 = KeAbPreAcquire((ULONG_PTR)FastMutex, 0LL, 1LL, v1);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  if ( _interlockedbittestandreset(&FastMutex->Count, 0) )
  {
    if ( v3 )
      *(_BYTE *)(v3 + 26) |= 1u;
    result = 1;
    FastMutex->Owner = KeGetCurrentThread();
    FastMutex->OldIrql = CurrentIrql;
  }
  else
  {
    __writecr8(CurrentIrql);
    if ( v3 )
      KeAbPostReleaseEx((ULONG_PTR)FastMutex, v3);
    _mm_pause();
    return 0;
  }
  return result;
}
