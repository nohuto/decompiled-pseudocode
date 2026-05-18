/*
 * XREFs of sub_180004384 @ 0x180004384
 * Callers:
 *     DwmpNotifyUserLogon @ 0x180002E70 (DwmpNotifyUserLogon.c)
 * Callees:
 *     sub_180004654 @ 0x180004654 (sub_180004654.c)
 */

__int64 __fastcall sub_180004384(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // [rsp+20h] [rbp-28h] BYREF
  __int64 v5; // [rsp+24h] [rbp-24h]
  __int64 v6; // [rsp+2Ch] [rbp-1Ch]
  int v7; // [rsp+34h] [rbp-14h]

  v5 = a2;
  v4 = 536870914;
  v7 = a1;
  v6 = a3;
  return sub_180004654(a1, &v4);
}
