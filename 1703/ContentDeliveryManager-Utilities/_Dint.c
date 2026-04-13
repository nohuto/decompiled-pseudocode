/*
 * XREFs of _Dint @ 0x18006ECC8
 * Callers:
 *     _Xp_addh @ 0x18006D42C (_Xp_addh.c)
 *     _Xp_mulh @ 0x18006D7F4 (_Xp_mulh.c)
 *     _Xp_setw @ 0x18006DB04 (_Xp_setw.c)
 *     _LDint @ 0x18006EE84 (_LDint.c)
 * Callees:
 *     <none>
 */

__int16 __fastcall Dint(_WORD *a1, __int16 a2)
{
  unsigned __int16 v3; // cx
  __int16 v4; // r9
  __int16 result; // ax
  __int16 v6; // r10
  __int64 v7; // rax
  __int16 v8; // r10
  __int16 v9; // r9
  __int64 v10; // rcx
  __int16 v11; // r9

  v3 = a1[3];
  v4 = (v3 >> 4) & 0x7FF;
  if ( v4 != 2047 )
  {
    if ( (v3 & 0x7FFF) == 0 && !a1[2] && !a1[1] && !*a1 )
      return 0;
    v6 = 1075 - v4 - a2;
    if ( v6 <= 0 )
      return 0;
    if ( v6 >= 53 )
    {
      *(_DWORD *)(a1 + 1) = 0;
      *a1 = 0;
      a1[3] = v3 & 0x8000;
      return -1;
    }
    v7 = v6 & 0xF;
    v8 = v6 >> 4;
    v9 = word_180091C78[v7];
    v10 = qword_180091C98[v8];
    LOWORD(v7) = a1[v10];
    v11 = v7 & v9;
    a1[v10] = v11 ^ v7;
    if ( v8 != 1 )
    {
      if ( v8 != 2 )
      {
        if ( v8 != 3 )
          return -(v11 != 0);
        v11 |= a1[2];
        a1[2] = 0;
      }
      v11 |= a1[1];
      a1[1] = 0;
    }
    v11 |= *a1;
    *a1 = 0;
    return -(v11 != 0);
  }
  if ( (v3 & 0xF) != 0 )
    return 2;
  if ( a1[2] )
    return 2;
  if ( a1[1] )
    return 2;
  result = 1;
  if ( *a1 )
    return 2;
  return result;
}
