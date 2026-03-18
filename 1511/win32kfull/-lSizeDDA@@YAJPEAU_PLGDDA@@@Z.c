/*
 * XREFs of ?lSizeDDA@@YAJPEAU_PLGDDA@@@Z @ 0x1C0004CB0
 * Callers:
 *     EngPlgBlt @ 0x1C00041F0 (EngPlgBlt.c)
 * Callees:
 *     ?bAddOverflow@@YAHJJ@Z @ 0x1C0004D78 (-bAddOverflow@@YAHJJ@Z.c)
 *     ?bSubOverflow@@YAHJJ@Z @ 0x1C0014178 (-bSubOverflow@@YAHJJ@Z.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 */

__int64 __fastcall lSizeDDA(struct _PLGDDA *a1)
{
  int *v1; // r8
  int v2; // edx
  __int64 v3; // r9
  int v4; // ecx
  int v5; // eax
  int v6; // edx
  int v7; // ecx
  int v8; // r10d
  int v9; // ecx
  int v10; // edx
  int v11; // ecx
  int v12; // r8d
  bool v13; // cc
  __int64 v14; // r8
  _DWORD v16[3]; // [rsp+24h] [rbp-24h] BYREF

  v1 = v16;
  v2 = *((_DWORD *)a1 + 1);
  v3 = 3LL;
  v16[0] = *((_DWORD *)a1 + 3);
  v16[1] = *((_DWORD *)a1 + 5);
  v16[2] = *((_DWORD *)a1 + 7);
  v4 = v2;
  do
  {
    v5 = *v1++;
    if ( v2 > v5 )
      v2 = v5;
    if ( v4 < v5 )
      v4 = v5;
    --v3;
  }
  while ( v3 );
  if ( (unsigned int)bSubOverflow(v4, v2) )
    return 0LL;
  v9 = v7 - v6;
  if ( !v9 )
    v9 = v8;
  if ( (unsigned int)bAddOverflow(v9, v6) )
    return 0LL;
  v12 = v11 + 4;
  if ( v11 == -4 )
    goto LABEL_24;
  if ( v12 < 0 )
  {
    v13 = v12 < -268435456;
  }
  else if ( v12 <= 0 )
  {
    if ( v11 == 2147483644 )
      return 0LL;
    v10 = -2147483647 % v12;
    v13 = -2147483647 / v12 < -8;
  }
  else
  {
    v10 = 0x7FFFFFFF % v12;
    v13 = 0x7FFFFFFF / v12 < 8;
  }
  if ( !v13 )
  {
LABEL_24:
    if ( !(unsigned int)bAddOverflow(8 * v12, v10) )
      return 8 * v14 + 4;
  }
  return 0LL;
}
