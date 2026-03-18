/*
 * XREFs of EtwpUpdateDisallowList @ 0x1404C6270
 * Callers:
 *     NtTraceControl @ 0x140436E10 (NtTraceControl.c)
 * Callees:
 *     EtwpReleaseLoggerContext @ 0x14046D1BC (EtwpReleaseLoggerContext.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x14046D240 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpUpdateDisallowedGuids @ 0x1404CF680 (EtwpUpdateDisallowedGuids.c)
 */

__int64 __fastcall EtwpUpdateDisallowList(unsigned int a1, unsigned __int16 a2, __int64 a3)
{
  unsigned int *v5; // rax
  unsigned int *v6; // rdi
  unsigned int updated; // ebx

  v5 = EtwpAcquireLoggerContextByLoggerId(0LL, a1, 0);
  v6 = v5;
  if ( v5 )
  {
    updated = EtwpUpdateDisallowedGuids(v5, a2, a3);
    EtwpReleaseLoggerContext(0LL, v6, 0);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return updated;
}
