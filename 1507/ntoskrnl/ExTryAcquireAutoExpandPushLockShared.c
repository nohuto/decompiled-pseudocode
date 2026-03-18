/*
 * XREFs of ExTryAcquireAutoExpandPushLockShared @ 0x140263500
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostReleaseEx @ 0x1400F49CC (KeAbPostReleaseEx.c)
 *     ExfTryAcquirePushLockShared @ 0x1400F78D4 (ExfTryAcquirePushLockShared.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     ExpTryAcquireFannedOutPushLockShared @ 0x1402636A8 (ExpTryAcquireFannedOutPushLockShared.c)
 */

ULONG_PTR __fastcall ExTryAcquireAutoExpandPushLockShared(
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR BugCheckParameter1,
        __int64 a3,
        __int64 a4)
{
  ULONG_PTR v4; // rsi
  ULONG_PTR v5; // rbx
  int v7; // ebp
  int v8; // ecx

  v4 = 0LL;
  v5 = 0LL;
  if ( (BugCheckParameter1 & 0xFFFFFFFC) != 0 )
    KeBugCheckEx(0x152u, (unsigned int)BugCheckParameter1, BugCheckParameter2, 0LL, 0LL);
  v7 = BugCheckParameter1 & 2;
  if ( (BugCheckParameter1 & 2) == 0 )
    v4 = KeAbPreAcquire(BugCheckParameter2, 0LL, 1LL, a4);
  v8 = *(_DWORD *)(BugCheckParameter2 + 8);
  if ( (v8 & 1) != 0 )
  {
    v5 = ExpTryAcquireFannedOutPushLockShared(v8 & 0xFFFFFFF8);
  }
  else if ( !_InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 17LL, 0LL)
         || ExfTryAcquirePushLockShared((signed __int64 *)BugCheckParameter2) )
  {
    v5 = BugCheckParameter2 | 1;
  }
  if ( !v7 && v5 )
    v5 |= 2uLL;
  if ( v4 )
  {
    if ( v5 )
      *(_BYTE *)(v4 + 26) |= 1u;
    else
      KeAbPostReleaseEx(BugCheckParameter2, v4);
  }
  return v5;
}
