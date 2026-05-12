/*
 * XREFs of StorPortResume @ 0x1C002A550
 * Callers:
 *     RaidpLinkUp @ 0x1C0029744 (RaidpLinkUp.c)
 *     StorPortResumeVrfy @ 0x1C005A600 (StorPortResumeVrfy.c)
 * Callees:
 *     DbgLogRequest @ 0x1C0014194 (DbgLogRequest.c)
 *     RaidQueueDeferredItem @ 0x1C0014994 (RaidQueueDeferredItem.c)
 *     Template_pq @ 0x1C002700C (Template_pq.c)
 */

char __fastcall StorPortResume(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rcx
  __int64 v5; // rdx
  __int64 v6; // [rsp+20h] [rbp-28h]
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  v2 = **(_QWORD **)(a1 - 16);
  if ( (qword_1C0048010 & 0x200) != 0 )
    DbgLogRequest(v2, 15, retaddr, v2, 0LL, 0LL, 0LL);
  v3 = 255LL;
  if ( v2 )
    v3 = *(unsigned int *)(v2 + 56);
  if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 4) != 0 )
  {
    LODWORD(v6) = v3;
    Template_pq(v3, &EventPortResume, 0LL, a1, v6);
  }
  if ( !v2 )
    return 0;
  v5 = v2 + 1376;
  _InterlockedExchange((volatile __int32 *)(v2 + 1460), 0);
  if ( _InterlockedCompareExchange((volatile signed __int32 *)(v2 + 1392), 134684676, 134684677) != 134684677 )
    v5 = 0LL;
  if ( v5 )
  {
    *(_DWORD *)(v5 + 32) = 4;
    RaidQueueDeferredItem(v2 + 1088, (struct _SLIST_ENTRY *)v5);
  }
  else
  {
    _InterlockedIncrement(&RaidUnloggedErrors);
    if ( (qword_1C0048010 & 0x800) != 0 )
      DbgLogRequest(v2, 22, retaddr, 0LL, 0LL, 0LL, 0LL);
  }
  return 1;
}
