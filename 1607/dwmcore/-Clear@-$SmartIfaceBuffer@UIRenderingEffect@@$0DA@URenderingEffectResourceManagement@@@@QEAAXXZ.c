/*
 * XREFs of ?Clear@?$SmartIfaceBuffer@UIRenderingEffect@@$0DA@URenderingEffectResourceManagement@@@@QEAAXXZ @ 0x1800B247C
 * Callers:
 *     ??1CDrawListPrimitiveBuilder@@QEAA@XZ @ 0x1800975DC (--1CDrawListPrimitiveBuilder@@QEAA@XZ.c)
 *     ?End@CDrawListPrimitiveBuilder@@QEAAJXZ @ 0x180111108 (-End@CDrawListPrimitiveBuilder@@QEAAJXZ.c)
 *     ?Begin@CDrawListPrimitiveBuilder@@QEAAXAEBUPrimitiveBuilderSetupParams@@$$QEAV?$SmartIfaceBuffer@UIRenderingEffect@@$0DA@URenderingEffectResourceManagement@@@@@Z @ 0x1801112A0 (-Begin@CDrawListPrimitiveBuilder@@QEAAXAEBUPrimitiveBuilderSetupParams@@$$QEAV-$SmartIfaceBuffer.c)
 *     ?UpdateHWDrawListCache@CSpriteDrawListGenerator@@AEAAJ_KAEBUCCommonDrawListCacheParameters@@PEAVCDrawListCache@@@Z @ 0x180133B98 (-UpdateHWDrawListCache@CSpriteDrawListGenerator@@AEAAJ_KAEBUCCommonDrawListCacheParameters@@PEAV.c)
 *     ?UpdateDrawListCache@CEffectBrush@@AEAAJ_KAEBUCCommonDrawListCacheParameters@@AEBUEffectStage@@PEAVCDrawListCache@@@Z @ 0x18013E1AC (-UpdateDrawListCache@CEffectBrush@@AEAAJ_KAEBUCCommonDrawListCacheParameters@@AEBUEffectStage@@P.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall SmartIfaceBuffer<IRenderingEffect,48,RenderingEffectResourceManagement>::Clear(__int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    result = (*(__int64 (**)(void))(result + 32))();
    *a1 = 0LL;
  }
  return result;
}
