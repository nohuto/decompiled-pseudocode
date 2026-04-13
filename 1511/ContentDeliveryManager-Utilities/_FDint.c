/*
 * XREFs of _FDint @ 0x180027120
 * Callers:
 *     _FXp_addh @ 0x180024F8C (_FXp_addh.c)
 *     _FXp_mulh @ 0x180025410 (_FXp_mulh.c)
 *     _FXp_setw @ 0x180025784 (_FXp_setw.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FDint(_WORD *a1, __int16 a2)
{
  unsigned __int16 v3; // cx
  __int16 v4; // r10
  __int64 result; // rax
  __int16 v6; // r9
  __int64 v7; // rax
  __int16 v8; // r9
  __int16 v9; // r10
  __int64 v10; // rcx
  __int16 v11; // r10

  v3 = a1[1];
  v4 = (unsigned __int8)(v3 >> 7);
  if ( v4 == 255 )
  {
    if ( (v3 & 0x7F) != 0 )
      return 2LL;
    result = 1LL;
    if ( *a1 )
      return 2LL;
  }
  else if ( ((v3 & 0x7FFF) != 0 || *a1) && (v6 = 150 - v4 - a2, v6 > 0) )
  {
    if ( v6 < 24 )
    {
      v7 = v6 & 0xF;
      v8 = v6 >> 4;
      v9 = word_18002D588[v7];
      v10 = qword_18002D5A8[v8];
      LOWORD(v7) = a1[v10];
      v11 = v7 & v9;
      a1[v10] = v11 ^ v7;
      if ( v8 > 0 )
      {
        v11 |= *a1;
        *a1 = 0;
      }
      return (unsigned int)-(v11 != 0);
    }
    else
    {
      *a1 = 0;
      a1[1] = v3 & 0x8000;
      return 0xFFFFFFFFLL;
    }
  }
  else
  {
    return 0LL;
  }
  return result;
}
