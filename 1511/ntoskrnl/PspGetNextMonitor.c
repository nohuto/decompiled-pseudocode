/*
 * XREFs of PspGetNextMonitor @ 0x1406404F4
 * Callers:
 *     PspInitializeServerSiloDeferred @ 0x140640594 (PspInitializeServerSiloDeferred.c)
 *     PspNotifyServerSiloTermination @ 0x1406406EC (PspNotifyServerSiloTermination.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14006EE30 (ExReleaseRundownProtection_0.c)
 *     PspReferenceMonitorServerSilo @ 0x140526A0C (PspReferenceMonitorServerSilo.c)
 */

struct _EX_RUNDOWN_REF *__fastcall PspGetNextMonitor(__int64 a1, char a2)
{
  struct _EX_RUNDOWN_REF *v2; // rbp
  struct _EX_RUNDOWN_REF *v5; // rbx

  v2 = 0LL;
  if ( a1 )
  {
    if ( a2 )
      v5 = *(struct _EX_RUNDOWN_REF **)a1;
    else
      v5 = *(struct _EX_RUNDOWN_REF **)(a1 + 8);
  }
  else
  {
    v5 = (struct _EX_RUNDOWN_REF *)qword_1402DC108;
    if ( a2 )
      v5 = (struct _EX_RUNDOWN_REF *)PspSiloMonitorList;
  }
  while ( v5 != (struct _EX_RUNDOWN_REF *)&PspSiloMonitorList )
  {
    if ( (int)PspReferenceMonitorServerSilo(v5) >= 0 )
    {
      v2 = v5;
      break;
    }
    if ( a2 )
      v5 = *(struct _EX_RUNDOWN_REF **)a1;
    else
      v5 = *(struct _EX_RUNDOWN_REF **)(a1 + 8);
  }
  if ( a1 )
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(a1 + 32));
  return v2;
}
