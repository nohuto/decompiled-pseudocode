/*
 * XREFs of PspUnlockProcessExclusive @ 0x1400F22D8
 * Callers:
 *     NtSetInformationProcess @ 0x140425A10 (NtSetInformationProcess.c)
 *     NtCreateUserProcess @ 0x14045AB40 (NtCreateUserProcess.c)
 *     PspRundownSingleProcess @ 0x14045E0C0 (PspRundownSingleProcess.c)
 *     PspInsertProcess @ 0x14045F5C0 (PspInsertProcess.c)
 *     PspAllocateProcess @ 0x14046F030 (PspAllocateProcess.c)
 *     PspProcessClose @ 0x1404A3328 (PspProcessClose.c)
 *     PsSetProcessTelemetryAppState @ 0x1404A33DC (PsSetProcessTelemetryAppState.c)
 *     PsSetProcessWin32Process @ 0x1404A367C (PsSetProcessWin32Process.c)
 *     PspThreadDelete @ 0x1404A37B8 (PspThreadDelete.c)
 *     PsSetProcessFaultInformation @ 0x1404F09D4 (PsSetProcessFaultInformation.c)
 *     NtTerminateProcess @ 0x140507D84 (NtTerminateProcess.c)
 *     PspExitThread @ 0x14051611C (PspExitThread.c)
 *     PsThawProcess @ 0x14051DFE8 (PsThawProcess.c)
 *     PsFreezeProcess @ 0x14051E428 (PsFreezeProcess.c)
 *     PspCreatePicoProcess @ 0x1406815A4 (PspCreatePicoProcess.c)
 * Callees:
 *     KeAbPostRelease @ 0x14006AEC0 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1400C8738 (ExfTryToWakePushLock.c)
 */

__int64 __fastcall PspUnlockProcessExclusive(__int64 a1, __int64 a2)
{
  ULONG_PTR v3; // rbx

  v3 = a1 + 728;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 728), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 728));
  KeAbPostRelease(v3);
  return KeLeaveCriticalRegionThread(a2);
}
