/*
 * XREFs of ??0CoordMap@@QEAA@XZ @ 0x180110FDC
 * Callers:
 *     ?UpdateHWDrawListCache@CSpriteDrawListGenerator@@AEAAJ_KAEBUCCommonDrawListCacheParameters@@PEAVCDrawListCache@@@Z @ 0x180133B98 (-UpdateHWDrawListCache@CSpriteDrawListGenerator@@AEAAJ_KAEBUCCommonDrawListCacheParameters@@PEAV.c)
 *     ?UpdateWARPDrawListCache@CSpriteDrawListGenerator@@AEAAJ_KAEBUCCommonDrawListCacheParameters@@PEAVCDrawListCache@@@Z @ 0x180133F9C (-UpdateWARPDrawListCache@CSpriteDrawListGenerator@@AEAAJ_KAEBUCCommonDrawListCacheParameters@@PE.c)
 *     ?UpdateDrawListCache@CEffectBrush@@AEAAJ_KAEBUCCommonDrawListCacheParameters@@AEBUEffectStage@@PEAVCDrawListCache@@@Z @ 0x18013E1AC (-UpdateDrawListCache@CEffectBrush@@AEAAJ_KAEBUCCommonDrawListCacheParameters@@AEBUEffectStage@@P.c)
 * Callees:
 *     <none>
 */

CoordMap *__fastcall CoordMap::CoordMap(CoordMap *this)
{
  *(_QWORD *)this = (char *)this + 32;
  *((_QWORD *)this + 1) = (char *)this + 32;
  *((_DWORD *)this + 4) = 10;
  *(_QWORD *)((char *)this + 20) = 10LL;
  *((_QWORD *)this + 24) = (char *)this + 224;
  *((_QWORD *)this + 25) = (char *)this + 224;
  *((_DWORD *)this + 52) = 10;
  *(_QWORD *)((char *)this + 212) = 10LL;
  *((_QWORD *)this + 48) = (char *)this + 416;
  *((_QWORD *)this + 49) = (char *)this + 416;
  *((_DWORD *)this + 100) = 3;
  *(_QWORD *)((char *)this + 404) = 3LL;
  return this;
}
