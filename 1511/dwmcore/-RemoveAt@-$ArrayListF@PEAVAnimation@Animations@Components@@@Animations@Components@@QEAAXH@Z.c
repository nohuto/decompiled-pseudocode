/*
 * XREFs of ?RemoveAt@?$ArrayListF@PEAVAnimation@Animations@Components@@@Animations@Components@@QEAAXH@Z @ 0x180163CC8
 * Callers:
 *     ?xwPreDelete@Animation@Animations@Components@@UEAAXXZ @ 0x1801634E0 (-xwPreDelete@Animation@Animations@Components@@UEAAXXZ.c)
 *     ?RegisterLive@AnimationManager@Animations@Components@@QEAAJPEAVAnimation@23@@Z @ 0x180163C74 (-RegisterLive@AnimationManager@Animations@Components@@QEAAJPEAVAnimation@23@@Z.c)
 *     ?xwPreDelete@AnimationManager@Animations@Components@@UEAAXXZ @ 0x180164020 (-xwPreDelete@AnimationManager@Animations@Components@@UEAAXXZ.c)
 * Callees:
 *     ?Resize@?$ArrayListF@PEAVAnimation@Animations@Components@@@Animations@Components@@IEAAJH@Z @ 0x180163D34 (-Resize@-$ArrayListF@PEAVAnimation@Animations@Components@@@Animations@Components@@IEAAJH@Z.c)
 */

void __fastcall Components::Animations::ArrayListF<Components::Animations::Animation *>::RemoveAt(__int64 a1, int a2)
{
  int v3; // ecx
  int v4; // edx

  v3 = *(_DWORD *)(a1 + 8);
  if ( a2 < v3 && a2 >= 0 )
  {
    if ( a2 != v3 - 1 )
      memmove((void *)(*(_QWORD *)a1 + 8LL * a2), (const void *)(*(_QWORD *)a1 + 8LL * (a2 + 1)), 8LL * (v3 - a2 - 1));
    v4 = *(_DWORD *)(a1 + 8);
    if ( v4 == 1 )
      Components::Animations::ArrayListF<Components::Animations::AnimationEvent *>::RemoveAll(a1);
    else
      Components::Animations::ArrayListF<Components::Animations::Animation *>::Resize(a1, (unsigned int)(v4 - 1));
  }
}
