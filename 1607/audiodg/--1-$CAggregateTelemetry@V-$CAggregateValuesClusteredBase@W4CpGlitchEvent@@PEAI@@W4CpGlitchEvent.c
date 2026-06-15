/*
 * XREFs of ??1?$CAggregateTelemetry@V?$CAggregateValuesClusteredBase@W4CpGlitchEvent@@PEAI@@W4CpGlitchEvent@@PEAI$0A@$0A@@@UEAA@XZ @ 0x140014CE4
 * Callers:
 *     ??1?$CAggregateTelemetryClustered@W4CpGlitchEvent@@PEAI$0A@$0A@@@UEAA@XZ @ 0x140014A08 (--1-$CAggregateTelemetryClustered@W4CpGlitchEvent@@PEAI$0A@$0A@@@UEAA@XZ.c)
 *     _CCrossProcessEndpointTraceLogger::CCrossProcessEndpointTraceLogger_::_1_::dtor$2 @ 0x14001B915 (_CCrossProcessEndpointTraceLogger--CCrossProcessEndpointTraceLogger_--_1_--dtor$2.c)
 *     _CAggregateTelemetryClustered_enum_CpGlitchEvent_unsigned_int_____ptr64_0_0_::_CAggregateTelemetryClustered_enum_CpGlitchEvent_unsigned_int_____ptr64_0_0__::_1_::dtor$0 @ 0x14001B95E (_CAggregateTelemetryClustered_enum_CpGlitchEvent_unsigned_int_____ptr64_0_0_--_CAggregateTelemet.c)
 *     ??_G?$CAggregateTelemetry@V?$CAggregateValuesClusteredBase@W4CpGlitchEvent@@PEAI@@W4CpGlitchEvent@@PEAI$0A@$0A@@@UEAAPEAXI@Z @ 0x140039B10 (--_G-$CAggregateTelemetry@V-$CAggregateValuesClusteredBase@W4CpGlitchEvent@@PEAI@@W4CpGlitchEven.c)
 * Callees:
 *     ?Log@?$CAggregateTelemetry@V?$CAggregateValuesClusteredBase@W4CpGlitchEvent@@PEAI@@W4CpGlitchEvent@@PEAI$0A@$0A@@@UEAAX_N@Z @ 0x140014C00 (-Log@-$CAggregateTelemetry@V-$CAggregateValuesClusteredBase@W4CpGlitchEvent@@PEAI@@W4CpGlitchEve.c)
 *     ??3@YAXPEAX@Z @ 0x140017F34 (--3@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x140019620 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CAggregateTelemetry<CAggregateValuesClusteredBase<enum CpGlitchEvent,unsigned int *>,enum CpGlitchEvent,unsigned int *,0,0>::~CAggregateTelemetry<CAggregateValuesClusteredBase<enum CpGlitchEvent,unsigned int *>,enum CpGlitchEvent,unsigned int *,0,0>(
        __int64 a1)
{
  bool v1; // zf
  void *v3; // rdi
  void (__fastcall ***v4)(_QWORD, __int64); // rcx

  v1 = *(_BYTE *)(a1 + 16) == 0;
  *(_QWORD *)a1 = &CAggregateTelemetry<CAggregateValuesClusteredBase<enum CpGlitchEvent,unsigned int *>,enum CpGlitchEvent,unsigned int *,0,0>::`vftable';
  if ( !v1 )
    CAggregateTelemetry<CAggregateValuesClusteredBase<enum CpGlitchEvent,unsigned int *>,enum CpGlitchEvent,unsigned int *,0,0>::Log(
      (_QWORD *)a1,
      1);
  v3 = *(void **)(a1 + 24);
  if ( v3 )
  {
    DeleteCriticalSection(*(LPCRITICAL_SECTION *)(a1 + 24));
    operator delete(v3);
    *(_QWORD *)(a1 + 24) = 0LL;
  }
  if ( *(_BYTE *)(a1 + 17) )
  {
    v4 = *(void (__fastcall ****)(_QWORD, __int64))(a1 + 8);
    if ( v4 )
    {
      (**v4)(v4, 1LL);
      *(_QWORD *)(a1 + 8) = 0LL;
    }
  }
}
