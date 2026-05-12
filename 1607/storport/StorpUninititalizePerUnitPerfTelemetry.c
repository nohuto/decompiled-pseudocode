/*
 * XREFs of StorpUninititalizePerUnitPerfTelemetry @ 0x1C0041F18
 * Callers:
 *     StorpInitializeUnitTelemetry @ 0x1C00108C0 (StorpInitializeUnitTelemetry.c)
 *     RaidUnitFreeResources @ 0x1C0014E08 (RaidUnitFreeResources.c)
 * Callees:
 *     <none>
 */

void __fastcall StorpUninititalizePerUnitPerfTelemetry(_QWORD *a1)
{
  void *v2; // rcx
  void *v3; // rcx
  void *v4; // rcx

  v2 = (void *)a1[231];
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0x65546152u);
    a1[231] = 0LL;
  }
  v3 = (void *)a1[233];
  if ( v3 )
  {
    ExFreePoolWithTag(v3, 0x65546152u);
    a1[233] = 0LL;
  }
  v4 = (void *)a1[234];
  if ( v4 )
  {
    ExFreePoolWithTag(v4, 0x65546152u);
    a1[234] = 0LL;
  }
}
