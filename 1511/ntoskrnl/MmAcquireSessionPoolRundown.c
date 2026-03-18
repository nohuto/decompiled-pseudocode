/*
 * XREFs of MmAcquireSessionPoolRundown @ 0x1404AC470
 * Callers:
 *     ExGetSessionPoolTagInfo @ 0x1400E6F20 (ExGetSessionPoolTagInfo.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140020AB0 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400309E0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400430F0 (KiLeaveGuardedRegionUnsafe.c)
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
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_1402FE628, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&qword_1402FE628);
    KeAbPostRelease((ULONG_PTR)&qword_1402FE628);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    return 1LL;
  }
  --CurrentThread->SpecialApcDisable;
  v3 = KeAbPreAcquire((ULONG_PTR)&qword_1402FE628, 0LL, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_1402FE628, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(&qword_1402FE628, v3, (ULONG_PTR)&qword_1402FE628);
  if ( v3 )
    *(_BYTE *)(v3 + 26) |= 1u;
  if ( (*(_DWORD *)(v2 + 4) & 0x21) == 1 )
    return 1LL;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_1402FE628, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&qword_1402FE628);
  KeAbPostRelease((ULONG_PTR)&qword_1402FE628);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  return 0LL;
}
