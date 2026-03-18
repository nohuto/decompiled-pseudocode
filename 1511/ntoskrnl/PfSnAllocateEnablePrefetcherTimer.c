/*
 * XREFs of PfSnAllocateEnablePrefetcherTimer @ 0x1403A6BA8
 * Callers:
 *     PfSnBeginBootPhase @ 0x1403A6AC8 (PfSnBeginBootPhase.c)
 *     PfSnQueueEnablePrefetcherTimer @ 0x14054B6B0 (PfSnQueueEnablePrefetcherTimer.c)
 * Callees:
 *     KeInitializeTimerEx @ 0x14002C018 (KeInitializeTimerEx.c)
 *     KeInitializeDpc @ 0x140093330 (KeInitializeDpc.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 */

struct _KDPC *__fastcall PfSnAllocateEnablePrefetcherTimer(ULONG a1)
{
  struct _KTIMER *PoolWithTag; // rax
  struct _KDPC *v3; // rbx

  PoolWithTag = (struct _KTIMER *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x88uLL, 0x77506343u);
  v3 = (struct _KDPC *)PoolWithTag;
  if ( PoolWithTag )
  {
    KeInitializeTimerEx(PoolWithTag, NotificationTimer);
    KeInitializeDpc(v3 + 1, (PKDEFERRED_ROUTINE)PfSnEnablePrefetcherTimerRoutine, v3);
    v3[2].TargetInfoAsUlong = a1;
  }
  return v3;
}
