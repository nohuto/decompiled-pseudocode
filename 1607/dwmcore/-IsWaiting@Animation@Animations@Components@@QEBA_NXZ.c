/*
 * XREFs of ?IsWaiting@Animation@Animations@Components@@QEBA_NXZ @ 0x1800865B0
 * Callers:
 *     ?OnAnimationEvent@CKeyframeAnimation@@UEAAJW4AnimationEventType@@@Z @ 0x1800867B0 (-OnAnimationEvent@CKeyframeAnimation@@UEAAJW4AnimationEventType@@@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall Components::Animations::Animation::IsWaiting(Components::Animations::Animation *this)
{
  return (*((_BYTE *)this + 104) & 4) != 0 && *((_DWORD *)this + 9) < *((_DWORD *)this + 8);
}
