/*
 * XREFs of CmpFlushNotifiesPreCallback @ 0x14060BC5C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CmpFlushNotifiesPreCallback(__int64 a1, __int64 a2)
{
  return *(_DWORD *)(a1 + 32) == -1 || !*(_BYTE *)(a2 + 4);
}
