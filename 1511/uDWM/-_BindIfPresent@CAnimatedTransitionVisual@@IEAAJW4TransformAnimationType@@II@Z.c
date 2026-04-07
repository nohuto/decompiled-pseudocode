/*
 * XREFs of ?_BindIfPresent@CAnimatedTransitionVisual@@IEAAJW4TransformAnimationType@@II@Z @ 0x18000C14C
 * Callers:
 *     ?EmitBindingCommands@CAnimatedTransitionVisual@@UEAAJXZ @ 0x18000C200 (-EmitBindingCommands@CAnimatedTransitionVisual@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddBinding@CAnimationResource@@QEAAJII@Z @ 0x180012124 (-AddBinding@CAnimationResource@@QEAAJII@Z.c)
 */

__int64 __fastcall CAnimatedTransitionVisual::_BindIfPresent(__int64 a1, int a2, unsigned int a3, unsigned int a4)
{
  unsigned int v4; // ebx
  CAnimationResource *v5; // rcx
  int v7; // eax

  v4 = 0;
  v5 = *(CAnimationResource **)(a1 + 8LL * a2 + 600);
  if ( v5 )
  {
    v7 = CAnimationResource::AddBinding(v5, a3, a4);
    v4 = v7;
    if ( v7 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x815u);
  }
  return v4;
}
