/*
 * XREFs of _Dint @ 0x1800274B8
 * Callers:
 *     _Xp_addh @ 0x18002658C (_Xp_addh.c)
 *     _Xp_mulh @ 0x180026A24 (_Xp_mulh.c)
 *     _Xp_setw @ 0x180026D40 (_Xp_setw.c)
 *     _LDint @ 0x180027298 (_LDint.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Dint(_WORD *a1, __int16 a2)
{
  unsigned __int16 v3; // cx
  __int16 v4; // r9
  __int64 result; // rax
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
      return 0LL;
    v6 = 1075 - v4 - a2;
    if ( v6 <= 0 )
      return 0LL;
    if ( v6 >= 53 )
    {
      *(_DWORD *)(a1 + 1) = 0;
      *a1 = 0;
      a1[3] = v3 & 0x8000;
      return 0xFFFFFFFFLL;
    }
    v7 = v6 & 0xF;
    v8 = v6 >> 4;
    v9 = word_18002D5B8[v7];
    v10 = qword_18002D5D8[v8];
    LOWORD(v7) = a1[v10];
    v11 = v7 & v9;
    a1[v10] = v11 ^ v7;
    if ( v8 != 1 )
    {
      if ( v8 != 2 )
      {
        if ( v8 != 3 )
          return (unsigned int)-(v11 != 0);
        v11 |= a1[2];
        a1[2] = 0;
      }
      v11 |= a1[1];
      a1[1] = 0;
    }
    v11 |= *a1;
    *a1 = 0;
    return (unsigned int)-(v11 != 0);
  }
  if ( (v3 & 0xF) != 0 )
    return 2LL;
  if ( a1[2] )
    return 2LL;
  if ( a1[1] )
    return 2LL;
  result = 1LL;
  if ( *a1 )
    return 2LL;
  return result;
}
