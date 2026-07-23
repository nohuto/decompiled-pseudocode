/*
 * XREFs of RaspGetUnscaledGlyphData @ 0x14012842C
 * Callers:
 *     RaspRasterize @ 0x1401294D0 (RaspRasterize.c)
 * Callees:
 *     RaspLoadBearings @ 0x140128E84 (RaspLoadBearings.c)
 *     RaspMapGlyphIndexToLocation @ 0x140128FE0 (RaspMapGlyphIndexToLocation.c)
 *     RaspFreeMemory @ 0x140129BE8 (RaspFreeMemory.c)
 *     RaspConvertDeltas @ 0x140129D48 (RaspConvertDeltas.c)
 *     RaspLoadGlyphData @ 0x140129DE4 (RaspLoadGlyphData.c)
 *     RaspMapCharacterCodeToGlyphIndex @ 0x140129E78 (RaspMapCharacterCodeToGlyphIndex.c)
 */

__int64 __fastcall RaspGetUnscaledGlyphData(__int64 a1, __int64 a2, _QWORD *a3, __int64 a4, __int64 a5)
{
  __int64 v7; // rcx
  __int64 v9; // rbx
  unsigned __int16 v10; // si
  int v11; // eax
  __int64 v12; // r12
  int GlyphData; // eax
  int Bearings; // edi
  __int64 v16; // [rsp+30h] [rbp-10h] BYREF
  unsigned __int16 v17; // [rsp+80h] [rbp+40h] BYREF
  int v18; // [rsp+90h] [rbp+50h] BYREF

  v7 = *(_QWORD *)(a1 + 24);
  v9 = 0LL;
  v16 = 0LL;
  v10 = 0;
  if ( (int)RaspMapCharacterCodeToGlyphIndex(v7, a2, &v17) >= 0 )
    v10 = v17;
  v11 = RaspMapGlyphIndexToLocation(a1, v10, &v18);
  v12 = a5;
  if ( v11 >= 0 || (v10 = 0, Bearings = RaspMapGlyphIndexToLocation(a1, 0LL, &v18), Bearings >= 0) )
  {
    v17 = v10;
    GlyphData = RaspLoadGlyphData(a1, v18, (unsigned int)&v17, (unsigned int)&v16, v12);
    v9 = v16;
    Bearings = GlyphData;
    if ( GlyphData >= 0 )
    {
      Bearings = RaspConvertDeltas(v16);
      if ( Bearings >= 0 )
        Bearings = RaspLoadBearings(a1, v17, v9, a4);
    }
  }
  if ( a3 )
  {
    *a3 = v9;
    v9 = 0LL;
  }
  if ( v9 )
    RaspFreeMemory(v9, v12);
  return (unsigned int)Bearings;
}
