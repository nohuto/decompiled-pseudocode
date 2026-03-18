/*
 * XREFs of PspLockProcessExclusive @ 0x140088FB8
 * Callers:
 *     NtSetInformationProcess @ 0x140425A10 (NtSetInformationProcess.c)
 *     PspRundownSingleProcess @ 0x14045E0C0 (PspRundownSingleProcess.c)
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
 *     KeAbPreAcquire @ 0x14002C1B0 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C8070 (ExfAcquirePushLockExclusiveEx.c)
 */

__int64 __fastcall PspLockProcessExclusive(__int64 a1, __int64 a2)
{
  volatile signed __int32 *v2; // rdi
  __int64 result; // rax
  __int64 v4; // rbx

  --*(_WORD *)(a2 + 484);
  v2 = (volatile signed __int32 *)(a1 + 728);
  result = KeAbPreAcquire(a1 + 728, 0LL, 0);
  v4 = result;
  if ( _interlockedbittestandset64(v2, 0LL) )
    result = ExfAcquirePushLockExclusiveEx(v2, result, v2);
  if ( v4 )
  {
    result = *(_QWORD *)(v4 + 32);
    *(_BYTE *)(v4 + 26) |= 1u;
  }
  return result;
}
