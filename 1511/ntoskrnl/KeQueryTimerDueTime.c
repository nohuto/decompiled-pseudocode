/*
 * XREFs of KeQueryTimerDueTime @ 0x1401C35D8
 * Callers:
 *     ExGetNextWakeTimeForDeepSleep @ 0x140214510 (ExGetNextWakeTimeForDeepSleep.c)
 *     ExGetWakeTimerList @ 0x14021457C (ExGetWakeTimerList.c)
 *     ExGetNextWakeTime @ 0x1403B3094 (ExGetNextWakeTime.c)
 *     NtQueryTimer @ 0x14066CFDC (NtQueryTimer.c)
 * Callees:
 *     KiAcquireKobjectLockSafe @ 0x140034400 (KiAcquireKobjectLockSafe.c)
 */

__int64 __fastcall KeQueryTimerDueTime(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdi
  unsigned __int8 CurrentIrql; // si

  v4 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  KiAcquireKobjectLockSafe((volatile signed __int32 *)a1, a2, a3);
  if ( (*(_BYTE *)(a1 + 3) & 0x40) != 0 )
    v4 = *(_QWORD *)(a1 + 24);
  _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
  __writecr8(CurrentIrql);
  return v4;
}
