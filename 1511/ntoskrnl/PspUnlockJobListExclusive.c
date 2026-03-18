/*
 * XREFs of PspUnlockJobListExclusive @ 0x140487758
 * Callers:
 *     PspJobDelete @ 0x1400C49F4 (PspJobDelete.c)
 *     NtCreateJobObject @ 0x140487354 (NtCreateJobObject.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 */

__int64 __fastcall PspUnlockJobListExclusive(__int64 a1)
{
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PspJobListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&PspJobListLock);
  KeAbPostRelease((ULONG_PTR)&PspJobListLock);
  return KiLeaveGuardedRegionUnsafe(a1);
}
