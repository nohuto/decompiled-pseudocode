/*
 * XREFs of PfTSetTracingPriority @ 0x1403DEDC4
 * Callers:
 *     PfpLogEventRequest @ 0x140530084 (PfpLogEventRequest.c)
 * Callees:
 *     MmSetAccessLogging @ 0x140001EB8 (MmSetAccessLogging.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     FsRtlAcquirePushLockExclusive @ 0x14007B208 (FsRtlAcquirePushLockExclusive.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 */

void __fastcall PfTSetTracingPriority(int a1)
{
  FsRtlAcquirePushLockExclusive((volatile signed __int32 *)&qword_140328050);
  MmSetAccessLogging(dword_14032804C == 0, a1);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140328050, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_140328050);
  KeAbPostRelease((ULONG_PTR)&qword_140328050);
  KeLeaveCriticalRegion();
}
