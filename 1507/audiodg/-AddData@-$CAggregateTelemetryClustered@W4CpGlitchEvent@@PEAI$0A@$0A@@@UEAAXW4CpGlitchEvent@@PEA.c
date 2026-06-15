/*
 * XREFs of ?AddData@?$CAggregateTelemetryClustered@W4CpGlitchEvent@@PEAI$0A@$0A@@@UEAAXW4CpGlitchEvent@@PEAI@Z @ 0x1400159D0
 * Callers:
 *     ?GetInputDataPointer@CCrossProcessServerInputEndpoint@@UEAAXPEAUAPO_CONNECTION_PROPERTY@@PEAUAE_CURRENT_POSITION@@@Z @ 0x140016A30 (-GetInputDataPointer@CCrossProcessServerInputEndpoint@@UEAAXPEAUAPO_CONNECTION_PROPERTY@@PEAUAE_.c)
 * Callees:
 *     ?AddData@?$CAggregateTelemetry@V?$CAggregateValuesClusteredBase@W4CpGlitchEvent@@PEAI@@W4CpGlitchEvent@@PEAI$0A@$0A@@@UEAAXW4CpGlitchEvent@@PEAI@Z @ 0x1400164D0 (-AddData@-$CAggregateTelemetry@V-$CAggregateValuesClusteredBase@W4CpGlitchEvent@@PEAI@@W4CpGlitc.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C00 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
int __fastcall CAggregateTelemetryClustered<enum CpGlitchEvent,unsigned int *,0,0>::AddData(
        __int64 a1,
        unsigned int a2,
        __int64 a3)
{
  unsigned __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rsi

  LODWORD(v6) = GetTickCount();
  v8 = (unsigned int)v6;
  if ( *(_BYTE *)(a1 + 32) )
  {
    v6 = (unsigned int)v6 - *(_QWORD *)(a1 + 72);
    if ( v6 > *(_QWORD *)(a1 + 56) )
    {
      *(_BYTE *)(a1 + 32) = 0;
      v6 = v8 - *(_QWORD *)(a1 + 48);
      if ( v6 > *(_QWORD *)(a1 + 40) )
      {
        LOBYTE(v7) = 1;
        LODWORD(v6) = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 8LL))(a1, v7);
        *(_QWORD *)(a1 + 48) = v8;
      }
    }
  }
  if ( a3 )
  {
    if ( !*(_BYTE *)(a1 + 32) )
    {
      *(_BYTE *)(a1 + 32) = 1;
      *(_QWORD *)(a1 + 64) = v8;
      *(_QWORD *)(a1 + 88) = v8;
    }
    *(_QWORD *)(a1 + 72) = v8;
    CAggregateTelemetry<CAggregateValuesClusteredBase<enum CpGlitchEvent,unsigned int *>,enum CpGlitchEvent,unsigned int *,0,0>::AddData(
      a1,
      a2,
      a3);
    v6 = v8 - *(_QWORD *)(a1 + 88);
    if ( v6 > *(_QWORD *)(a1 + 80) )
    {
      LODWORD(v6) = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 8LL))(a1, 0LL);
      *(_QWORD *)(a1 + 88) = v8;
    }
  }
  return v6;
}
