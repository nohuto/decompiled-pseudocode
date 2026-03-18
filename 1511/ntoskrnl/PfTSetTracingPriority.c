/*
 * XREFs of PfTSetTracingPriority @ 0x1403B20F0
 * Callers:
 *     PfpLogEventRequest @ 0x1404F7A38 (PfpLogEventRequest.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     PfLockExclusiveAcquire @ 0x1400FEFB4 (PfLockExclusiveAcquire.c)
 *     MmSetAccessLogging @ 0x14011B6E8 (MmSetAccessLogging.c)
 */

__int64 __fastcall PfTSetTracingPriority(int a1)
{
  PfLockExclusiveAcquire(&qword_140302490);
  MmSetAccessLogging(dword_14030248C == 0, a1);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140302490, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_140302490);
  KeAbPostRelease((ULONG_PTR)&qword_140302490);
  return KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
}
