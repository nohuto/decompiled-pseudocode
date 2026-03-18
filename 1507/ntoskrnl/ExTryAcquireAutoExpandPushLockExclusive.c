/*
 * XREFs of ExTryAcquireAutoExpandPushLockExclusive @ 0x140263428
 * Callers:
 *     MiStealPage @ 0x140055CB0 (MiStealPage.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     KeAbPostReleaseEx @ 0x1400F49CC (KeAbPostReleaseEx.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     ExpTryAcquireFannedOutPushLockExclusive @ 0x1402635D0 (ExpTryAcquireFannedOutPushLockExclusive.c)
 */

char __fastcall ExTryAcquireAutoExpandPushLockExclusive(
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR BugCheckParameter1,
        __int64 a3,
        __int64 a4)
{
  ULONG_PTR v4; // rdi
  int v6; // ecx
  char v7; // si

  v4 = 0LL;
  if ( (BugCheckParameter1 & 0xFFFFFFFC) != 0 )
    KeBugCheckEx(0x152u, (unsigned int)BugCheckParameter1, BugCheckParameter2, 0LL, 0LL);
  if ( (BugCheckParameter1 & 2) == 0 )
    v4 = KeAbPreAcquire(BugCheckParameter2, 0LL, 1LL, a4);
  if ( _interlockedbittestandset64((volatile signed __int32 *)BugCheckParameter2, 0LL) )
  {
    v7 = 0;
    if ( (*(_DWORD *)(BugCheckParameter2 + 12) & 0xF0000u) < 0xF0000 )
      *(_DWORD *)(BugCheckParameter2 + 12) += 0x10000;
  }
  else
  {
    v6 = *(_DWORD *)(BugCheckParameter2 + 8);
    v7 = 1;
    if ( (v6 & 1) != 0 )
    {
      v7 = ExpTryAcquireFannedOutPushLockExclusive(v6 & 0xFFFFFFF8);
      if ( !v7
        && (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      {
        ExfTryToWakePushLock((volatile signed __int64 *)BugCheckParameter2);
      }
    }
  }
  if ( v4 )
  {
    if ( v7 )
      *(_BYTE *)(v4 + 26) |= 1u;
    else
      KeAbPostReleaseEx(BugCheckParameter2, v4);
  }
  return v7;
}
