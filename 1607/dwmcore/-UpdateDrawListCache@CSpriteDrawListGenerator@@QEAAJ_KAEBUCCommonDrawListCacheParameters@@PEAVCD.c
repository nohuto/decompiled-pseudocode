/*
 * XREFs of ?UpdateDrawListCache@CSpriteDrawListGenerator@@QEAAJ_KAEBUCCommonDrawListCacheParameters@@PEAVCDrawListCache@@@Z @ 0x180133AE4
 * Callers:
 *     ?DrawCommonRenderingEffect@CDrawingContext@@QEAAJPEAVCVisual@@PEAVCSpriteVisualContent@@AEBUD2D_SIZE_F@@@Z @ 0x180122310 (-DrawCommonRenderingEffect@CDrawingContext@@QEAAJPEAVCVisual@@PEAVCSpriteVisualContent@@AEBUD2D_.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Invalidate@CDrawListCache@@QEAAXXZ @ 0x180058CA4 (-Invalidate@CDrawListCache@@QEAAXXZ.c)
 *     ?UpdateHWDrawListCache@CSpriteDrawListGenerator@@AEAAJ_KAEBUCCommonDrawListCacheParameters@@PEAVCDrawListCache@@@Z @ 0x180133B98 (-UpdateHWDrawListCache@CSpriteDrawListGenerator@@AEAAJ_KAEBUCCommonDrawListCacheParameters@@PEAV.c)
 *     ?UpdateWARPDrawListCache@CSpriteDrawListGenerator@@AEAAJ_KAEBUCCommonDrawListCacheParameters@@PEAVCDrawListCache@@@Z @ 0x180133F9C (-UpdateWARPDrawListCache@CSpriteDrawListGenerator@@AEAAJ_KAEBUCCommonDrawListCacheParameters@@PE.c)
 */

__int64 __fastcall CSpriteDrawListGenerator::UpdateDrawListCache(
        CSpriteDrawListGenerator *this,
        unsigned __int64 a2,
        const struct CCommonDrawListCacheParameters *a3,
        struct CDrawListCache *a4)
{
  unsigned int v8; // ebx
  int v9; // r10d
  int updated; // eax
  int v11; // eax

  v8 = 0;
  CDrawListCache::Invalidate(a4);
  v9 = *((_DWORD *)a4 + 4);
  if ( v9 )
  {
    if ( v9 == 1 )
    {
      updated = CSpriteDrawListGenerator::UpdateWARPDrawListCache(this, a2, a3, a4);
      v8 = updated;
      if ( updated < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, updated, 0x23u);
    }
  }
  else
  {
    v11 = CSpriteDrawListGenerator::UpdateHWDrawListCache(this, a2, a3, a4);
    v8 = v11;
    if ( v11 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x20u);
  }
  return v8;
}
