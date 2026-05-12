/*
 * XREFs of StorPortPause @ 0x1C0014D30
 * Callers:
 *     StorPortNotification @ 0x1C00059D0 (StorPortNotification.c)
 *     RaidpLinkDown @ 0x1C00296DC (RaidpLinkDown.c)
 *     StorPortPauseVrfy @ 0x1C005A5D0 (StorPortPauseVrfy.c)
 * Callees:
 *     RaidPauseAdapterQueue @ 0x1C00140CC (RaidPauseAdapterQueue.c)
 *     RaidResumeAdapterQueue @ 0x1C0014130 (RaidResumeAdapterQueue.c)
 *     DbgLogRequest @ 0x1C0014194 (DbgLogRequest.c)
 *     RaidQueueDeferredItem @ 0x1C0014994 (RaidQueueDeferredItem.c)
 *     Template_pqq @ 0x1C0027150 (Template_pqq.c)
 */

char __fastcall StorPortPause(__int64 a1, unsigned int a2)
{
  int v3; // esi
  __int64 v4; // rbx
  int v5; // ecx
  __int64 v6; // rdx
  __int64 retaddr; // [rsp+58h] [rbp+0h]

  v3 = a1;
  v4 = **(_QWORD **)(a1 - 16);
  if ( (qword_1C0048010 & 0x200) != 0 )
    DbgLogRequest(v4, 14, retaddr, v4, a2, 0LL, 0LL);
  v5 = 255;
  if ( v4 )
    v5 = *(_DWORD *)(v4 + 56);
  if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 4) != 0 )
    Template_pqq(v5, (unsigned int)&EventPortPause, 0, v3, v5, a2);
  if ( !v4 )
    return 0;
  *(_DWORD *)(v4 + 1456) = a2;
  _InterlockedExchange((volatile __int32 *)(v4 + 1460), 1);
  RaidPauseAdapterQueue(v4);
  v6 = v4 + 1296;
  if ( _InterlockedCompareExchange((volatile signed __int32 *)(v4 + 1312), 134684676, 134684677) != 134684677 )
    v6 = 0LL;
  if ( v6 )
  {
    *(_DWORD *)(v6 + 32) = 3;
    RaidQueueDeferredItem(v4 + 1088, (struct _SLIST_ENTRY *)v6);
  }
  else
  {
    _InterlockedIncrement(&RaidUnloggedErrors);
    if ( (qword_1C0048010 & 0x800) != 0 )
      DbgLogRequest(v4, 22, retaddr, 0LL, 0LL, 0LL, 0LL);
    if ( !(unsigned int)RaidResumeAdapterQueue(v4) )
      KeInsertQueueDpc((PRKDPC)(v4 + 1792), 0LL, 0LL);
  }
  return 1;
}
