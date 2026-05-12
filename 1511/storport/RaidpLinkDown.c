/*
 * XREFs of RaidpLinkDown @ 0x1C00296DC
 * Callers:
 *     StorPortNotification @ 0x1C00059D0 (StorPortNotification.c)
 * Callees:
 *     StorPortPause @ 0x1C0014D30 (StorPortPause.c)
 *     Template_pqq @ 0x1C0027150 (Template_pqq.c)
 */

char __fastcall RaidpLinkDown(__int64 a1)
{
  char result; // al
  int v3; // [rsp+20h] [rbp-18h]
  int v4; // [rsp+28h] [rbp-10h]

  if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 2) != 0 )
  {
    v4 = *(_DWORD *)(a1 + 2152);
    v3 = *(_DWORD *)(a1 + 56);
    Template_pqq(a1, &EventLinkDown, 0LL, *(_QWORD *)(a1 + 536) + 16LL, v3, v4);
  }
  result = StorPortPause(*(_QWORD *)(a1 + 536) + 16LL, *(_DWORD *)(a1 + 2152));
  if ( result )
    _InterlockedExchange((volatile __int32 *)(a1 + 2156), 0);
  return result;
}
