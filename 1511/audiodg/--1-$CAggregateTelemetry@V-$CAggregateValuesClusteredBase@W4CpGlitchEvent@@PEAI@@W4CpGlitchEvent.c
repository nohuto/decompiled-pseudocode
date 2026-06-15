/*
 * XREFs of ??1?$CAggregateTelemetry@V?$CAggregateValuesClusteredBase@W4CpGlitchEvent@@PEAI@@W4CpGlitchEvent@@PEAI$0A@$0A@@@UEAA@XZ @ 0x140013DF0
 * Callers:
 *     ??1?$CAggregateTelemetryClustered@W4CpGlitchEvent@@PEAI$0A@$0A@@@UEAA@XZ @ 0x140013CC4 (--1-$CAggregateTelemetryClustered@W4CpGlitchEvent@@PEAI$0A@$0A@@@UEAA@XZ.c)
 *     _CAggregateTelemetryClustered_enum_CpGlitchEvent_unsigned_int_____ptr64_0_0_::_CAggregateTelemetryClustered_enum_CpGlitchEvent_unsigned_int_____ptr64_0_0__::_1_::dtor$0 @ 0x14001BDDC (_CAggregateTelemetryClustered_enum_CpGlitchEvent_unsigned_int_____ptr64_0_0_--_CAggregateTelemet.c)
 *     _CAggregateTelemetryClustered_enum_CpGlitchEvent_unsigned_int_____ptr64_0_0_::CAggregateTelemetryClustered_enum_CpGlitchEvent_unsigned_int_____ptr64_0_0__::_1_::dtor$0 @ 0x14001BDEE (_CAggregateTelemetryClustered_enum_CpGlitchEvent_unsigned_int_____ptr64_0_0_--CAggregateTelemetr.c)
 *     ??_G?$CAggregateTelemetry@V?$CAggregateValuesClusteredBase@W4CpGlitchEvent@@PEAI@@W4CpGlitchEvent@@PEAI$0A@$0A@@@UEAAPEAXI@Z @ 0x14003AC80 (--_G-$CAggregateTelemetry@V-$CAggregateValuesClusteredBase@W4CpGlitchEvent@@PEAI@@W4CpGlitchEven.c)
 * Callees:
 *     ?Log@?$CAggregateTelemetry@V?$CAggregateValuesClusteredBase@W4CpGlitchEvent@@PEAI@@W4CpGlitchEvent@@PEAI$0A@$0A@@@UEAAX_N@Z @ 0x140013EC0 (-Log@-$CAggregateTelemetry@V-$CAggregateValuesClusteredBase@W4CpGlitchEvent@@PEAI@@W4CpGlitchEve.c)
 *     ??3@YAXPEAX@Z @ 0x1400189FC (--3@YAXPEAX@Z.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C60 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 */

void __fastcall CAggregateTelemetry<CAggregateValuesClusteredBase<enum CpGlitchEvent,unsigned int *>,enum CpGlitchEvent,unsigned int *,0,0>::~CAggregateTelemetry<CAggregateValuesClusteredBase<enum CpGlitchEvent,unsigned int *>,enum CpGlitchEvent,unsigned int *,0,0>(
        __int64 a1,
        __int64 a2)
{
  bool v2; // zf
  void *v4; // rbx
  void (__fastcall ***v5)(_QWORD, __int64); // rsi

  v2 = *(_BYTE *)(a1 + 16) == 0;
  *(_QWORD *)a1 = &CAggregateTelemetry<CAggregateValuesClusteredBase<enum CpGlitchEvent,unsigned int *>,enum CpGlitchEvent,unsigned int *,0,0>::`vftable';
  if ( !v2 )
  {
    LOBYTE(a2) = 1;
    CAggregateTelemetry<CAggregateValuesClusteredBase<enum CpGlitchEvent,unsigned int *>,enum CpGlitchEvent,unsigned int *,0,0>::Log(
      a1,
      a2);
  }
  v4 = *(void **)(a1 + 24);
  if ( v4 )
  {
    DeleteCriticalSection(*(LPCRITICAL_SECTION *)(a1 + 24));
    operator delete(v4);
    *(_QWORD *)(a1 + 24) = 0LL;
  }
  if ( *(_BYTE *)(a1 + 17) )
  {
    v5 = *(void (__fastcall ****)(_QWORD, __int64))(a1 + 8);
    if ( v5 )
    {
      (**v5)(*(_QWORD *)(a1 + 8), 1LL);
      *(_QWORD *)(a1 + 8) = 0LL;
    }
  }
}
