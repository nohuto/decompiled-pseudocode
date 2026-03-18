/*
 * XREFs of ?Begin@CDrawListPrimitiveBuilder@@QEAAXAEBUPrimitiveBuilderSetupParams@@$$QEAV?$SmartIfaceBuffer@UIRenderingEffect@@$0DA@URenderingEffectResourceManagement@@@@@Z @ 0x1801112A0
 * Callers:
 *     ?UpdateHWDrawListCache@CSpriteDrawListGenerator@@AEAAJ_KAEBUCCommonDrawListCacheParameters@@PEAVCDrawListCache@@@Z @ 0x180133B98 (-UpdateHWDrawListCache@CSpriteDrawListGenerator@@AEAAJ_KAEBUCCommonDrawListCacheParameters@@PEAV.c)
 *     ?UpdateDrawListCache@CEffectBrush@@AEAAJ_KAEBUCCommonDrawListCacheParameters@@AEBUEffectStage@@PEAVCDrawListCache@@@Z @ 0x18013E1AC (-UpdateDrawListCache@CEffectBrush@@AEAAJ_KAEBUCCommonDrawListCacheParameters@@AEBUEffectStage@@P.c)
 * Callees:
 *     ?Clear@?$SmartIfaceBuffer@UIRenderingEffect@@$0DA@URenderingEffectResourceManagement@@@@QEAAXXZ @ 0x1800B247C (-Clear@-$SmartIfaceBuffer@UIRenderingEffect@@$0DA@URenderingEffectResourceManagement@@@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CDrawListPrimitiveBuilder::Begin(CDrawListPrimitiveBuilder *this, _OWORD *a2, _OWORD *a3)
{
  char *v3; // rdi

  v3 = (char *)this + 32;
  *(_OWORD *)this = *a2;
  *((_OWORD *)this + 1) = a2[1];
  SmartIfaceBuffer<IRenderingEffect,48,RenderingEffectResourceManagement>::Clear((__int64 *)this + 4);
  if ( v3 )
  {
    *(_QWORD *)v3 = 0LL;
    if ( *(_QWORD *)a3 )
    {
      *(_OWORD *)v3 = *a3;
      *((_OWORD *)v3 + 1) = a3[1];
      *((_OWORD *)v3 + 2) = a3[2];
      *(_QWORD *)a3 = 0LL;
    }
    else
    {
      *(_QWORD *)v3 = 0LL;
    }
  }
  (**(void (__fastcall ***)(char *, char *))v3)(v3, (char *)this + 2412);
  if ( *((_QWORD *)this + 2) )
  {
    if ( *((_DWORD *)this + 2) == 1 )
      *((_BYTE *)this + 28) = 0;
  }
  else
  {
    *((_WORD *)this + 14) = 0;
  }
  CDrawListPrimitiveBuilder::ResetAccumulationBuffers(this);
}
