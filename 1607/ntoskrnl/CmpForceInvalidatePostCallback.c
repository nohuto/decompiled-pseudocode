/*
 * XREFs of CmpForceInvalidatePostCallback @ 0x14060BC20
 * Callers:
 *     <none>
 * Callees:
 *     CmpDiscardKcb @ 0x14000ADEC (CmpDiscardKcb.c)
 *     CmpSearchForOpenSubKeys @ 0x14049ACE4 (CmpSearchForOpenSubKeys.c)
 *     CmpMarkKeyUnbacked @ 0x14049FE7C (CmpMarkKeyUnbacked.c)
 *     CmpFlushNotifiesOnKeyBodyList @ 0x14049FEF8 (CmpFlushNotifiesOnKeyBodyList.c)
 */

__int64 __fastcall CmpForceInvalidatePostCallback(ULONG_PTR a1, _DWORD *a2, char a3)
{
  if ( (unsigned int)CmpSearchForOpenSubKeys(a1, 1, a3, a2) )
    return 1LL;
  CmpMarkKeyUnbacked(a1);
  CmpFlushNotifiesOnKeyBodyList(a1, 8, 1);
  CmpDiscardKcb(a1);
  return 0LL;
}
