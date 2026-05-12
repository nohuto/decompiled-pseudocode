/*
 * XREFs of StorpUninititalizePerUnitPerfTelemetry @ 0x1C003BB68
 * Callers:
 *     StorpInitializeUnitTelemetry @ 0x1C000C508 (StorpInitializeUnitTelemetry.c)
 *     RaidUnitFreeResources @ 0x1C0011CBC (RaidUnitFreeResources.c)
 * Callees:
 *     <none>
 */

void __fastcall StorpUninititalizePerUnitPerfTelemetry(__int64 a1)
{
  void *v2; // rcx
  void *v3; // rcx

  v2 = *(void **)(a1 + 1832);
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0x65546152u);
    *(_QWORD *)(a1 + 1832) = 0LL;
  }
  v3 = *(void **)(a1 + 1848);
  if ( v3 )
  {
    ExFreePoolWithTag(v3, 0x65546152u);
    *(_QWORD *)(a1 + 1848) = 0LL;
  }
}
