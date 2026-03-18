/*
 * XREFs of EtwpTracingProvEnableCallback @ 0x1405C2D04
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall EtwpTracingProvEnableCallback(
        LPCGUID SourceId,
        ULONG ControlCode,
        UCHAR Level,
        ULONGLONG MatchAnyKeyword)
{
  if ( ControlCode == 2 )
    JUMPOUT(0x14064DBA0LL);
}
