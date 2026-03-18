/*
 * XREFs of AcpiDiagThermalPollingTraceControlCallback @ 0x1C0033C30
 * Callers:
 *     <none>
 * Callees:
 *     AcpiDiagRequeueThermalPollingTimer @ 0x1C000483C (AcpiDiagRequeueThermalPollingTimer.c)
 */

void __fastcall AcpiDiagThermalPollingTraceControlCallback(
        LPCGUID SourceId,
        ULONG ControlCode,
        UCHAR Level,
        ULONGLONG MatchAnyKeyword)
{
  __int64 v4; // rax
  _QWORD *i; // rcx

  v4 = 0LL;
  if ( !ControlCode )
    goto LABEL_8;
  if ( ControlCode == 1 )
  {
    for ( i = &AcpiDiagThermalPollingIntervals; (MatchAnyKeyword & *i) == 0; i += 2 )
    {
      LODWORD(v4) = v4 + 1;
      if ( (unsigned int)v4 >= 5 )
        return;
    }
    v4 = i[1];
    if ( AcpiDiagThermalPollingInterval != v4 )
    {
LABEL_8:
      AcpiDiagThermalPollingInterval = v4;
      AcpiDiagRequeueThermalPollingTimer();
    }
  }
}
