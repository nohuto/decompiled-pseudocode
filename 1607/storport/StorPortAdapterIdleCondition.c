/*
 * XREFs of StorPortAdapterIdleCondition @ 0x1C0019590
 * Callers:
 *     <none>
 * Callees:
 *     RaidPauseAdapterQueue @ 0x1C000C138 (RaidPauseAdapterQueue.c)
 *     RaidIsAdapterControlSupported @ 0x1C000FF08 (RaidIsAdapterControlSupported.c)
 *     RaidAdapterSendPoFxActiveToMiniport @ 0x1C0019620 (RaidAdapterSendPoFxActiveToMiniport.c)
 *     Template_pqq @ 0x1C002A7D0 (Template_pqq.c)
 */

__int64 __fastcall StorPortAdapterIdleCondition(__int64 a1, unsigned int a2)
{
  __int64 result; // rax
  int v5; // ecx

  if ( StorEtwLoggingEnabled && (Microsoft_Windows_StorPortEnableBits & 0x100000) != 0 )
    Template_pqq(
      a1,
      (unsigned int)&EventAdapterIdleConditionStart,
      0,
      **(_QWORD **)(a1 + 5088),
      *(_DWORD *)(a1 + 56),
      a2);
  *(_DWORD *)(*(_QWORD *)(a1 + 5088) + 20LL) &= ~1u;
  RaidPauseAdapterQueue(a1);
  if ( (unsigned int)RaidIsAdapterControlSupported(a1, 8) )
    RaidAdapterSendPoFxActiveToMiniport(a1, a2, 0LL);
  result = PoFxCompleteIdleCondition(**(_QWORD **)(a1 + 5088), a2);
  if ( StorEtwLoggingEnabled )
  {
    if ( (Microsoft_Windows_StorPortEnableBits & 0x100000) != 0 )
      return Template_pqq(
               v5,
               (unsigned int)&EventAdapterIdleConditionStop,
               0,
               **(_QWORD **)(a1 + 5088),
               *(_DWORD *)(a1 + 56),
               a2);
  }
  return result;
}
