/*
 * XREFs of ?OnAnimationLoopStart@Animation@Animations@Components@@AEAAXH@Z @ 0x180162D04
 * Callers:
 *     ?Calculate@Animation@Animations@Components@@QEAAXXZ @ 0x180161C54 (-Calculate@Animation@Animations@Components@@QEAAXXZ.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?EvaluateEvents@Animation@Animations@Components@@AEAAXW4Dwm__AnimationEventTriggerType@23@PEAX@Z @ 0x1801629CC (-EvaluateEvents@Animation@Animations@Components@@AEAAXW4Dwm__AnimationEventTriggerType@23@PEAX@Z.c)
 */

void __fastcall Components::Animations::Animation::OnAnimationLoopStart(
        Components::Animations::Animation *this,
        int a2)
{
  int v3; // r14d
  int v4; // esi
  __int64 v5; // r15
  __int64 v6; // rdi
  int v7; // [rsp+48h] [rbp+10h] BYREF

  if ( a2 )
  {
    v3 = *((_DWORD *)this + 32);
    v4 = 0;
    v5 = *((_QWORD *)this + 15);
    while ( v4 != v3 )
    {
      v6 = *(_QWORD *)(*(_QWORD *)(v5 + 8LL * v4) + 40LL);
      if ( *(_DWORD *)v6 == 3 )
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v6 + 16) + 40LL))(*(_QWORD *)(v6 + 16));
      ++v4;
    }
  }
  v7 = 1;
  Components::Animations::Animation::EvaluateEvents((__int64)this, 0, (struct Components::Animations::Value *)&v7);
  *((_DWORD *)this + 62) = 0;
}
