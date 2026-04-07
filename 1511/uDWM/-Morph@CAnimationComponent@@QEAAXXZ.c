/*
 * XREFs of ?Morph@CAnimationComponent@@QEAAXXZ @ 0x180099714
 * Callers:
 *     ?MorphForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@@Z @ 0x180008498 (-MorphForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@@Z.c)
 * Callees:
 *     ?_LogEvent@CAnimationComponent@@IEAAXW4AnimationComponentEvent@1@@Z @ 0x18000BD50 (-_LogEvent@CAnimationComponent@@IEAAXW4AnimationComponentEvent@1@@Z.c)
 *     Template_p @ 0x18007E3B8 (Template_p.c)
 *     ?SetGhost@CAnimationComponent@@QEAAXXZ @ 0x180099760 (-SetGhost@CAnimationComponent@@QEAAXXZ.c)
 */

void __fastcall CAnimationComponent::Morph(CAnimationComponent *this)
{
  __int64 v2; // rcx

  if ( !*((_BYTE *)this + 66) )
  {
    CAnimationComponent::SetGhost(this);
    CAnimationComponent::_LogEvent((__int64)this, 2);
    *((_BYTE *)this + 66) = 1;
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
      Template_p(v2, (__int64)&UdwmSystemAnimation_Morph, *((_QWORD *)this + 2));
  }
}
