/*
 * XREFs of MmAcquireSessionPoolRundown @ 0x140499358
 * Callers:
 *     ExGetSessionPoolTagInfo @ 0x14008672C (ExGetSessionPoolTagInfo.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x140013B70 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPreAcquire @ 0x14002C1B0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14006AEC0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400C8280 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400C8640 (ExfReleasePushLockShared.c)
 */

__int64 __fastcall MmAcquireSessionPoolRundown(int a1)
{
  struct _KTHREAD *CurrentThread; // rsi
  unsigned __int64 v2; // r14
  __int64 v3; // rdi

  CurrentThread = KeGetCurrentThread();
  v2 = CurrentThread->ApcState.Process[1].ActiveProcessors.Bitmap[2];
  if ( a1 != 1 )
  {
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_1403268F0, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&qword_1403268F0);
    KeAbPostRelease((ULONG_PTR)&qword_1403268F0);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    return 1LL;
  }
  --CurrentThread->SpecialApcDisable;
  v3 = KeAbPreAcquire((ULONG_PTR)&qword_1403268F0, 0LL, 0);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_1403268F0, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(&qword_1403268F0, v3, (ULONG_PTR)&qword_1403268F0);
  if ( v3 )
    *(_BYTE *)(v3 + 26) |= 1u;
  if ( (*(_DWORD *)(v2 + 4) & 0x21) == 1 )
    return 1LL;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_1403268F0, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&qword_1403268F0);
  KeAbPostRelease((ULONG_PTR)&qword_1403268F0);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  return 0LL;
}
