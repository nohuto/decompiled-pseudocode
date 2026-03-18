/*
 * XREFs of MiUnlockControlAreaFileObjectShared @ 0x140009694
 * Callers:
 *     MiTrimSection @ 0x1400083E8 (MiTrimSection.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x1400309E0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 */

__int64 __fastcall MiUnlockControlAreaFileObjectShared(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rdi
  ULONG_PTR v2; // rbx

  CurrentThread = KeGetCurrentThread();
  v2 = a1 + 112;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 112), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v2);
  KeAbPostRelease(v2);
  return KiLeaveGuardedRegionUnsafe(CurrentThread);
}
