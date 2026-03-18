/*
 * XREFs of PspUnlockProcessExclusive @ 0x14002BB54
 * Callers:
 *     PspInsertProcess @ 0x1403E3600 (PspInsertProcess.c)
 *     PspRundownSingleProcess @ 0x1403E770C (PspRundownSingleProcess.c)
 *     PspExitThread @ 0x1403F0588 (PspExitThread.c)
 *     PspThreadDelete @ 0x1403F1F50 (PspThreadDelete.c)
 *     NtCreateUserProcess @ 0x14044741C (NtCreateUserProcess.c)
 *     PsSetProcessTelemetryAppState @ 0x14044B0E4 (PsSetProcessTelemetryAppState.c)
 *     PspAllocateProcess @ 0x14044C768 (PspAllocateProcess.c)
 *     NtTerminateProcess @ 0x140450420 (NtTerminateProcess.c)
 *     NtSetInformationProcess @ 0x1404507B0 (NtSetInformationProcess.c)
 *     PsThawProcess @ 0x1404529E8 (PsThawProcess.c)
 *     PsFreezeProcess @ 0x140452D70 (PsFreezeProcess.c)
 *     PspProcessClose @ 0x1404A3F14 (PspProcessClose.c)
 *     PsSetProcessWin32Process @ 0x1404B2534 (PsSetProcessWin32Process.c)
 *     PsSetProcessFaultInformation @ 0x1404C5CE0 (PsSetProcessFaultInformation.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 */

__int64 __fastcall PspUnlockProcessExclusive(__int64 a1, __int64 a2)
{
  ULONG_PTR v3; // rbx

  v3 = a1 + 728;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 728), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(a1 + 728);
  KeAbPostRelease(v3);
  return KeLeaveCriticalRegionThread(a2);
}
