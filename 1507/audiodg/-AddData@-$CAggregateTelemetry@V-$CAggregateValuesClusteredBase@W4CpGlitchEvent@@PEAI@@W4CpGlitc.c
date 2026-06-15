/*
 * XREFs of ?AddData@?$CAggregateTelemetry@V?$CAggregateValuesClusteredBase@W4CpGlitchEvent@@PEAI@@W4CpGlitchEvent@@PEAI$0A@$0A@@@UEAAXW4CpGlitchEvent@@PEAI@Z @ 0x1400164D0
 * Callers:
 *     ?AddData@?$CAggregateTelemetryClustered@W4CpGlitchEvent@@PEAI$0A@$0A@@@UEAAXW4CpGlitchEvent@@PEAI@Z @ 0x1400159D0 (-AddData@-$CAggregateTelemetryClustered@W4CpGlitchEvent@@PEAI$0A@$0A@@@UEAAXW4CpGlitchEvent@@PEA.c)
 * Callees:
 *     ?AddData@?$CAggregateValuesClusteredCounter@W4CpGlitchEvent@@$06@@UEAAXW4CpGlitchEvent@@PEAI@Z @ 0x140016720 (-AddData@-$CAggregateValuesClusteredCounter@W4CpGlitchEvent@@$06@@UEAAXW4CpGlitchEvent@@PEAI@Z.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C00 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
_UNKNOWN **__fastcall CAggregateTelemetry<CAggregateValuesClusteredBase<enum CpGlitchEvent,unsigned int *>,enum CpGlitchEvent,unsigned int *,0,0>::AddData(
        __int64 a1,
        unsigned int a2,
        __int64 a3)
{
  _UNKNOWN **result; // rax
  __int64 v5; // rbx
  __int64 (__fastcall *v6)(_QWORD); // rsi
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h] BYREF

  result = &retaddr;
  v5 = *(_QWORD *)(a1 + 8);
  if ( v5 )
  {
    v6 = *(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v5 + 8LL);
    if ( v6 == CAggregateValuesClusteredCounter<enum CpGlitchEvent,7>::AddData )
      result = (_UNKNOWN **)CAggregateValuesClusteredCounter<enum CpGlitchEvent,7>::AddData(*(_QWORD *)(a1 + 8));
    else
      result = (_UNKNOWN **)((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))v6)(*(_QWORD *)(a1 + 8), a2, a3);
    *(_BYTE *)(a1 + 16) = 1;
  }
  return result;
}
