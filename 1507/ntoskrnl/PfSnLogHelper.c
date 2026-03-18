/*
 * XREFs of PfSnLogHelper @ 0x140443494
 * Callers:
 *     PfSnLogStreamCreate @ 0x140443320 (PfSnLogStreamCreate.c)
 *     PfSnLogVolumeCreate @ 0x14054C294 (PfSnLogVolumeCreate.c)
 * Callees:
 *     PfSnTraceGetLogEntry @ 0x14001A3A8 (PfSnTraceGetLogEntry.c)
 *     PfSnReferenceProcessTrace @ 0x14001A540 (PfSnReferenceProcessTrace.c)
 *     ExfReleaseRundownProtection @ 0x140030F40 (ExfReleaseRundownProtection.c)
 *     PfSnFailProcessTrace @ 0x1405607C4 (PfSnFailProcessTrace.c)
 */

struct _EX_RUNDOWN_REF *__fastcall PfSnLogHelper(__int64 a1, unsigned int a2, _QWORD *a3)
{
  struct _EX_RUNDOWN_REF *v5; // rdi
  struct _EX_RUNDOWN_REF *v6; // rax
  struct _EX_RUNDOWN_REF *v7; // rbx
  unsigned __int64 v9; // rtt

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
    {
      _m_prefetchw(&v7[45]);
      v9 = v7[45].Count & 0xFFFFFFFFFFFFFFFEuLL;
      if ( v9 != _InterlockedCompareExchange64((volatile signed __int64 *)&v7[45], v9 - 2, v9) )
        ExfReleaseRundownProtection(v7 + 45);
    }
  }
  return v5;
}
