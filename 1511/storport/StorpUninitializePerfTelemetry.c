/*
 * XREFs of StorpUninitializePerfTelemetry @ 0x1C003BAB4
 * Callers:
 *     StorpInitializePerfTelemetry @ 0x1C000D094 (StorpInitializePerfTelemetry.c)
 *     StorpUnRegisterTraceLogging @ 0x1C0058888 (StorpUnRegisterTraceLogging.c)
 * Callees:
 *     <none>
 */

void StorpUninitializePerfTelemetry()
{
  if ( xmmword_1C00483A8 )
    ExFreePoolWithTag(xmmword_1C00483A8, 0x65546152u);
  if ( *(&xmmword_1C00483A8 + 1) )
    ExFreePoolWithTag(*(&xmmword_1C00483A8 + 1), 0x65546152u);
  if ( xmmword_1C00483B8 )
    ExFreePoolWithTag(xmmword_1C00483B8, 0x65546152u);
  if ( *(&xmmword_1C00483B8 + 1) )
    ExFreePoolWithTag(*(&xmmword_1C00483B8 + 1), 0x65546152u);
  if ( xmmword_1C00483D8 )
    ExFreePoolWithTag(xmmword_1C00483D8, 0x65546152u);
  if ( *(&xmmword_1C00483D8 + 1) )
    ExFreePoolWithTag(*(&xmmword_1C00483D8 + 1), 0x65546152u);
  if ( xmmword_1C00483E8 )
    ExFreePoolWithTag(xmmword_1C00483E8, 0x65546152u);
  if ( *(&xmmword_1C00483E8 + 1) )
    ExFreePoolWithTag(*(&xmmword_1C00483E8 + 1), 0x65546152u);
}
