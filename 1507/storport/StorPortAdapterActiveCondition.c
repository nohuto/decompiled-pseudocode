/*
 * XREFs of StorPortAdapterActiveCondition @ 0x1C002C1E0
 * Callers:
 *     <none>
 * Callees:
 *     RaidIsAdapterControlSupported @ 0x1C00099AC (RaidIsAdapterControlSupported.c)
 *     RaidAdapterRestartQueues @ 0x1C0010C48 (RaidAdapterRestartQueues.c)
 *     RaidResumeAdapterQueue @ 0x1C00119DC (RaidResumeAdapterQueue.c)
 *     Template_pqq @ 0x1C0025070 (Template_pqq.c)
 *     RaidAdapterSendPoFxActiveToMiniport @ 0x1C002A9E8 (RaidAdapterSendPoFxActiveToMiniport.c)
 */

void __fastcall StorPortAdapterActiveCondition(__int64 a1, int a2)
{
  __int64 v4; // rcx
  KIRQL v5; // bl
  __int64 v6; // [rsp+20h] [rbp-18h]
  int v7; // [rsp+20h] [rbp-18h]
  __int64 v8; // [rsp+28h] [rbp-10h]

  if ( StorEtwLoggingEnabled && ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x100000) != 0 )
  {
    v7 = *(_DWORD *)(a1 + 56);
    Template_pqq(a1, &EventAdapterActiveConditionStart, 0LL, **(_QWORD **)(a1 + 5088), v7, a2);
  }
  *(_DWORD *)(*(_QWORD *)(a1 + 5088) + 20LL) |= 1u;
  if ( (unsigned int)RaidIsAdapterControlSupported(a1, 8) )
    RaidAdapterSendPoFxActiveToMiniport(a1);
  if ( !(unsigned int)RaidResumeAdapterQueue(a1) )
  {
    v5 = KfRaiseIrql(2u);
    RaidAdapterRestartQueues(a1);
    KeLowerIrql(v5);
  }
  if ( StorEtwLoggingEnabled )
  {
    if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x100000) != 0 )
    {
      LODWORD(v8) = a2;
      LODWORD(v6) = *(_DWORD *)(a1 + 56);
      Template_pqq(v4, &EventAdapterActiveConditionStop, 0LL, **(_QWORD **)(a1 + 5088), v6, v8);
    }
  }
}
