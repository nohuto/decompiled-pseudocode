/*
 * XREFs of ExTryToAcquireFastMutex @ 0x140099E78
 * Callers:
 *     FsRtlTryToAcquireHeaderMutex @ 0x140099E3C (FsRtlTryToAcquireHeaderMutex.c)
 *     KeTryToAcquireGuardedMutex @ 0x140099E70 (KeTryToAcquireGuardedMutex.c)
 *     RawScanDeletedList @ 0x1404EF3DC (RawScanDeletedList.c)
 *     CreateMiniNtBootKey @ 0x1407CCE70 (CreateMiniNtBootKey.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002C1B0 (KeAbPreAcquire.c)
 *     KeAbPostReleaseEx @ 0x1400C66BC (KeAbPostReleaseEx.c)
 */

BOOLEAN __stdcall ExTryToAcquireFastMutex(PFAST_MUTEX FastMutex)
{
  __int64 v2; // rax
  unsigned __int8 CurrentIrql; // dl
  BOOLEAN result; // al

  v2 = KeAbPreAcquire((ULONG_PTR)FastMutex, 0LL, 1);
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
      KeAbPostReleaseEx((ULONG_PTR)FastMutex);
    _mm_pause();
    return 0;
  }
  return result;
}
