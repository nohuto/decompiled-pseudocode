/*
 * XREFs of _Dscale @ 0x1800566F0
 * Callers:
 *     _Stodx @ 0x180054C14 (_Stodx.c)
 *     _Xp_addh @ 0x18005697C (_Xp_addh.c)
 *     _Xp_mulh @ 0x180056E04 (_Xp_mulh.c)
 *     _Xp_setw @ 0x180057128 (_Xp_setw.c)
 *     _LDscale @ 0x180057458 (_LDscale.c)
 * Callees:
 *     _Dnorm @ 0x1800580A4 (_Dnorm.c)
 */

__int64 __fastcall Dscale(_WORD *a1, int a2)
{
  __int16 v4; // cx
  double Double; // xmm0_8
  int v8; // r11d
  __int16 v9; // r14
  __int16 v10; // cx
  unsigned __int16 v11; // si
  __int16 v12; // dx
  __int16 v13; // r9
  __int16 v14; // cx
  __int64 v15; // r8
  __int16 v16; // r11
  unsigned __int16 v17; // dx
  unsigned __int16 v18; // r8
  __int16 v19; // ax
  unsigned __int16 v20; // dx
  __int16 v21; // ax
  bool v22; // zf

  v4 = (a1[3] >> 4) & 0x7FF;
  if ( v4 == 2047 )
  {
    if ( (a1[3] & 0xF) != 0 || a1[2] || a1[1] || *a1 )
      return 2;
    else
      return 1;
  }
  if ( !v4 )
  {
    v4 = Dnorm(a1);
    if ( v4 > 0 )
      return 0LL;
  }
  if ( a2 <= 0 || 2047 - v4 > a2 )
  {
    if ( -v4 < a2 )
    {
      a1[3] &= 0x800Fu;
      a1[3] |= 16 * (v4 + a2);
      return 0xFFFFFFFFLL;
    }
    v8 = v4 + a2 - 1;
    v9 = a1[3] & 0x8000;
    v10 = a1[3] & 0xF | 0x10;
    a1[3] = v10;
    if ( (unsigned int)(v8 + 53) > 0x34 )
    {
      a1[3] = v9;
      *(_DWORD *)(a1 + 1) = 0;
      *a1 = 0;
    }
    else
    {
      v11 = 0;
      if ( (__int16)v8 <= -16 )
      {
        v12 = a1[1];
        v13 = v10;
        v14 = a1[2];
        v15 = (unsigned __int16)(((unsigned __int16)(-16 - v8) >> 4) + 1);
        LOWORD(v8) = 16 * v15 + v8;
        do
        {
          v11 = *a1 | (v11 != 0);
          *a1 = v12;
          v12 = v14;
          v14 = v13;
          v13 = 0;
          --v15;
        }
        while ( v15 );
        a1[3] = 0;
        a1[2] = v14;
        a1[1] = v12;
      }
      v16 = -(__int16)v8;
      if ( v16 )
      {
        v17 = a1[1];
        v11 = (v11 != 0) | (unsigned __int16)(*a1 << (16 - v16));
        v18 = a1[2];
        *a1 = (*a1 >> v16) | (v17 << (16 - v16));
        v19 = (v17 >> v16) | (v18 << (16 - v16));
        v20 = a1[3];
        a1[1] = v19;
        a1[3] = v20 >> v16;
        a1[2] = (v18 >> v16) | (v20 << (16 - v16));
      }
      a1[3] |= v9;
      v21 = a1[3];
      if ( v11 > 0x8000u || v11 == 0x8000 && (*(_BYTE *)a1 & 1) != 0 )
      {
        v22 = (*a1)++ == 0xFFFF;
        if ( v22 )
        {
          v22 = a1[1]++ == 0xFFFF;
          if ( v22 )
          {
            v22 = a1[2]++ == 0xFFFF;
            if ( v22 )
            {
              a1[3] = v21 + 1;
              return 0xFFFFFFFFLL;
            }
          }
        }
      }
      if ( v21 != v9 || a1[2] || a1[1] || *a1 )
        return 0xFFFFFFFFLL;
    }
    return 0LL;
  }
  Double = Inf._Double;
  if ( (__int16)a1[3] < 0 )
    *(_QWORD *)&Double = *(_QWORD *)&Inf._Double ^ _xmm;
  *(double *)a1 = Double;
  return 1LL;
}
