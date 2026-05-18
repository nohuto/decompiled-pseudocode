/*
 * XREFs of sub_180005974 @ 0x180005974
 * Callers:
 *     StartAddress @ 0x1800028C0 (StartAddress.c)
 * Callees:
 *     sub_180005AEC @ 0x180005AEC (sub_180005AEC.c)
 *     __security_check_cookie @ 0x1800063A0 (__security_check_cookie.c)
 */

__int64 __fastcall sub_180005974(__int64 *a1, __int128 *a2, int a3)
{
  __int64 v3; // rcx
  __int128 v4; // xmm0
  __int64 result; // rax
  _UNKNOWN **v6; // [rsp+20h] [rbp-38h] BYREF
  int v7; // [rsp+28h] [rbp-30h]
  __int128 v8; // [rsp+30h] [rbp-28h]
  int v9; // [rsp+40h] [rbp-18h]

  v3 = *a1;
  if ( v3 )
  {
    v4 = *a2;
    v6 = &off_180008E98;
    v8 = v4;
    v7 = 2;
    v9 = a3;
    return sub_180005AEC(v3, &v6);
  }
  return result;
}
