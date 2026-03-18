/*
 * XREFs of ?SetBlurRadius@CDropShadow@@AEAAXM@Z @ 0x18014FB68
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18003CEA0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 *     ?SetProperty@CDropShadow@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18014FD50 (-SetProperty@CDropShadow@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 * Callees:
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x18008DB00 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 *     ?InvalidateShadow@CDropShadow@@AEAAX_N@Z @ 0x18014FA54 (-InvalidateShadow@CDropShadow@@AEAAX_N@Z.c)
 */

void __fastcall CDropShadow::SetBlurRadius(CDropShadow *this, float a2)
{
  if ( *((float *)this + 38) != a2 )
  {
    *((float *)this + 38) = a2;
    CDropShadow::InvalidateShadow(this, 1);
    CResource::InvalidateAnimationSources(this, 0);
  }
}
