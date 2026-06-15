/*
 * XREFs of ?Log@?$CAggregateTelemetry@V?$CAggregateValuesClusteredBase@W4CpGlitchEvent@@PEAI@@W4CpGlitchEvent@@PEAI$0A@$0A@@@UEAAX_N@Z @ 0x140016440
 * Callers:
 *     ??1?$CAggregateTelemetryClustered@W4CpGlitchEvent@@PEAI$0A@$0A@@@UEAA@XZ @ 0x140015AF0 (--1-$CAggregateTelemetryClustered@W4CpGlitchEvent@@PEAI$0A@$0A@@@UEAA@XZ.c)
 *     ??1?$CAggregateTelemetry@V?$CAggregateValuesClusteredBase@W4CpGlitchEvent@@PEAI@@W4CpGlitchEvent@@PEAI$0A@$0A@@@UEAA@XZ @ 0x1400163E4 (--1-$CAggregateTelemetry@V-$CAggregateValuesClusteredBase@W4CpGlitchEvent@@PEAI@@W4CpGlitchEvent.c)
 * Callees:
 *     ?Clear@?$CAggregateTelemetryClustered@W4CpGlitchEvent@@PEAI$0A@$0A@@@UEAAXXZ @ 0x140015A70 (-Clear@-$CAggregateTelemetryClustered@W4CpGlitchEvent@@PEAI$0A@$0A@@@UEAAXXZ.c)
 *     ?LogTelemetry@CCrossProcessEndpointGlitchValues@CCrossProcessEndpointTraceLogger@@UEAAXXZ @ 0x140017B80 (-LogTelemetry@CCrossProcessEndpointGlitchValues@CCrossProcessEndpointTraceLogger@@UEAAXXZ.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C00 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CAggregateTelemetry<CAggregateValuesClusteredBase<enum CpGlitchEvent,unsigned int *>,enum CpGlitchEvent,unsigned int *,0,0>::Log(
        CCrossProcessEndpointTraceLogger::CCrossProcessEndpointGlitchValues **a1,
        char a2)
{
  CCrossProcessEndpointTraceLogger::CCrossProcessEndpointGlitchValues *v4; // rdi
  void (__fastcall *v5)(CCrossProcessEndpointTraceLogger::CCrossProcessEndpointGlitchValues *__hidden); // rsi
  __int64 (__fastcall *v6)(__int64); // rdi

  v4 = a1[1];
  if ( v4 )
  {
    v5 = *(void (__fastcall **)(CCrossProcessEndpointTraceLogger::CCrossProcessEndpointGlitchValues *__hidden))(*(_QWORD *)v4 + 24LL);
    if ( v5 == CCrossProcessEndpointTraceLogger::CCrossProcessEndpointGlitchValues::LogTelemetry )
      CCrossProcessEndpointTraceLogger::CCrossProcessEndpointGlitchValues::LogTelemetry(a1[1]);
    else
      v5(a1[1]);
  }
  if ( a2 )
  {
    v6 = (__int64 (__fastcall *)(__int64))*((_QWORD *)*a1 + 3);
    if ( v6 == CAggregateTelemetryClustered<enum CpGlitchEvent,unsigned int *,0,0>::Clear )
      CAggregateTelemetryClustered<enum CpGlitchEvent,unsigned int *,0,0>::Clear((__int64)a1);
    else
      v6((__int64)a1);
  }
}
