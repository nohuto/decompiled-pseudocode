/*
 * XREFs of ?Validate3DVisual@CAnimatedTransitionVisual@@IEAAJXZ @ 0x18008D5F4
 * Callers:
 *     ?ValidateVisual@CAnimatedTransitionVisual@@UEAAJXZ @ 0x18000D5C0 (-ValidateVisual@CAnimatedTransitionVisual@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?_Ensure3DRenderData@CAnimatedTransitionVisual@@IEAAJXZ @ 0x18008D688 (-_Ensure3DRenderData@CAnimatedTransitionVisual@@IEAAJXZ.c)
 *     ?_Update3DResources@CAnimatedTransitionVisual@@IEAAJXZ @ 0x18008D930 (-_Update3DResources@CAnimatedTransitionVisual@@IEAAJXZ.c)
 *     ?_UpdateAnimated3DResources@CAnimatedTransitionVisual@@IEAAJXZ @ 0x18008DD6C (-_UpdateAnimated3DResources@CAnimatedTransitionVisual@@IEAAJXZ.c)
 */

__int64 __fastcall CAnimatedTransitionVisual::Validate3DVisual(CAnimatedTransitionVisual *this)
{
  unsigned int v1; // ebx
  int updated; // eax
  int v4; // eax
  int v5; // eax

  v1 = 0;
  if ( (*((_DWORD *)this + 22) & 0x1000) != 0 )
  {
    updated = CAnimatedTransitionVisual::_UpdateAnimated3DResources(this);
    v1 = updated;
    if ( updated < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, updated, 0x619u);
      return v1;
    }
    *((_DWORD *)this + 22) &= ~0x1000u;
  }
  if ( (*((_DWORD *)this + 22) & 0x2000) != 0 )
  {
    v4 = CAnimatedTransitionVisual::_Ensure3DRenderData(this);
    v1 = v4;
    if ( v4 >= 0 )
    {
      v5 = CAnimatedTransitionVisual::_Update3DResources(this);
      v1 = v5;
      if ( v5 >= 0 )
        *((_DWORD *)this + 22) &= ~0x2000u;
      else
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v5, 0x622u);
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v4, 0x621u);
    }
  }
  return v1;
}
