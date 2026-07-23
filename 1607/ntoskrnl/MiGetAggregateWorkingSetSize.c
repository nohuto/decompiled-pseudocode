/*
 * XREFs of MiGetAggregateWorkingSetSize @ 0x1400FCF88
 * Callers:
 *     MiMoveWorkingFreeToTail @ 0x1400FBD94 (MiMoveWorkingFreeToTail.c)
 *     MiRemoveWorkingSetPages @ 0x1400FC4D0 (MiRemoveWorkingSetPages.c)
 *     MmLogSystemShareablePfnInfo @ 0x14065E164 (MmLogSystemShareablePfnInfo.c)
 * Callees:
 *     MiGetAggregationVm @ 0x1400FCFE8 (MiGetAggregationVm.c)
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
