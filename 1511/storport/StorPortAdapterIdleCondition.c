/*
 * XREFs of StorPortAdapterIdleCondition @ 0x1C002E040
 * Callers:
 *     <none>
 * Callees:
 *     RaidIsAdapterControlSupported @ 0x1C000BBE4 (RaidIsAdapterControlSupported.c)
 *     RaidPauseAdapterQueue @ 0x1C00140CC (RaidPauseAdapterQueue.c)
 *     Template_pqq @ 0x1C0027150 (Template_pqq.c)
 *     RaidAdapterSendPoFxActiveToMiniport @ 0x1C002C9A8 (RaidAdapterSendPoFxActiveToMiniport.c)
 */

NTSTATUS __fastcall StorPortAdapterIdleCondition(__int64 a1, unsigned int a2)
{
  NTSTATUS result; // eax
  __int64 v5; // rcx
  __int64 v6; // [rsp+20h] [rbp-18h]
  int v7; // [rsp+20h] [rbp-18h]
  __int64 v8; // [rsp+28h] [rbp-10h]

  if ( StorEtwLoggingEnabled && ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x100000) != 0 )
  {
    v7 = *(_DWORD *)(a1 + 56);
    Template_pqq(a1, &EventAdapterIdleConditionStart, 0LL, **(_QWORD **)(a1 + 5088), v7, a2);
  }
  *(_DWORD *)(*(_QWORD *)(a1 + 5088) + 20LL) &= ~1u;
  RaidPauseAdapterQueue(a1);
  if ( (unsigned int)RaidIsAdapterControlSupported(a1, 8) )
    RaidAdapterSendPoFxActiveToMiniport(a1);
  result = PoFxCompleteIdleCondition(**(_QWORD **)(a1 + 5088), a2);
  if ( StorEtwLoggingEnabled )
  {
    if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x100000) != 0 )
    {
      LODWORD(v8) = a2;
      LODWORD(v6) = *(_DWORD *)(a1 + 56);
      return Template_pqq(v5, &EventAdapterIdleConditionStop, 0LL, **(_QWORD **)(a1 + 5088), v6, v8);
    }
  }
  return result;
}
