/*
 * XREFs of PfSnLogHelper @ 0x1404F7F70
 * Callers:
 *     PfSnLogVolumeCreate @ 0x1404C0524 (PfSnLogVolumeCreate.c)
 *     PfSnLogStreamCreate @ 0x1404F7FE4 (PfSnLogStreamCreate.c)
 * Callees:
 *     ExReleaseRundownProtection @ 0x1400D1DA0 (ExReleaseRundownProtection.c)
 *     PfSnTraceGetLogEntry @ 0x1400ED550 (PfSnTraceGetLogEntry.c)
 *     PfSnReferenceProcessTrace @ 0x1400EE760 (PfSnReferenceProcessTrace.c)
 *     PfSnFailProcessTrace @ 0x14052A9D0 (PfSnFailProcessTrace.c)
 */

struct _EX_RUNDOWN_REF *__fastcall PfSnLogHelper(__int64 a1, unsigned int a2, _QWORD *a3)
{
  struct _EX_RUNDOWN_REF *v5; // rdi
  struct _EX_RUNDOWN_REF *v6; // rax
  struct _EX_RUNDOWN_REF *v7; // rbx

  v5 = 0LL;
  v6 = PfSnReferenceProcessTrace(a1);
  v7 = v6;
  if ( v6 )
  {
    if ( (int)PfSnTraceGetLogEntry((__int64)v6, a2, a3) < 0 )
    {
      PfSnFailProcessTrace(v7);
    }
    else
    {
      v5 = v7;
      v7 = 0LL;
    }
    if ( v7 )
      ExReleaseRundownProtection(v7 + 45);
  }
  return v5;
}
