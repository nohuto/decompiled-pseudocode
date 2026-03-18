/*
 * XREFs of sub_140261FA8 @ 0x140261FA8
 * Callers:
 *     sub_140701618 @ 0x140701618 (sub_140701618.c)
 * Callees:
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     sub_1406EC140 @ 0x1406EC140 (sub_1406EC140.c)
 */

__int64 __fastcall sub_140261FA8(__int128 *a1, unsigned int a2)
{
  __int128 v2; // xmm0
  __int128 v4; // xmm1
  int v6; // ebx
  char v8; // [rsp+20h] [rbp-78h]
  _DWORD v9[6]; // [rsp+30h] [rbp-68h] BYREF
  __int128 v10; // [rsp+48h] [rbp-50h]
  __int128 v11; // [rsp+58h] [rbp-40h]
  int v12; // [rsp+70h] [rbp-28h]
  unsigned int v13; // [rsp+74h] [rbp-24h]

  v2 = *a1;
  v9[1] = 0;
  v4 = a1[1];
  v13 = a2;
  v9[0] = 1;
  v9[2] = 48;
  v12 = 4;
  v8 = 1;
  v10 = v2;
  v11 = v4;
  v6 = sub_1406EC140(4, 0x48uLL, v9, v8);
  if ( v6 >= 0 && qword_14077E418 )
    qword_14077E418(a1, 32LL, a2);
  return (unsigned int)v6;
}
