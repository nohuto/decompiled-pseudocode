/*
 * XREFs of PspUnlockProcessExclusive @ 0x1400F0128
 * Callers:
 *     NtSetInformationProcess @ 0x1404248E0 (NtSetInformationProcess.c)
 *     NtCreateUserProcess @ 0x140459A10 (NtCreateUserProcess.c)
 *     PspRundownSingleProcess @ 0x14045CF90 (PspRundownSingleProcess.c)
 *     PspInsertProcess @ 0x14045E490 (PspInsertProcess.c)
 *     PspAllocateProcess @ 0x14046DF00 (PspAllocateProcess.c)
 *     PsSetProcessFaultInformation @ 0x1404D2AC8 (PsSetProcessFaultInformation.c)
 *     NtTerminateProcess @ 0x1404EAD14 (NtTerminateProcess.c)
 *     PspExitThread @ 0x1404F950C (PspExitThread.c)
 *     PsThawProcess @ 0x140501050 (PsThawProcess.c)
 *     PsFreezeProcess @ 0x140501490 (PsFreezeProcess.c)
 *     PspProcessClose @ 0x14051B728 (PspProcessClose.c)
 *     PsSetProcessTelemetryAppState @ 0x14051B7DC (PsSetProcessTelemetryAppState.c)
 *     PsSetProcessWin32Process @ 0x14051BA7C (PsSetProcessWin32Process.c)
 *     PspThreadDelete @ 0x14051BBB8 (PspThreadDelete.c)
 *     PspCreatePicoProcess @ 0x140681688 (PspCreatePicoProcess.c)
 * Callees:
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
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
