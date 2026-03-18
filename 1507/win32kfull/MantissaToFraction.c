/*
 * XREFs of MantissaToFraction @ 0x1C00032E4
 * Callers:
 *     AntiLog @ 0x1C00A7984 (AntiLog.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MantissaToFraction(__int16 a1, unsigned int a2)
{
  unsigned __int16 v2; // r11
  unsigned int v3; // eax
  unsigned int v4; // r8d
  __int16 v5; // r10
  __int16 v6; // dx
  __int16 v7; // cx
  __int16 v8; // r9
  bool v9; // zf
  unsigned __int16 v10; // ax
  unsigned __int16 i; // ax

  v2 = (unsigned __int16)a2 >> 9;
  v3 = HIWORD(a2);
  v4 = 0;
  v5 = a2 & 0x1FF;
  v6 = (a2 & 0x1FF) + (((unsigned __int16)a2 >> 9) & 7);
  v7 = a1 - v6;
  v8 = 1;
  v9 = v7 == 0;
  if ( v7 > 0 )
  {
    v8 = 2;
    v6 = v5 + ((v2 >> 3) & 7);
    v7 -= v6;
    v9 = v7 == 0;
    if ( v7 > 0 )
    {
      v8 = 3;
      v6 = v5 + (v3 & 7);
      v7 -= v6;
      v9 = v7 == 0;
      if ( v7 > 0 )
      {
        v10 = (unsigned __int16)v3 >> 3;
        v8 = 4;
        v6 = v5 + (v10 & 7);
        if ( (v2 & 0x40) != 0 )
          v10 |= 0x2000u;
        for ( i = v10 >> 1; ; v6 = v5 + (i & 3) )
        {
          v7 -= v6;
          v9 = v7 == 0;
          if ( v7 <= 0 )
            break;
          i >>= 2;
          ++v8;
        }
      }
    }
  }
  if ( !v9 )
  {
    --v8;
    v4 = (100000 * (v6 + v7) + (v6 >> 1)) / (unsigned int)v6;
  }
  if ( v8 )
    v4 += dword_1C02E4F88[(__int16)(v8 - 1)];
  return v4;
}
