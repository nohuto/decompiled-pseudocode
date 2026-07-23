/*
 * XREFs of CmpFlushNotifiesPostCallback @ 0x14060BC44
 * Callers:
 *     <none>
 * Callees:
 *     CmpFlushNotifiesOnKeyBodyList @ 0x140518304 (CmpFlushNotifiesOnKeyBodyList.c)
 */

__int64 __fastcall CmpFlushNotifiesPostCallback(__int64 a1, unsigned int *a2)
{
  CmpFlushNotifiesOnKeyBodyList(a1, *a2, *((_BYTE *)a2 + 5));
  return 0LL;
}
