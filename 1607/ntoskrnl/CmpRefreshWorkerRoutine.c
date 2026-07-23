/*
 * XREFs of CmpRefreshWorkerRoutine @ 0x14060DB04
 * Callers:
 *     <none>
 * Callees:
 *     CmpDiscardKcb @ 0x14000A96C (CmpDiscardKcb.c)
 *     CmpMarkKeyUnbacked @ 0x140518288 (CmpMarkKeyUnbacked.c)
 *     CmpFlushNotifiesOnKeyBodyList @ 0x140518304 (CmpFlushNotifiesOnKeyBodyList.c)
 */

__int64 __fastcall CmpRefreshWorkerRoutine(ULONG_PTR a1, __int64 a2)
{
  if ( *(_QWORD *)(a1 + 24) != a2 || (*(_BYTE *)(a1 + 178) & 4) != 0 )
    return 0LL;
  CmpFlushNotifiesOnKeyBodyList(a1, 8LL, 1);
  CmpMarkKeyUnbacked(a1);
  CmpDiscardKcb(a1);
  return 2LL;
}
