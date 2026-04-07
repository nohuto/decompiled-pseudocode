/*
 * XREFs of ?SetGhost@CAnimationComponent@@QEAAXXZ @ 0x180099760
 * Callers:
 *     ?OnEndTransitionRequest@CSlideOutCharm@@UEAAJXZ @ 0x180003D00 (-OnEndTransitionRequest@CSlideOutCharm@@UEAAJXZ.c)
 *     ?SetupZOrder@CTransitionVisualController@@QEAAJXZ @ 0x18000908C (-SetupZOrder@CTransitionVisualController@@QEAAJXZ.c)
 *     ?Morph@CAnimationComponent@@QEAAXXZ @ 0x180099714 (-Morph@CAnimationComponent@@QEAAXXZ.c)
 * Callees:
 *     ?_LogEvent@CAnimationComponent@@IEAAXW4AnimationComponentEvent@1@@Z @ 0x18000BD50 (-_LogEvent@CAnimationComponent@@IEAAXW4AnimationComponentEvent@1@@Z.c)
 */

void __fastcall CAnimationComponent::SetGhost(CAnimationComponent *this)
{
  __int64 v2; // rax

  if ( !*((_BYTE *)this + 65) )
  {
    CAnimationComponent::_LogEvent((__int64)this, 3);
    v2 = *((_QWORD *)this + 5);
    *((_BYTE *)this + 65) = 1;
    *(_BYTE *)(v2 + 954) = 1;
  }
}
