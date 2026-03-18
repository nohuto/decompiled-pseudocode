/*
 * XREFs of CJGD @ 0x1C00AB374
 * Callers:
 *     lGetGlyphBitmap @ 0x1C00AA914 (lGetGlyphBitmap.c)
 *     lQueryDEVICEMETRICS @ 0x1C01154D0 (lQueryDEVICEMETRICS.c)
 *     bComputeMaxGlyph @ 0x1C0119094 (bComputeMaxGlyph.c)
 *     lGetGlyphBitmapErrRecover @ 0x1C0247154 (lGetGlyphBitmapErrRecover.c)
 *     lGetSingularGlyphBitmap @ 0x1C0247250 (lGetSingularGlyphBitmap.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CJGD(unsigned int a1, int a2, __int64 a3)
{
  int v3; // eax

  v3 = *(_DWORD *)(a3 + 40);
  if ( (v3 & 0x10000) != 0 )
  {
    if ( (v3 & 0x10000000) != 0 )
    {
      if ( (v3 & 0x20000000) != 0 )
        a2 *= 5;
    }
    else
    {
      a1 = (a1 + 1) >> 1;
    }
  }
  else
  {
    a1 = (a1 + 7) >> 3;
  }
  return ((a1 * a2 + 3) & 0xFFFFFFFC) + 16;
}
