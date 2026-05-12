/*
 * XREFs of StorpUninitializePerfTelemetry @ 0x1C00393D0
 * Callers:
 *     StorpInitializePerfTelemetry @ 0x1C000AE68 (StorpInitializePerfTelemetry.c)
 *     StorpUnRegisterTraceLogging @ 0x1C0054948 (StorpUnRegisterTraceLogging.c)
 * Callees:
 *     <none>
 */

void StorpUninitializePerfTelemetry()
{
  if ( xmmword_1C00443A8 )
    ExFreePoolWithTag(xmmword_1C00443A8, 0x65546152u);
  if ( *(&xmmword_1C00443A8 + 1) )
    ExFreePoolWithTag(*(&xmmword_1C00443A8 + 1), 0x65546152u);
  if ( xmmword_1C00443B8 )
    ExFreePoolWithTag(xmmword_1C00443B8, 0x65546152u);
  if ( *(&xmmword_1C00443B8 + 1) )
    ExFreePoolWithTag(*(&xmmword_1C00443B8 + 1), 0x65546152u);
  if ( xmmword_1C00443D8 )
    ExFreePoolWithTag(xmmword_1C00443D8, 0x65546152u);
  if ( *(&xmmword_1C00443D8 + 1) )
    ExFreePoolWithTag(*(&xmmword_1C00443D8 + 1), 0x65546152u);
  if ( xmmword_1C00443E8 )
    ExFreePoolWithTag(xmmword_1C00443E8, 0x65546152u);
  if ( *(&xmmword_1C00443E8 + 1) )
    ExFreePoolWithTag(*(&xmmword_1C00443E8 + 1), 0x65546152u);
}
