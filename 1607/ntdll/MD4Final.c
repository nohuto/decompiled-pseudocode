/*
 * XREFs of MD4Final @ 0x1800FCDF0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x180096C30 (__security_check_cookie.c)
 *     memset @ 0x1800ACCC0 (memset.c)
 *     MD4Update @ 0x1800FCEF0 (MD4Update.c)
 */

__int64 __fastcall MD4Final(_DWORD *a1)
{
  unsigned int v1; // edx
  int v2; // edi
  int v3; // eax
  unsigned int v5; // edx
  unsigned int v6; // edi
  __int64 i; // rcx
  __int64 result; // rax
  _BYTE v9[80]; // [rsp+20h] [rbp-68h] BYREF

  v1 = a1[4];
  v2 = 56;
  v3 = a1[5];
  a1[22] = v1;
  v5 = (v1 >> 3) & 0x3F;
  a1[23] = v3;
  if ( v5 >= 0x38 )
    v2 = 120;
  v6 = v2 - v5;
  memset(v9, 0, v6);
  v9[0] = 0x80;
  MD4Update(a1, v9, v6);
  MD4Update(a1, a1 + 22, 8LL);
  for ( i = 0LL; i < 4; ++i )
    a1[i + 22] = a1[i];
  result = 0LL;
  memset(a1 + 6, 0, 0x40uLL);
  return result;
}
