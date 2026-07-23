/*
 * XREFs of CmpForceInvalidatePostCallback @ 0x14060BCD4
 * Callers:
 *     <none>
 * Callees:
 *     CmpDiscardKcb @ 0x14000A96C (CmpDiscardKcb.c)
 *     CmpSearchForOpenSubKeys @ 0x1403E3C04 (CmpSearchForOpenSubKeys.c)
 *     CmpMarkKeyUnbacked @ 0x140518288 (CmpMarkKeyUnbacked.c)
 *     CmpFlushNotifiesOnKeyBodyList @ 0x140518304 (CmpFlushNotifiesOnKeyBodyList.c)
 */

__int64 __fastcall CmpForceInvalidatePostCallback(ULONG_PTR a1, _DWORD *a2, char a3)
{
  if ( (unsigned int)CmpSearchForOpenSubKeys(a1, 1, a3, a2) )
    return 1LL;
  CmpMarkKeyUnbacked(a1);
  CmpFlushNotifiesOnKeyBodyList(a1, 8LL, 1);
  CmpDiscardKcb(a1);
  return 0LL;
}
