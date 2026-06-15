/*
 * XREFs of ?Clear@?$CAggregateValuesClusteredCounter@W4CpGlitchEvent@@$06@@UEAAXXZ @ 0x1400172A0
 * Callers:
 *     ?Clear@?$CAggregateTelemetry@V?$CAggregateValuesClusteredBase@W4CpGlitchEvent@@PEAI@@W4CpGlitchEvent@@PEAI$0A@$0A@@@UEAAXXZ @ 0x140014C90 (-Clear@-$CAggregateTelemetry@V-$CAggregateValuesClusteredBase@W4CpGlitchEvent@@PEAI@@W4CpGlitchE.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CAggregateValuesClusteredCounter<enum CpGlitchEvent,7>::Clear(__int64 a1)
{
  __int64 result; // rax

  result = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_DWORD *)(a1 + 72) = 0;
  return result;
}
