/*
 * XREFs of RegFreeInfo @ 0x1C005216C
 * Callers:
 *     TelemetryData_pInitWerContext @ 0x1C0051D50 (TelemetryData_pInitWerContext.c)
 *     RegRetrieveValueInfo @ 0x1C0052188 (RegRetrieveValueInfo.c)
 * Callees:
 *     <none>
 */

void __fastcall RegFreeInfo(void *a1)
{
  if ( a1 )
    ExFreePoolWithTag(a1, 0x74614454u);
}
