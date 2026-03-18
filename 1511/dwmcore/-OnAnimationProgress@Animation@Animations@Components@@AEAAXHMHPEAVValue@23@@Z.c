/*
 * XREFs of ?OnAnimationProgress@Animation@Animations@Components@@AEAAXHMHPEAVValue@23@@Z @ 0x180162DA0
 * Callers:
 *     ?Calculate@Animation@Animations@Components@@QEAAXXZ @ 0x180161C54 (-Calculate@Animation@Animations@Components@@QEAAXXZ.c)
 * Callees:
 *     ?EvaluateEvents@Animation@Animations@Components@@AEAAXW4Dwm__AnimationEventTriggerType@23@PEAX@Z @ 0x1801629CC (-EvaluateEvents@Animation@Animations@Components@@AEAAXW4Dwm__AnimationEventTriggerType@23@PEAX@Z.c)
 */

void __fastcall Components::Animations::Animation::OnAnimationProgress(
        Components::Animations::Animation *this,
        __int64 a2,
        float a3,
        int a4,
        struct Components::Animations::Value *a5)
{
  float v6; // [rsp+40h] [rbp+18h] BYREF
  int v7; // [rsp+48h] [rbp+20h] BYREF

  v7 = a4;
  v6 = a3;
  Components::Animations::Animation::EvaluateEvents((__int64)this, 1, (struct Components::Animations::Value *)&v7);
  Components::Animations::Animation::EvaluateEvents((__int64)this, 2, (struct Components::Animations::Value *)&v6);
  Components::Animations::Animation::EvaluateEvents((__int64)this, 3, a5);
}
