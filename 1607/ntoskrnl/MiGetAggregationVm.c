/*
 * XREFs of MiGetAggregationVm @ 0x1400FF268
 * Callers:
 *     MmQuerySystemWorkingSetInformation @ 0x1400C03A0 (MmQuerySystemWorkingSetInformation.c)
 *     MiGetAggregateWorkingSetSize @ 0x1400FF208 (MiGetAggregateWorkingSetSize.c)
 *     MmGetWorkingSetLeafSize @ 0x1400FF22C (MmGetWorkingSetLeafSize.c)
 * Callees:
 *     <none>
 */

int *__fastcall MiGetAggregationVm(__int64 a1)
{
  if ( (*(_BYTE *)(a1 + 184) & 7) == 2 )
    return &dword_140327D00;
  else
    return 0LL;
}
