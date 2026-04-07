/*
 * XREFs of ?_BindIfPresent@CAnimatedTransitionVisual@@IEAAJW4TransformAnimationType@@II@Z @ 0x180037680
 * Callers:
 *     ?EmitBindingCommands@CAnimatedTransitionVisual@@UEAAJXZ @ 0x180037730 (-EmitBindingCommands@CAnimatedTransitionVisual@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddBinding@CAnimationResource@@QEAAJII@Z @ 0x18003BF34 (-AddBinding@CAnimationResource@@QEAAJII@Z.c)
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
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v7, 0x817u);
  }
  return v4;
}
