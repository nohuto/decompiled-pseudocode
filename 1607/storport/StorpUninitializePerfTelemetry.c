/*
 * XREFs of StorpUninitializePerfTelemetry @ 0x1C0041E64
 * Callers:
 *     StorpInitializePerfTelemetry @ 0x1C000CC0C (StorpInitializePerfTelemetry.c)
 *     StorpUnRegisterTraceLogging @ 0x1C005FBE8 (StorpUnRegisterTraceLogging.c)
 * Callees:
 *     <none>
 */

void StorpUninitializePerfTelemetry()
{
  if ( P )
    ExFreePoolWithTag(P, 0x65546152u);
  if ( qword_1C004F430 )
    ExFreePoolWithTag(qword_1C004F430, 0x65546152u);
  if ( qword_1C004F438 )
    ExFreePoolWithTag(qword_1C004F438, 0x65546152u);
  if ( qword_1C004F440 )
    ExFreePoolWithTag(qword_1C004F440, 0x65546152u);
  if ( qword_1C004F458 )
    ExFreePoolWithTag(qword_1C004F458, 0x65546152u);
  if ( qword_1C004F460 )
    ExFreePoolWithTag(qword_1C004F460, 0x65546152u);
  if ( qword_1C004F468 )
    ExFreePoolWithTag(qword_1C004F468, 0x65546152u);
  if ( qword_1C004F470 )
    ExFreePoolWithTag(qword_1C004F470, 0x65546152u);
}
