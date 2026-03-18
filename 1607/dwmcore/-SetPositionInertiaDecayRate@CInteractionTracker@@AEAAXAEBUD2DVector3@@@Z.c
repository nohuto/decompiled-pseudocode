/*
 * XREFs of ?SetPositionInertiaDecayRate@CInteractionTracker@@AEAAXAEBUD2DVector3@@@Z @ 0x18014B84C
 * Callers:
 *     ?ProcessSetInertiaDecayRates@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTIONTRACKER_SETINERTIADECAYRATES@@@Z @ 0x18010B92C (-ProcessSetInertiaDecayRates@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTIO.c)
 *     ?SetProperty@CInteractionTracker@@MEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18014B930 (-SetProperty@CInteractionTracker@@MEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 * Callees:
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x18008DB00 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 */

void __fastcall CInteractionTracker::SetPositionInertiaDecayRate(
        CInteractionTracker *this,
        const struct D2DVector3 *a2)
{
  float v3; // xmm0_4
  float v4; // xmm0_4
  float v5; // xmm0_4
  unsigned __int64 v6; // rcx
  __int64 v7; // [rsp+20h] [rbp-28h]
  float v8; // [rsp+28h] [rbp-20h]

  v3 = 1.0 - *(float *)a2;
  if ( v3 <= 1.0 )
    LODWORD(v7) = fmaxf(v3, 0.0);
  else
    LODWORD(v7) = 1065353216;
  v4 = 1.0 - *((float *)a2 + 1);
  if ( v4 <= 1.0 )
    HIDWORD(v7) = fmaxf(v4, 0.0);
  else
    HIDWORD(v7) = 1065353216;
  v5 = 1.0 - *((float *)a2 + 2);
  if ( v5 <= 1.0 )
    v8 = fmaxf(v5, 0.0);
  else
    v8 = 1.0;
  v6 = *(_QWORD *)((char *)this + 164) - v7;
  if ( !v6 )
    v6 = *((unsigned int *)this + 43) - (unsigned __int64)LODWORD(v8);
  if ( v6 )
  {
    *(_QWORD *)((char *)this + 164) = v7;
    *((float *)this + 43) = v8;
  }
  CResource::InvalidateAnimationSources(this, 54);
}
