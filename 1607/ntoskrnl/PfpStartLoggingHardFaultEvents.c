/*
 * XREFs of PfpStartLoggingHardFaultEvents @ 0x1403D03E4
 * Callers:
 *     PfPowerActionNotify @ 0x1403CFF90 (PfPowerActionNotify.c)
 * Callees:
 *     KiSetTimerEx @ 0x140006F70 (KiSetTimerEx.c)
 *     KeInitializeDpc @ 0x14000D25C (KeInitializeDpc.c)
 *     KeReleaseSpinLock @ 0x1400EB600 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EDCB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeInitializeTimerEx @ 0x1400EEAA0 (KeInitializeTimerEx.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

__int64 PfpStartLoggingHardFaultEvents()
{
  _DWORD *PoolWithTag; // rax
  unsigned int v1; // edi
  __int64 v2; // rsi
  KIRQL v3; // al

  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0xA8uLL, 0x44506650u);
  v1 = 0;
  v2 = (__int64)PoolWithTag;
  if ( PoolWithTag )
  {
    PoolWithTag[40] = 0;
    v3 = KeAcquireSpinLockRaiseToDpc(&qword_140328608);
    *(_DWORD *)(v2 + 164) = ++dword_140328614;
    _InterlockedOr(&dword_14033B854, 1u);
    KeReleaseSpinLock(&qword_140328608, v3);
    KeInitializeTimerEx((PKTIMER)(v2 + 64), NotificationTimer);
    KeInitializeDpc((PRKDPC)v2, (PKDEFERRED_ROUTINE)PfpPowerActionDpcRoutine, (PVOID)v2);
    KiSetTimerEx(v2 + 64, -200000000LL, 0, 0, v2);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v1;
}
