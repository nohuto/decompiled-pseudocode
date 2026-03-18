/*
 * XREFs of PfTSetTracingPriority @ 0x1403DEDC4
 * Callers:
 *     PfpLogEventRequest @ 0x14052FB44 (PfpLogEventRequest.c)
 * Callees:
 *     MmSetAccessLogging @ 0x140001D44 (MmSetAccessLogging.c)
 *     KeAbPostRelease @ 0x14006AEC0 (KeAbPostRelease.c)
 *     FsRtlAcquirePushLockExclusive @ 0x14007B188 (FsRtlAcquirePushLockExclusive.c)
 *     ExfTryToWakePushLock @ 0x1400C8738 (ExfTryToWakePushLock.c)
 */

void __fastcall PfTSetTracingPriority(int a1)
{
  FsRtlAcquirePushLockExclusive((volatile signed __int32 *)&qword_140328010);
  MmSetAccessLogging(dword_14032800C == 0, a1);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140328010, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_140328010);
  KeAbPostRelease((ULONG_PTR)&qword_140328010);
  KeLeaveCriticalRegion();
}
