/*
 * XREFs of MantissaToFraction @ 0x1401471E4
 * Callers:
 *     AntiLog @ 0x14014701C (AntiLog.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MantissaToFraction(__int16 a1, int a2)
{
  __int16 v2; // r11
  __int16 v3; // r10
  unsigned int v4; // r8d
  __int16 v5; // r9
  unsigned __int16 v6; // ax
  __int16 v7; // cx
  bool v8; // zf
  unsigned __int16 i; // dx

  v2 = (unsigned __int16)a2 >> 9;
  v3 = a2 & 0x1FF;
  v4 = 0;
  v5 = 1;
  v6 = (a2 & 0x1FF) + (((unsigned __int16)a2 >> 9) & 7);
  v7 = a1 - v6;
  v8 = v7 == 0;
  if ( v7 > 0 )
  {
    v5 = 2;
    v6 = v3 + (((unsigned __int16)a2 >> 12) & 7);
    v7 -= v6;
    v8 = v7 == 0;
    if ( v7 > 0 )
    {
      v5 = 3;
      v6 = v3 + (BYTE2(a2) & 7);
      v7 -= v6;
      v8 = v7 == 0;
      if ( v7 > 0 )
      {
        v5 = 4;
        LOWORD(a2) = (HIWORD(a2) >> 3) | 0x2000;
        v6 = v3 + ((HIWORD(a2) >> 3) & 7);
        if ( (v2 & 0x40) == 0 )
          LOWORD(a2) = HIWORD(a2) >> 3;
        for ( i = (unsigned __int16)a2 >> 1; ; v6 = v3 + (i & 3) )
        {
          v7 -= v6;
          v8 = v7 == 0;
          if ( v7 <= 0 )
            break;
          i >>= 2;
          ++v5;
        }
      }
    }
  }
  if ( !v8 )
  {
    --v5;
    v4 = (100000 * (v6 + v7) + (v6 >> 1)) / (unsigned int)v6;
  }
  if ( v5 )
    v4 += dword_140361900[v5 - 1];
  return v4;
}
