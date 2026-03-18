/*
 * XREFs of ?OnAnimationReset@Animation@Animations@Components@@AEAAXHM@Z @ 0x18015518C
 * Callers:
 *     ?ApiReset@Animation@Animations@Components@@QEAAJ_N@Z @ 0x1801540A4 (-ApiReset@Animation@Animations@Components@@QEAAJ_N@Z.c)
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?EvaluateEvents@Animation@Animations@Components@@AEAAXW4Dwm__AnimationEventTriggerType@23@PEAX@Z @ 0x180154D88 (-EvaluateEvents@Animation@Animations@Components@@AEAAXW4Dwm__AnimationEventTriggerType@23@PEAX@Z.c)
 */

void __fastcall Components::Animations::Animation::OnAnimationReset(
        Components::Animations::Animation *this,
        __int64 a2,
        float a3)
{
  int v3; // r14d
  __int64 v5; // r15
  int i; // esi
  __int64 v7; // rdi
  int v8; // [rsp+50h] [rbp+18h] BYREF

  v8 = LODWORD(a3);
  v3 = *((_DWORD *)this + 32);
  v5 = *((_QWORD *)this + 15);
  for ( i = 0; i != v3; ++i )
  {
    v7 = *(_QWORD *)(*(_QWORD *)(v5 + 8LL * i) + 40LL);
    if ( *(_DWORD *)v7 == 3 )
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v7 + 16) + 48LL))(*(_QWORD *)(v7 + 16));
  }
  v8 = 4;
  Components::Animations::Animation::EvaluateEvents((__int64)this, 0, (struct Components::Animations::Value *)&v8);
  (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 32) + 40LL))(*((_QWORD *)this + 32), 2LL);
}
