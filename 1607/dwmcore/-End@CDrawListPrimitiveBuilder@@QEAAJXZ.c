/*
 * XREFs of ?End@CDrawListPrimitiveBuilder@@QEAAJXZ @ 0x180111108
 * Callers:
 *     ?UpdateHWDrawListCache@CSpriteDrawListGenerator@@AEAAJ_KAEBUCCommonDrawListCacheParameters@@PEAVCDrawListCache@@@Z @ 0x180133B98 (-UpdateHWDrawListCache@CSpriteDrawListGenerator@@AEAAJ_KAEBUCCommonDrawListCacheParameters@@PEAV.c)
 *     ?UpdateDrawListCache@CEffectBrush@@AEAAJ_KAEBUCCommonDrawListCacheParameters@@AEBUEffectStage@@PEAVCDrawListCache@@@Z @ 0x18013E1AC (-UpdateDrawListCache@CEffectBrush@@AEAAJ_KAEBUCCommonDrawListCacheParameters@@AEBUEffectStage@@P.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?ExtractBuiltPrimitiveEntry@CDrawListPrimitiveBuilder@@IEAAJ_NPEAVCPrimitiveColor@@PEBU_D3DCOLORVALUE@@@Z @ 0x1800961EC (-ExtractBuiltPrimitiveEntry@CDrawListPrimitiveBuilder@@IEAAJ_NPEAVCPrimitiveColor@@PEBU_D3DCOLOR.c)
 *     ?Clear@?$SmartIfaceBuffer@UIRenderingEffect@@$0DA@URenderingEffectResourceManagement@@@@QEAAXXZ @ 0x1800B247C (-Clear@-$SmartIfaceBuffer@UIRenderingEffect@@$0DA@URenderingEffectResourceManagement@@@@QEAAXXZ.c)
 */

__int64 __fastcall CDrawListPrimitiveBuilder::End(CDrawListPrimitiveBuilder *this)
{
  int BuiltPrimitiveEntry; // eax
  unsigned int v3; // ebx

  BuiltPrimitiveEntry = CDrawListPrimitiveBuilder::ExtractBuiltPrimitiveEntry(this, 0, 0LL, 0LL);
  v3 = BuiltPrimitiveEntry;
  if ( BuiltPrimitiveEntry < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, BuiltPrimitiveEntry, 0x214u);
  SmartIfaceBuffer<IRenderingEffect,48,RenderingEffectResourceManagement>::Clear((__int64 *)this + 4);
  return v3;
}
