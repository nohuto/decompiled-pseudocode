/*
 * XREFs of CmpRefreshWorkerRoutine @ 0x14060DA50
 * Callers:
 *     <none>
 * Callees:
 *     CmpDiscardKcb @ 0x14000ADEC (CmpDiscardKcb.c)
 *     CmpMarkKeyUnbacked @ 0x14049FE7C (CmpMarkKeyUnbacked.c)
 *     CmpFlushNotifiesOnKeyBodyList @ 0x14049FEF8 (CmpFlushNotifiesOnKeyBodyList.c)
 */

__int64 __fastcall CmpRefreshWorkerRoutine(ULONG_PTR a1, __int64 a2)
{
  if ( *(_QWORD *)(a1 + 24) != a2 || (*(_BYTE *)(a1 + 178) & 4) != 0 )
    return 0LL;
  CmpFlushNotifiesOnKeyBodyList(a1, 8, 1);
  CmpMarkKeyUnbacked(a1);
  CmpDiscardKcb(a1);
  return 2LL;
}
