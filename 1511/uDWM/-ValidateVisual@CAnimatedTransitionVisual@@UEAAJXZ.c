/*
 * XREFs of ?ValidateVisual@CAnimatedTransitionVisual@@UEAAJXZ @ 0x18000D5C0
 * Callers:
 *     <none>
 * Callees:
 *     ?_ValidateDCompVisual@CAnimatedTransitionVisual@@IEAAJXZ @ 0x18000C7B8 (-_ValidateDCompVisual@CAnimatedTransitionVisual@@IEAAJXZ.c)
 *     ?Validate2DVisual@CAnimatedTransitionVisual@@IEAAJXZ @ 0x18000D3AC (-Validate2DVisual@CAnimatedTransitionVisual@@IEAAJXZ.c)
 *     ?EnsureResources@CAnimatedTransitionVisual@@IEAAJXZ @ 0x18000D4CC (-EnsureResources@CAnimatedTransitionVisual@@IEAAJXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?ValidateVisual@CVisual@@UEAAJXZ @ 0x1800236A0 (-ValidateVisual@CVisual@@UEAAJXZ.c)
 *     ?Validate3DVisual@CAnimatedTransitionVisual@@IEAAJXZ @ 0x18008D5F4 (-Validate3DVisual@CAnimatedTransitionVisual@@IEAAJXZ.c)
 */

__int64 __fastcall CAnimatedTransitionVisual::ValidateVisual(CAnimatedTransitionVisual *this)
{
  CAnimatedTransitionVisual *v1; // rsi
  int v3; // eax
  unsigned int v4; // ebx
  int v5; // eax
  int v6; // eax
  int v8; // eax
  int v9; // eax

  v1 = (CAnimatedTransitionVisual *)((char *)this - 8);
  v3 = CAnimatedTransitionVisual::EnsureResources((CAnimatedTransitionVisual *)((char *)this - 8));
  v4 = v3;
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0x3B6u);
    return v4;
  }
  if ( *((_BYTE *)this + 960) )
  {
    v9 = CAnimatedTransitionVisual::Validate3DVisual(v1);
    v4 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x3BAu);
      return v4;
    }
  }
  else if ( *((_BYTE *)this + 952) )
  {
    v8 = CAnimatedTransitionVisual::_ValidateDCompVisual(v1);
    v4 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x3BEu);
      return v4;
    }
  }
  else
  {
    v5 = CAnimatedTransitionVisual::Validate2DVisual((CVisual ***)v1);
    v4 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x3C2u);
      return v4;
    }
  }
  v6 = CVisual::ValidateVisual(this);
  v4 = v6;
  if ( v6 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x3C5u);
  return v4;
}
