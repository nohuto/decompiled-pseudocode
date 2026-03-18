/*
 * XREFs of CmpFlushNotifiesPostCallback @ 0x14060BB90
 * Callers:
 *     <none>
 * Callees:
 *     CmpFlushNotifiesOnKeyBodyList @ 0x14049FEF8 (CmpFlushNotifiesOnKeyBodyList.c)
 */

__int64 __fastcall CmpFlushNotifiesPostCallback(__int64 a1, __int64 a2)
{
  CmpFlushNotifiesOnKeyBodyList(a1, *(_DWORD *)a2, *(_BYTE *)(a2 + 5));
  return 0LL;
}
