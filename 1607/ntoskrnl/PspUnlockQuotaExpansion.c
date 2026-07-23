/*
 * XREFs of PspUnlockQuotaExpansion @ 0x1400C4814
 * Callers:
 *     PspReturnResourceQuota @ 0x1400C46E0 (PspReturnResourceQuota.c)
 *     PspExpandQuota @ 0x1400C4764 (PspExpandQuota.c)
 *     PspInsertExpansionEntry @ 0x14014AD68 (PspInsertExpansionEntry.c)
 *     PspExpandLimit @ 0x14020EDCC (PspExpandLimit.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x1400136F0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 *     KeReleaseSpinLock @ 0x1400EB600 (KeReleaseSpinLock.c)
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
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  }
}
