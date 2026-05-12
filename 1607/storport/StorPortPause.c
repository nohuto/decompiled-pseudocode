/*
 * XREFs of StorPortPause @ 0x1C002DD50
 * Callers:
 *     StorPortNotification @ 0x1C0002580 (StorPortNotification.c)
 *     RaidpLinkDown @ 0x1C002CF68 (RaidpLinkDown.c)
 *     StorPortPauseVrfy @ 0x1C00625D0 (StorPortPauseVrfy.c)
 * Callees:
 *     RaidResumeAdapterQueue @ 0x1C000BD8C (RaidResumeAdapterQueue.c)
 *     RaidPauseAdapterQueue @ 0x1C000C138 (RaidPauseAdapterQueue.c)
 *     DbgLogRequest @ 0x1C000C24C (DbgLogRequest.c)
 *     RaidQueueDeferredItem @ 0x1C00189D4 (RaidQueueDeferredItem.c)
 *     Template_pqq @ 0x1C002A7D0 (Template_pqq.c)
 */

char __fastcall StorPortPause(__int64 a1, unsigned int a2)
{
  __int64 v4; // rbx
  __int64 v5; // rcx
  __int64 v7; // rdx
  __int64 v8; // [rsp+20h] [rbp-38h]
  __int64 v9; // [rsp+28h] [rbp-30h]
  __int64 retaddr; // [rsp+58h] [rbp+0h]

  v4 = **(_QWORD **)(a1 - 16);
  if ( (qword_1C004F2A0 & 0x200) != 0 )
    DbgLogRequest(v4, 14, retaddr, v4, a2, 0LL, 0LL);
  v5 = 255LL;
  if ( v4 )
    v5 = *(unsigned int *)(v4 + 56);
  if ( (Microsoft_Windows_StorPortEnableBits & 4) != 0 )
  {
    LODWORD(v9) = a2;
    LODWORD(v8) = v5;
    Template_pqq(v5, &EventPortPause, 0LL, a1, v8, v9);
  }
  if ( !v4 )
    return 0;
  ++*(_DWORD *)(v4 + 5444);
  *(_DWORD *)(v4 + 1456) = a2;
  _InterlockedExchange((volatile __int32 *)(v4 + 1460), 1);
  RaidPauseAdapterQueue(v4);
  v7 = v4 + 1296;
  if ( _InterlockedCompareExchange((volatile signed __int32 *)(v4 + 1312), 134684676, 134684677) != 134684677 )
    v7 = 0LL;
  if ( v7 )
  {
    *(_DWORD *)(v7 + 32) = 3;
    RaidQueueDeferredItem(v4 + 1088, (struct _SLIST_ENTRY *)v7);
  }
  else
  {
    _InterlockedIncrement(&RaidUnloggedErrors);
    if ( (qword_1C004F2A0 & 0x800) != 0 )
      DbgLogRequest(v4, 22, retaddr, 0LL, 0LL, 0LL, 0LL);
    if ( !(unsigned int)RaidResumeAdapterQueue(v4) )
      KeInsertQueueDpc((PRKDPC)(v4 + 1792), 0LL, 0LL);
  }
  return 1;
}
