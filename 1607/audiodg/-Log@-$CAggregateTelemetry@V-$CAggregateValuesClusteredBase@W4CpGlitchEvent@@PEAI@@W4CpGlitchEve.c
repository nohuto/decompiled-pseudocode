/*
 * XREFs of ?Log@?$CAggregateTelemetry@V?$CAggregateValuesClusteredBase@W4CpGlitchEvent@@PEAI@@W4CpGlitchEvent@@PEAI$0A@$0A@@@UEAAX_N@Z @ 0x140014C00
 * Callers:
 *     ??1?$CAggregateTelemetryClustered@W4CpGlitchEvent@@PEAI$0A@$0A@@@UEAA@XZ @ 0x140014A08 (--1-$CAggregateTelemetryClustered@W4CpGlitchEvent@@PEAI$0A@$0A@@@UEAA@XZ.c)
 *     ??1?$CAggregateTelemetry@V?$CAggregateValuesClusteredBase@W4CpGlitchEvent@@PEAI@@W4CpGlitchEvent@@PEAI$0A@$0A@@@UEAA@XZ @ 0x140014CE4 (--1-$CAggregateTelemetry@V-$CAggregateValuesClusteredBase@W4CpGlitchEvent@@PEAI@@W4CpGlitchEvent.c)
 * Callees:
 *     ?Clear@?$CAggregateTelemetryClustered@W4CpGlitchEvent@@PEAI$0A@$0A@@@UEAAXXZ @ 0x140014A70 (-Clear@-$CAggregateTelemetryClustered@W4CpGlitchEvent@@PEAI$0A@$0A@@@UEAAXXZ.c)
 *     ?LogTelemetry@CCrossProcessEndpointGlitchValues@CCrossProcessEndpointTraceLogger@@UEAAXXZ @ 0x140015E90 (-LogTelemetry@CCrossProcessEndpointGlitchValues@CCrossProcessEndpointTraceLogger@@UEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x140019620 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CAggregateTelemetry<CAggregateValuesClusteredBase<enum CpGlitchEvent,unsigned int *>,enum CpGlitchEvent,unsigned int *,0,0>::Log(
        _QWORD *a1,
        char a2)
{
  CCrossProcessEndpointTraceLogger::CCrossProcessEndpointGlitchValues *v4; // rcx
  void (__fastcall *v5)(CCrossProcessEndpointTraceLogger::CCrossProcessEndpointGlitchValues *__hidden); // rax
  __int64 (__fastcall *v6)(__int64); // rax

  v4 = (CCrossProcessEndpointTraceLogger::CCrossProcessEndpointGlitchValues *)a1[1];
  if ( v4 )
  {
    v5 = *(void (__fastcall **)(CCrossProcessEndpointTraceLogger::CCrossProcessEndpointGlitchValues *__hidden))(*(_QWORD *)v4 + 24LL);
    if ( v5 == CCrossProcessEndpointTraceLogger::CCrossProcessEndpointGlitchValues::LogTelemetry )
      CCrossProcessEndpointTraceLogger::CCrossProcessEndpointGlitchValues::LogTelemetry(v4);
    else
      v5(v4);
  }
  if ( a2 )
  {
    v6 = *(__int64 (__fastcall **)(__int64))(*a1 + 24LL);
    if ( v6 == CAggregateTelemetryClustered<enum CpGlitchEvent,unsigned int *,0,0>::Clear )
      CAggregateTelemetryClustered<enum CpGlitchEvent,unsigned int *,0,0>::Clear((__int64)a1);
    else
      v6((__int64)a1);
  }
}
