/*
 * XREFs of PspLockProcessExclusive @ 0x14010D1A8
 * Callers:
 *     NtSetInformationProcess @ 0x1404248E0 (NtSetInformationProcess.c)
 *     PspRundownSingleProcess @ 0x14045CF90 (PspRundownSingleProcess.c)
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
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 */

_BYTE *__fastcall PspLockProcessExclusive(__int64 a1, __int64 a2)
{
  unsigned __int64 *v2; // rdi
  _BYTE *result; // rax
  _BYTE *v4; // rbx

  --*(_WORD *)(a2 + 484);
  v2 = (unsigned __int64 *)(a1 + 728);
  result = (_BYTE *)KeAbPreAcquire(a1 + 728, 0LL, 0);
  v4 = result;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v2, 0LL) )
    result = (_BYTE *)ExfAcquirePushLockExclusiveEx(v2, result, (ULONG_PTR)v2);
  if ( v4 )
  {
    result = (_BYTE *)*((_QWORD *)v4 + 4);
    v4[26] |= 1u;
  }
  return result;
}
