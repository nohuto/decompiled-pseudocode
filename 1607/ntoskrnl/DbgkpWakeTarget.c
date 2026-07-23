/*
 * XREFs of DbgkpWakeTarget @ 0x140619650
 * Callers:
 *     DbgkClearProcessDebugObject @ 0x1404D30AC (DbgkClearProcessDebugObject.c)
 *     DbgkpCloseObject @ 0x14061822C (DbgkpCloseObject.c)
 *     DbgkpSetProcessDebugObject @ 0x140619330 (DbgkpSetProcessDebugObject.c)
 *     NtDebugContinue @ 0x140619A4C (NtDebugContinue.c)
 * Callees:
 *     KeSetEvent @ 0x140055E50 (KeSetEvent.c)
 *     ExReleaseRundownProtection @ 0x1400D1DA0 (ExReleaseRundownProtection.c)
 *     PsResumeThread @ 0x1404B2870 (PsResumeThread.c)
 *     DbgkpFreeDebugEvent @ 0x140618494 (DbgkpFreeDebugEvent.c)
 */

void __fastcall DbgkpWakeTarget(__int64 a1)
{
  struct _EX_RUNDOWN_REF *v2; // rdi

  v2 = *(struct _EX_RUNDOWN_REF **)(a1 + 64);
  if ( (*(_DWORD *)(a1 + 76) & 0x20) != 0 )
    PsResumeThread(*(_QWORD *)(a1 + 64), 0LL);
  if ( (*(_DWORD *)(a1 + 76) & 8) != 0 )
    ExReleaseRundownProtection(v2 + 213);
  if ( (*(_DWORD *)(a1 + 76) & 2) != 0 )
    DbgkpFreeDebugEvent(a1);
  else
    KeSetEvent((PRKEVENT)(a1 + 16), 0, 0);
}
