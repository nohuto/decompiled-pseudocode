/*
 * XREFs of PopDiagTraceControlCallback @ 0x14054CACC
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall PopDiagTraceControlCallback(
        LPCGUID SourceId,
        ULONG ControlCode,
        UCHAR Level,
        ULONGLONG MatchAnyKeyword)
{
  if ( ControlCode == 2 )
    JUMPOUT(0x140627D9ALL);
}
