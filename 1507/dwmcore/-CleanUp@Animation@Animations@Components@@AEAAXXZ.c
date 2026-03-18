/*
 * XREFs of ?CleanUp@Animation@Animations@Components@@AEAAXXZ @ 0x180154A78
 * Callers:
 *     ?xwPreDelete@Animation@Animations@Components@@UEAAXXZ @ 0x180155810 (-xwPreDelete@Animation@Animations@Components@@UEAAXXZ.c)
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?RemoveAll@?$ArrayListS@PEAUDwm__IListener@Animations@Components@@@Animations@Components@@QEAAXXZ @ 0x180153BE8 (-RemoveAll@-$ArrayListS@PEAUDwm__IListener@Animations@Components@@@Animations@Components@@QEAAXX.c)
 *     ?ApiRemoveAllEvents@Animation@Animations@Components@@QEAAJXZ @ 0x180154018 (-ApiRemoveAllEvents@Animation@Animations@Components@@QEAAJXZ.c)
 *     ?ApiReset@Animation@Animations@Components@@QEAAJ_N@Z @ 0x1801540A4 (-ApiReset@Animation@Animations@Components@@QEAAJ_N@Z.c)
 */

void __fastcall Components::Animations::Animation::CleanUp(
        Components::Animations::Animation *this,
        __int64 a2,
        float a3)
{
  __int64 v4; // r14
  int v5; // r15d
  int i; // r12d
  int v7; // r14d
  int v8; // edi
  __int64 v9; // r15
  __int64 v10; // rsi

  Components::Animations::Animation::ApiRemoveAllEvents(this);
  if ( (*((_BYTE *)this + 252) & 4) != 0 )
    Components::Animations::Animation::ApiReset(this, 0LL, a3);
  v4 = *((_QWORD *)this + 14);
  if ( v4 )
    v5 = *(_DWORD *)(v4 - 8);
  else
    v5 = 0;
  for ( i = 0; i != v5; ++i )
    (*(void (__fastcall **)(_QWORD, char *))(**(_QWORD **)(v4 + 8LL * i) + 8LL))(
      *(_QWORD *)(v4 + 8LL * i),
      (char *)this + 8);
  Components::Animations::ArrayListS<Components::Animations::Dwm__IListener *>::RemoveAll((_QWORD *)this + 14);
  v7 = *((_DWORD *)this + 10);
  v8 = 0;
  v9 = *((_QWORD *)this + 4);
  while ( v8 != v7 )
  {
    v10 = *(_QWORD *)(v9 + 8LL * v8);
    if ( v10 )
      (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)v10 + 8LL))(*(_QWORD *)(v9 + 8LL * v8), 1LL);
    ++v8;
  }
  Components::Animations::ArrayListF<Components::Animations::AnimationEvent *>::RemoveAll((char *)this + 32);
}
