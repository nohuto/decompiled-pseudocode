/*
 * XREFs of ?SetMaxScale@CInteractionTracker@@AEAAXM@Z @ 0x18014B678
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18003CEA0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 *     ?SetProperty@CInteractionTracker@@MEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18014B930 (-SetProperty@CInteractionTracker@@MEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 * Callees:
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x18008DB00 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 *     ?ResolveNewBoundary@CInteractionTracker@@AEAAXW4ScrollAxis@@@Z @ 0x18014B10C (-ResolveNewBoundary@CInteractionTracker@@AEAAXW4ScrollAxis@@@Z.c)
 *     ?SetScale@CInteractionTracker@@AEAAXM@Z @ 0x18014BC54 (-SetScale@CInteractionTracker@@AEAAXM@Z.c)
 */

void __fastcall CInteractionTracker::SetMaxScale(CInteractionTracker *this, float a2)
{
  float v2; // xmm3_4
  float v4; // xmm2_4
  float v5; // xmm0_4

  v2 = *((float *)this + 45);
  v4 = fmaxf(v2, a2);
  if ( *((float *)this + 46) != v4 )
  {
    v5 = *((float *)this + 44);
    *((float *)this + 46) = v4;
    if ( v5 <= v4 )
      v4 = fmaxf(v5, v2);
    CInteractionTracker::SetScale(this, v4);
    CInteractionTracker::ResolveNewBoundary(this, 2);
    CResource::InvalidateAnimationSources(this, 26);
  }
}
