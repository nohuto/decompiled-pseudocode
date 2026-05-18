/*
 * XREFs of sub_180003E6C @ 0x180003E6C
 * Callers:
 *     sub_180003EA8 @ 0x180003EA8 (sub_180003EA8.c)
 * Callees:
 *     sub_180003F78 @ 0x180003F78 (sub_180003F78.c)
 */

bool __fastcall sub_180003E6C(__int64 a1, __int64 a2)
{
  char v2; // bl
  int v4; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  if ( byte_18000EF84 )
    return 0;
  v4 = 0;
  if ( (unsigned __int8)sub_180003F78(a1, a2, &v4) )
    return v4 == 0;
  return v2;
}
