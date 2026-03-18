/*
 * XREFs of PerfDiagpBootUserProxyCallback @ 0x14050C3E0
 * Callers:
 *     <none>
 * Callees:
 *     PerfDiagpRequestState @ 0x14050C404 (PerfDiagpRequestState.c)
 */

void __fastcall PerfDiagpBootUserProxyCallback(
        LPCGUID SourceId,
        __int64 ControlCode,
        __int64 Level,
        ULONGLONG MatchAnyKeyword)
{
  __int64 v4; // rcx

  if ( !(_DWORD)ControlCode )
  {
    v4 = 4LL;
LABEL_3:
    PerfDiagpRequestState(v4, ControlCode, Level, MatchAnyKeyword);
    return;
  }
  if ( (_BYTE)Level == 85 )
  {
    v4 = 3LL;
    goto LABEL_3;
  }
}
