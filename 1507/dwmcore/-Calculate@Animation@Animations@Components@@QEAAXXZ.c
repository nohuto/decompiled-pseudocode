/*
 * XREFs of ?Calculate@Animation@Animations@Components@@QEAAXXZ @ 0x1801548BC
 * Callers:
 *     ?CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180110850 (-CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?ApiInstantAdvance@Animation@Animations@Components@@QEAAJM@Z @ 0x180153DF0 (-ApiInstantAdvance@Animation@Animations@Components@@QEAAJM@Z.c)
 * Callees:
 *     ?EvaluateEvents@Animation@Animations@Components@@AEAAXW4Dwm__AnimationEventTriggerType@23@PEAX@Z @ 0x180154D88 (-EvaluateEvents@Animation@Animations@Components@@AEAAXW4Dwm__AnimationEventTriggerType@23@PEAX@Z.c)
 *     ?OnAnimationComplete@Animation@Animations@Components@@AEAAXXZ @ 0x180155044 (-OnAnimationComplete@Animation@Animations@Components@@AEAAXXZ.c)
 *     ?OnAnimationLoopStart@Animation@Animations@Components@@AEAAXH@Z @ 0x18015509C (-OnAnimationLoopStart@Animation@Animations@Components@@AEAAXH@Z.c)
 *     ?OnAnimationProgress@Animation@Animations@Components@@AEAAXHMHPEAVValue@23@@Z @ 0x180155138 (-OnAnimationProgress@Animation@Animations@Components@@AEAAXHMHPEAVValue@23@@Z.c)
 *     ?Calculate@Sequence@Animations@Components@@QEAAXXZ @ 0x180156314 (-Calculate@Sequence@Animations@Components@@QEAAXXZ.c)
 *     ?Repeat@Sequence@Animations@Components@@QEAAJXZ @ 0x180156B44 (-Repeat@Sequence@Animations@Components@@QEAAJXZ.c)
 */

void __fastcall Components::Animations::Animation::Calculate(Components::Animations::Animation *this)
{
  char v1; // al
  int v3; // edx
  int v4; // edx
  __int64 v5; // rcx
  bool v6; // di
  int v7; // eax
  int v8; // [rsp+40h] [rbp+8h] BYREF

  v1 = *((_BYTE *)this + 252);
  if ( (v1 & 2) != 0 )
  {
    v3 = *((_DWORD *)this + 54);
    if ( v3 >= 0 )
      v3 -= *((_DWORD *)this + 55);
    if ( v1 < 0 )
    {
      Components::Animations::Animation::OnAnimationLoopStart(this, v3);
      *((_BYTE *)this + 252) &= ~0x80u;
    }
    Components::Animations::Sequence::Calculate(*((Components::Animations::Sequence **)this + 3));
    v5 = *((_QWORD *)this + 3);
    v6 = (*(_BYTE *)(v5 + 244) & 3) == 1 && *(_BYTE *)(*(_QWORD *)(v5 + 224) + 21LL);
    Components::Animations::Animation::OnAnimationProgress(
      this,
      v4,
      (float)*(int *)(*(_QWORD *)(v5 + 224) + 16LL) / (float)*(int *)(*(_QWORD *)(v5 + 224) + 12LL),
      *(_DWORD *)(*(_QWORD *)(v5 + 224) + 16LL),
      *(struct Components::Animations::Value **)(v5 + 232));
    if ( v6 )
    {
      v8 = 2;
      Components::Animations::Animation::EvaluateEvents(this, 0LL, &v8);
      *((_BYTE *)this + 252) |= 0x80u;
      v7 = *((_DWORD *)this + 55);
      if ( v7 >= 0 )
      {
        if ( v7 <= 0 )
        {
LABEL_16:
          if ( v6 )
          {
            *((_BYTE *)this + 252) &= ~2u;
            *((_BYTE *)this + 252) |= 0x10u;
            Components::Animations::Animation::OnAnimationComplete(this);
          }
          goto LABEL_18;
        }
        *((_DWORD *)this + 55) = v7 - 1;
      }
      if ( (*((_BYTE *)this + 253) & 1) == 0 )
      {
        Components::Animations::Sequence::Repeat(*((Components::Animations::Sequence **)this + 3));
        v6 = 0;
      }
      goto LABEL_16;
    }
  }
LABEL_18:
  if ( (*((_BYTE *)this + 252) & 0x18) == 0x18 )
    *((_BYTE *)this + 252) |= 0x40u;
}
