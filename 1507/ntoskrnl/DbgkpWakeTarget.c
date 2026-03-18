/*
 * XREFs of DbgkpWakeTarget @ 0x140668390
 * Callers:
 *     DbgkClearProcessDebugObject @ 0x1405685D8 (DbgkClearProcessDebugObject.c)
 *     DbgkpCloseObject @ 0x140666AD0 (DbgkpCloseObject.c)
 *     DbgkpSetProcessDebugObject @ 0x140667F30 (DbgkpSetProcessDebugObject.c)
 *     NtDebugContinue @ 0x1406687C4 (NtDebugContinue.c)
 * Callees:
 *     ExfReleaseRundownProtection @ 0x140030F40 (ExfReleaseRundownProtection.c)
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 *     PsResumeThread @ 0x1404209F4 (PsResumeThread.c)
 *     DbgkpFreeDebugEvent @ 0x140666E48 (DbgkpFreeDebugEvent.c)
 */

void __fastcall DbgkpWakeTarget(__int64 a1)
{
  struct _EX_RUNDOWN_REF *v2; // rdi
  unsigned __int64 v3; // rtt

  v2 = *(struct _EX_RUNDOWN_REF **)(a1 + 64);
  if ( (*(_DWORD *)(a1 + 76) & 0x20) != 0 )
    PsResumeThread(*(_QWORD *)(a1 + 64), 0LL);
  if ( (*(_DWORD *)(a1 + 76) & 8) != 0 )
  {
    _m_prefetchw(&v2[212]);
    v3 = v2[212].Count & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v3 != _InterlockedCompareExchange64((volatile signed __int64 *)&v2[212], v3 - 2, v3) )
      ExfReleaseRundownProtection(v2 + 212);
  }
  if ( (*(_DWORD *)(a1 + 76) & 2) != 0 )
    DbgkpFreeDebugEvent(a1);
  else
    KeSetEvent((PRKEVENT)(a1 + 16), 0, 0);
}
