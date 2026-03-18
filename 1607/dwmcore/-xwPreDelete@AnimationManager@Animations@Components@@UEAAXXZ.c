/*
 * XREFs of ?xwPreDelete@AnimationManager@Animations@Components@@UEAAXXZ @ 0x1801947C0
 * Callers:
 *     <none>
 * Callees:
 *     ?RemoveAll@?$ArrayListF@PEAVAnimation@Animations@Components@@@Animations@Components@@QEAAXXZ @ 0x18001D854 (-RemoveAll@-$ArrayListF@PEAVAnimation@Animations@Components@@@Animations@Components@@QEAAXXZ.c)
 *     ?RemoveAt@?$ArrayListF@PEAVAnimation@Animations@Components@@@Animations@Components@@QEAAXH@Z @ 0x18001D898 (-RemoveAt@-$ArrayListF@PEAVAnimation@Animations@Components@@@Animations@Components@@QEAAXH@Z.c)
 *     ?ApiReset@Animation@Animations@Components@@QEAAJ_N@Z @ 0x180086378 (-ApiReset@Animation@Animations@Components@@QEAAJ_N@Z.c)
 *     ?Find@?$ArrayListF@PEAVAnimation@Animations@Components@@@Animations@Components@@QEBAHAEBQEAVAnimation@23@@Z @ 0x1800AD428 (-Find@-$ArrayListF@PEAVAnimation@Animations@Components@@@Animations@Components@@QEBAHAEBQEAVAnim.c)
 */

void __fastcall Components::Animations::AnimationManager::xwPreDelete(Components::Animations::AnimationManager *this)
{
  char *v1; // rdi
  int v2; // ebx
  int v3; // r14d
  int v4; // esi
  __int64 v5; // r15
  int v7; // eax
  __int64 *v8; // rsi
  int v9; // ebp
  __int64 v10; // r14
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF

  v1 = (char *)this + 88;
  v2 = 0;
  v3 = *((_DWORD *)this + 24);
  v4 = 0;
  v5 = *((_QWORD *)this + 11);
  while ( v4 != v3 )
  {
    v11 = *(_QWORD *)(v5 + 8LL * v4);
    v7 = Components::Animations::ArrayListF<Components::Animations::Animation *>::Find((__int64)this + 8, &v11);
    Components::Animations::ArrayListF<Components::Animations::Animation *>::RemoveAt((__int64)this + 8, v7);
    ++v4;
  }
  Components::Animations::ArrayListF<Components::Animations::Animation *>::RemoveAll((__int64)v1);
  v8 = (__int64 *)((char *)this + 8);
  v9 = *((_DWORD *)this + 4);
  v10 = *v8;
  while ( v2 != v9 )
    Components::Animations::Animation::ApiReset(*(Components::Animations::Animation **)(v10 + 8LL * v2++), 0);
  Components::Animations::ArrayListF<Components::Animations::Animation *>::RemoveAll((__int64)v8);
  Components::Animations::ArrayListF<Components::Animations::Animation *>::RemoveAll((__int64)v1);
}
