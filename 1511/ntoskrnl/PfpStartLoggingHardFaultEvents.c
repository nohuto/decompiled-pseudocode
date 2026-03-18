/*
 * XREFs of PfpStartLoggingHardFaultEvents @ 0x1403A5618
 * Callers:
 *     PfPowerActionNotify @ 0x1403A46FC (PfPowerActionNotify.c)
 * Callees:
 *     KeInitializeTimerEx @ 0x14002C018 (KeInitializeTimerEx.c)
 *     KeReleaseSpinLock @ 0x14002D960 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140038DA0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeSetTimer @ 0x140091530 (KeSetTimer.c)
 *     KeInitializeDpc @ 0x140093330 (KeInitializeDpc.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 */

__int64 PfpStartLoggingHardFaultEvents()
{
  struct _KTIMER *PoolWithTag; // rax
  unsigned int v1; // edi
  struct _KTIMER *v2; // rsi
  KIRQL v3; // al

  PoolWithTag = (struct _KTIMER *)ExAllocatePoolWithTag(NonPagedPoolNx, 0xA8uLL, 0x44506650u);
  v1 = 0;
  v2 = PoolWithTag;
  if ( PoolWithTag )
  {
    LODWORD(PoolWithTag[2].TimerListEntry.Flink) = 0;
    v3 = KeAcquireSpinLockRaiseToDpc(&qword_1403057C8);
    HIDWORD(v2[2].TimerListEntry.Flink) = ++dword_1403057D4;
    _InterlockedOr(&dword_140317B14, 1u);
    KeReleaseSpinLock(&qword_1403057C8, v3);
    KeInitializeTimerEx(v2 + 1, NotificationTimer);
    KeInitializeDpc((PRKDPC)v2, (PKDEFERRED_ROUTINE)PfpPowerActionDpcRoutine, v2);
    KeSetTimer(v2 + 1, (LARGE_INTEGER)-200000000LL, (PKDPC)v2);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v1;
}
