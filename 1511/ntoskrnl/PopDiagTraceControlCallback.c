/*
 * XREFs of PopDiagTraceControlCallback @ 0x1404CFC0C
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
    JUMPOUT(0x1405C5AF2LL);
}
