/*
 * XREFs of PfSnAsyncContextCleanup @ 0x1404DEF8C
 * Callers:
 *     PfSnAsyncPrefetchWorker @ 0x1404DEC44 (PfSnAsyncPrefetchWorker.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     ExReleaseRundownProtection_0 @ 0x14006EE30 (ExReleaseRundownProtection_0.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

void __fastcall PfSnAsyncContextCleanup(_QWORD *a1)
{
  struct _EX_RUNDOWN_REF *v2; // rcx
  void *v3; // rcx
  void *v4; // rcx

  v2 = (struct _EX_RUNDOWN_REF *)a1[28];
  if ( v2 )
    ExReleaseRundownProtection_0(v2 + 45);
  v3 = (void *)a1[26];
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
  v4 = (void *)a1[27];
  if ( v4 )
    ObfDereferenceObject(v4);
}
