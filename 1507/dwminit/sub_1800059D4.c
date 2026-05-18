/*
 * XREFs of sub_1800059D4 @ 0x1800059D4
 * Callers:
 *     sub_180002764 @ 0x180002764 (sub_180002764.c)
 * Callees:
 *     sub_180005AEC @ 0x180005AEC (sub_180005AEC.c)
 *     __security_check_cookie @ 0x1800063A0 (__security_check_cookie.c)
 */

__int64 __fastcall sub_1800059D4(__int64 *a1, __int128 *a2)
{
  __int64 v2; // rcx
  __int128 v3; // xmm0
  __int64 result; // rax
  _UNKNOWN **v5; // [rsp+20h] [rbp-38h] BYREF
  int v6; // [rsp+28h] [rbp-30h]
  __int128 v7; // [rsp+30h] [rbp-28h]
  int v8; // [rsp+40h] [rbp-18h]
  int v9; // [rsp+44h] [rbp-14h]

  v2 = *a1;
  if ( v2 )
  {
    v3 = *a2;
    v5 = &off_180008E90;
    v9 = dword_18000C698;
    v6 = 3;
    v7 = v3;
    v8 = -2147467259;
    return sub_180005AEC(v2, &v5);
  }
  return result;
}
