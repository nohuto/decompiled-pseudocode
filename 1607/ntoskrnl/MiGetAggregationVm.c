/*
 * XREFs of MiGetAggregationVm @ 0x1400FCFE8
 * Callers:
 *     MmQuerySystemWorkingSetInformation @ 0x1400BE230 (MmQuerySystemWorkingSetInformation.c)
 *     MiGetAggregateWorkingSetSize @ 0x1400FCF88 (MiGetAggregateWorkingSetSize.c)
 *     MmGetWorkingSetLeafSize @ 0x1400FCFAC (MmGetWorkingSetLeafSize.c)
 * Callees:
 *     <none>
 */

int *__fastcall MiGetAggregationVm(__int64 a1)
{
  if ( (*(_BYTE *)(a1 + 184) & 7) == 2 )
    return &dword_140327D40;
  else
    return 0LL;
}
