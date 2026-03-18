/*
 * XREFs of ExTryToAcquireFastMutex @ 0x1400DFFC4
 * Callers:
 *     FsRtlTryToAcquireHeaderMutex @ 0x1400DFFAC (FsRtlTryToAcquireHeaderMutex.c)
 *     KeTryToAcquireGuardedMutex @ 0x1400DFFBC (KeTryToAcquireGuardedMutex.c)
 *     RawScanDeletedList @ 0x140491E64 (RawScanDeletedList.c)
 *     ViExTryToAcquireFastMutexCommon @ 0x1406CE630 (ViExTryToAcquireFastMutexCommon.c)
 *     CreateMiniNtBootKey @ 0x140781A50 (CreateMiniNtBootKey.c)
 * Callees:
 *     KeAbPostReleaseEx @ 0x1400317E4 (KeAbPostReleaseEx.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 */

BOOLEAN __stdcall ExTryToAcquireFastMutex(PFAST_MUTEX FastMutex)
{
  ULONG_PTR v2; // rax
  unsigned __int8 CurrentIrql; // dl
  BOOLEAN result; // al

  v2 = KeAbPreAcquire((ULONG_PTR)FastMutex, 0LL, 1LL);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  if ( _interlockedbittestandreset(&FastMutex->Count, 0) )
  {
    if ( v2 )
      *(_BYTE *)(v2 + 26) |= 1u;
    result = 1;
    FastMutex->Owner = KeGetCurrentThread();
    FastMutex->OldIrql = CurrentIrql;
  }
  else
  {
    __writecr8(CurrentIrql);
    if ( v2 )
      KeAbPostReleaseEx((ULONG_PTR)FastMutex, v2);
    _mm_pause();
    return 0;
  }
  return result;
}
