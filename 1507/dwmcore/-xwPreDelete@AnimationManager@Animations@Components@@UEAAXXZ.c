/*
 * XREFs of ?xwPreDelete@AnimationManager@Animations@Components@@UEAAXXZ @ 0x1801561F0
 * Callers:
 *     <none>
 * Callees:
 *     ?ApiReset@Animation@Animations@Components@@QEAAJ_N@Z @ 0x1801540A4 (-ApiReset@Animation@Animations@Components@@QEAAJ_N@Z.c)
 *     ?Find@?$ArrayListF@PEAVAnimation@Animations@Components@@@Animations@Components@@QEBAHAEBQEAVAnimation@23@@Z @ 0x180155D64 (-Find@-$ArrayListF@PEAVAnimation@Animations@Components@@@Animations@Components@@QEBAHAEBQEAVAnim.c)
 *     ?RemoveAll@?$ArrayListF@PEAVAnimationEvent@Animations@Components@@@Animations@Components@@QEAAXXZ @ 0x180155FF8 (-RemoveAll@-$ArrayListF@PEAVAnimationEvent@Animations@Components@@@Animations@Components@@QEAAXX.c)
 *     ?RemoveAt@?$ArrayListF@PEAVAnimation@Animations@Components@@@Animations@Components@@QEAAXH@Z @ 0x18015603C (-RemoveAt@-$ArrayListF@PEAVAnimation@Animations@Components@@@Animations@Components@@QEAAXH@Z.c)
 */

void __fastcall Components::Animations::AnimationManager::xwPreDelete(
        Components::Animations::AnimationManager *this,
        __int64 a2,
        float a3)
{
  char *v3; // rdi
  int v4; // ebx
  int v5; // r14d
  int v6; // esi
  __int64 v7; // r15
  int v9; // eax
  __int64 *v10; // rsi
  int v11; // ebp
  __int64 v12; // r14
  __int64 v13; // [rsp+40h] [rbp+8h] BYREF

  v3 = (char *)this + 88;
  v4 = 0;
  v5 = *((_DWORD *)this + 24);
  v6 = 0;
  v7 = *((_QWORD *)this + 11);
  while ( v6 != v5 )
  {
    v13 = *(_QWORD *)(v7 + 8LL * v6);
    v9 = Components::Animations::ArrayListF<Components::Animations::Animation *>::Find((__int64)this + 8, &v13);
    Components::Animations::ArrayListF<Components::Animations::Animation *>::RemoveAt((__int64)this + 8, v9);
    ++v6;
  }
  Components::Animations::ArrayListF<Components::Animations::AnimationEvent *>::RemoveAll((__int64)v3);
  v10 = (__int64 *)((char *)this + 8);
  v11 = *((_DWORD *)this + 4);
  v12 = *v10;
  while ( v4 != v11 )
    Components::Animations::Animation::ApiReset(*(Components::Animations::Animation **)(v12 + 8LL * v4++), 0LL, a3);
  Components::Animations::ArrayListF<Components::Animations::AnimationEvent *>::RemoveAll((__int64)v10);
  Components::Animations::ArrayListF<Components::Animations::AnimationEvent *>::RemoveAll((__int64)v3);
}
