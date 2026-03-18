/*
 * XREFs of ?OnAnimationStart@Animation@Animations@Components@@AEAAXXZ @ 0x180162EB0
 * Callers:
 *     ?ApiPlay@Animation@Animations@Components@@QEAAJXZ @ 0x180161008 (-ApiPlay@Animation@Animations@Components@@QEAAJXZ.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?EvaluateEvents@Animation@Animations@Components@@AEAAXW4Dwm__AnimationEventTriggerType@23@PEAX@Z @ 0x1801629CC (-EvaluateEvents@Animation@Animations@Components@@AEAAXW4Dwm__AnimationEventTriggerType@23@PEAX@Z.c)
 */

void __fastcall Components::Animations::Animation::OnAnimationStart(Components::Animations::Animation *this)
{
  int v1; // r14d
  __int64 v3; // r15
  int i; // esi
  __int64 v5; // rdi
  int v6; // [rsp+40h] [rbp+8h] BYREF

  v1 = *((_DWORD *)this + 32);
  v3 = *((_QWORD *)this + 15);
  for ( i = 0; i != v1; ++i )
  {
    v5 = *(_QWORD *)(*(_QWORD *)(v3 + 8LL * i) + 40LL);
    if ( *(_DWORD *)v5 == 3 )
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v5 + 16) + 32LL))(*(_QWORD *)(v5 + 16));
  }
  v6 = 0;
  Components::Animations::Animation::EvaluateEvents((__int64)this, 0, (struct Components::Animations::Value *)&v6);
  (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 32) + 56LL))(*((_QWORD *)this + 32), 4LL);
}
