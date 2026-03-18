/*
 * XREFs of MiGetAggregateWorkingSetSize @ 0x1400FF208
 * Callers:
 *     MiMoveWorkingFreeToTail @ 0x1400FE014 (MiMoveWorkingFreeToTail.c)
 *     MiRemoveWorkingSetPages @ 0x1400FE750 (MiRemoveWorkingSetPages.c)
 *     MmLogSystemShareablePfnInfo @ 0x14065E080 (MmLogSystemShareablePfnInfo.c)
 * Callees:
 *     MiGetAggregationVm @ 0x1400FF268 (MiGetAggregationVm.c)
 */

__int64 __fastcall MiGetAggregateWorkingSetSize(__int64 a1)
{
  __int64 AggregationVm; // rax
  __int64 v2; // rdx

  AggregationVm = MiGetAggregationVm(a1);
  if ( AggregationVm )
    return *(_QWORD *)(AggregationVm + 8);
  return v2;
}
