/*
 * XREFs of MmAcquireSessionPoolRundown @ 0x140499DE8
 * Callers:
 *     ExGetSessionPoolTagInfo @ 0x14008801C (ExGetSessionPoolTagInfo.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x1400136F0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400C6120 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400C64E0 (ExfReleasePushLockShared.c)
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
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140326930, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&qword_140326930);
    KeAbPostRelease((ULONG_PTR)&qword_140326930);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    return 1LL;
  }
  --CurrentThread->SpecialApcDisable;
  v3 = KeAbPreAcquire((ULONG_PTR)&qword_140326930, 0LL, 0);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140326930, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(&qword_140326930, v3, (ULONG_PTR)&qword_140326930);
  if ( v3 )
    *(_BYTE *)(v3 + 26) |= 1u;
  if ( (*(_DWORD *)(v2 + 4) & 0x21) == 1 )
    return 1LL;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140326930, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&qword_140326930);
  KeAbPostRelease((ULONG_PTR)&qword_140326930);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  return 0LL;
}
