/*
 * XREFs of ?Clear@?$CAggregateTelemetryClustered@W4CpGlitchEvent@@PEAI$0A@$0A@@@UEAAXXZ @ 0x140015A70
 * Callers:
 *     ??0CCrossProcessBaseEndpoint@@IEAA@XZ @ 0x1400157A0 (--0CCrossProcessBaseEndpoint@@IEAA@XZ.c)
 *     ?Log@?$CAggregateTelemetry@V?$CAggregateValuesClusteredBase@W4CpGlitchEvent@@PEAI@@W4CpGlitchEvent@@PEAI$0A@$0A@@@UEAAX_N@Z @ 0x140016440 (-Log@-$CAggregateTelemetry@V-$CAggregateValuesClusteredBase@W4CpGlitchEvent@@PEAI@@W4CpGlitchEve.c)
 * Callees:
 *     ?Clear@?$CAggregateValuesClusteredCounter@W4CpGlitchEvent@@$06@@UEAAXXZ @ 0x140018A20 (-Clear@-$CAggregateValuesClusteredCounter@W4CpGlitchEvent@@$06@@UEAAXXZ.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C00 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAggregateTelemetryClustered<enum CpGlitchEvent,unsigned int *,0,0>::Clear(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rdi
  __int64 (__fastcall *v4)(_QWORD); // rsi

  result = GetTickCount();
  *(_BYTE *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 64) = (unsigned int)result;
  *(_QWORD *)(a1 + 72) = (unsigned int)result;
  *(_QWORD *)(a1 + 88) = (unsigned int)result;
  v3 = *(_QWORD *)(a1 + 8);
  if ( v3 )
  {
    v4 = *(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v3 + 16LL);
    if ( v4 == CAggregateValuesClusteredCounter<enum CpGlitchEvent,7>::Clear )
      result = CAggregateValuesClusteredCounter<enum CpGlitchEvent,7>::Clear(*(_QWORD *)(a1 + 8));
    else
      result = v4(*(_QWORD *)(a1 + 8));
  }
  *(_BYTE *)(a1 + 16) = 0;
  return result;
}
