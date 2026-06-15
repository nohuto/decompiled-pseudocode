/*
 * XREFs of ??0?$CAggregateTelemetryClustered@W4CpGlitchEvent@@PEAI$0A@$0A@@@QEAA@PEAV?$CAggregateValuesClusteredBase@W4CpGlitchEvent@@PEAI@@_K11@Z @ 0x140013D20
 * Callers:
 *     ??0CCrossProcessEndpointTraceLogger@@QEAA@XZ @ 0x140013B3C (--0CCrossProcessEndpointTraceLogger@@QEAA@XZ.c)
 * Callees:
 *     ?Clear@?$CAggregateTelemetryClustered@W4CpGlitchEvent@@PEAI$0A@$0A@@@UEAAXXZ @ 0x140013C80 (-Clear@-$CAggregateTelemetryClustered@W4CpGlitchEvent@@PEAI$0A@$0A@@@UEAAXXZ.c)
 *     ?Initialize@?$CAggregateValuesClusteredBase@W4CpGlitchEvent@@PEAI@@UEAAXPEB_NPEB_K1@Z @ 0x140017CD0 (-Initialize@-$CAggregateValuesClusteredBase@W4CpGlitchEvent@@PEAI@@UEAAXPEB_NPEB_K1@Z.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C60 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAggregateTelemetryClustered<enum CpGlitchEvent,unsigned int *,0,0>::CAggregateTelemetryClustered<enum CpGlitchEvent,unsigned int *,0,0>(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rbp
  __int64 v4; // r15
  __int64 v5; // r14
  __int64 v6; // rdi
  void (__fastcall *v7)(_QWORD, __int64, __int64, __int64, __int64); // rsi

  *(_QWORD *)(a1 + 8) = a2;
  *(_WORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)a1 = &CAggregateTelemetryClustered<enum CpGlitchEvent,unsigned int *,0,0>::`vftable';
  v3 = a1 + 32;
  *(_BYTE *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 40) = 10000LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)(a1 + 56) = 5000LL;
  v4 = a1 + 64;
  *(_QWORD *)(a1 + 64) = 0LL;
  v5 = a1 + 72;
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_QWORD *)(a1 + 80) = 30000LL;
  *(_QWORD *)(a1 + 88) = 0LL;
  CAggregateTelemetryClustered<enum CpGlitchEvent,unsigned int *,0,0>::Clear(a1);
  v6 = *(_QWORD *)(a1 + 8);
  if ( v6 )
  {
    v7 = *(void (__fastcall **)(_QWORD, __int64, __int64, __int64, __int64))(*(_QWORD *)v6 + 40LL);
    if ( (char *)v7 == (char *)CAggregateValuesClusteredBase<enum CpGlitchEvent,unsigned int *>::Initialize )
      CAggregateValuesClusteredBase<enum CpGlitchEvent,unsigned int *>::Initialize(
        *(_QWORD *)(a1 + 8),
        v3,
        v4,
        v5,
        -2LL);
    else
      v7(*(_QWORD *)(a1 + 8), v3, v4, v5, -2LL);
  }
  return a1;
}
