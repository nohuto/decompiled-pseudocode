/*
 * XREFs of PspUnlockQuotaExpansion @ 0x140012F30
 * Callers:
 *     PspReturnResourceQuota @ 0x140012DFC (PspReturnResourceQuota.c)
 *     PspExpandQuota @ 0x140012E80 (PspExpandQuota.c)
 *     PspInsertExpansionEntry @ 0x140140B78 (PspInsertExpansionEntry.c)
 *     PspExpandLimit @ 0x1401F52FC (PspExpandLimit.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14002D960 (KeReleaseSpinLock.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400430F0 (KiLeaveGuardedRegionUnsafe.c)
 */

void __fastcall PspUnlockQuotaExpansion(__int64 a1, KIRQL a2)
{
  struct _KTHREAD *CurrentThread; // rdi
  ULONG_PTR v3; // rbx

  if ( *(_DWORD *)a1 )
  {
    KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 16), a2);
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    v3 = a1 + 16;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(a1 + 16);
    KeAbPostRelease(v3);
    KiLeaveGuardedRegionUnsafe(CurrentThread);
  }
}
