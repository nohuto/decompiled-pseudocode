/*
 * XREFs of ?SetGhost@CAnimationComponent@@QEAAXXZ @ 0x1800097C8
 * Callers:
 *     ?MorphForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@@Z @ 0x18000C56C (-MorphForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@@Z.c)
 *     ?SetupZOrder@CTransitionVisualController@@QEAAJXZ @ 0x18000D208 (-SetupZOrder@CTransitionVisualController@@QEAAJXZ.c)
 *     ?OnEndTransitionRequest@CSlideOutCharm@@UEAAJXZ @ 0x18000F9F0 (-OnEndTransitionRequest@CSlideOutCharm@@UEAAJXZ.c)
 * Callees:
 *     ?_LogEvent@CAnimationComponent@@IEAAXW4AnimationComponentEvent@1@@Z @ 0x18000BA98 (-_LogEvent@CAnimationComponent@@IEAAXW4AnimationComponentEvent@1@@Z.c)
 */

void __fastcall CAnimationComponent::SetGhost(CAnimationComponent *this)
{
  __int64 v2; // rax

  if ( !*((_BYTE *)this + 65) )
  {
    CAnimationComponent::_LogEvent(this, 3LL);
    v2 = *((_QWORD *)this + 5);
    *((_BYTE *)this + 65) = 1;
    *(_BYTE *)(v2 + 954) = 1;
  }
}
