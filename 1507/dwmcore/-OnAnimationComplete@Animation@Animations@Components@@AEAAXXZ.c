/*
 * XREFs of ?OnAnimationComplete@Animation@Animations@Components@@AEAAXXZ @ 0x180155044
 * Callers:
 *     ?Calculate@Animation@Animations@Components@@QEAAXXZ @ 0x1801548BC (-Calculate@Animation@Animations@Components@@QEAAXXZ.c)
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?EvaluateEvents@Animation@Animations@Components@@AEAAXW4Dwm__AnimationEventTriggerType@23@PEAX@Z @ 0x180154D88 (-EvaluateEvents@Animation@Animations@Components@@AEAAXW4Dwm__AnimationEventTriggerType@23@PEAX@Z.c)
 */

void __fastcall Components::Animations::Animation::OnAnimationComplete(Components::Animations::Animation *this)
{
  int v2; // [rsp+30h] [rbp+8h] BYREF

  v2 = 3;
  Components::Animations::Animation::EvaluateEvents((__int64)this, 0, (struct Components::Animations::Value *)&v2);
  (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 32) + 40LL))(*((_QWORD *)this + 32), 1LL);
}
