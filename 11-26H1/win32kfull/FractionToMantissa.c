/*
 * XREFs of FractionToMantissa @ 0x140147464
 * Callers:
 *     Log @ 0x140147308 (Log.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FractionToMantissa(int a1, unsigned int a2)
{
  unsigned int v2; // r10d
  __int16 v3; // r11
  unsigned __int16 v4; // bx
  unsigned __int16 v5; // r9
  int v6; // edx
  int v7; // r8d
  int v8; // esi
  __int16 v9; // r11
  unsigned __int16 v10; // cx
  int v11; // eax
  int v12; // r8d
  unsigned __int16 v13; // r10
  unsigned __int16 v14; // ax
  unsigned __int16 i; // ax

  v2 = HIWORD(a2);
  v3 = a2;
  v4 = (unsigned __int16)a2 >> 9;
  v5 = 0;
  v6 = a1 / 100000;
  v7 = a1 / 100000 - 1;
  v8 = a1 % 100000;
  v9 = v3 & 0x1FF;
  v10 = v9 + (v4 & 7);
  if ( v6 )
  {
    v5 = v9 + (v4 & 7);
    v10 = v9 + ((v4 >> 3) & 7);
    if ( v7 )
    {
      v5 = v10 + v9 + (v4 & 7);
      v11 = v7 - 1;
      v10 = v9 + (v2 & 7);
      v12 = v7 - 2;
      if ( v11 )
      {
        v13 = (unsigned __int16)v2 >> 3;
        v5 += v10;
        v14 = v13 | 0x2000;
        v10 = v9 + (v13 & 7);
        if ( (v4 & 0x40) == 0 )
          v14 = v13;
        for ( i = v14 >> 1; v12; --v12 )
        {
          v5 += v10;
          i >>= 2;
          v10 = v9 + (i & 3);
        }
      }
    }
  }
  return v5 + (((v8 * (unsigned int)v10) >> 1) + 25000) / 0xC350;
}
