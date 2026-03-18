/*
 * XREFs of CJGD @ 0x1C00C296C
 * Callers:
 *     lQueryDEVICEMETRICS @ 0x1C0016AB0 (lQueryDEVICEMETRICS.c)
 *     bComputeMaxGlyph @ 0x1C0019FE0 (bComputeMaxGlyph.c)
 *     lGetGlyphBitmap @ 0x1C00C267C (lGetGlyphBitmap.c)
 *     lGetGlyphBitmapErrRecover @ 0x1C0243310 (lGetGlyphBitmapErrRecover.c)
 *     lGetSingularGlyphBitmap @ 0x1C02434C8 (lGetSingularGlyphBitmap.c)
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
