/*
 * XREFs of ?AddData@?$CAggregateValuesClusteredCounter@W4CpGlitchEvent@@$06@@UEAAXW4CpGlitchEvent@@PEAI@Z @ 0x140013BC0
 * Callers:
 *     ?AddData@?$CAggregateTelemetry@V?$CAggregateValuesClusteredBase@W4CpGlitchEvent@@PEAI@@W4CpGlitchEvent@@PEAI$0A@$0A@@@UEAAXW4CpGlitchEvent@@PEAI@Z @ 0x140013F50 (-AddData@-$CAggregateTelemetry@V-$CAggregateValuesClusteredBase@W4CpGlitchEvent@@PEAI@@W4CpGlitc.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CAggregateValuesClusteredCounter<enum CpGlitchEvent,7>::AddData(
        __int64 a1,
        unsigned int a2,
        unsigned int *a3)
{
  __int64 result; // rax

  if ( a3 )
    return (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 4LL * a2 + 48), *a3);
  return result;
}
