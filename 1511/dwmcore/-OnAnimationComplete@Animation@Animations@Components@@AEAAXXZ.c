/*
 * XREFs of ?OnAnimationComplete@Animation@Animations@Components@@AEAAXXZ @ 0x180162CAC
 * Callers:
 *     ?Calculate@Animation@Animations@Components@@QEAAXXZ @ 0x180161C54 (-Calculate@Animation@Animations@Components@@QEAAXXZ.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?EvaluateEvents@Animation@Animations@Components@@AEAAXW4Dwm__AnimationEventTriggerType@23@PEAX@Z @ 0x1801629CC (-EvaluateEvents@Animation@Animations@Components@@AEAAXW4Dwm__AnimationEventTriggerType@23@PEAX@Z.c)
 */

void __fastcall Components::Animations::Animation::OnAnimationComplete(Components::Animations::Animation *this)
{
  int v2; // [rsp+30h] [rbp+8h] BYREF

  v2 = 3;
  Components::Animations::Animation::EvaluateEvents((__int64)this, 0, (struct Components::Animations::Value *)&v2);
  (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 32) + 56LL))(*((_QWORD *)this + 32), 1LL);
}
