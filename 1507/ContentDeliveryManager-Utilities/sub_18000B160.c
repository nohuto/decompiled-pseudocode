/*
 * XREFs of sub_18000B160 @ 0x18000B160
 * Callers:
 *     <none>
 * Callees:
 *     sub_180021234 @ 0x180021234 (sub_180021234.c)
 *     __security_check_cookie @ 0x180026050 (__security_check_cookie.c)
 */

unsigned __int64 __fastcall sub_18000B160(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, CHAR a4, CHAR *a5)
{
  unsigned __int64 v7; // rbx
  __int64 v8; // rbp
  unsigned __int64 v9; // rdi
  int v10; // eax
  CHAR v11; // dl
  CHAR MultiByteStr[12]; // [rsp+24h] [rbp-44h] BYREF

  v7 = a2;
  v8 = 0LL;
  v9 = (a3 - a2 + 1) >> 1;
  if ( a2 > a3 )
    v9 = 0LL;
  if ( v9 )
  {
    do
    {
      v10 = sub_180021234(MultiByteStr);
      v11 = MultiByteStr[0];
      if ( v10 != 1 )
        v11 = a4;
      v7 += 2LL;
      *a5 = v11;
      ++v8;
      ++a5;
    }
    while ( v8 != v9 );
  }
  return v7;
}
