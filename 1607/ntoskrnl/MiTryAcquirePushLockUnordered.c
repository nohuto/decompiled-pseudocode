/*
 * XREFs of MiTryAcquirePushLockUnordered @ 0x1401E68A8
 * Callers:
 *     MiStealPage @ 0x140107E84 (MiStealPage.c)
 *     MiQueueLargeFreeZeroRebuild @ 0x1401FD69C (MiQueueLargeFreeZeroRebuild.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002C1B0 (KeAbPreAcquire.c)
 *     KeAbPostReleaseEx @ 0x1400C66BC (KeAbPostReleaseEx.c)
 *     ExfTryAcquirePushLockShared @ 0x1400C7C18 (ExfTryAcquirePushLockShared.c)
 */

char __fastcall MiTryAcquirePushLockUnordered(
        volatile signed __int32 *BugCheckParameter2,
        __int64 a2,
        int a3,
        _DWORD *a4)
{
  char v4; // bl
  __int64 v6; // rax
  unsigned __int64 v7; // rdx
  __int64 v8; // rdi

  *a4 = 0;
  v4 = 1;
  if ( a3 == 1 )
  {
    v6 = KeAbPreAcquire((ULONG_PTR)BugCheckParameter2, 0LL, 1);
    v7 = v6;
    if ( !_interlockedbittestandset64(BugCheckParameter2, 0LL) )
    {
      if ( v6 )
        *(_BYTE *)(v6 + 26) |= 1u;
      return v4;
    }
    if ( v6 )
      goto LABEL_11;
    return 0;
  }
  v8 = KeAbPreAcquire((ULONG_PTR)BugCheckParameter2, 0LL, 1);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 17LL, 0LL)
    && !ExfTryAcquirePushLockShared((signed __int64 *)BugCheckParameter2) )
  {
    if ( v8 )
    {
      v7 = v8;
LABEL_11:
      KeAbPostReleaseEx((ULONG_PTR)BugCheckParameter2, v7);
    }
    return 0;
  }
  if ( v8 )
    *(_BYTE *)(v8 + 26) |= 1u;
  return v4;
}
