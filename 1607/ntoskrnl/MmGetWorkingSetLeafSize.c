/*
 * XREFs of MmGetWorkingSetLeafSize @ 0x1400FF22C
 * Callers:
 *     ExpQuerySystemPerformanceInformation @ 0x140414000 (ExpQuerySystemPerformanceInformation.c)
 * Callees:
 *     MiGetAggregationVm @ 0x1400FF268 (MiGetAggregationVm.c)
 *     MiTranslateWsType @ 0x1400FF280 (MiTranslateWsType.c)
 */

__int64 MmGetWorkingSetLeafSize()
{
  int v0; // eax
  __int64 AggregationVm; // rax
  __int64 v2; // rdx

  v0 = MiTranslateWsType();
  AggregationVm = MiGetAggregationVm((char *)&unk_140327940 + 272 * v0);
  if ( AggregationVm )
    return *(_QWORD *)(AggregationVm + 16);
  return v2;
}
