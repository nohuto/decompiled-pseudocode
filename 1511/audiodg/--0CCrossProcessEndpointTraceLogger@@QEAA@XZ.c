/*
 * XREFs of ??0CCrossProcessEndpointTraceLogger@@QEAA@XZ @ 0x140013B3C
 * Callers:
 *     ??0CCrossProcessBaseEndpoint@@IEAA@XZ @ 0x140014BFC (--0CCrossProcessBaseEndpoint@@IEAA@XZ.c)
 * Callees:
 *     ??0?$CAggregateTelemetryClustered@W4CpGlitchEvent@@PEAI$0A@$0A@@@QEAA@PEAV?$CAggregateValuesClusteredBase@W4CpGlitchEvent@@PEAI@@_K11@Z @ 0x140013D20 (--0-$CAggregateTelemetryClustered@W4CpGlitchEvent@@PEAI$0A@$0A@@@QEAA@PEAV-$CAggregateValuesClus.c)
 */

// Hidden C++ exception states: #wind=1
CCrossProcessEndpointTraceLogger *__fastcall CCrossProcessEndpointTraceLogger::CCrossProcessEndpointTraceLogger(
        CCrossProcessEndpointTraceLogger *this)
{
  *(_QWORD *)this = &CCrossProcessEndpointTraceLogger::`vftable';
  *(GUID *)((char *)this + 8) = GUID_00000000_0000_0000_0000_000000000000;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = &g_CrossProcessTelemetryProvider;
  *((_QWORD *)this + 8) = (char *)this + 8;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_DWORD *)this + 24) = 0;
  *((_QWORD *)this + 3) = &CCrossProcessEndpointTraceLogger::CCrossProcessEndpointGlitchValues::`vftable';
  CAggregateTelemetryClustered<enum CpGlitchEvent,unsigned int *,0,0>::CAggregateTelemetryClustered<enum CpGlitchEvent,unsigned int *,0,0>((char *)this + 104);
  return this;
}
