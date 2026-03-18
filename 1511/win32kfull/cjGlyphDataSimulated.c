/*
 * XREFs of cjGlyphDataSimulated @ 0x1C0116CC8
 * Callers:
 *     BmfdOpenFontContext @ 0x1C0116624 (BmfdOpenFontContext.c)
 *     BmfdQueryFontData @ 0x1C0116898 (BmfdQueryFontData.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall cjGlyphDataSimulated(__int64 a1, int a2, int a3, int *a4, int a5)
{
  int v5; // eax
  int v6; // ecx
  unsigned int v7; // ecx
  unsigned int v9; // ecx

  if ( a2 )
  {
    v5 = *(_DWORD *)(a1 + 12) & 0x6000;
    if ( v5 )
    {
      if ( v5 == 0x2000 )
      {
        v6 = a2 + 1;
      }
      else
      {
        v9 = a3 + 1;
        if ( v5 == 0x4000 )
          v9 = a3 - 1;
        v6 = a2 + (v9 >> 1);
      }
    }
    else
    {
      v6 = a2;
    }
  }
  else
  {
    a3 = 1;
    v6 = 1;
  }
  if ( a4 )
    *a4 = v6;
  if ( a5 && (a5 == 900 || a5 == 2700) )
    v7 = ((unsigned int)(a3 + 7) >> 3) * v6;
  else
    v7 = a3 * ((unsigned int)(v6 + 7) >> 3);
  return ((v7 + 3) & 0xFFFFFFFC) + 16LL;
}
