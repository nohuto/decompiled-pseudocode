/*
 * XREFs of ?InvalidateShadow@CDropShadow@@AEAAX_N@Z @ 0x18014FA54
 * Callers:
 *     ?ProcessSetMask@CDropShadow@@QEAAJPEAVCResourceTable@@PEBUMILCMD_DROPSHADOW_SETMASK@@@Z @ 0x18010A290 (-ProcessSetMask@CDropShadow@@QEAAJPEAVCResourceTable@@PEBUMILCMD_DROPSHADOW_SETMASK@@@Z.c)
 *     ?DrawCommonRenderingEffect@CDropShadow@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCVisual@@@Z @ 0x18014F1CC (-DrawCommonRenderingEffect@CDropShadow@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCVisual@@@.c)
 *     ?SetBlurRadius@CDropShadow@@AEAAXM@Z @ 0x18014FB68 (-SetBlurRadius@CDropShadow@@AEAAXM@Z.c)
 *     ?SetColor@CDropShadow@@AEAAXMMMM@Z @ 0x18014FBA8 (-SetColor@CDropShadow@@AEAAXMMMM@Z.c)
 *     ?SetOcclusionRect@CDropShadow@@QEAAXAEBUD2D_RECT_F@@@Z @ 0x18014FC34 (-SetOcclusionRect@CDropShadow@@QEAAXAEBUD2D_RECT_F@@@Z.c)
 *     ?SetOffset@CDropShadow@@AEAAXMMM@Z @ 0x18014FC98 (-SetOffset@CDropShadow@@AEAAXMMM@Z.c)
 *     ?SetOpacity@CDropShadow@@AEAAXM@Z @ 0x18014FD08 (-SetOpacity@CDropShadow@@AEAAXM@Z.c)
 * Callees:
 *     ?ReleasePrimitiveCaches@CSpriteVisualContent@@IEAAXXZ @ 0x180158148 (-ReleasePrimitiveCaches@CSpriteVisualContent@@IEAAXXZ.c)
 */

void __fastcall CDropShadow::InvalidateShadow(CDropShadow *this, char a2)
{
  CSpriteVisualContent *v3; // rcx

  if ( a2 )
  {
    v3 = (CSpriteVisualContent *)*((_QWORD *)this + 24);
    if ( v3 )
      CSpriteVisualContent::ReleasePrimitiveCaches(v3);
  }
  CResource::NotifyOnChanged(this, 0, 0LL);
}
