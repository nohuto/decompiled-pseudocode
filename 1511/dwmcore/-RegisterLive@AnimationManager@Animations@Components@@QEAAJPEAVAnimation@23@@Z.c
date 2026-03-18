/*
 * XREFs of ?RegisterLive@AnimationManager@Animations@Components@@QEAAJPEAVAnimation@23@@Z @ 0x180163C74
 * Callers:
 *     ?ApiPlay@Animation@Animations@Components@@QEAAJXZ @ 0x180161008 (-ApiPlay@Animation@Animations@Components@@QEAAJXZ.c)
 * Callees:
 *     ?Add@?$ArrayListF@PEAVAnimation@Animations@Components@@@Animations@Components@@QEAAJAEBQEAVAnimation@23@@Z @ 0x1801639E4 (-Add@-$ArrayListF@PEAVAnimation@Animations@Components@@@Animations@Components@@QEAAJAEBQEAVAnima.c)
 *     ?Find@?$ArrayListF@PEAVAnimation@Animations@Components@@@Animations@Components@@QEBAHAEBQEAVAnimation@23@@Z @ 0x180163A34 (-Find@-$ArrayListF@PEAVAnimation@Animations@Components@@@Animations@Components@@QEBAHAEBQEAVAnim.c)
 *     ?RemoveAt@?$ArrayListF@PEAVAnimation@Animations@Components@@@Animations@Components@@QEAAXH@Z @ 0x180163CC8 (-RemoveAt@-$ArrayListF@PEAVAnimation@Animations@Components@@@Animations@Components@@QEAAXH@Z.c)
 */

__int64 __fastcall Components::Animations::AnimationManager::RegisterLive(
        Components::Animations::AnimationManager *this,
        struct Components::Animations::Animation *a2)
{
  int v3; // eax
  __int64 result; // rax
  struct Components::Animations::Animation *v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = a2;
  v3 = Components::Animations::ArrayListF<Components::Animations::Animation *>::Find((__int64)this + 88, (__int64 *)&v5);
  if ( v3 < 0 )
  {
    result = Components::Animations::ArrayListF<Components::Animations::Animation *>::Add((__int64)this + 8, &v5);
    if ( (int)result < 0 )
      return result;
  }
  else
  {
    Components::Animations::ArrayListF<Components::Animations::Animation *>::RemoveAt(
      (char *)this + 88,
      (unsigned int)v3);
  }
  *((_BYTE *)this + 392) |= 4u;
  return 0LL;
}
