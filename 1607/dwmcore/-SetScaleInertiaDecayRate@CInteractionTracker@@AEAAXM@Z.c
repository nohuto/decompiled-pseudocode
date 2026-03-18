/*
 * XREFs of ?SetScaleInertiaDecayRate@CInteractionTracker@@AEAAXM@Z @ 0x18014BD38
 * Callers:
 *     ?ProcessSetInertiaDecayRates@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTIONTRACKER_SETINERTIADECAYRATES@@@Z @ 0x18010B92C (-ProcessSetInertiaDecayRates@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTIO.c)
 *     ?SetProperty@CInteractionTracker@@MEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18014B930 (-SetProperty@CInteractionTracker@@MEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CInteractionTracker::SetScaleInertiaDecayRate(CInteractionTracker *this, float a2)
{
  float v2; // xmm2_4

  v2 = FLOAT_1_0;
  if ( (float)(1.0 - a2) <= 1.0 )
    v2 = fmaxf(1.0 - a2, 0.0);
  if ( *((float *)this + 50) != v2 )
    *((float *)this + 50) = v2;
  CResource::InvalidateAnimationSources(this, 57);
}
