/*
 * XREFs of FsRtlTryToAcquireHeaderMutex @ 0x14012BF10
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostReleaseEx @ 0x1400F49CC (KeAbPostReleaseEx.c)
 */

char __fastcall FsRtlTryToAcquireHeaderMutex(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  ULONG_PTR v4; // rdi
  ULONG_PTR v5; // rax
  unsigned __int8 CurrentIrql; // cl
  char v7; // bl

  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 48LL);
  v5 = KeAbPreAcquire(v4, 0LL, 1LL, a4);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  v7 = 0;
  if ( _interlockedbittestandreset((volatile signed __int32 *)v4, 0) )
  {
    if ( v5 )
      *(_BYTE *)(v5 + 26) |= 1u;
    v7 = 1;
    *(_QWORD *)(v4 + 8) = KeGetCurrentThread();
    *(_DWORD *)(v4 + 48) = CurrentIrql;
  }
  else
  {
    __writecr8(CurrentIrql);
    if ( v5 )
      KeAbPostReleaseEx(v4, v5);
    _mm_pause();
  }
  return v7;
}
