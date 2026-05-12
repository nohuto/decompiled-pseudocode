/*
 * XREFs of StorpUninititalizePerUnitPerfTelemetry @ 0x1C0039484
 * Callers:
 *     StorpInitializeUnitTelemetry @ 0x1C000A2D0 (StorpInitializeUnitTelemetry.c)
 *     RaidUnitFreeResources @ 0x1C000FA14 (RaidUnitFreeResources.c)
 * Callees:
 *     <none>
 */

void __fastcall StorpUninititalizePerUnitPerfTelemetry(__int64 a1)
{
  void *v2; // rcx
  void *v3; // rcx

  v2 = *(void **)(a1 + 1768);
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0x65546152u);
    *(_QWORD *)(a1 + 1768) = 0LL;
  }
  v3 = *(void **)(a1 + 1784);
  if ( v3 )
  {
    ExFreePoolWithTag(v3, 0x65546152u);
    *(_QWORD *)(a1 + 1784) = 0LL;
  }
}
