/*
 * XREFs of DbgkpWakeTarget @ 0x14061959C
 * Callers:
 *     DbgkClearProcessDebugObject @ 0x1404F0FB8 (DbgkClearProcessDebugObject.c)
 *     DbgkpCloseObject @ 0x140618178 (DbgkpCloseObject.c)
 *     DbgkpSetProcessDebugObject @ 0x14061927C (DbgkpSetProcessDebugObject.c)
 *     NtDebugContinue @ 0x140619998 (NtDebugContinue.c)
 * Callees:
 *     KeSetEvent @ 0x1400562D0 (KeSetEvent.c)
 *     ExReleaseRundownProtection @ 0x1400D3F00 (ExReleaseRundownProtection.c)
 *     PsResumeThread @ 0x1404CCE44 (PsResumeThread.c)
 *     DbgkpFreeDebugEvent @ 0x1406183E0 (DbgkpFreeDebugEvent.c)
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
