/*
 * XREFs of sub_18000B100 @ 0x18000B100
 * Callers:
 *     <none>
 * Callees:
 *     sub_180021234 @ 0x180021234 (sub_180021234.c)
 *     __security_check_cookie @ 0x180026050 (__security_check_cookie.c)
 */

CHAR __fastcall sub_18000B100(__int64 a1, __int64 a2, char a3)
{
  int v4; // eax
  CHAR v5; // dl
  CHAR MultiByteStr[12]; // [rsp+24h] [rbp-24h] BYREF

  v4 = sub_180021234(MultiByteStr);
  v5 = MultiByteStr[0];
  if ( v4 != 1 )
    return a3;
  return v5;
}
