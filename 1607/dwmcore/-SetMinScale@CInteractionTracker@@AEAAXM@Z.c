/*
 * XREFs of ?SetMinScale@CInteractionTracker@@AEAAXM@Z @ 0x18014B7C8
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18003CEA0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 *     ?SetProperty@CInteractionTracker@@MEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18014B930 (-SetProperty@CInteractionTracker@@MEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 * Callees:
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x18008DB00 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 *     ?ResolveNewBoundary@CInteractionTracker@@AEAAXW4ScrollAxis@@@Z @ 0x18014B10C (-ResolveNewBoundary@CInteractionTracker@@AEAAXW4ScrollAxis@@@Z.c)
 *     ?SetScale@CInteractionTracker@@AEAAXM@Z @ 0x18014BC54 (-SetScale@CInteractionTracker@@AEAAXM@Z.c)
 */

void __fastcall CInteractionTracker::SetMinScale(CInteractionTracker *this, float a2)
{
  float v2; // xmm2_4
  float v4; // xmm0_4

  v2 = *((float *)this + 46);
  if ( a2 <= v2 )
  {
    if ( a2 < 0.001 )
      a2 = FLOAT_0_001;
  }
  else
  {
    a2 = *((float *)this + 46);
  }
  if ( *((float *)this + 45) != a2 )
  {
    v4 = *((float *)this + 44);
    *((float *)this + 45) = a2;
    if ( v4 <= v2 )
      v2 = fmaxf(v4, a2);
    CInteractionTracker::SetScale(this, v2);
    CInteractionTracker::ResolveNewBoundary(this, 2);
    CResource::InvalidateAnimationSources(this, 25);
  }
}
