/*
 * XREFs of DbgkpWakeTarget @ 0x1405EF9A0
 * Callers:
 *     DbgkClearProcessDebugObject @ 0x1404F48C4 (DbgkClearProcessDebugObject.c)
 *     DbgkpCloseObject @ 0x1405EE548 (DbgkpCloseObject.c)
 *     DbgkpSetProcessDebugObject @ 0x1405EF678 (DbgkpSetProcessDebugObject.c)
 *     NtDebugContinue @ 0x1405EFD9C (NtDebugContinue.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14006EE30 (ExReleaseRundownProtection_0.c)
 *     KeSetEvent @ 0x1400875D0 (KeSetEvent.c)
 *     PsResumeThread @ 0x1404A7714 (PsResumeThread.c)
 *     DbgkpFreeDebugEvent @ 0x1405EE7B0 (DbgkpFreeDebugEvent.c)
 */

void __fastcall DbgkpWakeTarget(__int64 a1, __int64 a2, __int64 a3)
{
  struct _EX_RUNDOWN_REF *v4; // rdi

  v4 = *(struct _EX_RUNDOWN_REF **)(a1 + 64);
  if ( (*(_DWORD *)(a1 + 76) & 0x20) != 0 )
    PsResumeThread(*(_QWORD *)(a1 + 64), 0LL, a3);
  if ( (*(_DWORD *)(a1 + 76) & 8) != 0 )
    ExReleaseRundownProtection_0(v4 + 212);
  if ( (*(_DWORD *)(a1 + 76) & 2) != 0 )
    DbgkpFreeDebugEvent(a1);
  else
    KeSetEvent((PRKEVENT)(a1 + 16), 0, 0);
}
