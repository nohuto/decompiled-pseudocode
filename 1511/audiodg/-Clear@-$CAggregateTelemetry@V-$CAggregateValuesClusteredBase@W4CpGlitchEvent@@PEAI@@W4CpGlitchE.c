/*
 * XREFs of ?Clear@?$CAggregateTelemetry@V?$CAggregateValuesClusteredBase@W4CpGlitchEvent@@PEAI@@W4CpGlitchEvent@@PEAI$0A@$0A@@@UEAAXXZ @ 0x140013E50
 * Callers:
 *     ?Clear@?$CAggregateTelemetryClustered@W4CpGlitchEvent@@PEAI$0A@$0A@@@UEAAXXZ @ 0x140013C80 (-Clear@-$CAggregateTelemetryClustered@W4CpGlitchEvent@@PEAI$0A@$0A@@@UEAAXXZ.c)
 * Callees:
 *     ?Clear@?$CAggregateValuesClusteredCounter@W4CpGlitchEvent@@$06@@UEAAXXZ @ 0x140017C60 (-Clear@-$CAggregateValuesClusteredCounter@W4CpGlitchEvent@@$06@@UEAAXXZ.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C60 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
_UNKNOWN **__fastcall CAggregateTelemetry<CAggregateValuesClusteredBase<enum CpGlitchEvent,unsigned int *>,enum CpGlitchEvent,unsigned int *,0,0>::Clear(
        __int64 a1)
{
  _UNKNOWN **result; // rax
  __int64 v3; // rbx
  __int64 (__fastcall *v4)(_QWORD); // rsi
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  result = &retaddr;
  v3 = *(_QWORD *)(a1 + 8);
  if ( v3 )
  {
    v4 = *(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v3 + 16LL);
    if ( v4 == CAggregateValuesClusteredCounter<enum CpGlitchEvent,7>::Clear )
      result = (_UNKNOWN **)CAggregateValuesClusteredCounter<enum CpGlitchEvent,7>::Clear(*(_QWORD *)(a1 + 8));
    else
      result = (_UNKNOWN **)v4(*(_QWORD *)(a1 + 8));
  }
  *(_BYTE *)(a1 + 16) = 0;
  return result;
}
