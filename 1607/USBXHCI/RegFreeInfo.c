/*
 * XREFs of RegFreeInfo @ 0x1C00552F8
 * Callers:
 *     TelemetryData_pInitWerContext @ 0x1C0054EE0 (TelemetryData_pInitWerContext.c)
 *     RegRetrieveValueInfo @ 0x1C0055314 (RegRetrieveValueInfo.c)
 * Callees:
 *     <none>
 */

void __fastcall RegFreeInfo(void *a1)
{
  if ( a1 )
    ExFreePoolWithTag(a1, 0x74614454u);
}
