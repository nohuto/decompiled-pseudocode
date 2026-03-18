/*
 * XREFs of ?OnAddBinding@CScalar@@MEAAJPEAUAnimationBinding@CBaseAnimation@@@Z @ 0x180107B70
 * Callers:
 *     <none>
 * Callees:
 *     ?RegisterAnimateResource@CBaseAnimation@@QEAAJXZ @ 0x18005CD14 (-RegisterAnimateResource@CBaseAnimation@@QEAAJXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CScalar::OnAddBinding(CComposition **this, struct CBaseAnimation::AnimationBinding *a2)
{
  int v2; // eax
  unsigned int v3; // ebx

  v2 = CBaseAnimation::RegisterAnimateResource(this);
  v3 = v2;
  if ( v2 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v2, 0x41u);
  return v3;
}
