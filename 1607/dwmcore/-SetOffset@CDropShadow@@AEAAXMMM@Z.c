/*
 * XREFs of ?SetOffset@CDropShadow@@AEAAXMMM@Z @ 0x18014FC98
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18003CEA0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 *     ?SetProperty@CDropShadow@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18014FD50 (-SetProperty@CDropShadow@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 * Callees:
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x18008DB00 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 *     ?InvalidateShadow@CDropShadow@@AEAAX_N@Z @ 0x18014FA54 (-InvalidateShadow@CDropShadow@@AEAAX_N@Z.c)
 */

void __fastcall CDropShadow::SetOffset(CDropShadow *this, float a2, float a3, float a4)
{
  if ( *((float *)this + 40) != a2 || *((float *)this + 41) != a3 || *((float *)this + 42) != a4 )
  {
    *((float *)this + 40) = a2;
    *((float *)this + 41) = a3;
    *((float *)this + 42) = a4;
    CDropShadow::InvalidateShadow(this, 0);
    CResource::InvalidateAnimationSources(this, 3);
  }
}
