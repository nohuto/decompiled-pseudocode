/*
 * XREFs of PspDereferenceMonitorServerSilo @ 0x140593698
 * Callers:
 *     PsSetMonitorContextServerSilo @ 0x14015EC2C (PsSetMonitorContextServerSilo.c)
 * Callees:
 *     <none>
 */

void __fastcall PspDereferenceMonitorServerSilo(struct _EX_RUNDOWN_REF *a1)
{
  struct _EX_RUNDOWN_REF *v1; // rcx
  unsigned __int64 v2; // rtt

  v1 = a1 + 6;
  _m_prefetchw(v1);
  v2 = v1->Count & 0xFFFFFFFFFFFFFFFEuLL;
  if ( v2 != _InterlockedCompareExchange64((volatile signed __int64 *)v1, v2 - 2, v2) )
    ExfReleaseRundownProtection(v1);
}
