/*
 * XREFs of ??1?$CAggregateTelemetryClustered@W4CpGlitchEvent@@PEAI$0A@$0A@@@UEAA@XZ @ 0x140015AF0
 * Callers:
 *     ??1CCrossProcessBaseEndpoint@@UEAA@XZ @ 0x1400156D4 (--1CCrossProcessBaseEndpoint@@UEAA@XZ.c)
 *     ??1CCrossProcessEndpointTraceLogger@@UEAA@XZ @ 0x140026AD0 (--1CCrossProcessEndpointTraceLogger@@UEAA@XZ.c)
 *     ??_G?$CAggregateTelemetryClustered@W4CpGlitchEvent@@PEAI$0A@$0A@@@UEAAPEAXI@Z @ 0x14003ACF0 (--_G-$CAggregateTelemetryClustered@W4CpGlitchEvent@@PEAI$0A@$0A@@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Log@?$CAggregateTelemetry@V?$CAggregateValuesClusteredBase@W4CpGlitchEvent@@PEAI@@W4CpGlitchEvent@@PEAI$0A@$0A@@@UEAAX_N@Z @ 0x140016440 (-Log@-$CAggregateTelemetry@V-$CAggregateValuesClusteredBase@W4CpGlitchEvent@@PEAI@@W4CpGlitchEve.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAggregateTelemetryClustered<enum CpGlitchEvent,unsigned int *,0,0>::~CAggregateTelemetryClustered<enum CpGlitchEvent,unsigned int *,0,0>(
        __int64 a1)
{
  DWORD TickCount; // eax
  __int64 v3; // rdx

  *(_QWORD *)a1 = &CAggregateTelemetryClustered<enum CpGlitchEvent,unsigned int *,0,0>::`vftable';
  TickCount = GetTickCount();
  if ( *(_BYTE *)(a1 + 32) )
  {
    *(_BYTE *)(a1 + 32) = 0;
    if ( (unsigned __int64)TickCount - *(_QWORD *)(a1 + 48) > *(_QWORD *)(a1 + 40) )
    {
      LOBYTE(v3) = 1;
      CAggregateTelemetry<CAggregateValuesClusteredBase<enum CpGlitchEvent,unsigned int *>,enum CpGlitchEvent,unsigned int *,0,0>::Log(
        a1,
        v3);
    }
  }
  return CAggregateTelemetry<CAggregateValuesClusteredBase<enum CpGlitchEvent,unsigned int *>,enum CpGlitchEvent,unsigned int *,0,0>::~CAggregateTelemetry<CAggregateValuesClusteredBase<enum CpGlitchEvent,unsigned int *>,enum CpGlitchEvent,unsigned int *,0,0>(a1);
}
