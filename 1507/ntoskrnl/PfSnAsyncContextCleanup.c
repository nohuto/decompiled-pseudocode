/*
 * XREFs of PfSnAsyncContextCleanup @ 0x140456AA8
 * Callers:
 *     PfSnAsyncPrefetchWorker @ 0x1404567D0 (PfSnAsyncPrefetchWorker.c)
 * Callees:
 *     ExfReleaseRundownProtection @ 0x140030F40 (ExfReleaseRundownProtection.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 */

void __fastcall PfSnAsyncContextCleanup(_QWORD *a1)
{
  struct _EX_RUNDOWN_REF *v2; // rcx
  struct _EX_RUNDOWN_REF *v3; // rcx
  unsigned __int64 v4; // rtt
  void *v5; // rcx
  void *v6; // rcx

  v2 = (struct _EX_RUNDOWN_REF *)a1[28];
  if ( v2 )
  {
    v3 = v2 + 45;
    _m_prefetchw(v3);
    v4 = v3->Count & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v4 != _InterlockedCompareExchange64((volatile signed __int64 *)v3, v4 - 2, v4) )
      ExfReleaseRundownProtection(v3);
  }
  v5 = (void *)a1[26];
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  v6 = (void *)a1[27];
  if ( v6 )
    ObfDereferenceObject(v6);
}
