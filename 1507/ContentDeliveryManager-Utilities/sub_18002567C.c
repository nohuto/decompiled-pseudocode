/*
 * XREFs of sub_18002567C @ 0x18002567C
 * Callers:
 *     sub_18002340C @ 0x18002340C (sub_18002340C.c)
 *     sub_180023890 @ 0x180023890 (sub_180023890.c)
 *     sub_180023C04 @ 0x180023C04 (sub_180023C04.c)
 * Callees:
 *     sub_180025430 @ 0x180025430 (sub_180025430.c)
 */

__int64 __fastcall sub_18002567C(_WORD *a1, unsigned __int16 *a2)
{
  __int16 v3; // ax
  __int64 result; // rax

  v3 = (unsigned __int8)(a2[1] >> 7);
  if ( v3 == 255 )
  {
    *a1 = 0;
    if ( (a2[1] & 0x7F) != 0 )
      return 2LL;
    result = 1LL;
    if ( *a2 )
      return 2LL;
  }
  else if ( (unsigned __int8)(a2[1] >> 7) || (v3 = sub_180025430(a2), v3 <= 0) )
  {
    a2[1] &= 0xBF7Fu;
    a2[1] |= 0x3F00u;
    *a1 = v3 - 126;
    return 0xFFFFFFFFLL;
  }
  else
  {
    *a1 = 0;
    return 0LL;
  }
  return result;
}
